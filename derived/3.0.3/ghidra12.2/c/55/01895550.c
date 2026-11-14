
void FUN_01895550(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x300);
  if (*(long *)(param_1 + 0x458) == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x458) + 0x98) + 0xf0))();
    uVar3 = *puVar1;
  }
  FUN_019cfd80(uVar3,param_1 + 0x40c,lVar2 + 0x278);
  if (((*(byte *)(param_1 + 0x40c) & 1) == 0) || (*(int *)(param_1 + 0x280) == 1)) {
    return;
  }
  FUN_03ebb160(param_1 + 0x278,1);
  return;
}

