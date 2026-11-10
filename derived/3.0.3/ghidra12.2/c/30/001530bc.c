
undefined8 FUN_001530bc(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (iVar1 < 0x4000) {
    if (iVar1 < 0x80) {
      if (iVar1 < 0x10) {
        if (iVar1 - 1U < 2) {
          return 1;
        }
        if ((iVar1 == 4) || (iVar1 == 8)) {
          return 4;
        }
      }
      else {
        if (iVar1 == 0x10) {
          return param_1;
        }
        if (iVar1 == 0x20) {
          return param_1;
        }
        if (iVar1 == 0x40) {
          return param_1;
        }
      }
    }
    else if (iVar1 < 0x400) {
      if ((iVar1 == 0x80) || (iVar1 == 0x100)) {
        return 0x80;
      }
      if (iVar1 == 0x200) {
        return param_1;
      }
    }
    else if (iVar1 < 0x1000) {
      if (iVar1 == 0x400) {
        return param_1;
      }
      if (iVar1 == 0x800) {
        return param_1;
      }
    }
    else if ((iVar1 == 0x1000) || (iVar1 == 0x2000)) {
      return 0x1000;
    }
  }
  else if (iVar1 < 0x200000) {
    if (iVar1 < 0x20000) {
      if ((iVar1 == 0x4000) || (iVar1 == 0x8000)) {
        return 0x4000;
      }
      if (iVar1 == 0x10000) {
        return 0x10000;
      }
    }
    else if (iVar1 < 0x80000) {
      if (iVar1 == 0x20000) {
        return 0x10000;
      }
      if (iVar1 == 0x40000) {
        return param_1;
      }
    }
    else {
      if (iVar1 == 0x80000) {
        return 0x80000;
      }
      if (iVar1 == 0x100000) {
        return 0x100000;
      }
    }
  }
  else if (iVar1 < 0x1000000) {
    if (iVar1 == 0x200000) {
      return param_1;
    }
    if (iVar1 == 0x400000) {
      return param_1;
    }
    if (iVar1 == 0x800000) {
      return 0x80000;
    }
  }
  else if (iVar1 < 0x4000000) {
    if (iVar1 == 0x1000000) {
      return 0x100000;
    }
    if (iVar1 == 0x2000000) {
      return param_1;
    }
  }
  else if ((iVar1 == 0x4000000) || (iVar1 == 0x8000000)) {
    return 0x4000000;
  }
  return 0;
}

