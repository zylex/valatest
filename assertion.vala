/**
 * taken from https://code.launchpad.net/~jprieur/people-core/vunit
 * bzr branch lp:~jprieur/people-core/vunit
 */

using GLib;

namespace vunit.Assertion {

	public errordomain AssertionError {
		ASSERTION_FAILED
	}

    /**
     * Asserts that the given condition is true.
     * @param condition the condition to test
     * @param message an optional failure message
     */
    public static void assert_true(bool condition, string message=null) throws AssertionError {
        if (!condition) {
            fail(message);
        }
    }

    /**
     * Asserts that the given condition is false.
     * @param condition the condition to test
     * @param message an optional failure message
     */
    public static void assert_false(bool condition, string message=null) throws AssertionError {
        if (condition) {
            fail(message);
        }
    }

    /**
     * Asserts that an object is null.
     * @param message an optional failure message
     */
    public static void assert_null(Object obj, string message=null) throws AssertionError {
        assert_true(obj == null, message);
    }

    /**
     * Asserts that an object is not null.
     * @param message an optional failure message
     */
    public static void assert_not_null(Object obj, string message=null) throws AssertionError  {
        assert_true(obj != null, message);
    }

    /**
     * Fails a test.
     * @param message an optional failure message
     */
    public static void fail(string message=null) throws AssertionError {
        throw new AssertionError.ASSERTION_FAILED(message);
    }
}
