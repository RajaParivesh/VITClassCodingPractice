import java.awt.*;
import java.awt.event.*;
public class CheckboxGroupExample2
{
	CheckboxGroupExample2(){
		
		Frame f= new Frame("CheckboxGroup Example");
		Label l1 = new Label();
		
		l1.setSize(400,100);
		
		CheckboxGroup cbg = new CheckboxGroup();
		Checkbox checkBox1 = new Checkbox("C++", cbg, false);
		checkBox1.setBounds(100,100, 50,50);
		Checkbox checkBox2 = new Checkbox("Java", cbg, false);
		checkBox2.setBounds(100,150, 50,50);
		
		f.add(checkBox1);
		f.add(checkBox2);
		f.add(l1);
		f.setSize(400,400);
		f.setLayout(null);
		f.setVisible(true); 
		
		checkBox1.addItemListener(new ItemListener() {
			public void itemStateChanged(ItemEvent e) {
				l1.setText("C++ checkbox: Checked");
			}
		});
		
		checkBox2.addItemListener(new ItemListener() {
			public void itemStateChanged(ItemEvent e) {
				l1.setText("Java checkbox: Checked");
			}
		});
	}
	public static void main(String args[])
	{
		new CheckboxGroupExample2();
	}
} 