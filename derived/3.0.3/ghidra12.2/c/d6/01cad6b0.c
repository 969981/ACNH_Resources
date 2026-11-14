
uint FUN_01cad6b0(undefined1 **param_1)

{
  uint uVar1;
  undefined1 **local_80;
  undefined1 **ppuStack_78;
  undefined1 **local_70;
  undefined1 **ppuStack_68;
  undefined1 **local_60;
  undefined1 **ppuStack_58;
  undefined1 **local_50;
  undefined1 **ppuStack_48;
  undefined1 **local_40;
  undefined1 **ppuStack_38;
  undefined1 *local_18;
  
  if (*(char *)((long)param_1 + 0x11) == '\0') {
    if (*(uint *)(param_1 + 0x32) == 0xffffffff) goto LAB_01cad7a4;
    local_80 = &local_18;
    (*(code *)(&PTR_LAB_04a45530)[*(uint *)(param_1 + 0x32)])(&local_80,param_1 + 4);
    uVar1 = (uint)DAT_05ae6794;
  }
  else {
    local_80 = param_1;
    ppuStack_78 = param_1;
    local_70 = param_1;
    ppuStack_68 = param_1;
    local_60 = param_1;
    ppuStack_58 = param_1;
    local_50 = param_1;
    ppuStack_48 = param_1;
    local_40 = param_1;
    ppuStack_38 = param_1;
    if (*(uint *)(param_1 + 0x32) == 0xffffffff) {
LAB_01cad7a4:
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    local_18 = (undefined1 *)&local_80;
    uVar1 = (*(code *)(&PTR_LAB_04a45588)[*(uint *)(param_1 + 0x32)])(&local_18,param_1 + 4);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x37));
  if (*(uint *)(param_1 + 0x32) != 0xffffffff) {
    (*(code *)(&PTR_LAB_04a454c8)[*(uint *)(param_1 + 0x32)])(&local_80,param_1 + 4);
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x37));
  return uVar1;
}

