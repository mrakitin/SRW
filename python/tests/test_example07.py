# Imports from the example:
from __future__ import print_function #Python 2.7 compatibility
from srwpy.srwlib import *
from srwpy.uti_plot import * #required for plotting
import os
import random
import copy

# Imports for tests:
import os
import pytest
from tests.conftest import filter_source, get_example_from_test


@pytest.mark.fast
def test_example07(examples_dir):
    current_dir = os.getcwd()
    os.chdir(examples_dir)
    os.environ["DISPLAY"] = ""

    code = filter_source(get_example_from_test())
    exec(code, globals(), globals())

    # end of example, start testing
    assert len(arI0) == 43264
    assert len(arI0x) == 208
    assert len(arP0) == 43264
    assert hasattr(wfr, "mesh")
    for param in ["zStart",
                  "eStart", "eFin", "ne",
                  "xStart", "xFin", "nx",
                  "yStart", "yFin", "ny"]:
        assert hasattr(wfr.mesh, param)

    os.chdir(current_dir)
