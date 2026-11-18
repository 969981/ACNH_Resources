
void FUN_032b64c0(long param_1,ulong param_2)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *local_90;
  long *local_88;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  plVar6 = (long *)(param_1 + 8);
  if (*plVar6 == 0) {
    puVar7 = *(undefined8 **)PTR_DAT_04bc9410;
    pMVar1 = (MutexType *)(puVar7 + 5);
    nn::os::LockMutex(pMVar1);
    puVar4 = (undefined8 *)*puVar7;
    if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
      *puVar7 = plVar6;
    }
    else {
      do {
        puVar7 = puVar4;
        puVar4 = (undefined8 *)puVar7[2];
      } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
      puVar7[2] = plVar6;
      *(undefined8 **)(param_1 + 0x10) = puVar7;
      puVar7 = (undefined8 *)*puVar7;
    }
    *plVar6 = (long)puVar7;
    nn::os::UnlockMutex(pMVar1);
  }
  else if ((**(long **)(param_1 + 0x40) != 0) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
    uVar2 = crc32b(0xffffffff,0x49,0x4c11db7);
    uVar3 = crc32b(uVar2,0x6e,0x4c11db7);
    do {
      if (*(uint *)(lVar5 + 0x68) == ~uVar3) break;
      lVar5 = *(long *)(lVar5 + 0x10);
    } while (lVar5 != 0);
    if (**(long **)(param_1 + 0x40) == lVar5) {
      return;
    }
  }
  local_60 = PTR_DAT_04bc8e68 + 0x10;
  if ((param_2 & 1) == 0) {
    puStack_58 = &DAT_040a4215;
    local_90 = PTR_DAT_04bc8e60 + 0x10;
    local_88 = (long *)0x0;
    FUN_032c7d70(plVar6,&local_60,0,&local_90,0,0);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  else {
    puStack_48 = &DAT_040a4215;
    local_50 = local_60;
    FUN_032c87e0(plVar6,&local_50,0);
  }
  return;
}

