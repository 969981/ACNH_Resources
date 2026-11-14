
undefined8 FUN_016cfb3c(int param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  
  if (param_1 < 0x25b43b89) {
    if (param_1 < -0x63176d3) {
      if (param_1 < -0x214773f9) {
        if (param_1 == -0x7a4d7ddc) {
          lVar1 = 7;
        }
        else {
          if (param_1 != -0x3e25491c) {
            return 0;
          }
          lVar1 = 0xf;
        }
      }
      else if (param_1 == -0x214773f9) {
        lVar1 = 3;
      }
      else {
        if (param_1 != -0xe5efd5a) {
          return 0;
        }
        lVar1 = 0;
      }
    }
    else if (param_1 < 0x91dc718) {
      if (param_1 == -0x63176d3) {
        lVar1 = 0xc;
      }
      else {
        if (param_1 != 0x68001ae) {
          return 0;
        }
        lVar1 = 10;
      }
    }
    else if (param_1 == 0x91dc718) {
      lVar1 = 6;
    }
    else {
      if (param_1 != 0x1a13a2ea) {
        return 0;
      }
      lVar1 = 5;
    }
  }
  else if (param_1 < 0x340da5a5) {
    if (param_1 < 0x2aefed47) {
      if (param_1 == 0x25b43b89) {
        lVar1 = 0xe;
      }
      else {
        if (param_1 != 0x2633946a) {
          return 0;
        }
        lVar1 = 9;
      }
    }
    else if (param_1 == 0x2aefed47) {
      lVar1 = 4;
    }
    else {
      if (param_1 != 0x302056e3) {
        return 0;
      }
      lVar1 = 0xb;
    }
  }
  else if (param_1 < 0x6043fd87) {
    if (param_1 == 0x340da5a5) {
      lVar1 = 1;
    }
    else {
      if (param_1 != 0x356323a8) {
        return 0;
      }
      lVar1 = 2;
    }
  }
  else if (param_1 == 0x6043fd87) {
    lVar1 = 8;
  }
  else {
    if (param_1 != 0x7dfa9ed2) {
      return 0;
    }
    lVar1 = 0xd;
  }
  if (param_2 != 0) {
    *(bool *)param_2 = (&DAT_04176a0c)[lVar1 * 3] != 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = (&DAT_04176a10)[lVar1 * 3];
  }
  return 1;
}

