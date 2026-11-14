
void FUN_01a44ff8(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = (**(code **)(*param_1 + 0x18))();
  uVar2 = FUN_0277d6c4(param_2);
  if ((uVar2 >> 3 & 0x1fff) < 0x753) {
    lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
    *(uint *)(lVar3 + lVar1) = *(uint *)(lVar3 + lVar1) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU)
    ;
  }
  return;
}

