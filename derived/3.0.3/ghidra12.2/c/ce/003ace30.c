
ulong FUN_003ace30(long param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if ((lVar3 == 0) || ((*(ushort *)(lVar3 + 8) & 1) != 0)) {
    uVar4 = 1;
    uVar2 = *(ushort *)(param_1 + 0x30);
  }
  else {
    uVar4 = FUN_003b358c(lVar3,param_2);
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    uVar2 = *(ushort *)(param_1 + 0x30);
  }
  if (uVar2 != 0) {
    uVar6 = (ulong)uVar2;
    lVar3 = 0;
    uVar7 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x40) + lVar3;
      if ((*(byte *)(lVar1 + 8) & 1) == 0) {
        uVar5 = FUN_003ae38c(lVar1,param_2);
        uVar6 = (ulong)*(ushort *)(param_1 + 0x30);
        if (uVar4 <= uVar5) {
          uVar4 = uVar5;
        }
      }
      uVar7 = uVar7 + 1;
      lVar3 = lVar3 + 0x70;
    } while (uVar7 < uVar6);
  }
  uVar7 = (ulong)*(ushort *)(param_1 + 0x32);
  if (*(ushort *)(param_1 + 0x32) != 0) {
    lVar3 = 0;
    uVar6 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x48) + lVar3;
      if ((*(ushort *)(lVar1 + 8) & 1) == 0) {
        uVar5 = FUN_003b0dcc(lVar1,param_2);
        uVar7 = (ulong)*(ushort *)(param_1 + 0x32);
        if (uVar4 <= uVar5) {
          uVar4 = uVar5;
        }
      }
      uVar6 = uVar6 + 1;
      lVar3 = lVar3 + 0x80;
    } while (uVar6 < uVar7);
  }
  return uVar4;
}

