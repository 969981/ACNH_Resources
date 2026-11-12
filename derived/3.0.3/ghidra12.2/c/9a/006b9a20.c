
void FUN_006b9a20(long param_1,ulong param_2)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  
  puVar2 = PTR_DAT_04bdf708;
  if (*(long *)(param_1 + 8) != 0) {
    pMVar1 = (MutexType *)(PTR_DAT_04bdf708 + 8);
    nn::os::LockMutex(pMVar1);
    puVar3 = (undefined8 *)nn::lmem::AllocateFromExpHeap(*(HeapHead **)puVar2,0x30);
    nn::os::UnlockMutex(pMVar1);
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined4 *)(puVar3 + 5) = 1;
      puVar3[4] = &DAT_048f9260;
      *puVar3 = &PTR_LAB_048f9208;
      puVar3[1] = 0;
      uVar5 = -((param_2 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
      plVar4 = *(long **)(*(long *)(param_1 + 8) + uVar5);
      *(undefined8 **)(*(long *)(param_1 + 8) + uVar5) = puVar3;
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006b9abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))();
        return;
      }
    }
  }
  return;
}

