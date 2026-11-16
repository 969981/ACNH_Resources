
uint FUN_02805b60(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar4 = *(long *)puVar1;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar4 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
             (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
            local_48 = lVar4;
          }
        }
      }
      uVar3 = FUN_01af3520(&local_58);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_0277d7b4(param_1,param_2);
        if ((uVar3 & 1) != 0) {
LAB_02805c84:
          uVar2 = 1;
          goto LAB_02805ff4;
        }
        uVar3 = FUN_01af3520(&local_58);
        if ((uVar3 & 1) != 0) {
          uVar3 = FUN_0277d7b4(param_1 + 8,param_2);
          if ((uVar3 & 1) != 0) goto LAB_02805c84;
          uVar3 = FUN_01af3520(&local_58);
          if ((uVar3 & 1) != 0) {
            uVar3 = FUN_0277d7b4(param_1 + 0x10,param_2);
            if ((uVar3 & 1) != 0) goto LAB_02805c84;
            uVar3 = FUN_01af3520(&local_58);
            if ((uVar3 & 1) != 0) {
              uVar3 = FUN_0277d7b4(param_1 + 0x18,param_2);
              if ((uVar3 & 1) != 0) goto LAB_02805c84;
              uVar3 = FUN_01af3520(&local_58);
              if ((uVar3 & 1) != 0) {
                uVar3 = FUN_0277d7b4(param_1 + 0x20,param_2);
                if ((uVar3 & 1) != 0) goto LAB_02805c84;
                uVar3 = FUN_01af3520(&local_58);
                if ((uVar3 & 1) != 0) {
                  uVar3 = FUN_0277d7b4(param_1 + 0x28,param_2);
                  if ((uVar3 & 1) != 0) goto LAB_02805c84;
                  uVar3 = FUN_01af3520(&local_58);
                  if ((uVar3 & 1) != 0) {
                    uVar3 = FUN_0277d7b4(param_1 + 0x30,param_2);
                    if ((uVar3 & 1) != 0) goto LAB_02805c84;
                    uVar3 = FUN_01af3520(&local_58);
                    if ((uVar3 & 1) != 0) {
                      uVar3 = FUN_0277d7b4(param_1 + 0x38,param_2);
                      if ((uVar3 & 1) != 0) goto LAB_02805c84;
                      uVar3 = FUN_01af3520(&local_58);
                      if ((uVar3 & 1) != 0) {
                        uVar3 = FUN_0277d7b4(param_1 + 0x40,param_2);
                        if ((uVar3 & 1) != 0) goto LAB_02805c84;
                        uVar3 = FUN_01af3520(&local_58);
                        if ((uVar3 & 1) != 0) {
                          uVar3 = FUN_0277d7b4(param_1 + 0x48,param_2);
                          if ((uVar3 & 1) != 0) goto LAB_02805c84;
                          uVar3 = FUN_01af3520(&local_58);
                          if ((uVar3 & 1) != 0) {
                            uVar3 = FUN_0277d7b4(param_1 + 0x50,param_2);
                            if ((uVar3 & 1) != 0) goto LAB_02805c84;
                            uVar3 = FUN_01af3520(&local_58);
                            if ((uVar3 & 1) != 0) {
                              uVar3 = FUN_0277d7b4(param_1 + 0x58,param_2);
                              if ((uVar3 & 1) != 0) goto LAB_02805c84;
                              uVar3 = FUN_01af3520(&local_58);
                              if ((uVar3 & 1) != 0) {
                                uVar3 = FUN_0277d7b4(param_1 + 0x60,param_2);
                                if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                uVar3 = FUN_01af3520(&local_58);
                                if ((uVar3 & 1) != 0) {
                                  uVar3 = FUN_0277d7b4(param_1 + 0x68,param_2);
                                  if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                  uVar3 = FUN_01af3520(&local_58);
                                  if ((uVar3 & 1) != 0) {
                                    uVar3 = FUN_0277d7b4(param_1 + 0x70,param_2);
                                    if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                    uVar3 = FUN_01af3520(&local_58);
                                    if ((uVar3 & 1) != 0) {
                                      uVar3 = FUN_0277d7b4(param_1 + 0x78,param_2);
                                      if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                      uVar3 = FUN_01af3520(&local_58);
                                      if ((uVar3 & 1) != 0) {
                                        uVar3 = FUN_0277d7b4(param_1 + 0x80,param_2);
                                        if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                        uVar3 = FUN_01af3520(&local_58);
                                        if ((uVar3 & 1) != 0) {
                                          uVar3 = FUN_0277d7b4(param_1 + 0x88,param_2);
                                          if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                          uVar3 = FUN_01af3520(&local_58);
                                          if ((uVar3 & 1) != 0) {
                                            uVar3 = FUN_0277d7b4(param_1 + 0x90,param_2);
                                            if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                            uVar3 = FUN_01af3520(&local_58);
                                            if ((uVar3 & 1) != 0) {
                                              uVar3 = FUN_0277d7b4(param_1 + 0x98,param_2);
                                              if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                              uVar3 = FUN_01af3520(&local_58);
                                              if ((uVar3 & 1) != 0) {
                                                uVar3 = FUN_0277d7b4(param_1 + 0xa0,param_2);
                                                if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                                uVar3 = FUN_01af3520(&local_58);
                                                if ((uVar3 & 1) != 0) {
                                                  uVar3 = FUN_0277d7b4(param_1 + 0xa8,param_2);
                                                  if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                                  uVar3 = FUN_01af3520(&local_58);
                                                  if ((uVar3 & 1) != 0) {
                                                    uVar3 = FUN_0277d7b4(param_1 + 0xb0,param_2);
                                                    if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                                    uVar3 = FUN_01af3520(&local_58);
                                                    if ((uVar3 & 1) != 0) {
                                                      uVar3 = FUN_0277d7b4(param_1 + 0xb8,param_2);
                                                      if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                                      uVar3 = FUN_01af3520(&local_58);
                                                      if ((uVar3 & 1) != 0) {
                                                        uVar3 = FUN_0277d7b4(param_1 + 0xc0,param_2)
                                                        ;
                                                        if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                                        uVar3 = FUN_01af3520(&local_58);
                                                        if ((uVar3 & 1) != 0) {
                                                          uVar3 = FUN_0277d7b4(param_1 + 200,param_2
                                                                              );
                                                          if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                                          uVar3 = FUN_01af3520(&local_58);
                                                          if ((uVar3 & 1) != 0) {
                                                            uVar3 = FUN_0277d7b4(param_1 + 0xd0,
                                                                                 param_2);
                                                            if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                                            uVar3 = FUN_01af3520(&local_58);
                                                            if ((uVar3 & 1) != 0) {
                                                              uVar3 = FUN_0277d7b4(param_1 + 0xd8,
                                                                                   param_2);
                                                              if ((uVar3 & 1) != 0)
                                                              goto LAB_02805c84;
                                                              uVar3 = FUN_01af3520(&local_58);
                                                              if ((uVar3 & 1) != 0) {
                                                                uVar3 = FUN_0277d7b4(param_1 + 0xe0,
                                                                                     param_2);
                                                                if ((uVar3 & 1) != 0)
                                                                goto LAB_02805c84;
                                                                uVar3 = FUN_01af3520(&local_58);
                                                                if ((uVar3 & 1) != 0) {
                                                                  uVar3 = FUN_0277d7b4(param_1 + 
                                                  0xe8,param_2);
                                                  if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                                  uVar3 = FUN_01af3520(&local_58);
                                                  if ((uVar3 & 1) != 0) {
                                                    uVar3 = FUN_0277d7b4(param_1 + 0xf0,param_2);
                                                    if ((uVar3 & 1) != 0) goto LAB_02805c84;
                                                    uVar3 = FUN_01af3520(&local_58);
                                                    if ((uVar3 & 1) != 0) {
                                                      uVar2 = FUN_0277d7b4(param_1 + 0xf8,param_2);
                                                      goto LAB_02805ff4;
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
  uVar2 = 0;
LAB_02805ff4:
  return uVar2 & 1;
}

