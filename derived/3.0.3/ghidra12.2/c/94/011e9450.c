
undefined4 FUN_011e9450(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar4 = 0x40a00000;
  if (DAT_050dfcb8 != '\0') {
    uVar1 = *(uint *)(param_1 + 8) & 0xfffffffe;
    uVar2 = *(uint *)(param_1 + 0xc) & 0xfffffffe;
    if ((((uint)DAT_050dfb40 == 0xffffff85) || ((uint)DAT_050dfb40 != uVar1)) ||
       (DAT_050dfb40._4_4_ != uVar2)) {
      if ((((uint)DAT_050dfb58 == 0xffffff85) || ((uint)DAT_050dfb58 != uVar1)) ||
         (DAT_050dfb58._4_4_ != uVar2)) {
        if ((((uint)DAT_050dfb70 == 0xffffff85) || ((uint)DAT_050dfb70 != uVar1)) ||
           (DAT_050dfb70._4_4_ != uVar2)) {
          if ((((uint)DAT_050dfb88 == 0xffffff85) || ((uint)DAT_050dfb88 != uVar1)) ||
             (DAT_050dfb88._4_4_ != uVar2)) {
            if ((((uint)DAT_050dfba0 == 0xffffff85) || ((uint)DAT_050dfba0 != uVar1)) ||
               (DAT_050dfba0._4_4_ != uVar2)) {
              if ((((uint)DAT_050dfbb8 == 0xffffff85) || ((uint)DAT_050dfbb8 != uVar1)) ||
                 (DAT_050dfbb8._4_4_ != uVar2)) {
                if ((((uint)DAT_050dfbd0 == 0xffffff85) || ((uint)DAT_050dfbd0 != uVar1)) ||
                   (DAT_050dfbd0._4_4_ != uVar2)) {
                  if ((((uint)DAT_050dfbe8 == 0xffffff85) || ((uint)DAT_050dfbe8 != uVar1)) ||
                     (DAT_050dfbe8._4_4_ != uVar2)) {
                    if ((((uint)DAT_050dfc00 == 0xffffff85) || ((uint)DAT_050dfc00 != uVar1)) ||
                       (DAT_050dfc00._4_4_ != uVar2)) {
                      if ((((uint)DAT_050dfc18 == 0xffffff85) || ((uint)DAT_050dfc18 != uVar1)) ||
                         (DAT_050dfc18._4_4_ != uVar2)) {
                        if ((((uint)DAT_050dfc30 == 0xffffff85) || ((uint)DAT_050dfc30 != uVar1)) ||
                           (DAT_050dfc30._4_4_ != uVar2)) {
                          if ((((uint)DAT_050dfc48 == 0xffffff85) || ((uint)DAT_050dfc48 != uVar1))
                             || (DAT_050dfc48._4_4_ != uVar2)) {
                            if ((((uint)DAT_050dfc60 == 0xffffff85) || ((uint)DAT_050dfc60 != uVar1)
                                ) || (DAT_050dfc60._4_4_ != uVar2)) {
                              if ((((uint)DAT_050dfc78 == 0xffffff85) ||
                                  ((uint)DAT_050dfc78 != uVar1)) || (DAT_050dfc78._4_4_ != uVar2)) {
                                if ((((uint)DAT_050dfc90 == 0xffffff85) ||
                                    ((uint)DAT_050dfc90 != uVar1)) || (DAT_050dfc90._4_4_ != uVar2))
                                {
                                  if ((uint)DAT_050dfca8 == 0xffffff85) {
                                    return 0x40a00000;
                                  }
                                  if ((uint)DAT_050dfca8 != uVar1) {
                                    return 0x40a00000;
                                  }
                                  if (DAT_050dfca8._4_4_ != uVar2) {
                                    return 0x40a00000;
                                  }
                                  lVar3 = 0xf;
                                }
                                else {
                                  lVar3 = 0xe;
                                }
                              }
                              else {
                                lVar3 = 0xd;
                              }
                            }
                            else {
                              lVar3 = 0xc;
                            }
                          }
                          else {
                            lVar3 = 0xb;
                          }
                        }
                        else {
                          lVar3 = 10;
                        }
                      }
                      else {
                        lVar3 = 9;
                      }
                    }
                    else {
                      lVar3 = 8;
                    }
                  }
                  else {
                    lVar3 = 7;
                  }
                }
                else {
                  lVar3 = 6;
                }
              }
              else {
                lVar3 = 5;
              }
            }
            else {
              lVar3 = 4;
            }
          }
          else {
            lVar3 = 3;
          }
        }
        else {
          lVar3 = 2;
        }
      }
      else {
        lVar3 = 1;
      }
    }
    else {
      lVar3 = 0;
    }
    uVar4 = (&DAT_050dfb48)[lVar3 * 6];
  }
  return uVar4;
}

