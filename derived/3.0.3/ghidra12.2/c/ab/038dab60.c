
long FUN_038dab60(long param_1,uint param_2,uint *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_04bc5650;
  lVar4 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x38))) {
    uVar2 = (**(code **)(PTR_PTR_04bc5650 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x20))
                      (*(undefined4 *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10 + 8));
    if (param_3 != (uint *)0x0) {
      uVar3 = (**(code **)(puVar1 + ((long)*(int *)(param_1 + 0x50) ^ 1U) * 8 + 0x20))
                        (*(undefined4 *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 0x10 + 0xc));
      if (uVar3 < uVar2) {
        return 0;
      }
      *param_3 = uVar2;
      param_3[1] = uVar3 - uVar2;
    }
    lVar4 = *(long *)(param_1 + 0x48) + (ulong)uVar2;
  }
  return lVar4;
}

