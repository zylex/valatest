/* valatest.vapi generated by valac 0.20.1, do not modify. */

namespace ValaTest {
	[CCode (cheader_filename = "valatest.h")]
	public abstract class TestCase : GLib.Object {
		public delegate void TestMethod ();
		public TestCase (string name);
		public void add_test (string name, owned ValaTest.TestCase.TestMethod test);
		public GLib.TestSuite get_suite ();
		public virtual void set_up ();
		public virtual void tear_down ();
	}
	[CCode (cheader_filename = "valatest.h")]
	public errordomain AssertionError {
		ASSERTION_FAILED
	}
	[CCode (cheader_filename = "valatest.h")]
	public static void assert_false (bool condition, string message = "") throws ValaTest.AssertionError;
	[CCode (cheader_filename = "valatest.h")]
	public static void assert_not_null (GLib.Object? obj, string message = "") throws ValaTest.AssertionError;
	[CCode (cheader_filename = "valatest.h")]
	public static void assert_null (GLib.Object? obj, string message = "") throws ValaTest.AssertionError;
	[CCode (cheader_filename = "valatest.h")]
	public static void assert_true (bool condition, string message = "") throws ValaTest.AssertionError;
	[CCode (cheader_filename = "valatest.h")]
	public static void fail (string message = "") throws ValaTest.AssertionError;
}