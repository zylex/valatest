/* assertion.c generated by valac 0.20.1, the Vala compiler
 * generated from assertion.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


typedef enum  {
	VUNIT_ASSERTION_ASSERTION_ERROR_ASSERTION_FAILED
} vunitAssertionAssertionError;
#define VUNIT_ASSERTION_ASSERTION_ERROR vunit_assertion_assertion_error_quark ()


GQuark vunit_assertion_assertion_error_quark (void);
void vunit_assertion_assert_true (gboolean condition, const gchar* message, GError** error);
void vunit_assertion_fail (const gchar* message, GError** error);
void vunit_assertion_assert_false (gboolean condition, const gchar* message, GError** error);
void vunit_assertion_assert_null (GObject* obj, const gchar* message, GError** error);
void vunit_assertion_assert_not_null (GObject* obj, const gchar* message, GError** error);


GQuark vunit_assertion_assertion_error_quark (void) {
	return g_quark_from_static_string ("vunit_assertion_assertion_error-quark");
}


/**
     * Asserts that the given condition is true.
     * @param condition the condition to test
     * @param message an optional failure message
     */
void vunit_assertion_assert_true (gboolean condition, const gchar* message, GError** error) {
	gboolean _tmp0_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = condition;
	if (!_tmp0_) {
		const gchar* _tmp1_;
		_tmp1_ = message;
		vunit_assertion_fail (_tmp1_, &_inner_error_);
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == VUNIT_ASSERTION_ASSERTION_ERROR) {
				g_propagate_error (error, _inner_error_);
				return;
			} else {
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
		}
	}
}


/**
     * Asserts that the given condition is false.
     * @param condition the condition to test
     * @param message an optional failure message
     */
void vunit_assertion_assert_false (gboolean condition, const gchar* message, GError** error) {
	gboolean _tmp0_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = condition;
	if (_tmp0_) {
		const gchar* _tmp1_;
		_tmp1_ = message;
		vunit_assertion_fail (_tmp1_, &_inner_error_);
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == VUNIT_ASSERTION_ASSERTION_ERROR) {
				g_propagate_error (error, _inner_error_);
				return;
			} else {
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
		}
	}
}


/**
     * Asserts that an object is null.
     * @param message an optional failure message
     */
void vunit_assertion_assert_null (GObject* obj, const gchar* message, GError** error) {
	GObject* _tmp0_;
	const gchar* _tmp1_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (obj != NULL);
	g_return_if_fail (message != NULL);
	_tmp0_ = obj;
	_tmp1_ = message;
	vunit_assertion_assert_true (_tmp0_ == NULL, _tmp1_, &_inner_error_);
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == VUNIT_ASSERTION_ASSERTION_ERROR) {
			g_propagate_error (error, _inner_error_);
			return;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
}


/**
     * Asserts that an object is not null.
     * @param message an optional failure message
     */
void vunit_assertion_assert_not_null (GObject* obj, const gchar* message, GError** error) {
	GObject* _tmp0_;
	const gchar* _tmp1_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (obj != NULL);
	g_return_if_fail (message != NULL);
	_tmp0_ = obj;
	_tmp1_ = message;
	vunit_assertion_assert_true (_tmp0_ != NULL, _tmp1_, &_inner_error_);
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == VUNIT_ASSERTION_ASSERTION_ERROR) {
			g_propagate_error (error, _inner_error_);
			return;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
}


/**
     * Fails a test.
     * @param message an optional failure message
     */
void vunit_assertion_fail (const gchar* message, GError** error) {
	const gchar* _tmp0_;
	GError* _tmp1_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = message;
	_tmp1_ = g_error_new_literal (VUNIT_ASSERTION_ASSERTION_ERROR, VUNIT_ASSERTION_ASSERTION_ERROR_ASSERTION_FAILED, _tmp0_);
	_inner_error_ = _tmp1_;
	if (_inner_error_->domain == VUNIT_ASSERTION_ASSERTION_ERROR) {
		g_propagate_error (error, _inner_error_);
		return;
	} else {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}



