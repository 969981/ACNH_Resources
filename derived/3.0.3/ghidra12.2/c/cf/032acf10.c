
void FUN_032acf10(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined *local_60;
  undefined ***local_58;
  undefined **local_50;
  long lStack_48;
  
  plVar4 = (long *)(param_1 + 8);
  if (*plVar4 != 0) {
    if ((param_2 & 1) == 0) {
      local_50 = &PTR_LAB_04b19ea8;
      local_58 = &local_50;
      local_60 = PTR_DAT_04bc8e60 + 0x10;
      lStack_48 = param_1;
      FUN_032c7c30(plVar4,1,0,&local_60,0,0);
      if (local_58 != (undefined ***)0x0) {
        (*(code *)(*local_58)[1])();
      }
    }
    else {
      FUN_032c8670(plVar4,1,0);
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 != 0) {
        uVar2 = 0xffffffff;
        lVar3 = lVar1;
        do {
          lVar3 = *(long *)(lVar3 + 0x10);
          uVar2 = uVar2 + 1;
        } while (lVar3 != 0);
        if (1 < uVar2) {
          lVar3 = *(long *)(*(long *)(lVar1 + 0x10) + 0x10);
          do {
            plVar5 = (long *)(lVar3 + 0x28);
            lVar3 = *(long *)(lVar3 + 0x18);
          } while (lVar3 != 0 && *plVar5 == 0);
          if (*plVar5 != 0) {
            FUN_032c83b0(plVar4,2,1);
            lVar1 = *(long *)(param_1 + 0x28);
          }
        }
        if (lVar1 != 0) {
          uVar2 = 0xffffffff;
          lVar3 = lVar1;
          do {
            lVar3 = *(long *)(lVar3 + 0x10);
            uVar2 = uVar2 + 1;
          } while (lVar3 != 0);
          if (2 < uVar2) {
            lVar1 = *(long *)(*(long *)(*(long *)(lVar1 + 0x10) + 0x10) + 0x10);
            do {
              plVar5 = (long *)(lVar1 + 0x28);
              lVar1 = *(long *)(lVar1 + 0x18);
            } while (lVar1 != 0 && *plVar5 == 0);
            if (*plVar5 != 0) {
              FUN_032c83b0(plVar4,3,2);
            }
          }
        }
      }
      if (*plVar4 != 0) {
        plVar5 = *(long **)PTR_DAT_04bc9410;
        nn::os::LockMutex((MutexType *)(plVar5 + 5));
        lVar1 = *(long *)(param_1 + 0x10);
        lVar3 = *(long *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = 0;
        *plVar4 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        if ((long *)*plVar5 == plVar4) {
          *plVar5 = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x10) = lVar3;
        }
        nn::os::UnlockMutex((MutexType *)(plVar5 + 5));
        return;
      }
    }
  }
  return;
}

