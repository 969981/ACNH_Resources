
void FUN_004ab430(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_00486840();
  *param_1 = &PTR_LAB_048677a8;
  lVar2 = FUN_00438810(0x1b8);
  FUN_0043eef0(lVar2 + 8);
  *(undefined ***)(lVar2 + 8) = &PTR_FUN_048677f0;
  *(long *)(lVar2 + 0x10) = lVar2;
  puVar1 = PTR_DAT_048607b8;
  FUN_004547b0(lVar2 + 0x18,PTR_DAT_048607b8,0x4000);
  FUN_004ac0f0(lVar2 + 0x70);
  *(undefined ***)(lVar2 + 0x70) = &PTR_LAB_048679e0;
  FUN_004accd0(lVar2 + 0xe0);
  *(undefined ***)(lVar2 + 0x70) = &PTR_LAB_04867970;
  FUN_004547b0(lVar2 + 0x100,puVar1,0x4000);
  *(undefined4 *)(lVar2 + 0x168) = 0;
  *(undefined8 *)(lVar2 + 0x158) = 0;
  *(undefined8 *)(lVar2 + 0x160) = 0x8000000000000000;
  FUN_0043dcf0(lVar2 + 0x170);
  *(long *)(lVar2 + 0x180) = lVar2;
  *(undefined ***)(lVar2 + 0x170) = &PTR_FUN_04867848;
  FUN_0043dcf0(lVar2 + 0x188);
  *(undefined8 *)(lVar2 + 0x1a8) = 0x8000000000000000;
  *(long *)(lVar2 + 0x198) = lVar2;
  *(undefined8 *)(lVar2 + 0x1a0) = 0;
  *(undefined ***)(lVar2 + 0x188) = &PTR_FUN_048678e8;
  param_1[3] = lVar2;
  return;
}

