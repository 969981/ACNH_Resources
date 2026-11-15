
void FUN_01f0c5a4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x3c0);
  uVar2 = FUN_02085a50(lVar3,1,0);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(lVar3 + 0x801) = 1;
    lVar1 = lVar3 + 0x10 + (ulong)*(uint *)(lVar3 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar3 + 0x294)) {
      lVar1 = lVar3 + 0x10;
    }
    *(undefined8 *)(lVar1 + 0xc) = 0;
    *(undefined4 *)(lVar1 + 0x14) = 0;
  }
  return;
}

