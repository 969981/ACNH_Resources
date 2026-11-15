
void FUN_022f2890(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = &DAT_05486910;
  if (DAT_05486910 == param_1) {
    lVar2 = 0;
  }
  else {
    puVar1 = &DAT_05486950;
    if (DAT_05486950 == param_1) {
      lVar2 = 1;
    }
    else {
      puVar1 = &DAT_05486990;
      if (DAT_05486990 == param_1) {
        lVar2 = 2;
      }
      else {
        puVar1 = &DAT_054869d0;
        if (DAT_054869d0 == param_1) {
          lVar2 = 3;
        }
        else {
          puVar1 = &DAT_05486a10;
          if (DAT_05486a10 == param_1) {
            lVar2 = 4;
          }
          else {
            puVar1 = &DAT_05486a50;
            if (DAT_05486a50 == param_1) {
              lVar2 = 5;
            }
            else {
              puVar1 = &DAT_05486a90;
              if (DAT_05486a90 == param_1) {
                lVar2 = 6;
              }
              else {
                puVar1 = &DAT_05486ad0;
                if (DAT_05486ad0 == param_1) {
                  lVar2 = 7;
                }
                else {
                  puVar1 = &DAT_05486b10;
                  if (DAT_05486b10 == param_1) {
                    lVar2 = 8;
                  }
                  else {
                    puVar1 = &DAT_05486b50;
                    if (DAT_05486b50 == param_1) {
                      lVar2 = 9;
                    }
                    else {
                      puVar1 = &DAT_05486b90;
                      if (DAT_05486b90 == param_1) {
                        lVar2 = 10;
                      }
                      else {
                        puVar1 = &DAT_05486bd0;
                        if (DAT_05486bd0 == param_1) {
                          lVar2 = 0xb;
                        }
                        else {
                          puVar1 = &DAT_05486c10;
                          if (DAT_05486c10 == param_1) {
                            lVar2 = 0xc;
                          }
                          else {
                            puVar1 = &DAT_05486c50;
                            if (DAT_05486c50 == param_1) {
                              lVar2 = 0xd;
                            }
                            else {
                              puVar1 = &DAT_05486c90;
                              if (DAT_05486c90 == param_1) {
                                lVar2 = 0xe;
                              }
                              else {
                                puVar1 = &DAT_05486cd0;
                                if (DAT_05486cd0 == param_1) {
                                  lVar2 = 0xf;
                                }
                                else {
                                  puVar1 = &DAT_05486d10;
                                  if (DAT_05486d10 == param_1) {
                                    lVar2 = 0x10;
                                  }
                                  else {
                                    puVar1 = &DAT_05486d50;
                                    if (DAT_05486d50 == param_1) {
                                      lVar2 = 0x11;
                                    }
                                    else {
                                      puVar1 = &DAT_05486d90;
                                      if (DAT_05486d90 == param_1) {
                                        lVar2 = 0x12;
                                      }
                                      else {
                                        puVar1 = &DAT_05486dd0;
                                        if (DAT_05486dd0 != param_1) {
                                          return;
                                        }
                                        lVar2 = 0x13;
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
        }
      }
    }
  }
  *puVar1 = 0xffffffffffffffff;
  *(undefined8 *)(&DAT_05486928 + lVar2 * 0x10) = 0;
  (&DAT_05486938)[lVar2 * 0x10] = 0;
  *(undefined8 *)(&DAT_0548693c + lVar2 * 0x10) = 0xffff000000000000;
  *(undefined1 *)((long)&DAT_05486945 + lVar2 * 0x40 + 1) = 0;
  *(undefined2 *)(&DAT_05486944 + lVar2 * 0x40) = 0;
  return;
}

