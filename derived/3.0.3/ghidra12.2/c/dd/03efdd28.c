
uint FUN_03efdd28(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_004297c0(&local_40,"0x29dfe520-0x6ef160dc:2027-01-31.Cloth.Nintendo_NINTENDO_205_Ounce");
  iVar2 = FUN_0050ec10(3,local_40,uStack_38);
  FUN_004297c0(&local_50,&DAT_0407ebb1);
  uVar3 = FUN_0050ec10(4,local_50,uStack_48);
  FUN_004297c0(&local_60,&DAT_0407ebb1);
  uVar4 = FUN_0050ec10(6,local_60,uStack_58);
  uVar1 = iVar2 >> 0x1f & 0x80040200;
  if ((int)(uVar4 | uVar3) < 0) {
    uVar1 = 0x80040200;
  }
  return uVar1;
}

