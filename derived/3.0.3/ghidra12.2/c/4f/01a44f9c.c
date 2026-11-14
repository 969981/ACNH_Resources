
uint FUN_01a44f9c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x20))();
  uVar1 = FUN_0277d6c4(param_2);
  if ((uVar1 >> 3 & 0x1fff) < 0x753) {
    uVar1 = *(uint *)(lVar2 + (ulong)((uVar1 & 0xffff) >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

