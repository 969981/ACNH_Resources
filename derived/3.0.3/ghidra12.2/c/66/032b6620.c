
void FUN_032b6620(long param_1,ulong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *local_80;
  undefined ***local_78;
  undefined **local_70;
  long lStack_68;
  undefined *local_50;
  undefined1 *puStack_48;
  undefined *local_40;
  undefined1 *puStack_38;
  
  plVar5 = (long *)(param_1 + 8);
  if (*plVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      uVar1 = crc32b(0xffffffff,0x4f,0x4c11db7);
      uVar1 = crc32b(uVar1,0x75,0x4c11db7);
      uVar2 = crc32b(uVar1,0x74,0x4c11db7);
      do {
        if (*(uint *)(lVar4 + 0x68) == ~uVar2) break;
        lVar4 = *(long *)(lVar4 + 0x10);
      } while (lVar4 != 0);
    }
    lVar3 = **(long **)(param_1 + 0x40);
    if (**(long **)(param_1 + 0x40) == lVar4) {
      do {
        lVar4 = lVar3;
        lVar3 = *(long *)(lVar4 + 0x18);
      } while (*(long *)(lVar4 + 0x18) != 0 && *(long *)(lVar4 + 0x28) == 0);
      if (*(int *)(lVar4 + 0x6c) == 2) {
        return;
      }
    }
    if ((param_2 & 1) == 0) {
      local_50 = PTR_DAT_04bc8e68 + 0x10;
      puStack_48 = &DAT_0406ffa2;
      local_78 = &local_70;
      local_70 = &PTR_LAB_04b1a4a0;
      local_80 = PTR_DAT_04bc8e60 + 0x10;
      lStack_68 = param_1;
      FUN_032c7d70(plVar5,&local_50,0,&local_80,0,0);
      if (local_78 != (undefined ***)0x0) {
        (*(code *)(*local_78)[1])();
      }
    }
    else {
      local_40 = PTR_DAT_04bc8e68 + 0x10;
      puStack_38 = &DAT_0406ffa2;
      FUN_032c87e0(plVar5,&local_40,0);
      if (*plVar5 != 0) {
        plVar6 = *(long **)PTR_DAT_04bc9410;
        nn::os::LockMutex((MutexType *)(plVar6 + 5));
        lVar4 = *(long *)(param_1 + 0x10);
        lVar3 = *(long *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = 0;
        *plVar5 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        if ((long *)*plVar6 == plVar5) {
          *plVar6 = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        nn::os::UnlockMutex((MutexType *)(plVar6 + 5));
        return;
      }
    }
  }
  return;
}

