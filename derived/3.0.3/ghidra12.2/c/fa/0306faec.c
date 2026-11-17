
void FUN_0306faec(long param_1)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_2d7a [2];
  undefined1 auStack_2d78 [5798];
  undefined1 auStack_16d2 [2];
  undefined8 local_16d0;
  char *pcStack_16c8;
  
  lVar1 = param_1 + 0x98;
  FUN_007ef010(auStack_2d7a,lVar1);
  FUN_007e4920(auStack_2d78,auStack_2d7a);
  uVar3 = local_16d0._4_4_;
  if (DAT_04c487d4 == -1) {
    return;
  }
  local_16d0 = (undefined *)((ulong)local_16d0._4_4_ << 0x20);
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 & 1) == 0) {
    local_16d0 = (undefined *)CONCAT44(uVar3,1);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xa0) == -1) {
      FUN_007ef010(auStack_16d2,lVar1);
      FUN_007e4920(&local_16d0,auStack_16d2);
      uVar6 = FUN_007e4bb0(&local_16d0);
      if ((uVar6 & 1) == 0) goto LAB_0306fcfc;
      iVar4 = *(int *)(param_1 + 8);
      iVar5 = *(int *)(param_1 + 0xc);
      if (iVar4 < iVar5) {
        puVar7 = *(undefined8 **)(param_1 + 0x18);
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar7;
        }
        *(undefined4 *)puVar7 = 0;
        iVar4 = *(int *)(param_1 + 8);
        iVar5 = *(int *)(param_1 + 0xc);
        if (iVar4 < iVar5) {
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
          iVar5 = *(int *)(param_1 + 0xc);
          iVar4 = *(int *)(param_1 + 8) + 1;
          *(int *)(param_1 + 8) = iVar4;
        }
      }
      if (iVar5 <= iVar4) goto LAB_0306fcf0;
LAB_0306fe7c:
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar7;
      }
      *(undefined4 *)puVar7 = 7;
      iVar4 = *(int *)(param_1 + 8);
      iVar5 = *(int *)(param_1 + 0xc);
      if (iVar5 <= iVar4) {
        if (iVar5 <= iVar4) goto LAB_03070154;
LAB_030700f8:
        puVar7 = *(undefined8 **)(param_1 + 0x18);
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar7;
        }
        uVar8 = 1;
        goto LAB_0307010c;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
      iVar5 = *(int *)(param_1 + 0xc);
      iVar4 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 < iVar5) goto LAB_030700f8;
    }
    else {
LAB_0306fcfc:
      iVar4 = *(int *)(param_1 + 8);
      iVar5 = *(int *)(param_1 + 0xc);
      if (iVar4 < iVar5) {
        puVar7 = *(undefined8 **)(param_1 + 0x18);
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar7;
        }
        *(undefined4 *)puVar7 = 0;
        iVar4 = *(int *)(param_1 + 8);
        iVar5 = *(int *)(param_1 + 0xc);
        if (iVar4 < iVar5) {
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
          iVar5 = *(int *)(param_1 + 0xc);
          iVar4 = *(int *)(param_1 + 8) + 1;
          *(int *)(param_1 + 8) = iVar4;
        }
      }
      if (iVar4 < iVar5) {
        puVar7 = *(undefined8 **)(param_1 + 0x18);
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar7;
        }
        *(undefined4 *)puVar7 = 1;
        iVar4 = *(int *)(param_1 + 8);
        iVar5 = *(int *)(param_1 + 0xc);
        if (iVar4 < iVar5) {
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
          iVar5 = *(int *)(param_1 + 0xc);
          iVar4 = *(int *)(param_1 + 8) + 1;
          *(int *)(param_1 + 8) = iVar4;
          if (iVar4 < iVar5) {
LAB_0306fda8:
            puVar7 = *(undefined8 **)(param_1 + 0x18);
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x18) = *puVar7;
            }
            uVar8 = 2;
            goto LAB_0307010c;
          }
        }
        else if (iVar4 < iVar5) goto LAB_0306fda8;
      }
      else if (iVar4 < iVar5) goto LAB_0306fda8;
    }
LAB_03070154:
    if (iVar4 < iVar5) goto LAB_0307015c;
  }
  else {
    uVar6 = FUN_02915598(param_1 + 0x9a);
    if ((uVar6 & 1) == 0) {
      if (DAT_053d2ea8 != 0) {
        local_16d0 = PTR_DAT_04bb2020 + 0x10;
        pcStack_16c8 = "NpcInteriorCoordinate";
        iVar4 = FUN_02743000(&local_16d0);
        if (iVar4 != 0) goto LAB_0306fdf0;
      }
      iVar4 = 0;
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          iVar4 = 0;
        }
        else {
          puVar7 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar5 = FUN_006bd550(*puVar7,0);
          iVar4 = 0;
          if ((iVar5 == 0x758f7eaf) && (iVar4 = 0, DAT_05aed670 != 0)) {
            iVar4 = 0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              iVar4 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
            }
          }
        }
      }
      if (((DAT_05292434 != iVar4) || (DAT_0523adf0 == 0)) || (*(int *)(DAT_0523adf0 + 0x98) == 0))
      {
        if (*(int *)(param_1 + 0xa0) == -1) {
          FUN_007ef010(auStack_16d2,lVar1);
          FUN_007e4920(&local_16d0,auStack_16d2);
          uVar6 = FUN_007e4bb0(&local_16d0);
          if ((uVar6 & 1) == 0) goto LAB_03070070;
          iVar4 = *(int *)(param_1 + 8);
          iVar5 = *(int *)(param_1 + 0xc);
          if (iVar4 < iVar5) {
            puVar7 = *(undefined8 **)(param_1 + 0x18);
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x18) = *puVar7;
            }
            *(undefined4 *)puVar7 = 0;
            iVar4 = *(int *)(param_1 + 8);
            iVar5 = *(int *)(param_1 + 0xc);
            if (iVar4 < iVar5) {
              *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
              iVar5 = *(int *)(param_1 + 0xc);
              iVar4 = *(int *)(param_1 + 8) + 1;
              *(int *)(param_1 + 8) = iVar4;
            }
          }
          if (iVar4 < iVar5) {
            puVar7 = *(undefined8 **)(param_1 + 0x18);
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x18) = *puVar7;
            }
            *(undefined4 *)puVar7 = 7;
            iVar4 = *(int *)(param_1 + 8);
            iVar5 = *(int *)(param_1 + 0xc);
            if (iVar5 <= iVar4) goto LAB_03070154;
            *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
            goto LAB_030700a8;
          }
        }
        else {
LAB_03070070:
          iVar4 = *(int *)(param_1 + 8);
          iVar5 = *(int *)(param_1 + 0xc);
          if (iVar4 < iVar5) {
            puVar7 = *(undefined8 **)(param_1 + 0x18);
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x18) = *puVar7;
            }
            *(undefined4 *)puVar7 = 0;
            iVar4 = *(int *)(param_1 + 8);
            iVar5 = *(int *)(param_1 + 0xc);
            if (iVar4 < iVar5) {
              *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
LAB_030700a8:
              iVar5 = *(int *)(param_1 + 0xc);
              iVar4 = *(int *)(param_1 + 8) + 1;
              *(int *)(param_1 + 8) = iVar4;
            }
          }
        }
        goto LAB_03070154;
      }
    }
LAB_0306fdf0:
    if (*(int *)(param_1 + 0xa0) == -1) {
      FUN_007ef010(auStack_16d2,lVar1);
      FUN_007e4920(&local_16d0,auStack_16d2);
      uVar6 = FUN_007e4bb0(&local_16d0);
      if ((uVar6 & 1) != 0) {
        iVar4 = *(int *)(param_1 + 8);
        iVar5 = *(int *)(param_1 + 0xc);
        if (iVar4 < iVar5) {
          puVar7 = *(undefined8 **)(param_1 + 0x18);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar7;
          }
          *(undefined4 *)puVar7 = 0;
          iVar4 = *(int *)(param_1 + 8);
          iVar5 = *(int *)(param_1 + 0xc);
          if (iVar4 < iVar5) {
            *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
            iVar5 = *(int *)(param_1 + 0xc);
            iVar4 = *(int *)(param_1 + 8) + 1;
            *(int *)(param_1 + 8) = iVar4;
          }
        }
        if (iVar4 < iVar5) goto LAB_0306fe7c;
LAB_0306fcf0:
        if (iVar5 <= iVar4) goto LAB_03070154;
        goto LAB_030700f8;
      }
    }
    iVar4 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc);
    if (iVar4 < iVar5) {
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar7;
      }
      *(undefined4 *)puVar7 = 0;
      iVar4 = *(int *)(param_1 + 8);
      iVar5 = *(int *)(param_1 + 0xc);
      if (iVar4 < iVar5) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
        iVar5 = *(int *)(param_1 + 0xc);
        iVar4 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar4;
      }
    }
    if (iVar4 < iVar5) {
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar7;
      }
      *(undefined4 *)puVar7 = 1;
      iVar4 = *(int *)(param_1 + 8);
      iVar5 = *(int *)(param_1 + 0xc);
      if (iVar5 <= iVar4) {
        if (iVar4 < iVar5) goto LAB_0306ff68;
        goto LAB_0306ff54;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
      iVar5 = *(int *)(param_1 + 0xc);
      iVar4 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar4;
      if (iVar5 <= iVar4) goto LAB_0306ff54;
LAB_0306ff68:
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar7;
      }
      *(undefined4 *)puVar7 = 0x13;
      iVar4 = *(int *)(param_1 + 8);
      iVar5 = *(int *)(param_1 + 0xc);
      if (iVar4 < iVar5) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
        iVar5 = *(int *)(param_1 + 0xc);
        iVar4 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar4;
        if (iVar5 <= iVar4) goto LAB_03070154;
      }
      else if (iVar5 <= iVar4) goto LAB_03070154;
    }
    else {
      if (iVar4 < iVar5) goto LAB_0306ff68;
LAB_0306ff54:
      if (iVar5 <= iVar4) goto LAB_03070154;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x18);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar7;
    }
    uVar8 = 0x14;
LAB_0307010c:
    *(undefined4 *)puVar7 = uVar8;
    iVar4 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc);
    if (iVar4 < iVar5) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
      iVar5 = *(int *)(param_1 + 0xc);
      iVar4 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 < iVar5) goto LAB_0307015c;
    }
    else if (iVar4 < iVar5) {
LAB_0307015c:
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar7;
      }
      *(undefined4 *)puVar7 = 3;
      iVar4 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 0xc) <= iVar4) {
        if (*(int *)(param_1 + 0xc) <= iVar4) {
          return;
        }
        goto LAB_030701a0;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar4 * 8) = puVar7;
      iVar5 = *(int *)(param_1 + 0xc);
      iVar4 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar4;
    }
  }
  if (iVar5 <= iVar4) {
    return;
  }
LAB_030701a0:
  puVar7 = *(undefined8 **)(param_1 + 0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = *puVar7;
  }
  *(undefined4 *)puVar7 = 6;
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar7;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

