
undefined8 FUN_007b3b6c(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (param_3 != 0 || param_4 != 0) {
    if (((*param_1 == 0 && param_1[1] == 0) || (*param_1 != param_3)) || (param_1[1] != param_4)) {
      if (((param_1[5] == 0 && param_1[6] == 0) || (param_1[5] != param_3)) ||
         (param_1[6] != param_4)) {
        if (((param_1[10] == 0 && param_1[0xb] == 0) || (param_1[10] != param_3)) ||
           (param_1[0xb] != param_4)) {
          if (((param_1[0xf] == 0 && param_1[0x10] == 0) || (param_1[0xf] != param_3)) ||
             (param_1[0x10] != param_4)) {
            if (((param_1[0x14] == 0 && param_1[0x15] == 0) || (param_1[0x14] != param_3)) ||
               (param_1[0x15] != param_4)) {
              if (((param_1[0x19] == 0 && param_1[0x1a] == 0) || (param_1[0x19] != param_3)) ||
                 (param_1[0x1a] != param_4)) {
                if (((param_1[0x1e] == 0 && param_1[0x1f] == 0) || (param_1[0x1e] != param_3)) ||
                   (param_1[0x1f] != param_4)) {
                  if (param_1[0x23] == 0 && param_1[0x24] == 0) {
                    return 0;
                  }
                  if (param_1[0x23] != param_3) {
                    return 0;
                  }
                  if (param_1[0x24] != param_4) {
                    return 0;
                  }
                  lVar2 = 7;
                }
                else {
                  lVar2 = 6;
                }
              }
              else {
                lVar2 = 5;
              }
            }
            else {
              lVar2 = 4;
            }
          }
          else {
            lVar2 = 3;
          }
        }
        else {
          lVar2 = 2;
        }
      }
      else {
        lVar2 = 1;
      }
    }
    else {
      lVar2 = 0;
    }
    if (param_2 != (long *)0x0) {
      lVar1 = param_1[lVar2 * 5 + 2];
      lVar3 = param_1[lVar2 * 5 + 4];
      param_2[1] = param_1[lVar2 * 5 + 3];
      param_2[2] = lVar3;
      *param_2 = lVar1;
    }
    uVar4 = 1;
  }
  return uVar4;
}

