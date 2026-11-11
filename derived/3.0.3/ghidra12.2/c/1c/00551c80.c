
bool FUN_00551c80(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar3 = *(uint *)(param_2 + 0x60);
  uVar4 = *(uint *)(param_2 + 0x78);
  uVar5 = *(uint *)(param_2 + 0x48);
  uVar6 = *(uint *)(param_2 + 0x20);
  uVar2 = uVar3;
  if (uVar3 <= uVar4) {
    uVar2 = uVar4;
  }
  uVar1 = uVar5;
  if (uVar5 <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = uVar6;
  if (uVar6 <= uVar1) {
    uVar2 = uVar1;
  }
  bVar7 = uVar2 == *(uint *)(param_1 + 0x28) &&
          ((uVar4 == 0 || uVar4 == uVar2) &&
          ((uVar3 == 0 || uVar3 == uVar2) &&
          ((uVar6 == 0 || uVar1 <= uVar6) && (uVar5 == 0 || uVar5 == uVar2))));
  if (*(int *)(param_1 + 0x2c) != 0) {
    bVar7 = bVar7 && *(int *)(param_2 + 0x38) == *(int *)(param_1 + 0x2c);
  }
  return bVar7;
}

