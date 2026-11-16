
uint FUN_027e0484(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "InduceInMysteriTourIslandToday";
  uVar11 = FUN_0273f0a0(&local_30);
  if ((uVar11 & 1) == 0) {
    uVar1 = FUN_026644b0(0);
    uVar2 = FUN_026644b0(1);
    uVar3 = FUN_026644b0(2);
    uVar4 = FUN_026644b0(3);
    uVar5 = FUN_026644b0(4);
    uVar6 = FUN_026644b0(5);
    uVar7 = FUN_026644b0(6);
    uVar8 = FUN_026644b0(7);
    uVar9 = FUN_026644b0(8);
    uVar10 = FUN_026644b0(9);
    uVar1 = uVar10 | uVar9 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar1 | uVar2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}

