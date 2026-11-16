
ulong FUN_026a6580(long param_1,long param_2,int *param_3)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (param_3 == (int *)0x0) {
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_1 + 0x1094c);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
          (uVar5 = FUN_0277d7b4(param_1 + 0x1094c,param_2), (uVar5 & 1) != 0)) &&
         ((*(char *)(param_1 + 0x1094f) == *(char *)(param_2 + 3) &&
          (*(int *)(param_1 + 0x10950) == *(int *)(param_2 + 4))))) {
        uVar5 = 0;
        goto LAB_026a715c;
      }
    }
    lVar7 = *(long *)puVar1;
    uVar3 = FUN_0277d6c4(param_1 + 0x10978);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
         ((uVar5 = FUN_0277d7b4(param_1 + 0x10978,param_2), (uVar5 & 1) != 0 &&
          ((*(char *)(param_1 + 0x1097b) == *(char *)(param_2 + 3) &&
           (*(int *)(param_1 + 0x1097c) == *(int *)(param_2 + 4))))))) {
        uVar5 = 1;
        goto LAB_026a715c;
      }
    }
    lVar7 = *(long *)puVar1;
    uVar3 = FUN_0277d6c4(param_1 + 0x109a4);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
          (uVar5 = FUN_0277d7b4(param_1 + 0x109a4,param_2), (uVar5 & 1) != 0)) &&
         ((*(char *)(param_1 + 0x109a7) == *(char *)(param_2 + 3) &&
          (*(int *)(param_1 + 0x109a8) == *(int *)(param_2 + 4))))) {
        uVar5 = 2;
        goto LAB_026a715c;
      }
    }
    lVar7 = *(long *)puVar1;
    uVar3 = FUN_0277d6c4(param_1 + 0x109d0);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
         ((uVar5 = FUN_0277d7b4(param_1 + 0x109d0,param_2), (uVar5 & 1) != 0 &&
          ((*(char *)(param_1 + 0x109d3) == *(char *)(param_2 + 3) &&
           (*(int *)(param_1 + 0x109d4) == *(int *)(param_2 + 4))))))) {
        uVar5 = 3;
        goto LAB_026a715c;
      }
    }
    lVar7 = *(long *)puVar1;
    uVar3 = FUN_0277d6c4(param_1 + 0x109fc);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
          (uVar5 = FUN_0277d7b4(param_1 + 0x109fc,param_2), (uVar5 & 1) != 0)) &&
         ((*(char *)(param_1 + 0x109ff) == *(char *)(param_2 + 3) &&
          (*(int *)(param_1 + 0x10a00) == *(int *)(param_2 + 4))))) {
        uVar5 = 4;
        goto LAB_026a715c;
      }
    }
    lVar7 = *(long *)puVar1;
    uVar3 = FUN_0277d6c4(param_1 + 0x10a28);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
         ((uVar5 = FUN_0277d7b4(param_1 + 0x10a28,param_2), (uVar5 & 1) != 0 &&
          ((*(char *)(param_1 + 0x10a2b) == *(char *)(param_2 + 3) &&
           (*(int *)(param_1 + 0x10a2c) == *(int *)(param_2 + 4))))))) {
        uVar5 = 5;
        goto LAB_026a715c;
      }
    }
    lVar7 = *(long *)puVar1;
    uVar3 = FUN_0277d6c4(param_1 + 0x10a54);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
          (uVar5 = FUN_0277d7b4(param_1 + 0x10a54,param_2), (uVar5 & 1) != 0)) &&
         ((*(char *)(param_1 + 0x10a57) == *(char *)(param_2 + 3) &&
          (*(int *)(param_1 + 0x10a58) == *(int *)(param_2 + 4))))) {
        uVar5 = 6;
        goto LAB_026a715c;
      }
    }
    lVar7 = *(long *)puVar1;
    uVar3 = FUN_0277d6c4(param_1 + 0x10a80);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
         ((uVar5 = FUN_0277d7b4(param_1 + 0x10a80,param_2), (uVar5 & 1) != 0 &&
          ((*(char *)(param_1 + 0x10a83) == *(char *)(param_2 + 3) &&
           (*(int *)(param_1 + 0x10a84) == *(int *)(param_2 + 4))))))) {
        uVar5 = 7;
        goto LAB_026a715c;
      }
    }
    lVar7 = *(long *)puVar1;
    uVar3 = FUN_0277d6c4(param_1 + 0x10aac);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
          (uVar5 = FUN_0277d7b4(param_1 + 0x10aac,param_2), (uVar5 & 1) != 0)) &&
         ((*(char *)(param_1 + 0x10aaf) == *(char *)(param_2 + 3) &&
          (*(int *)(param_1 + 0x10ab0) == *(int *)(param_2 + 4))))) {
        uVar5 = 8;
        goto LAB_026a715c;
      }
    }
    lVar7 = *(long *)puVar1;
    uVar3 = FUN_0277d6c4(param_1 + 0x10ad8);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
         ((uVar5 = FUN_0277d7b4(param_1 + 0x10ad8,param_2), (uVar5 & 1) != 0 &&
          ((*(char *)(param_1 + 0x10adb) == *(char *)(param_2 + 3) &&
           (*(int *)(param_1 + 0x10adc) == *(int *)(param_2 + 4))))))) {
        uVar5 = 9;
        goto LAB_026a715c;
      }
    }
    lVar7 = *(long *)puVar1;
    uVar3 = FUN_0277d6c4(param_1 + 0x10b04);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
          (uVar5 = FUN_0277d7b4(param_1 + 0x10b04,param_2), (uVar5 & 1) != 0)) &&
         ((*(char *)(param_1 + 0x10b07) == *(char *)(param_2 + 3) &&
          (*(int *)(param_1 + 0x10b08) == *(int *)(param_2 + 4))))) {
        uVar5 = 10;
        goto LAB_026a715c;
      }
    }
    uVar5 = FUN_0277d9a8(param_1 + 0x10b30);
    if ((((uVar5 & 1) == 0) || (uVar5 = FUN_0277d7b4(param_1 + 0x10b30,param_2), (uVar5 & 1) == 0))
       || ((*(char *)(param_1 + 0x10b33) != *(char *)(param_2 + 3) ||
           (*(int *)(param_1 + 0x10b34) != *(int *)(param_2 + 4))))) {
      uVar5 = FUN_0277d9a8(param_1 + 0x10b5c);
      if (((((uVar5 & 1) == 0) ||
           (uVar5 = FUN_0277d7b4(param_1 + 0x10b5c,param_2), (uVar5 & 1) == 0)) ||
          (*(char *)(param_1 + 0x10b5f) != *(char *)(param_2 + 3))) ||
         (*(int *)(param_1 + 0x10b60) != *(int *)(param_2 + 4))) {
        uVar5 = FUN_0277d9a8(param_1 + 0x10b88);
        if ((((uVar5 & 1) == 0) ||
            (uVar5 = FUN_0277d7b4(param_1 + 0x10b88,param_2), (uVar5 & 1) == 0)) ||
           ((*(char *)(param_1 + 0x10b8b) != *(char *)(param_2 + 3) ||
            (*(int *)(param_1 + 0x10b8c) != *(int *)(param_2 + 4))))) {
          uVar5 = FUN_0277d9a8(param_1 + 0x10bb4);
          if (((((uVar5 & 1) == 0) ||
               (uVar5 = FUN_0277d7b4(param_1 + 0x10bb4,param_2), (uVar5 & 1) == 0)) ||
              (*(char *)(param_1 + 0x10bb7) != *(char *)(param_2 + 3))) ||
             (*(int *)(param_1 + 0x10bb8) != *(int *)(param_2 + 4))) {
            uVar5 = FUN_0277d9a8(param_1 + 0x10be0);
            if (((((uVar5 & 1) == 0) ||
                 (uVar5 = FUN_0277d7b4(param_1 + 0x10be0,param_2), (uVar5 & 1) == 0)) ||
                (*(char *)(param_1 + 0x10be3) != *(char *)(param_2 + 3))) ||
               (*(int *)(param_1 + 0x10be4) != *(int *)(param_2 + 4))) {
              uVar5 = FUN_0277d9a8(param_1 + 0x10c0c);
              if ((((uVar5 & 1) == 0) ||
                  (uVar5 = FUN_0277d7b4(param_1 + 0x10c0c,param_2), (uVar5 & 1) == 0)) ||
                 ((*(char *)(param_1 + 0x10c0f) != *(char *)(param_2 + 3) ||
                  (*(int *)(param_1 + 0x10c10) != *(int *)(param_2 + 4))))) {
                uVar5 = FUN_0277d9a8(param_1 + 0x10c38);
                if ((((uVar5 & 1) == 0) ||
                    (uVar5 = FUN_0277d7b4(param_1 + 0x10c38,param_2), (uVar5 & 1) == 0)) ||
                   ((*(char *)(param_1 + 0x10c3b) != *(char *)(param_2 + 3) ||
                    (*(int *)(param_1 + 0x10c3c) != *(int *)(param_2 + 4))))) {
                  uVar5 = FUN_0277d9a8(param_1 + 0x10c64);
                  if (((((uVar5 & 1) == 0) ||
                       (uVar5 = FUN_0277d7b4(param_1 + 0x10c64,param_2), (uVar5 & 1) == 0)) ||
                      (*(char *)(param_1 + 0x10c67) != *(char *)(param_2 + 3))) ||
                     (*(int *)(param_1 + 0x10c68) != *(int *)(param_2 + 4))) {
                    uVar5 = FUN_0277d9a8(param_1 + 0x10c90);
                    if ((((uVar5 & 1) == 0) ||
                        (uVar5 = FUN_0277d7b4(param_1 + 0x10c90,param_2), (uVar5 & 1) == 0)) ||
                       ((*(char *)(param_1 + 0x10c93) != *(char *)(param_2 + 3) ||
                        (*(int *)(param_1 + 0x10c94) != *(int *)(param_2 + 4))))) {
                      uVar5 = FUN_0277d9a8(param_1 + 0x10cbc);
                      if ((((uVar5 & 1) == 0) ||
                          (uVar5 = FUN_0277d7b4(param_1 + 0x10cbc,param_2), (uVar5 & 1) == 0)) ||
                         ((*(char *)(param_1 + 0x10cbf) != *(char *)(param_2 + 3) ||
                          (*(int *)(param_1 + 0x10cc0) != *(int *)(param_2 + 4))))) {
                        uVar5 = FUN_0277d9a8(param_1 + 0x10ce8);
                        if (((((uVar5 & 1) == 0) ||
                             (uVar5 = FUN_0277d7b4(param_1 + 0x10ce8,param_2), (uVar5 & 1) == 0)) ||
                            (*(char *)(param_1 + 0x10ceb) != *(char *)(param_2 + 3))) ||
                           (*(int *)(param_1 + 0x10cec) != *(int *)(param_2 + 4))) {
                          uVar5 = FUN_0277d9a8(param_1 + 0x10d14);
                          if ((((uVar5 & 1) == 0) ||
                              (uVar5 = FUN_0277d7b4(param_1 + 0x10d14,param_2), (uVar5 & 1) == 0))
                             || ((*(char *)(param_1 + 0x10d17) != *(char *)(param_2 + 3) ||
                                 (*(int *)(param_1 + 0x10d18) != *(int *)(param_2 + 4))))) {
                            uVar5 = FUN_0277d9a8(param_1 + 0x10d40);
                            if ((((uVar5 & 1) == 0) ||
                                (uVar5 = FUN_0277d7b4(param_1 + 0x10d40,param_2), (uVar5 & 1) == 0))
                               || ((*(char *)(param_1 + 0x10d43) != *(char *)(param_2 + 3) ||
                                   (*(int *)(param_1 + 0x10d44) != *(int *)(param_2 + 4))))) {
                              lVar7 = -0x20;
                              uVar5 = 0xffffffff;
                              param_1 = param_1 + 0x10d6c;
                              do {
                                uVar4 = FUN_0277d9a8(param_1);
                                if (((((uVar4 & 1) != 0) &&
                                     (uVar4 = FUN_0277d7b4(param_1,param_2), (uVar4 & 1) != 0)) &&
                                    (*(char *)(param_1 + 3) == *(char *)(param_2 + 3))) &&
                                   (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
                                  uVar5 = (ulong)((int)lVar7 + 0x38);
                                  break;
                                }
                                bVar2 = lVar7 != -1;
                                lVar7 = lVar7 + 1;
                                param_1 = param_1 + 0x2c;
                              } while (bVar2);
                            }
                            else {
                              uVar5 = 0x17;
                            }
                          }
                          else {
                            uVar5 = 0x16;
                          }
                        }
                        else {
                          uVar5 = 0x15;
                        }
                      }
                      else {
                        uVar5 = 0x14;
                      }
                    }
                    else {
                      uVar5 = 0x13;
                    }
                  }
                  else {
                    uVar5 = 0x12;
                  }
                }
                else {
                  uVar5 = 0x11;
                }
              }
              else {
                uVar5 = 0x10;
              }
            }
            else {
              uVar5 = 0xf;
            }
          }
          else {
            uVar5 = 0xe;
          }
        }
        else {
          uVar5 = 0xd;
        }
      }
      else {
        uVar5 = 0xc;
      }
    }
    else {
      uVar5 = 0xb;
    }
  }
  else {
    plVar6 = (long *)(param_1 + 0x10958);
    uVar5 = 0;
    do {
      if ((*(int *)((long)plVar6 + -4) == *param_3) &&
         ((*(long *)(param_3 + 1) == *plVar6 && *(long *)(param_3 + 3) == plVar6[1]) &&
          param_3[5] == (int)plVar6[2])) {
        lVar7 = *(long *)puVar1;
        uVar3 = FUN_0277d6c4((long)plVar6 + -0xc);
        if (*(long *)puVar1 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
             ((uVar4 = FUN_0277d7b4((long)plVar6 + -0xc,param_2), (uVar4 & 1) != 0 &&
              ((*(char *)((long)plVar6 + -9) == *(char *)(param_2 + 3) &&
               ((int)plVar6[-1] == *(int *)(param_2 + 4))))))) goto LAB_026a715c;
        }
      }
      uVar5 = uVar5 + 1;
      plVar6 = (long *)((long)plVar6 + 0x2c);
    } while (uVar5 != 0x18);
    plVar6 = (long *)(param_1 + 0x10d78);
    lVar7 = -0x20;
    uVar5 = 0xffffffff;
    do {
      if ((*(int *)((long)plVar6 + -4) == *param_3) &&
         ((*(long *)(param_3 + 1) == *plVar6 && *(long *)(param_3 + 3) == plVar6[1]) &&
          param_3[5] == (int)plVar6[2])) {
        lVar8 = *(long *)puVar1;
        uVar3 = FUN_0277d6c4((long)plVar6 + -0xc);
        if (*(long *)puVar1 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
              (uVar4 = FUN_0277d7b4((long)plVar6 + -0xc,param_2), (uVar4 & 1) != 0)) &&
             ((*(char *)((long)plVar6 + -9) == *(char *)(param_2 + 3) &&
              ((int)plVar6[-1] == *(int *)(param_2 + 4))))) {
            uVar5 = (ulong)((int)lVar7 + 0x38);
            break;
          }
        }
      }
      bVar2 = lVar7 != -1;
      lVar7 = lVar7 + 1;
      plVar6 = (long *)((long)plVar6 + 0x2c);
    } while (bVar2);
  }
LAB_026a715c:
  return uVar5 & 0xffffffff;
}

