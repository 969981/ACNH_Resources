
uint FUN_022aae84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined2 local_88;
  undefined4 local_86;
  undefined1 local_82;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  short local_58;
  short local_56;
  undefined2 local_50;
  undefined1 local_4e;
  byte local_4d;
  undefined1 local_4b;
  undefined1 local_46;
  undefined4 local_44;
  undefined *local_40;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb2010;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_38 = 0;
  local_40 = puVar1;
  uVar6 = FUN_022ab398(0x40a00000,param_1,&local_40);
  if (((uVar6 & 1) == 0) && (uVar6 = FUN_022ab398(0x40d00000,param_1,&local_40), (uVar6 & 1) == 0))
  {
    uVar5 = 0;
  }
  else {
    puVar3 = PTR_DAT_04bb6298;
    local_4e = 7;
    local_44 = 0;
    local_4b = 0;
    local_50 = *(undefined2 *)PTR_DAT_04bb6298;
    local_b8 = 0x3333;
    FUN_0277d4ac(&local_b8);
    local_64 = 0;
    local_46 = 0;
    local_4d = *(byte *)(param_1 + 0x10);
    local_60 = local_b8;
    if (7 < local_4d) {
      local_4d = 0xff;
    }
    local_58 = (short)local_38;
    local_56 = (short)((ulong)local_38 >> 0x20);
    local_90 = (int)local_38 + 1;
    iStack_8c = local_38._4_4_ + 1;
    local_80 = 0xffffffffffffffff;
    local_a0 = (int)local_38;
    iStack_9c = local_38._4_4_;
    local_b0 = PTR_DAT_04bbc1a0 + 0x10;
    local_82 = 0;
    local_78 = 0;
    local_74 = 0x41200000;
    local_86 = 0x100;
    local_88 = 0xff00;
    local_6c = 0xff00;
    local_b8 = CONCAT62(local_b8._2_6_,*(undefined2 *)puVar3);
    puStack_a8 = puVar1;
    local_98 = puVar1;
    uVar5 = FUN_022ab010(param_1,&local_b8,&local_64);
    uVar4 = local_4e;
    if ((uVar5 & 1) != 0) {
      local_c0 = 0xfffe;
      FUN_0277d4ac(&local_c0);
      local_c0 = local_60;
      local_c8 = (int)local_58;
      iStack_c4 = (int)local_56;
      local_d0 = puVar2 + 0x10;
      FUN_022ab224(param_1,uVar4,&local_c0,&local_d0,0);
    }
  }
  return uVar5 & 1;
}

