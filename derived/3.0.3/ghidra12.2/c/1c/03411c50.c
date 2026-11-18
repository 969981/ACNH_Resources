
void FUN_03411c50(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04b29ed8;
  puVar1 = PTR_DAT_04bb4b48;
  if ((*(uint *)(*(long *)(DAT_05231900 + 0x148) + 0xf8) & 1) == 0) {
    return;
  }
  if ((*(uint *)(*(long *)(DAT_05231900 + 0x148) + 0xf8) >> 1 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x65) == '\0') {
    return;
  }
  lVar4 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar4 + 0x2c) = 0;
    *(undefined4 *)((long)param_1 + lVar4 + 0x30) = 0;
    if ((*(byte *)((long)param_1 + lVar4 + 0xc) & 1) != 0) {
      FUN_01585f30(*(undefined8 *)(DAT_05231900 + 0x148),(long)param_1 + lVar4 + 8);
    }
    if (*(int *)((long)param_1 + lVar4 + 0x28) != *(int *)puVar1) {
      *(int *)((long)param_1 + lVar4 + 0x28) = *(int *)puVar1;
    }
    lVar2 = DAT_057514a0;
    lVar4 = lVar4 + 0x30;
  } while (lVar4 != 0x300);
  if (*(char *)(param_1 + 0x65) == '\0') {
    return;
  }
  if (*(int *)(DAT_057514a0 + 0x10) == 1) {
    iVar3 = *(int *)(DAT_057514a0 + 8) + -1;
    if (0 < *(int *)(DAT_057514a0 + 8)) {
      *(int *)(DAT_057514a0 + 8) = iVar3;
      if (iVar3 == 0) {
        iVar3 = 0;
        *(undefined8 *)(lVar2 + 0xc) = 0x200000000;
      }
      else {
        iVar3 = 2;
      }
      goto LAB_03411d64;
    }
  }
  iVar3 = -2;
LAB_03411d64:
  if (-1 < iVar3) {
    *(undefined1 *)(param_1 + 0x65) = 0;
  }
  return;
}

