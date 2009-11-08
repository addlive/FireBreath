/**********************************************************\ 
Original Author: Richard Bateman (taxilian)

Created:    Nov 7, 2009
License:    Eclipse Public License - Version 1.0
            http://www.eclipse.org/legal/epl-v10.html

Copyright 2009 Richard Bateman, Firebreath development team
\**********************************************************/

#include <vector>
#include <string>

#include "APITypes.h"
#include "AutoPtr.h"
#include "vector_list.h"
#include "COMJavascriptObject.h"
#include "ActiveXBrowserHost.h"
#include "TestJSAPI.h"

TEST (COMJavascriptObject_CreateTest)
{
    PRINT_TESTNAME;

    FB::AutoPtr<ActiveXBrowserHost> host = new ActiveXBrowserHost(NULL);

    FB::AutoPtr<TestObjectJSAPI> testIf = new TestObjectJSAPI();
    CComPtr<IDispatchEx> obj = COMJavascriptObject::NewObject(host, testIf);

    CHECK (true);
}

TEST(COMJavascriptObject_Methods)
{
    PRINT_TESTNAME;

    //NpapiPluginModule module;
    //NpapiHost testHost(NULL, NULL, NULL);
    //module.setNetscapeFuncs(testHost.getBrowserFuncs());

    //FB::AutoPtr<NpapiBrowserHost> host = new NpapiBrowserHost(&module, testHost.getPluginInstance());
    //host->setBrowserFuncs(testHost.getBrowserFuncs());

    //NPVariant res;
    //NPVariant oneParam;
    //FB::AutoPtr<TestObjectJSAPI> testIf = new TestObjectJSAPI();
    //NPJavascriptObject *obj = NPJavascriptObject::NewObject(host, testIf);

    //NPVariant *params = getNPVariantParams(host, vector_list<FB::variant>(0, "This is a test"));
    //// Test setting and then getting a string value
    //CHECK(host->Invoke(obj, STRID(host, "setValue"), params, 2, &res));
    //freeNPVariantParams(host, params, 2);

    //try {
    //    INT32_TO_NPVARIANT(0, oneParam);
    //    CHECK(host->Invoke(obj, STRID(host, "getValue"), &oneParam, 1, &res));
    //    CHECK(std::string("This is a test") == res.value.stringValue.utf8characters);
    //} catch (...) {
    //    CHECK(false);
    //}

    //// Test setting and then getting integer values
    //for (int i = 0; i < TESTOBJECTJSAPI_ACCESSLISTLENGTH; i++) {
    //    params = getNPVariantParams(host, vector_list<FB::variant>(i, i));
    //    CHECK(host->Invoke(obj, STRID(host, "setValue"), params, 2, &res));
    //    freeNPVariantParams(host, params, 2);

    //    INT32_TO_NPVARIANT(i, oneParam);
    //    CHECK(host->Invoke(obj, STRID(host, "getValue"), &oneParam, 1, &res));
    //    CHECK(NPVARIANT_TO_INT32(res) == i);
    //}

    //// Test setting and then getting double values
    //for (int i = 0; i < TESTOBJECTJSAPI_ACCESSLISTLENGTH; i++) {
    //    params = getNPVariantParams(host, vector_list<FB::variant>(i, (double)(i * 1.5)));
    //    CHECK(host->Invoke(obj, STRID(host, "setValue"), params, 2, &res));
    //    freeNPVariantParams(host, params, 2);

    //    INT32_TO_NPVARIANT(i, oneParam);
    //    CHECK(host->Invoke(obj, STRID(host, "getValue"), &oneParam, 1, &res));
    //    CHECK(NPVARIANT_TO_DOUBLE(res) == (double)(i * 1.5));
    //}

    //// Test invalid parameters; this should *not* fire an exception *ever*
    //try {
    //    CHECK(!host->Invoke(obj, STRID(host, "setValue"), NULL, 0, &res));
    //    CHECK(true);
    //} catch (...) {
    //    CHECK(false);
    //}

    //// Test invalid method name
    //try {
    //    CHECK(!host->Invoke(obj, STRID(host, "someMethodThatDoesntExist"), NULL, 0, &res));
    //    CHECK(true);
    //} catch (...) {
    //    CHECK(false);
    //}
}

TEST(COMJavascriptObject_Properties)
{
    //PRINT_TESTNAME;

    //NpapiPluginModule module;
    //NpapiHost testHost(NULL, NULL, NULL);
    //module.setNetscapeFuncs(testHost.getBrowserFuncs());

    //FB::AutoPtr<NpapiBrowserHost> host = new NpapiBrowserHost(&module, testHost.getPluginInstance());
    //host->setBrowserFuncs(testHost.getBrowserFuncs());

    //NPVariant res;
    //NPVariant oneParam;
    //FB::AutoPtr<TestObjectJSAPI> testIf = new TestObjectJSAPI();
    //NPJavascriptObject *obj = NPJavascriptObject::NewObject(host, testIf);

    //// Test setting and getting many different datatypes with properties
    //try {
    //    for (int i = 0; i < 10000; i++) {
    //        INT32_TO_NPVARIANT(i, oneParam);
    //        CHECK(host->SetProperty(obj, STRID(host, "value"), &oneParam));
    //        CHECK(host->GetProperty(obj, STRID(host, "value"), &res));
    //        CHECK(NPVARIANT_TO_INT32(res) == i);

    //        DOUBLE_TO_NPVARIANT((double)(i * 3.74), oneParam);
    //        CHECK(host->SetProperty(obj, STRID(host, "value"), &oneParam));
    //        CHECK(host->GetProperty(obj, STRID(host, "value"), &res));
    //        CHECK(NPVARIANT_TO_DOUBLE(res) == (double)(i * 3.74));

    //        // Roundabout, but easy, way to convert this to a string =]
    //        std::string testVal = FB::variant((double)(i * 653.251235)).convert_cast<std::string>();
    //        host->getNPVariant(&oneParam, FB::variant(testVal));
    //        CHECK(host->SetProperty(obj, STRID(host, "value"), &oneParam));
    //        CHECK(host->GetProperty(obj, STRID(host, "value"), &res));
    //        CHECK(testVal == res.value.stringValue.utf8characters);
    //    }
    //} catch (...) {
    //    CHECK(false);
    //}

    //// Test exception handling
    //try {
    //    CHECK(!host->GetProperty(obj, STRID(host, "SomePropertyThatDoesntExist"), &res));
    //    CHECK(true);
    //} catch (...) {
    //    CHECK(false);
    //}
}