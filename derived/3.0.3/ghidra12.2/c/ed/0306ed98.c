
void FUN_0306ed98(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_16c2 [2];
  undefined4 local_16c0 [1448];
  
  if (DAT_04c487d4 == -1) {
    return;
  }
  local_16c0[0] = 0x15;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 0x15 & 1) == 0) {
    local_16c0[0] = 1;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xa0) == -1) {
      FUN_007ef010(auStack_16c2,param_1 + 0x98);
      FUN_007e4920(local_16c0,auStack_16c2);
      uVar2 = FUN_007e4bb0(local_16c0);
      if ((uVar2 & 1) == 0) goto LAB_0306f0e0;
      iVar5 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar5 < iVar3) {
        puVar6 = *(undefined8 **)(param_1 + 0x18);
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar6;
        }
        *(undefined4 *)puVar6 = 0;
        iVar5 = *(int *)(param_1 + 8);
        iVar3 = *(int *)(param_1 + 0xc);
        if (iVar5 < iVar3) {
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar6;
          iVar3 = *(int *)(param_1 + 0xc);
          iVar5 = *(int *)(param_1 + 8) + 1;
          *(int *)(param_1 + 8) = iVar5;
        }
      }
      if (iVar3 <= iVar5) goto LAB_0306f18c;
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar6;
      }
      *(undefined4 *)puVar6 = 7;
      iVar5 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar3 <= iVar5) goto LAB_0306f18c;
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar6;
LAB_0306f118:
      iVar3 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
    }
    else {
LAB_0306f0e0:
      iVar5 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar5 < iVar3) {
        puVar6 = *(undefined8 **)(param_1 + 0x18);
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar6;
        }
        *(undefined4 *)puVar6 = 0;
        iVar5 = *(int *)(param_1 + 8);
        iVar3 = *(int *)(param_1 + 0xc);
        if (iVar5 < iVar3) {
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar6;
          goto LAB_0306f118;
        }
      }
    }
    goto LAB_0306f18c;
  }
  if (*(int *)(param_1 + 0xa0) == -1) {
    FUN_007ef010(auStack_16c2,param_1 + 0x98);
    FUN_007e4920(local_16c0,auStack_16c2);
    uVar2 = FUN_007e4bb0(local_16c0);
    if ((uVar2 & 1) == 0) goto LAB_0306efb0;
    iVar5 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar5 < iVar3) {
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar6;
      }
      *(undefined4 *)puVar6 = 0;
      iVar5 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar5 < iVar3) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar6;
        iVar3 = *(int *)(param_1 + 0xc);
        iVar5 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar5;
      }
    }
    if (iVar3 <= iVar5) {
      if (iVar5 < iVar3) goto LAB_0306f160;
      goto LAB_0306f18c;
    }
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar6;
    }
    *(undefined4 *)puVar6 = 7;
    iVar5 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar5 < iVar3) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar6;
      iVar3 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
      if (iVar5 < iVar3) goto LAB_0306f160;
      goto LAB_0306f18c;
    }
    if (iVar3 <= iVar5) goto LAB_0306f18c;
LAB_0306f160:
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar6;
    }
    uVar4 = 1;
LAB_0306f05c:
    *(undefined4 *)puVar6 = uVar4;
    iVar5 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar5 < iVar3) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar6;
      iVar3 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
      if (iVar5 < iVar3) goto LAB_0306f194;
    }
    else if (iVar5 < iVar3) {
LAB_0306f194:
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar6;
      }
      *(undefined4 *)puVar6 = 3;
      iVar5 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 0xc) <= iVar5) {
        if (*(int *)(param_1 + 0xc) <= iVar5) {
          return;
        }
        goto LAB_0306f1d8;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar6;
      iVar3 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
    }
  }
  else {
LAB_0306efb0:
    iVar5 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar5 < iVar3) {
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar6;
      }
      *(undefined4 *)puVar6 = 0;
      iVar5 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar5 < iVar3) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar6;
        iVar3 = *(int *)(param_1 + 0xc);
        iVar5 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar5;
      }
    }
    if (iVar5 < iVar3) {
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar6;
      }
      *(undefined4 *)puVar6 = 1;
      iVar5 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar3 <= iVar5) {
        if (iVar3 <= iVar5) goto LAB_0306f040;
        goto LAB_0306f098;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar6;
      iVar3 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
      if (iVar5 < iVar3) goto LAB_0306f098;
LAB_0306f040:
      if (iVar3 <= iVar5) goto LAB_0306f18c;
LAB_0306f048:
      puVar6 = *(undefined8 **)(param_1 + 0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar6;
      }
      uVar4 = 0x14;
      goto LAB_0306f05c;
    }
    if (iVar3 <= iVar5) goto LAB_0306f040;
LAB_0306f098:
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar6;
    }
    *(undefined4 *)puVar6 = 0x13;
    iVar5 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar5 < iVar3) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar6;
      iVar3 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
      if (iVar5 < iVar3) goto LAB_0306f048;
    }
    else if (iVar5 < iVar3) goto LAB_0306f048;
LAB_0306f18c:
    if (iVar5 < iVar3) goto LAB_0306f194;
  }
  if (iVar3 <= iVar5) {
    return;
  }
LAB_0306f1d8:
  puVar6 = *(undefined8 **)(param_1 + 0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = *puVar6;
  }
  *(undefined4 *)puVar6 = 6;
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar6;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

