
void FUN_0138cf78(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(DAT_051a9970 + 0x10) <= uVar1) {
    uVar1 = 0;
  }
  if (uVar2 < *(uint *)(*(long *)(DAT_051a9970 + 0x18) + (long)(int)uVar1 * 0x18 + 8)) {
    lVar3 = *(long *)(*(long *)(DAT_051a9970 + 0x18) + (long)(int)uVar1 * 0x18 + 0x10);
    if ((*(uint *)(param_2 + 0x18) < *(uint *)(lVar3 + (long)(int)uVar2 * 0x10)) &&
       (lVar3 = *(long *)(lVar3 + (long)(int)uVar2 * 0x10 + 8), lVar3 != 0)) {
      FUN_0139534c(lVar3 + (long)(int)*(uint *)(param_2 + 0x18) * 0x518);
      return;
    }
  }
  return;
}

