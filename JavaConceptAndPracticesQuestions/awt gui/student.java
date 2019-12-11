import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class student extends Frame implements ActionListener
{
    String msg;
    Button b1=new Button("save");
    Button b2=new Button("Display");
    Button b3=new Button("Text Count");

    Label l11=new Label("Student details",Label.CENTER);
    Label l1=new Label("Name:");
    Label l2=new Label("age:");
    Label l3=new Label("Sex(M/F):");
    Label l4=new Label("Address:");
    Label l5=new Label("Course:");
    Label l6=new Label("Semester:");
    Label l7=new Label("l7");
    Label l8=new Label("Word Count");
    Label l9=new Label("Letter Count");

    TextField t1=new TextField();
    
    Choice c1=new Choice();

    CheckboxGroup cbg=new CheckboxGroup();
    Checkbox ck1=new Checkbox("Male",false,cbg);
    Checkbox ck2=new Checkbox("Female",false,cbg);
    
    TextArea t2=new TextArea("",180,90);
    
    Choice course=new Choice();
    Choice sem=new Choice();
    Choice age=new Choice();
    
    public student()
    {
        addWindowListener(new myWindowAdapter());    //important
        
        setBackground(Color.cyan);
        setForeground(Color.black);
        setLayout(null);
        add(l11);
        add(l1);
        add(l2);
        add(l3);
        add(l4);
        add(l5);
        add(l6);
        add(l7);
        add(l8);
        add(l9);
        add(t1);
        add(t2);
        add(ck1);
        add(ck2);
        add(course);
        add(sem);
        add(age);
        add(b1);
        add(b2);
        add(b3);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);


        course.add("BSc c.s");
        course.add("BSc maths");
        course.add("BSc physics");
        course.add("BA English");
        course.add("BCOM");

        sem.add("1");
        sem.add("2");
        sem.add("3");
        sem.add("4");
        sem.add("5");
        sem.add("6");

        age.add("17");
        age.add("18");
        age.add("19");
        age.add("20");
        age.add("21");

        l1.setBounds(25,65,90,20);
        l2.setBounds(25,90,90,20);
        l3.setBounds(25,120,90,20);
        l4.setBounds(25,185,90,20);
        l5.setBounds(25,260,90,20);
        l6.setBounds(25,290,90,20);
        l7.setBounds(25,260,90,20);
        l11.setBounds(10,40,280,20);
        t1.setBounds(120,65,170,20);
        t2.setBounds(120,185,170,60);
        l8.setBounds(300,185,150,30);
        l9.setBounds(300,250,150,30);


        ck1.setBounds(120,120,50,20);
        ck2.setBounds(170,120,60,20);
        course.setBounds(120,260,100,20);
        sem.setBounds(120,290,50,20);
        age.setBounds(120,90,50,20);
        b1.setBounds(120,400,50,30);
        b2.setBounds(170,400,50,30);
        b3.setBounds(250,400,100,30);

        setSize(500,500);
        setTitle("Student Registration");
        setVisible(true);
        setLayout(null);


        ck1.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent e) {
                l11.setText("Male checkbox: Checked");
            }
        });
        ck2.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent e) {
                l11.setText("Female checkbox: Checked");
            }
        });
    }
    
    public void actionPerformed(ActionEvent e)
    {
        if(e.getActionCommand().equals("save"))
        {
            msg="Student details saved!";
            setForeground(Color.red);
            l7.setText(msg);
        }

        if(e.getSource()==b2)
        {   
            System.out.println("Name: "+t1.getText());
            System.out.println("Age: "+ age.getItem(age.getSelectedIndex()));             // takecare: get data from choice
            System.out.println("Semester: "+ sem.getItem(sem.getSelectedIndex()));        // takecare: get data from choice
            System.out.println("Address: "+ t2.getText());                                           // get data from textArea                
        }


        // if(e.getActionCommand().equals("Text Count")){  // both line works
        if(e.getSource()==b3){
            int n = t2.getText().length();
            String s = "Letter Count: "+n; 
            l9.setText(s);

            String str = t2.getText();
            String[] arrOfStr = str.split(" "); 
            String s2="";
            for (String a : arrOfStr){ 
                s2 = "Word Count: "+ arrOfStr.length; 
            }
            l8.setText(s2);
        }

    }


    public static void main(String g[])
    {
        student s=new student();  
    }
}

class myWindowAdapter extends WindowAdapter
{
    public void windowClosing(WindowEvent we)
    {
        System.exit(0);
    }
}