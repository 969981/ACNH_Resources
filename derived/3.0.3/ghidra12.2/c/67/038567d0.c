
undefined8 * FUN_038567d0(long param_1,byte param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_04bb3350;
  uVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
  if (*(int *)(param_1 + 8) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x10) + (-(uVar5 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4)
                   ) == lVar4) {
        return (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar5 * 0x10);
      }
      uVar1 = uVar5 + 1;
      uVar5 = uVar1 & 0xffffffff;
    } while (*(int *)(param_1 + 8) != (int)uVar1);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  if (*(int *)(param_1 + 8) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x10) + (-(uVar5 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4)
                   ) == 0) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar5 * 0x10);
        *puVar6 = uVar3;
        *(undefined4 *)((long)puVar6 + 0xc) = 0;
        *(byte *)(puVar6 + 1) = param_2 & 1;
        goto LAB_038568a4;
      }
      uVar1 = uVar5 + 1;
      uVar5 = uVar1 & 0xffffffff;
    } while (*(int *)(param_1 + 8) != (int)uVar1);
  }
  puVar6 = (undefined8 *)0x0;
LAB_038568a4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return puVar6;
}

