
long FUN_003acf30(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if ((lVar2 == 0) || ((*(ushort *)(lVar2 + 8) & 1) != 0)) {
    lVar2 = 0;
    uVar1 = *(ushort *)(param_1 + 0x30);
  }
  else {
    lVar2 = FUN_003b35ec(lVar2,param_2);
    uVar1 = *(ushort *)(param_1 + 0x30);
  }
  if (uVar1 != 0) {
    uVar5 = (ulong)uVar1;
    lVar7 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x40) + lVar7;
      if ((*(byte *)(lVar4 + 8) & 1) == 0) {
        lVar3 = FUN_003ae38c(lVar4,param_2);
        lVar4 = FUN_003ae3e0(lVar4,param_2);
        uVar5 = (ulong)*(ushort *)(param_1 + 0x30);
        lVar2 = ((lVar2 + lVar3) - 1U & -lVar3) + lVar4;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x70;
    } while (uVar6 < uVar5);
  }
  uVar6 = (ulong)*(ushort *)(param_1 + 0x32);
  if (*(ushort *)(param_1 + 0x32) != 0) {
    lVar7 = 0;
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x48) + lVar7;
      if ((*(ushort *)(lVar4 + 8) & 1) == 0) {
        lVar3 = FUN_003b0dcc(lVar4,param_2);
        lVar4 = FUN_003b0e1c(lVar4,param_2);
        uVar6 = (ulong)*(ushort *)(param_1 + 0x32);
        lVar2 = ((lVar2 + lVar3) - 1U & -lVar3) + lVar4;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x80;
    } while (uVar5 < uVar6);
  }
  return lVar2;
}

