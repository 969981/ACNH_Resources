
void FUN_005d3d40(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar6 = (ulong)uVar3;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < (int)uVar3) {
    uVar5 = FUN_00426720(PTR_DAT_048607b8,uVar3,0x40,*(undefined8 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    uVar2 = *(uint *)(param_1 + 0x30);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x30);
  }
  if (uVar2 == uVar3) {
    uVar5 = DAT_0413f4f0;
    uVar4 = DAT_0413f4f8;
  }
  else {
    *(uint *)(param_1 + 0x30) = uVar3;
    uVar5 = DAT_0413f4f0;
    uVar4 = DAT_0413f4f8;
  }
  DAT_0413f4f0 = uVar5;
  DAT_0413f4f8 = uVar4;
  if (0 < (int)uVar3) {
    lVar7 = 0;
    do {
      FUN_00482420(*(long *)(param_1 + 0x28) + lVar7,*(long *)(param_1 + 0x18) + lVar7);
      FUN_004d0f10(*(long *)(param_1 + 0x28) + lVar7);
      lVar1 = *(long *)(param_1 + 0x28) + lVar7;
      lVar7 = lVar7 + 0x40;
      uVar6 = uVar6 - 1;
      *(undefined8 *)(lVar1 + 0x38) = uVar4;
      *(undefined8 *)(lVar1 + 0x30) = uVar5;
    } while (uVar6 != 0);
  }
  return;
}

