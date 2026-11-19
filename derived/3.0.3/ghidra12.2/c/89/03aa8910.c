
void FUN_03aa8910(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  iVar2 = *(int *)(param_1 + 0x81);
  *param_1 = &PTR_LAB_04b70e50;
  param_1[6] = &PTR_LAB_04b70e80;
  param_1[0x42] = &PTR_LAB_04b70ea0;
  puVar3 = PTR_DAT_04bbd510;
  if (iVar2 != 0) {
    lVar4 = param_1[0x82];
    iVar5 = 0;
    do {
      lVar6 = lVar4 + (long)iVar5 * 0x15e8;
      if (*(char *)(lVar6 + 0xc08) != '\0') {
        FUN_039499cc(*(undefined8 *)puVar3,*(undefined8 *)(lVar6 + 0x8c8));
      }
      *(undefined8 *)(lVar6 + 0x8c8) = 0;
      *(undefined1 *)(lVar6 + 0xc08) = 0;
      *(undefined1 *)(lVar4 + (long)iVar5 * 0x15e8 + 0xc0a) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  lVar4 = param_1[0xa1];
  param_1[0xa0] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_03aa8a44;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x500);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[0xa1] = 1;
LAB_03aa8a44:
  puVar3 = PTR_DAT_04bd1070;
  param_1[0x7c] = PTR_DAT_04bbd578 + 0x10;
  param_1[0x42] = puVar3 + 0x10;
  FUN_03aabd30(param_1);
  return;
}

