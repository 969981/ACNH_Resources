
void FUN_01b0d950(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01b032d0();
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfc | 2;
  }
  uVar1 = FUN_01b032d0(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_01b032d0(param_1);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc3;
  }
  return;
}

