
bool FUN_02c21bfc(undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  undefined *local_218;
  undefined *puStack_210;
  undefined *local_208;
  char *pcStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4 [63];
  undefined1 local_195;
  undefined *local_190;
  undefined1 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c [63];
  undefined1 local_13d;
  undefined *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  undefined8 local_58;
  undefined *puStack_50;
  int local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined2 local_38;
  
  puStack_50 = PTR_DAT_04bc0a78;
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    local_1f8 = 0;
    uStack_1f0 = 0;
    puStack_1e0 = local_1d4;
    puStack_188 = local_17c;
    local_195 = 0;
    local_1d4[0] = 0;
    local_1d8 = 0x40;
    local_1e8 = PTR_DAT_04bb2bc0 + 0x10;
    local_180 = 0x40;
    local_f4[0] = 0;
    local_13d = 0;
    local_17c[0] = 0;
    local_128 = 0;
    local_124 = 0;
    local_f8 = 0x40;
    local_b5 = 0;
    local_a0 = 0x40;
    local_5d = 0;
    local_110 = 0xffffffff;
    local_120 = 0xffffffff;
    uStack_118 = 0xffffffff00000000;
    puStack_100 = local_f4;
    puStack_a8 = local_9c;
    local_9c[0] = 0;
    local_138 = PTR_DAT_04bb2e00 + 0x10;
    uStack_130 = 0;
    local_48 = *(int *)PTR_DAT_04bc0b30;
    local_44 = 0;
    *(int *)PTR_DAT_04bc0b30 = local_48 + 1;
    puStack_50 = puStack_50 + 0x10;
    local_40 = 0;
    local_58 = 0;
    local_38 = 0x100;
    local_218 = PTR_DAT_04bb2020 + 0x10;
    pcStack_200 = "BoardEdit";
    puStack_210 = &DAT_040ff1b7;
    local_208 = local_218;
    local_190 = local_1e8;
    local_108 = local_1e8;
    local_b0 = local_1e8;
    FUN_01bebc30(&local_1f8,param_2,&local_208,&local_218,0);
    iVar1 = *(int *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    FUN_01baff20(&puStack_50,(int)(short)iVar1,0);
    FUN_01bb00d0(&puStack_50,(iVar1 << 8) >> 0x18,0);
    FUN_01bb0360(&puStack_50,iVar1 >> 0x18,0);
    FUN_01bebe38(&local_1f8);
    bVar2 = local_38._1_1_ != '\0';
    FUN_01bebabc(&local_1f8);
  }
  return bVar2;
}

