import java.awt.*;
import java.awt.event.*;
public class PasswordDemo extends Frame {
	
	public PasswordDemo() {
		TextField password = new TextField(10);
		password.setEchoChar('*');
		add(password);
	}

	public static void main(String[] argv) {
		PasswordDemo f = new PasswordDemo();
		f.pack();
		f.setVisible(true);

		f.addWindowListener(new WindowAdapter() {
			public void windowClosing(WindowEvent e) {
				System.exit(0);
			}
		});

	}
}