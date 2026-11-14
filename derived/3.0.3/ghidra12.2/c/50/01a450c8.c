
bool FUN_01a450c8(long *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = (**(code **)(*param_1 + 0x20))();
  uVar2 = FUN_0277d6c4(param_2);
  if ((uVar2 >> 3 & 0x1fff) < 0x753) {
    bVar1 = (*(uint *)(lVar3 + (ulong)((uVar2 & 0xffff) >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1) ==
            0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

