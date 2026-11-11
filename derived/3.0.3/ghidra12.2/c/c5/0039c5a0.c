
void FUN_0039c5a0(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_G3d-9_3_1-Release");
  lVar2 = *(long *)(param_1 + 0xa8);
  if ((lVar2 != 0) && (lVar3 = *(long *)(param_1 + 0xb0), lVar3 != 0)) {
    FUN_003490b4(lVar2);
    FUN_003490c4(lVar2,param_2,lVar3);
    FUN_003b4920(lVar2,&DAT_0405a93f);
  }
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0039e040(*(long *)(param_1 + 0x28) + lVar2,param_2);
      lVar2 = lVar2 + 0x78;
    } while ((ulong)uVar1 * 0x78 != lVar2);
  }
  return;
}

