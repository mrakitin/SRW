# Imports from the example:
from __future__ import print_function #Python 2.7 compatibility
from srwpy.srwlib import *
from srwpy.uti_plot import *
import os

# Imports for tests:
import os
import pytest
from tests.conftest import filter_source, get_example_from_test


@pytest.mark.fast
def test_example04(examples_dir):
    current_dir = os.getcwd()
    os.chdir(examples_dir)
    os.environ["DISPLAY"] = ""

    code = filter_source(get_example_from_test())
    exec(code, globals(), globals())

    # end of example, start testing
    assert len(arI1x) == 120
    assert len(arI1y) == 112
    assert hasattr(wfr, "mesh")
    assert hasattr(wfr, "partBeam")
    for param in ["zStart",
                  "eStart", "eFin", "ne",
                  "xStart", "xFin", "nx",
                  "yStart", "yFin", "ny"]:
        assert hasattr(wfr.mesh, param)

    os.chdir(current_dir)
