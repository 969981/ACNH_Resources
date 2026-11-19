
byte FUN_03bea324(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    return 0;
  }
  plVar1 = (long *)(lVar2 + 0x18) + *(uint *)(lVar2 + 0x10);
  if (1 < *(uint *)(lVar2 + 0x10)) {
    plVar1 = (long *)(lVar2 + 0x18);
  }
  lVar3 = *plVar1;
  uVar4 = param_2 - *(long *)(lVar3 + 0x28);
  lVar2 = (long)(uVar4 * 0x8000000) >> 0x20;
  if (*(uint *)(lVar3 + 0x78) <= (uint)(uVar4 >> 5)) {
    lVar2 = 0;
  }
  return *(byte *)(*(long *)(lVar3 + 0x80) + lVar2 * 8 + 2) >> 1 & 1;
}

