
void FUN_007b4200(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 != 0 || param_3 != 0) {
    if (((*param_1 == 0 && param_1[1] == 0) || (*param_1 != param_2)) || (param_1[1] != param_3)) {
      plVar2 = param_1 + 5;
      if (((*plVar2 == 0 && param_1[6] == 0) || (*plVar2 != param_2)) || (param_1[6] != param_3)) {
        plVar2 = param_1 + 10;
        if (((*plVar2 == 0 && param_1[0xb] == 0) || (*plVar2 != param_2)) ||
           (param_1[0xb] != param_3)) {
          plVar2 = param_1 + 0xf;
          if (((*plVar2 == 0 && param_1[0x10] == 0) || (*plVar2 != param_2)) ||
             (param_1[0x10] != param_3)) {
            plVar2 = param_1 + 0x14;
            if (((*plVar2 == 0 && param_1[0x15] == 0) || (*plVar2 != param_2)) ||
               (param_1[0x15] != param_3)) {
              plVar2 = param_1 + 0x19;
              if (((*plVar2 == 0 && param_1[0x1a] == 0) || (*plVar2 != param_2)) ||
                 (param_1[0x1a] != param_3)) {
                plVar2 = param_1 + 0x1e;
                if (((*plVar2 == 0 && param_1[0x1f] == 0) || (*plVar2 != param_2)) ||
                   (param_1[0x1f] != param_3)) {
                  if (param_1[0x23] == 0 && param_1[0x24] == 0) {
                    return;
                  }
                  if (param_1[0x23] != param_2) {
                    return;
                  }
                  if (param_1[0x24] != param_3) {
                    return;
                  }
                  plVar2 = param_1 + 0x23;
                  lVar1 = 7;
                }
                else {
                  lVar1 = 6;
                }
              }
              else {
                lVar1 = 5;
              }
            }
            else {
              lVar1 = 4;
            }
          }
          else {
            lVar1 = 3;
          }
        }
        else {
          lVar1 = 2;
        }
      }
      else {
        lVar1 = 1;
      }
    }
    else {
      lVar1 = 0;
      plVar2 = param_1;
    }
    nn::account::CloseUser((UserHandle *)(param_1 + lVar1 * 5 + 2));
    *plVar2 = 0;
    plVar2[1] = 0;
  }
  return;
}

