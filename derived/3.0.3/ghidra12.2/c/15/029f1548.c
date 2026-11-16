
void FUN_029f1548(long param_1,undefined1 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 local_68 [8];
  undefined1 local_60;
  long local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  
  lVar4 = *(long *)PTR_DAT_04bb26a8;
  nn::os::LockMutex((MutexType *)(lVar4 + 0x896c8));
  cVar1 = *(char *)(lVar4 + 0x89692);
  lVar5 = *(long *)(lVar4 + 0x89698);
  lVar6 = *(long *)(lVar4 + 0x896a0);
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x896c8));
  if (cVar1 != '\0') {
    lVar4 = (long)(DAT_05ae7888 *
                   (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                   (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000;
    if (-1 < lVar5) {
      lVar6 = lVar4 - lVar6;
      lVar2 = 0;
      if (DAT_05ae7888 != 0) {
        lVar2 = lVar6 / DAT_05ae7888;
      }
      lVar3 = 0;
      if (DAT_05ae7888 != 0) {
        lVar3 = (lVar6 * 1000) / DAT_05ae7888;
      }
      lVar2 = lVar2 * 1000;
      if (lVar6 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
        lVar2 = lVar3;
      }
      lVar5 = lVar2 + lVar5;
    }
    local_68[0] = 0;
    local_50 = 0;
    if ((*(byte *)(param_1 + 0x82) & 1) != 0) {
      local_60 = 0;
      local_48 = 0;
      lVar4 = *(long *)(param_1 + 0x78) - lVar4;
      local_42 = 0;
      lVar6 = 0;
      if (DAT_05ae7888 != 0) {
        lVar6 = lVar4 / DAT_05ae7888;
      }
      lVar2 = 0;
      if (DAT_05ae7888 != 0) {
        lVar2 = (lVar4 * 1000) / DAT_05ae7888;
      }
      local_58 = lVar6 * 1000;
      if (lVar4 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
        local_58 = lVar2;
      }
      local_58 = local_58 + lVar5;
      local_44 = 4;
      local_4f = 1;
      local_43 = *param_2;
      if (-1 < *(int *)(param_1 + 8)) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(param_1 + 8),&local_48,local_68,
                     0x20,0);
      }
    }
  }
  return;
}

