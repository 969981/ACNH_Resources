
undefined8 FUN_02a1db74(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  if (*(int *)(param_1 + 0xac) <= *(int *)(param_1 + 0xa8)) goto LAB_02a1dcd0;
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = *puVar3;
  }
  *puVar3 = 0;
  iVar2 = *(int *)(param_1 + 0xa8);
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar2 < iVar1) {
    *(undefined8 **)(*(long *)(param_1 + 0xb0) + (long)iVar2 * 8) = puVar3;
    iVar1 = *(int *)(param_1 + 0xac);
    iVar2 = *(int *)(param_1 + 0xa8) + 1;
    *(int *)(param_1 + 0xa8) = iVar2;
    if (iVar1 <= iVar2) goto LAB_02a1dbc4;
LAB_02a1dbf8:
    puVar3 = *(undefined8 **)(param_1 + 0xb8);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xb8) = *puVar3;
    }
    *puVar3 = 0;
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar1 = *(int *)(param_1 + 0xac);
    if (iVar2 < iVar1) {
      *(undefined8 **)(*(long *)(param_1 + 0xb0) + (long)iVar2 * 8) = puVar3;
      iVar1 = *(int *)(param_1 + 0xac);
      iVar2 = *(int *)(param_1 + 0xa8) + 1;
      *(int *)(param_1 + 0xa8) = iVar2;
      if (iVar2 < iVar1) goto LAB_02a1dc48;
      goto LAB_02a1dbcc;
    }
    if (iVar1 <= iVar2) goto LAB_02a1dbcc;
LAB_02a1dc48:
    puVar3 = *(undefined8 **)(param_1 + 0xb8);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xb8) = *puVar3;
    }
    *puVar3 = 0;
    iVar2 = *(int *)(param_1 + 0xa8);
    if (iVar2 < *(int *)(param_1 + 0xac)) {
      *(undefined8 **)(*(long *)(param_1 + 0xb0) + (long)iVar2 * 8) = puVar3;
      iVar2 = *(int *)(param_1 + 0xa8) + 1;
      *(int *)(param_1 + 0xa8) = iVar2;
      if (*(int *)(param_1 + 0xac) <= iVar2) goto LAB_02a1dcd0;
    }
    else if (*(int *)(param_1 + 0xac) <= iVar2) goto LAB_02a1dcd0;
  }
  else {
    if (iVar2 < iVar1) goto LAB_02a1dbf8;
LAB_02a1dbc4:
    if (iVar2 < iVar1) goto LAB_02a1dc48;
LAB_02a1dbcc:
    if (iVar1 <= iVar2) goto LAB_02a1dcd0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = *puVar3;
  }
  *puVar3 = 0;
  if (*(int *)(param_1 + 0xa8) < *(int *)(param_1 + 0xac)) {
    *(undefined8 **)(*(long *)(param_1 + 0xb0) + (long)*(int *)(param_1 + 0xa8) * 8) = puVar3;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  }
LAB_02a1dcd0:
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return 1;
}

