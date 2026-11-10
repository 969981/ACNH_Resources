
long FUN_0035c7a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_98;
  undefined8 uStack_90;
  uint6 local_88 [2];
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint6 *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (uint6 *)0x0;
  FUN_0034fd0c(&local_60);
  local_70 = 0;
  uStack_68 = 0;
  local_88[0]._0_8_ = 0;
  local_88[1]._0_8_ = 0;
  pcStack_78 = (char *)0x0;
  FUN_0034fcf0(local_88);
  local_88[0] = (uint6)(uint)local_88[0];
  local_88[1]._0_8_ = 0x180500000000;
  pcStack_78 = "aVertex";
  local_98 = 0;
  uStack_90 = 0;
  FUN_0034fd04(&local_98);
  local_98 = CONCAT44(local_98._4_4_,0x1c);
  local_60 = CONCAT44(local_60._4_4_,0x10001);
  local_58 = local_88;
  local_50 = &local_98;
  lVar1 = FUN_0034efc0(&local_60);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = (uint6 *)0x0;
  FUN_0034fb74(&local_60);
  lVar2 = FUN_003490a4(param_1,&local_60);
  lVar3 = FUN_0035c880(param_1);
  return (lVar2 + (lVar1 + 7U & 0xfffffffffffffff8) * 6 + 0x8437 & -lVar2) + lVar3;
}

