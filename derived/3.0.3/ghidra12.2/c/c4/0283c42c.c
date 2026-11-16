
void FUN_0283c42c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_04a91760;
  lVar2 = DAT_055a1b78;
  if (DAT_055a1b68 == param_1) {
    DAT_055a1b68 = (undefined8 *)0x0;
    if (*(char *)(DAT_055a1b78 + 0xb8) != '\0') {
      if (*(uint *)(DAT_055a1b78 + 0xb0) != 0xffffffff) {
        (*(code *)(&PTR_FUN_04a434e0)[*(uint *)(DAT_055a1b78 + 0xb0)])
                  (&uStack_11,DAT_055a1b78 + 0x70);
      }
      *(undefined1 *)(lVar2 + 0xb8) = 0;
      *(undefined4 *)(lVar2 + 0xb0) = 0xffffffff;
    }
    if (*(char *)(lVar2 + 0xc4) != '\0') {
      *(undefined1 *)(lVar2 + 0xc4) = 0;
    }
    if (*(char *)(lVar2 + 0x1f8) != '\0') {
      *(undefined1 *)(lVar2 + 0x1f8) = 0;
    }
    if (*(char *)(lVar2 + 0x20c) != '\0') {
      *(undefined1 *)(lVar2 + 0x20c) = 0;
    }
    if (*(char *)(lVar2 + 0x204) != '\0') {
      *(undefined1 *)(lVar2 + 0x204) = 0;
    }
    DAT_055a1b78 = 0;
  }
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      return;
    }
    if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

