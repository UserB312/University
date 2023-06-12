package vista;

import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.Dimension;
import java.awt.Frame;
import java.awt.GridLayout;
import java.text.DateFormat;
import java.text.NumberFormat;
import java.text.SimpleDateFormat;
import java.time.Instant;
import java.time.LocalDate;
import java.util.Date;
import javax.swing.JDialog;
import javax.swing.*;
import javax.swing.JTable;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.TableModel;

public class JDRegistro extends JDialog {

    private JLabel lbPlaca, lbPrecioKm, lbKmRenta, lbKmDev, lbTipoVehiculo, lbHorasRentadas;
    private JLabel lbPrecioDia, lbFechaRenta, lbFechaDev, lbValorHora;

    private JTextField txtPlaca, txtPrecioKm, txtKmRenta, txtKmDevolucion, txtHorasRentadas;
    private JFormattedTextField txtPrecioDia, txtFechaRenta, txtFechaDevolucion, txtValorHora;

    private JComboBox cmbTipoVehiculo;

    private JButton btnGuardar, btnCancelar;

    private JPanel panelDatos, panelBotones, showdatos;

    private JTable tabla;

    private Container contenedor;

    public JDRegistro(Frame owner, String title, boolean modal) {
        super(owner, title, modal);
        this.initComponentes();
    }

    private void initComponentes() {
        this.contenedor = this.getContentPane();
        this.contenedor.setLayout(new BorderLayout());
        this.panelDatos();
        this.panelBotones();
        this.table();
//        this.crearTable();
        //this.setSize(400, 200);
        this.pack();
        this.setDefaultCloseOperation(JDialog.DISPOSE_ON_CLOSE);
        this.setLocationRelativeTo(null);
        this.setVisible(true);

    }

    private void panelBotones() {

        this.btnGuardar = new JButton("REGISTRAR");
        this.btnCancelar = new JButton("CANCELAR");

        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(1, 2, 5, 5));
        panel.add(this.btnGuardar);
        panel.add(this.btnCancelar);

        JPanel panelAux = new JPanel();
        panelAux.add(panel);

        panelAux.setBorder(BorderFactory.createEmptyBorder(5, 10, 10, 10));

        this.contenedor.add(panelAux, BorderLayout.SOUTH);

    }

    private void panelDatos() {

        this.lbPlaca = new JLabel("PLACA: ");
        this.lbTipoVehiculo = new JLabel("TIPO VEHICULO: ");
        this.lbHorasRentadas = new JLabel("HORAS RENTADAS: ");
        this.lbValorHora = new JLabel("VALOR x HORA: ");
        this.lbPrecioKm = new JLabel("PRECIO x KM: ");
        this.lbKmRenta = new JLabel("KM DE RENTA ");
        this.lbKmDev = new JLabel("KM DE DEVOLUCION: ");
        this.lbPrecioDia = new JLabel("PRECIO x DIA: ");
        this.lbFechaRenta = new JLabel("FECHA DE RENTA: ");
        this.lbFechaDev = new JLabel("FECHA DE DEVOLUCION: ");

        this.txtPlaca = new JTextField();
        this.txtHorasRentadas = new JTextField();
        this.txtPrecioKm = new JTextField();
        this.txtKmRenta = new JTextField();
        this.txtKmDevolucion = new JTextField();

        NumberFormat currencyFormat = NumberFormat.getCurrencyInstance();
        this.txtValorHora = new JFormattedTextField(currencyFormat);
        this.txtValorHora.setValue(0);
        this.txtPrecioDia = new JFormattedTextField(currencyFormat);
        this.txtPrecioDia.setValue(0);
        this.txtFechaRenta = new JFormattedTextField();
        this.txtFechaRenta.setValue(new Date());
        this.txtFechaDevolucion = new JFormattedTextField();
        this.txtFechaDevolucion.setValue(new Date());

        this.cmbTipoVehiculo = new JComboBox();
        this.cmbTipoVehiculo.addItem("AUTOMOVIL");
        this.cmbTipoVehiculo.addItem("TRACTOR");
        this.cmbTipoVehiculo.addItem("BUS");

        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(10, 2, 5, 5));
        panel.add(this.lbPlaca);
        panel.add(this.txtPlaca);

        panel.add(this.lbTipoVehiculo);
        panel.add(this.cmbTipoVehiculo);

        panel.add(this.lbHorasRentadas);
        panel.add(this.txtHorasRentadas);

        panel.add(this.lbValorHora);
        panel.add(this.txtValorHora);

        panel.add(this.lbPrecioKm);
        panel.add(this.txtPrecioKm);

        panel.add(this.lbKmRenta);
        panel.add(this.txtKmRenta);

        panel.add(this.lbKmDev);
        panel.add(this.txtKmDevolucion);

        panel.add(this.lbPrecioDia);
        panel.add(this.txtPrecioDia);

        panel.add(this.lbFechaRenta);
        panel.add(this.txtFechaRenta);

        panel.add(this.lbFechaDev);
        panel.add(this.txtFechaDevolucion);

        panel.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));

        this.contenedor.add(panel, BorderLayout.CENTER);

    }

    private void table() {

        String[][] datos = {
            {"H57-10F", "AUTOMOVIL", "02/05/2003", "02/05/2004"},
            {"A17-22E", "AUTOBUS", "17/10/2004", "17/10/2005"},
            {"K39-11G", "AUTOMOVIL", "22/11/2004", "22/11/2005"},
        };
        String[] titulos = {"PLACA", "TIPO VEHICULO", "FECHA RENTA", "FECHA DEVOLUCION"};

        //Es una interfaz en Java que define el modelo de datos para una tabla en un componente JTable. Proporciona métodos para acceder y             manipular los datos que se muestran en la tabla.
        TableModel modeloTabla = new DefaultTableModel(datos, titulos);

        // CREAMOS Y ASIGNAMOS EL MODELOTABLA
        tabla = new JTable(modeloTabla);

        // ESTABLECEMOS UN TAMAÑO INICIAL PREFERIDO A NUESTRA TABLA
        tabla.setPreferredScrollableViewportSize(new Dimension(500, 200));

        // CREAMOS EL SCROLL JScrollPane y establecemos tabla como vista
        JScrollPane scrollPane = new JScrollPane(tabla);
        scrollPane.setViewportView(tabla);
        //tabla.setPreferredSize(new Dimension(350, datos.length * 16));
        // AGREGAMOS JScrollPane AL CONTENEDOR EN LA REGION SUR
        contenedor.add(scrollPane, BorderLayout.EAST);

    }
}
