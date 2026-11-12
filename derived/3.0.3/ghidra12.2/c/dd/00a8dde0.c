
undefined4 FUN_00a8dde0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar1 = param_3 + 0x18;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  uVar2 = uVar1 - 0x18;
  if ((int)uVar1 < 0x18) {
    uVar2 = uVar1;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x653a0) <= param_2 || 0x17 < uVar2)) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined4 *)
             (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                         (long)param_2 * 8) + 0xd8) +
                                     (ulong)uVar2 * 8) + 0xf0))();
    uVar3 = *puVar4;
  }
  return uVar3;
}

