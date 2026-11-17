
void FUN_02d55808(long param_1)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auStack_2d7a [2];
  undefined1 auStack_2d78 [5798];
  undefined1 auStack_16d2 [2];
  undefined4 local_16d0 [1448];
  
  lVar1 = param_1 + 0x98;
  FUN_007ef010(auStack_2d7a,lVar1);
  FUN_007e4920(auStack_2d78,auStack_2d7a);
  if (DAT_04c487d4 == -1) {
    return;
  }
  local_16d0[0] = 0;
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 & 1) == 0) {
    local_16d0[0] = 1;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 1 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xa0) == -1) {
      FUN_007ef010(auStack_16d2,lVar1);
      FUN_007e4920(local_16d0,auStack_16d2);
      uVar3 = FUN_007e4bb0(local_16d0);
      if ((uVar3 & 1) != 0) {
        iVar6 = *(int *)(param_1 + 8);
        iVar4 = *(int *)(param_1 + 0xc);
        if (iVar6 < iVar4) {
          puVar7 = *(undefined8 **)(param_1 + 0x18);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar7;
          }
          *(undefined4 *)puVar7 = 0;
          iVar6 = *(int *)(param_1 + 8);
          iVar4 = *(int *)(param_1 + 0xc);
          if (iVar6 < iVar4) {
            *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = puVar7;
            iVar4 = *(int *)(param_1 + 0xc);
            iVar6 = *(int *)(param_1 + 8) + 1;
            *(int *)(param_1 + 8) = iVar6;
          }
        }
        if (iVar6 < iVar4) goto LAB_02d55920;
LAB_02d55a30:
        if (iVar6 < iVar4) goto LAB_02d55c2c;
        goto LAB_02d55c74;
      }
    }
    iVar6 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar6 < iVar4) {
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar7;
      }
      *(undefined4 *)puVar7 = 0;
      iVar6 = *(int *)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0xc);
      if (iVar6 < iVar4) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = puVar7;
        iVar4 = *(int *)(param_1 + 0xc);
        iVar6 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar6;
      }
    }
    if (iVar6 < iVar4) {
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar7;
      }
      *(undefined4 *)puVar7 = 1;
      iVar6 = *(int *)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0xc);
      if (iVar4 <= iVar6) {
        if (iVar4 <= iVar6) goto LAB_02d55c74;
LAB_02d55c08:
        puVar7 = *(undefined8 **)(param_1 + 0x18);
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar7;
        }
        uVar5 = 2;
        goto LAB_02d55c40;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = puVar7;
      iVar4 = *(int *)(param_1 + 0xc);
      iVar6 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar6;
      if (iVar6 < iVar4) goto LAB_02d55c08;
    }
    else if (iVar6 < iVar4) goto LAB_02d55c08;
LAB_02d55c74:
    if (iVar4 <= iVar6) goto LAB_02d55cd0;
  }
  else {
    if (*(int *)(param_1 + 0xa0) == -1) {
      FUN_007ef010(auStack_16d2,lVar1);
      FUN_007e4920(local_16d0,auStack_16d2);
      uVar3 = FUN_007e4bb0(local_16d0);
      if ((uVar3 & 1) != 0) {
        iVar6 = *(int *)(param_1 + 8);
        iVar4 = *(int *)(param_1 + 0xc);
        if (iVar6 < iVar4) {
          puVar7 = *(undefined8 **)(param_1 + 0x18);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar7;
          }
          *(undefined4 *)puVar7 = 0;
          iVar6 = *(int *)(param_1 + 8);
          iVar4 = *(int *)(param_1 + 0xc);
          if (iVar6 < iVar4) {
            *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = puVar7;
            iVar4 = *(int *)(param_1 + 0xc);
            iVar6 = *(int *)(param_1 + 8) + 1;
            *(int *)(param_1 + 8) = iVar6;
          }
        }
        if (iVar4 <= iVar6) goto LAB_02d55a30;
LAB_02d55920:
        puVar7 = *(undefined8 **)(param_1 + 0x18);
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar7;
        }
        *(undefined4 *)puVar7 = 7;
        iVar6 = *(int *)(param_1 + 8);
        iVar4 = *(int *)(param_1 + 0xc);
        if (iVar6 < iVar4) {
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = puVar7;
          iVar4 = *(int *)(param_1 + 0xc);
          iVar6 = *(int *)(param_1 + 8) + 1;
          *(int *)(param_1 + 8) = iVar6;
          if (iVar6 < iVar4) goto LAB_02d55c2c;
        }
        else if (iVar6 < iVar4) {
LAB_02d55c2c:
          puVar7 = *(undefined8 **)(param_1 + 0x18);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar7;
          }
          uVar5 = 1;
          goto LAB_02d55c40;
        }
        goto LAB_02d55c74;
      }
    }
    iVar6 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar6 < iVar4) {
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar7;
      }
      *(undefined4 *)puVar7 = 0;
      iVar6 = *(int *)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0xc);
      if (iVar6 < iVar4) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = puVar7;
        iVar4 = *(int *)(param_1 + 0xc);
        iVar6 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar6;
      }
    }
    if (iVar6 < iVar4) {
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar7;
      }
      *(undefined4 *)puVar7 = 1;
      iVar6 = *(int *)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0xc);
      if (iVar4 <= iVar6) {
        if (iVar6 < iVar4) goto LAB_02d55af4;
        goto LAB_02d55acc;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = puVar7;
      iVar4 = *(int *)(param_1 + 0xc);
      iVar6 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar6;
      if (iVar4 <= iVar6) goto LAB_02d55acc;
LAB_02d55af4:
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar7;
      }
      *(undefined4 *)puVar7 = 0x13;
      iVar6 = *(int *)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0xc);
      if (iVar6 < iVar4) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = puVar7;
        iVar4 = *(int *)(param_1 + 0xc);
        iVar6 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar6;
        if (iVar4 <= iVar6) goto LAB_02d55c74;
      }
      else if (iVar4 <= iVar6) goto LAB_02d55c74;
    }
    else {
      if (iVar6 < iVar4) goto LAB_02d55af4;
LAB_02d55acc:
      if (iVar4 <= iVar6) goto LAB_02d55c74;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x18);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar7;
    }
    uVar5 = 0x14;
LAB_02d55c40:
    *(undefined4 *)puVar7 = uVar5;
    iVar6 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar6 < iVar4) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = puVar7;
      iVar4 = *(int *)(param_1 + 0xc);
      iVar6 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar6;
      if (iVar4 <= iVar6) goto LAB_02d55cd0;
    }
    else if (iVar4 <= iVar6) goto LAB_02d55cd0;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = *puVar7;
  }
  *(undefined4 *)puVar7 = 3;
  iVar6 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar6 < iVar4) {
    *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar6 * 8) = puVar7;
    iVar4 = *(int *)(param_1 + 0xc);
    iVar6 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar6;
  }
LAB_02d55cd0:
  if (iVar6 < iVar4) {
    puVar7 = *(undefined8 **)(param_1 + 0x18);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar7;
    }
    *(undefined4 *)puVar7 = 6;
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar7;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return;
}

