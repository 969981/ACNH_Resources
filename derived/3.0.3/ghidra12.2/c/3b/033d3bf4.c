
undefined4 FUN_033d3bf4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)*param_2)(param_2,param_1);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)*param_2)(param_2,param_1 + 0xc);
    if ((uVar1 & 1) == 0) {
      uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x18);
      if ((uVar1 & 1) == 0) {
        uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x24);
        if ((uVar1 & 1) == 0) {
          uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x30);
          if ((uVar1 & 1) == 0) {
            uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x3c);
            if ((uVar1 & 1) == 0) {
              uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x48);
              if ((uVar1 & 1) == 0) {
                uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x54);
                if ((uVar1 & 1) == 0) {
                  uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x60);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x6c);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x78);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x84);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x90);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = (**(code **)*param_2)(param_2,param_1 + 0x9c);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = (**(code **)*param_2)(param_2,param_1 + 0xa8);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = (**(code **)*param_2)(param_2,param_1 + 0xb4);
                                uVar2 = 0xf;
                                if ((uVar1 & 1) == 0) {
                                  uVar2 = 0xffffffff;
                                }
                              }
                              else {
                                uVar2 = 0xe;
                              }
                            }
                            else {
                              uVar2 = 0xd;
                            }
                          }
                          else {
                            uVar2 = 0xc;
                          }
                        }
                        else {
                          uVar2 = 0xb;
                        }
                      }
                      else {
                        uVar2 = 10;
                      }
                    }
                    else {
                      uVar2 = 9;
                    }
                  }
                  else {
                    uVar2 = 8;
                  }
                }
                else {
                  uVar2 = 7;
                }
              }
              else {
                uVar2 = 6;
              }
            }
            else {
              uVar2 = 5;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

