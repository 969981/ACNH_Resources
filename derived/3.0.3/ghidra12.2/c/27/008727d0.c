
undefined8 FUN_008727d0(undefined8 param_1,uint param_2,byte param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  if (DAT_05574040 == 0) goto LAB_00873110;
  uVar2 = param_2 & 0xffff;
  lVar7 = FUN_026eec4c(DAT_05574040,0);
  if (lVar7 == 0) goto LAB_00872920;
  if (DAT_05574040 == 0) goto LAB_00873110;
  lVar7 = FUN_026eec4c(DAT_05574040,0);
  if (lVar7 == 0) {
LAB_00872920:
    if (DAT_05574040 != 0) {
      lVar7 = FUN_026eec4c(DAT_05574040,1);
      if (lVar7 != 0) {
        if (DAT_05574040 == 0) goto LAB_00873110;
        lVar7 = FUN_026eec4c(DAT_05574040,1);
        if (lVar7 != 0) {
          if (*(long **)(lVar7 + 0x18390) == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18390);
            uVar9 = 0;
            if (puVar8 != (undefined8 *)0x0) {
              uVar9 = (**(code **)*puVar8)();
            }
          }
          pbVar1 = (byte *)(*(long *)(lVar7 + 0x18378) + *(long *)(lVar7 + 0x18370));
          bVar3 = *pbVar1;
          if ((bVar3 - 1 < 0xc) &&
             (bVar4 = pbVar1[1], (byte)(bVar4 - 1) < (byte)(&DAT_0417b531)[bVar3 - 1])) {
            if (((bVar3 == 2) && (bVar4 == 0x1d)) &&
               (((param_2 & 3) != 0 ||
                (((uVar2 * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) < 0x28f5c29 &&
                 ((param_2 & 0xf) != 0)))))) {
              bVar5 = param_3 == 2 && param_4 == 0x1c;
            }
            else {
              bVar5 = false;
              if (bVar3 == param_3) {
                bVar5 = bVar4 == param_4;
              }
            }
          }
          else {
            bVar5 = false;
          }
          if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x18390) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18390) + 8), puVar8 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar8)();
          }
          if (bVar5) goto LAB_00873108;
        }
      }
      if (DAT_05574040 != 0) {
        lVar7 = FUN_026eec4c(DAT_05574040,2);
        if (lVar7 != 0) {
          if (DAT_05574040 == 0) goto LAB_00873110;
          lVar7 = FUN_026eec4c(DAT_05574040,2);
          if (lVar7 != 0) {
            if (*(long **)(lVar7 + 0x18390) == (long *)0x0) {
              uVar9 = 0;
            }
            else {
              puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18390);
              uVar9 = 0;
              if (puVar8 != (undefined8 *)0x0) {
                uVar9 = (**(code **)*puVar8)();
              }
            }
            pbVar1 = (byte *)(*(long *)(lVar7 + 0x18378) + *(long *)(lVar7 + 0x18370));
            bVar3 = *pbVar1;
            if ((bVar3 - 1 < 0xc) &&
               (bVar4 = pbVar1[1], (byte)(bVar4 - 1) < (byte)(&DAT_0417b531)[bVar3 - 1])) {
              if (((bVar3 == 2) && (bVar4 == 0x1d)) &&
                 (((param_2 & 3) != 0 ||
                  (((uVar2 * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) < 0x28f5c29 &&
                   ((param_2 & 0xf) != 0)))))) {
                bVar5 = param_3 == 2 && param_4 == 0x1c;
              }
              else {
                bVar5 = false;
                if (bVar3 == param_3) {
                  bVar5 = bVar4 == param_4;
                }
              }
            }
            else {
              bVar5 = false;
            }
            if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x18390) != 0)) &&
               (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18390) + 8),
               puVar8 != (undefined8 *)0x0)) {
              (**(code **)*puVar8)();
            }
            if (bVar5) goto LAB_00873108;
          }
        }
        if (DAT_05574040 != 0) {
          lVar7 = FUN_026eec4c(DAT_05574040,3);
          if (lVar7 != 0) {
            if (DAT_05574040 == 0) goto LAB_00873110;
            lVar7 = FUN_026eec4c(DAT_05574040,3);
            if (lVar7 != 0) {
              if (*(long **)(lVar7 + 0x18390) == (long *)0x0) {
                uVar9 = 0;
              }
              else {
                puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18390);
                uVar9 = 0;
                if (puVar8 != (undefined8 *)0x0) {
                  uVar9 = (**(code **)*puVar8)();
                }
              }
              pbVar1 = (byte *)(*(long *)(lVar7 + 0x18378) + *(long *)(lVar7 + 0x18370));
              bVar3 = *pbVar1;
              if ((bVar3 - 1 < 0xc) &&
                 (bVar4 = pbVar1[1], (byte)(bVar4 - 1) < (byte)(&DAT_0417b531)[bVar3 - 1])) {
                if (((bVar3 == 2) && (bVar4 == 0x1d)) &&
                   (((param_2 & 3) != 0 ||
                    (((uVar2 * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) < 0x28f5c29 &&
                     ((param_2 & 0xf) != 0)))))) {
                  bVar5 = param_3 == 2 && param_4 == 0x1c;
                }
                else {
                  bVar5 = false;
                  if (bVar3 == param_3) {
                    bVar5 = bVar4 == param_4;
                  }
                }
              }
              else {
                bVar5 = false;
              }
              if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x18390) != 0)) &&
                 (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18390) + 8),
                 puVar8 != (undefined8 *)0x0)) {
                (**(code **)*puVar8)();
              }
              if (bVar5) goto LAB_00873108;
            }
          }
          if (DAT_05574040 != 0) {
            lVar7 = FUN_026eec4c(DAT_05574040,4);
            if (lVar7 != 0) {
              if (DAT_05574040 == 0) goto LAB_00873110;
              lVar7 = FUN_026eec4c(DAT_05574040,4);
              if (lVar7 != 0) {
                if (*(long **)(lVar7 + 0x18390) == (long *)0x0) {
                  uVar9 = 0;
                }
                else {
                  puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18390);
                  uVar9 = 0;
                  if (puVar8 != (undefined8 *)0x0) {
                    uVar9 = (**(code **)*puVar8)();
                  }
                }
                pbVar1 = (byte *)(*(long *)(lVar7 + 0x18378) + *(long *)(lVar7 + 0x18370));
                bVar3 = *pbVar1;
                if ((bVar3 - 1 < 0xc) &&
                   (bVar4 = pbVar1[1], (byte)(bVar4 - 1) < (byte)(&DAT_0417b531)[bVar3 - 1])) {
                  if (((bVar3 == 2) && (bVar4 == 0x1d)) &&
                     (((param_2 & 3) != 0 ||
                      (((uVar2 * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) < 0x28f5c29 &&
                       ((param_2 & 0xf) != 0)))))) {
                    bVar5 = param_3 == 2 && param_4 == 0x1c;
                  }
                  else {
                    bVar5 = false;
                    if (bVar3 == param_3) {
                      bVar5 = bVar4 == param_4;
                    }
                  }
                }
                else {
                  bVar5 = false;
                }
                if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x18390) != 0)) &&
                   (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18390) + 8),
                   puVar8 != (undefined8 *)0x0)) {
                  (**(code **)*puVar8)();
                }
                if (bVar5) goto LAB_00873108;
              }
            }
            if (DAT_05574040 != 0) {
              lVar7 = FUN_026eec4c(DAT_05574040,5);
              if (lVar7 != 0) {
                if (DAT_05574040 == 0) goto LAB_00873110;
                lVar7 = FUN_026eec4c(DAT_05574040,5);
                if (lVar7 != 0) {
                  if (*(long **)(lVar7 + 0x18390) == (long *)0x0) {
                    uVar9 = 0;
                  }
                  else {
                    puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18390);
                    uVar9 = 0;
                    if (puVar8 != (undefined8 *)0x0) {
                      uVar9 = (**(code **)*puVar8)();
                    }
                  }
                  pbVar1 = (byte *)(*(long *)(lVar7 + 0x18378) + *(long *)(lVar7 + 0x18370));
                  bVar3 = *pbVar1;
                  if ((bVar3 - 1 < 0xc) &&
                     (bVar4 = pbVar1[1], (byte)(bVar4 - 1) < (byte)(&DAT_0417b531)[bVar3 - 1])) {
                    if (((bVar3 == 2) && (bVar4 == 0x1d)) &&
                       (((param_2 & 3) != 0 ||
                        (((uVar2 * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) < 0x28f5c29 &&
                         ((param_2 & 0xf) != 0)))))) {
                      bVar5 = param_3 == 2 && param_4 == 0x1c;
                    }
                    else {
                      bVar5 = false;
                      if (bVar3 == param_3) {
                        bVar5 = bVar4 == param_4;
                      }
                    }
                  }
                  else {
                    bVar5 = false;
                  }
                  if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x18390) != 0)) &&
                     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18390) + 8),
                     puVar8 != (undefined8 *)0x0)) {
                    (**(code **)*puVar8)();
                  }
                  if (bVar5) goto LAB_00873108;
                }
              }
              if (DAT_05574040 != 0) {
                lVar7 = FUN_026eec4c(DAT_05574040,6);
                if (lVar7 != 0) {
                  if (DAT_05574040 == 0) goto LAB_00873110;
                  lVar7 = FUN_026eec4c(DAT_05574040,6);
                  if (lVar7 != 0) {
                    if (*(long **)(lVar7 + 0x18390) == (long *)0x0) {
                      uVar9 = 0;
                    }
                    else {
                      puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18390);
                      uVar9 = 0;
                      if (puVar8 != (undefined8 *)0x0) {
                        uVar9 = (**(code **)*puVar8)();
                      }
                    }
                    pbVar1 = (byte *)(*(long *)(lVar7 + 0x18378) + *(long *)(lVar7 + 0x18370));
                    bVar3 = *pbVar1;
                    if ((bVar3 - 1 < 0xc) &&
                       (bVar4 = pbVar1[1], (byte)(bVar4 - 1) < (byte)(&DAT_0417b531)[bVar3 - 1])) {
                      if (((bVar3 == 2) && (bVar4 == 0x1d)) &&
                         (((param_2 & 3) != 0 ||
                          (((uVar2 * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) < 0x28f5c29 &&
                           ((param_2 & 0xf) != 0)))))) {
                        bVar5 = param_3 == 2 && param_4 == 0x1c;
                      }
                      else {
                        bVar5 = false;
                        if (bVar3 == param_3) {
                          bVar5 = bVar4 == param_4;
                        }
                      }
                    }
                    else {
                      bVar5 = false;
                    }
                    if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x18390) != 0)) &&
                       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18390) + 8),
                       puVar8 != (undefined8 *)0x0)) {
                      (**(code **)*puVar8)();
                    }
                    if (bVar5) goto LAB_00873108;
                  }
                }
                if (((DAT_05574040 != 0) && (lVar7 = FUN_026eec4c(DAT_05574040,7), lVar7 != 0)) &&
                   ((DAT_05574040 != 0 && (lVar7 = FUN_026eec4c(DAT_05574040,7), lVar7 != 0)))) {
                  if ((*(long **)(lVar7 + 0x18390) == (long *)0x0) ||
                     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18390),
                     puVar8 == (undefined8 *)0x0)) {
                    uVar6 = 1;
                  }
                  else {
                    uVar6 = (**(code **)*puVar8)();
                    uVar6 = uVar6 ^ 1;
                  }
                  pbVar1 = (byte *)(*(long *)(lVar7 + 0x18378) + *(long *)(lVar7 + 0x18370));
                  bVar3 = *pbVar1;
                  if ((bVar3 - 1 < 0xc) &&
                     (bVar4 = pbVar1[1], (byte)(bVar4 - 1) < (byte)(&DAT_0417b531)[bVar3 - 1])) {
                    if (((bVar3 == 2) && (bVar4 == 0x1d)) &&
                       (((param_2 & 3) != 0 ||
                        (((uVar2 * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) < 0x28f5c29 &&
                         ((param_2 & 0xf) != 0)))))) {
                      bVar5 = param_3 == 2 && param_4 == 0x1c;
                    }
                    else {
                      bVar5 = false;
                      if (bVar3 == param_3) {
                        bVar5 = bVar4 == param_4;
                      }
                    }
                  }
                  else {
                    bVar5 = false;
                  }
                  if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x18390) != 0)) &&
                     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18390) + 8),
                     puVar8 != (undefined8 *)0x0)) {
                    (**(code **)*puVar8)();
                  }
                  if (bVar5) goto LAB_00873108;
                }
              }
            }
          }
        }
      }
    }
LAB_00873110:
    uVar10 = 0;
  }
  else {
    if (*(long **)(lVar7 + 0x18390) == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18390);
      uVar9 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        uVar9 = (**(code **)*puVar8)();
      }
    }
    pbVar1 = (byte *)(*(long *)(lVar7 + 0x18378) + *(long *)(lVar7 + 0x18370));
    bVar3 = *pbVar1;
    if ((bVar3 - 1 < 0xc) &&
       (bVar4 = pbVar1[1], (byte)(bVar4 - 1) < (byte)(&DAT_0417b531)[bVar3 - 1])) {
      if ((bVar3 == 2 && bVar4 == 0x1d) &&
         (((param_2 & 3) != 0 ||
          (((uVar2 * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) < 0x28f5c29 && ((param_2 & 0xf) != 0))
          )))) {
        bVar5 = false;
        if (param_3 == 2) {
          bVar5 = param_4 == 0x1c;
        }
      }
      else {
        bVar5 = bVar3 == param_3 && bVar4 == param_4;
      }
    }
    else {
      bVar5 = false;
    }
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x18390) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18390) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    if (!bVar5) goto LAB_00872920;
LAB_00873108:
    uVar10 = 1;
  }
  return uVar10;
}

