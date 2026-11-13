
void FUN_011e9260(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)DAT_050dfb40 == -0x7b) {
    lVar3 = 0;
    puVar2 = &DAT_050dfb38;
  }
  else {
    puVar2 = &DAT_050dfb50;
    if ((int)DAT_050dfb58 == -0x7b) {
      lVar3 = 1;
    }
    else {
      puVar2 = &DAT_050dfb68;
      if ((int)DAT_050dfb70 == -0x7b) {
        lVar3 = 2;
      }
      else {
        puVar2 = &DAT_050dfb80;
        if ((int)DAT_050dfb88 == -0x7b) {
          lVar3 = 3;
        }
        else {
          puVar2 = &DAT_050dfb98;
          if ((int)DAT_050dfba0 == -0x7b) {
            lVar3 = 4;
          }
          else {
            puVar2 = &DAT_050dfbb0;
            if ((int)DAT_050dfbb8 == -0x7b) {
              lVar3 = 5;
            }
            else {
              puVar2 = &DAT_050dfbc8;
              if ((int)DAT_050dfbd0 == -0x7b) {
                lVar3 = 6;
              }
              else {
                puVar2 = &DAT_050dfbe0;
                if ((int)DAT_050dfbe8 == -0x7b) {
                  lVar3 = 7;
                }
                else {
                  puVar2 = &DAT_050dfbf8;
                  if ((int)DAT_050dfc00 == -0x7b) {
                    lVar3 = 8;
                  }
                  else {
                    puVar2 = &DAT_050dfc10;
                    if ((int)DAT_050dfc18 == -0x7b) {
                      lVar3 = 9;
                    }
                    else {
                      puVar2 = &DAT_050dfc28;
                      if ((int)DAT_050dfc30 == -0x7b) {
                        lVar3 = 10;
                      }
                      else {
                        puVar2 = &DAT_050dfc40;
                        if ((int)DAT_050dfc48 == -0x7b) {
                          lVar3 = 0xb;
                        }
                        else {
                          puVar2 = &DAT_050dfc58;
                          if ((int)DAT_050dfc60 == -0x7b) {
                            lVar3 = 0xc;
                          }
                          else {
                            puVar2 = &DAT_050dfc70;
                            if ((int)DAT_050dfc78 == -0x7b) {
                              lVar3 = 0xd;
                            }
                            else {
                              puVar2 = &DAT_050dfc88;
                              if ((int)DAT_050dfc90 == -0x7b) {
                                lVar3 = 0xe;
                              }
                              else {
                                puVar2 = &DAT_050dfca0;
                                if ((int)DAT_050dfca8 != -0x7b) {
                                  return;
                                }
                                lVar3 = 0xf;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(uint *)(puVar2 + 1) = *(uint *)(param_1 + 8) & 0xfffffffe;
  *(uint *)((long)puVar2 + 0xc) = uVar1 & 0xfffffffe;
  (&DAT_050dfb48)[lVar3 * 6] = 0x40200000;
  DAT_050dfcb8 = 1;
  return;
}

