
ulong FUN_0044e820(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar3 = FUN_00450280(lVar4 + 0x38);
  iVar2 = *(int *)(*(long *)(lVar4 + 0x38) + (long)(int)uVar3 * 0x18 + 0x10);
  lVar4 = FUN_00426fc0(param_2);
  uVar1 = 0xffffffff;
  if (iVar2 != 0) {
    uVar1 = (ulong)uVar3;
  }
  return uVar1 | lVar4 << 0x20;
}

