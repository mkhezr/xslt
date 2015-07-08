// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// xslt_transform
std::string xslt_transform(std::string xslt_doc, std::string xml_doc, bool process_includes, bool load_external_subsets, bool validate_xml);
RcppExport SEXP xslt_xslt_transform(SEXP xslt_docSEXP, SEXP xml_docSEXP, SEXP process_includesSEXP, SEXP load_external_subsetsSEXP, SEXP validate_xmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type xslt_doc(xslt_docSEXP);
    Rcpp::traits::input_parameter< std::string >::type xml_doc(xml_docSEXP);
    Rcpp::traits::input_parameter< bool >::type process_includes(process_includesSEXP);
    Rcpp::traits::input_parameter< bool >::type load_external_subsets(load_external_subsetsSEXP);
    Rcpp::traits::input_parameter< bool >::type validate_xml(validate_xmlSEXP);
    __result = Rcpp::wrap(xslt_transform(xslt_doc, xml_doc, process_includes, load_external_subsets, validate_xml));
    return __result;
END_RCPP
}