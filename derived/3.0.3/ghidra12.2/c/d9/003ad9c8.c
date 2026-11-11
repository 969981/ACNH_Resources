
undefined8 FUN_003ad9c8(int param_1)

{
  if (param_1 < 0xe02) {
    if (param_1 < 0xa01) {
      if (param_1 - 0x201U < 3) {
        return 1;
      }
      if (param_1 - 0x901U < 3) {
        return 2;
      }
    }
    else {
      if (param_1 - 0xb01U < 3) {
        return 4;
      }
      if (param_1 == 0xa01) {
        return 1;
      }
      if (param_1 == 0xa05) {
        return 1;
      }
    }
  }
  else if (param_1 < 0x1501) {
    if ((param_1 - 0x1201U < 5) && ((1 << (ulong)(param_1 - 0x1201U & 0x1f) & 0x13U) != 0)) {
      return 2;
    }
    if (param_1 == 0xe02) {
      return 3;
    }
    if (param_1 == 0x1405) {
      return 1;
    }
  }
  else if (param_1 < 0x1705) {
    if (param_1 == 0x1501) {
      return 4;
    }
    if (param_1 == 0x1505) {
      return 4;
    }
  }
  else {
    if (param_1 == 0x1905) {
      return 4;
    }
    if (param_1 == 0x1805) {
      return 3;
    }
    if (param_1 == 0x1705) {
      return 2;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::detail::UnexpectedDefaultImpl();
}

