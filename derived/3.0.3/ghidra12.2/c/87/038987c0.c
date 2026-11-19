
void FUN_038987c0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined1 local_28 [4];
  char local_24 [4];
  
  puVar1 = PTR_DAT_04bcb7d8;
  local_24[0] = (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x160))();
  local_28[0] = (**(code **)(**(long **)(*(long *)puVar1 + 0x68) + 0x108))
                          (*(long **)(*(long *)puVar1 + 0x68),param_2);
  if (0 < *(int *)(param_1 + 0xb0)) {
    if ((param_3 & 1) == 0) {
      lVar3 = 0;
      do {
        plVar2 = *(long **)(*(long *)(param_1 + 0xb8) + lVar3 * 8);
        (**(code **)(*plVar2 + 0x78))(plVar2,local_28,local_24);
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0xb0));
    }
    else {
      lVar3 = 0;
      do {
        plVar2 = *(long **)(*(long *)(param_1 + 0xb8) + lVar3 * 8);
        (**(code **)(*plVar2 + 0x80))(plVar2,local_28,local_24);
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0xb0));
    }
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x80));
  if ((uint)(int)local_24[0] < *(uint *)(param_1 + 0xd0)) {
    piVar4 = *(int **)(*(long *)(param_1 + 0xd8) + (long)(int)local_24[0] * 8);
  }
  else {
    piVar4 = (int *)0x0;
  }
  if (0 < *piVar4) {
    lVar3 = 0;
    do {
      puVar5 = *(undefined8 **)(*(long *)(piVar4 + 2) + lVar3 * 8);
      memset((void *)*puVar5,0,(ulong)*(uint *)(puVar5 + 1));
      *(undefined4 *)((long)puVar5 + 0xc) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *piVar4);
  }
  piVar4[4] = 0;
  piVar4[5] = 0;
  *(ulong *)(param_1 + 0x18) =
       *(ulong *)(param_1 + 0x18) & (1L << ((long)local_24[0] & 0x3fU) ^ 0xffffffffffffffffU);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
  return;
}

