
void FUN_03465b80(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04b2b310;
  if ((*(uint *)(*(long *)(DAT_05231900 + 0x140) + 0x170) & 1) == 0) {
    return;
  }
  if ((*(uint *)(*(long *)(DAT_05231900 + 0x140) + 0x170) >> 1 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x185) == '\0') {
    return;
  }
  lVar3 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar3 + 0x2c) = 0;
    *(undefined4 *)((long)param_1 + lVar3 + 0x30) = 0;
    if ((*(byte *)((long)param_1 + lVar3 + 0xc) & 1) != 0) {
      FUN_015d8190(*(undefined8 *)(DAT_05231900 + 0x140),(long)param_1 + lVar3 + 8);
    }
    if (*(int *)((long)param_1 + lVar3 + 0x28) != -1) {
      *(undefined4 *)((long)param_1 + lVar3 + 0x28) = 0xffffffff;
    }
    lVar1 = DAT_0575aaf0;
    lVar3 = lVar3 + 0x30;
  } while (lVar3 != 0xc00);
  if (*(char *)(param_1 + 0x185) == '\0') {
    return;
  }
  if (*(int *)(DAT_0575aaf0 + 0x10) == 1) {
    iVar2 = *(int *)(DAT_0575aaf0 + 8) + -1;
    if (0 < *(int *)(DAT_0575aaf0 + 8)) {
      *(int *)(DAT_0575aaf0 + 8) = iVar2;
      if (iVar2 == 0) {
        iVar2 = 0;
        *(undefined8 *)(lVar1 + 0xc) = 0x200000000;
      }
      else {
        iVar2 = 2;
      }
      goto LAB_03465c80;
    }
  }
  iVar2 = -2;
LAB_03465c80:
  if (-1 < iVar2) {
    *(undefined1 *)(param_1 + 0x185) = 0;
  }
  return;
}

