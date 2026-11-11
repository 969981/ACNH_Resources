
void FUN_00439340(long param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_2 + 0xfU & 0xfffffffffffffff0;
  if (uVar3 <= *(ulong *)(param_1 + 0x10)) {
    lVar2 = *(long *)(param_1 + 0x18);
    if (uVar3 + lVar2 <= *(ulong *)(param_1 + 0x20)) {
      *(ulong *)(param_1 + 0x18) = uVar3 + lVar2;
      goto joined_r0x00439384;
    }
  }
  lVar2 = FUN_00439510(param_1,uVar3);
joined_r0x00439384:
  if (param_3 != (ulong *)0x0) {
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = uVar3;
    }
    *param_3 = uVar1;
  }
  return;
}

