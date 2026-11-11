
undefined8
FUN_003ad070(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar4 = FUN_003acf30();
  if (uVar4 <= param_5) {
    lVar5 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x68) = param_3;
    *(long *)(param_1 + 0x70) = param_4;
    if ((lVar5 == 0) || ((*(ushort *)(lVar5 + 8) & 1) != 0)) {
      lVar5 = 0;
      uVar2 = 1;
      uVar1 = *(ushort *)(param_1 + 0x30);
    }
    else {
      lVar5 = FUN_003b35ec(lVar5,param_2);
      uVar2 = FUN_003b37c4(*(undefined8 *)(param_1 + 0x38),param_2,param_3,param_4,lVar5);
      uVar1 = *(ushort *)(param_1 + 0x30);
    }
    if (uVar1 != 0) {
      uVar8 = (ulong)uVar1;
      lVar9 = 0;
      uVar4 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x40) + lVar9;
        if ((*(byte *)(lVar7 + 8) & 1) == 0) {
          lVar6 = FUN_003ae38c(lVar7,param_2);
          uVar10 = (lVar5 + lVar6) - 1U & -lVar6;
          lVar5 = FUN_003ae3e0(lVar7,param_2);
          uVar3 = FUN_003aef74(lVar7,param_2,param_3,uVar10 + param_4,lVar5);
          uVar8 = (ulong)*(ushort *)(param_1 + 0x30);
          uVar2 = uVar3 & uVar2;
          lVar5 = uVar10 + lVar5;
        }
        uVar4 = uVar4 + 1;
        lVar9 = lVar9 + 0x70;
      } while (uVar4 < uVar8);
    }
    uVar4 = (ulong)*(ushort *)(param_1 + 0x32);
    if (*(ushort *)(param_1 + 0x32) != 0) {
      lVar9 = 0;
      uVar8 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x48) + lVar9;
        if ((*(ushort *)(lVar7 + 8) & 1) == 0) {
          lVar7 = FUN_003b0dcc(lVar7,param_2);
          uVar10 = (lVar5 + lVar7) - 1U & -lVar7;
          lVar5 = FUN_003b0e1c(*(long *)(param_1 + 0x48) + lVar9,param_2);
          uVar3 = FUN_003b115c(*(long *)(param_1 + 0x48) + lVar9,param_2,param_3,uVar10 + param_4,
                               lVar5);
          uVar4 = (ulong)*(ushort *)(param_1 + 0x32);
          uVar2 = uVar3 & uVar2;
          lVar5 = uVar10 + lVar5;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x80;
      } while (uVar8 < uVar4);
    }
    if ((uVar2 & 1) != 0) {
      *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 1;
      return 1;
    }
  }
  return 0;
}

