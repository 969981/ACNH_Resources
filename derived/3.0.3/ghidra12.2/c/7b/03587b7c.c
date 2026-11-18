
void FUN_03587b7c(long param_1,long param_2)

{
  undefined8 local_138;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  undefined1 auStack_128 [4];
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  char *local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined2 *puStack_b8;
  undefined4 local_b0;
  undefined2 local_ac [15];
  undefined2 local_8e;
  undefined *local_88;
  char *local_80;
  undefined4 local_78;
  char local_74 [8];
  char local_6c [5];
  char acStack_67 [3];
  char acStack_64 [5];
  undefined1 local_5f;
  undefined1 local_35;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0x240) != 0)) {
    local_35 = 0;
    local_78 = 0x40;
    local_74 = (char  [8])s_WorkBenchRemakeSelect_040ad492._0_8_;
    local_6c = (char  [5])s_WorkBenchRemakeSelect_040ad492._8_5_;
    acStack_67 = (char  [3])s_WorkBenchRemakeSelect_040ad492._13_3_;
    acStack_64 = (char  [5])s_WorkBenchRemakeSelect_040ad492._16_5_;
    local_80 = local_74;
    local_5f = 0;
    local_88 = PTR_DAT_04bb2bc0 + 0x10;
    local_130 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_12e = PTR_DAT_04bb37e0[2];
    local_12d = PTR_DAT_04bb37e0[3];
    local_12c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    FUN_007ef010(auStack_128,PTR_DAT_04bb3170);
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    local_f8 = PTR_DAT_04bc5058 + 0x10;
    local_124 = 0xffffffff;
    local_108 = (char *)0x0;
    local_100 = 0;
    local_d8 = 0xffffffff;
    puStack_b8 = local_ac;
    local_8e = 0;
    local_ac[0] = 0;
    local_b0 = 0x10;
    local_d0 = 0;
    uStack_c8 = 0;
    local_138 = *(undefined8 *)(param_2 + 0x1d0);
    local_c0 = PTR_DAT_04bbd6c0 + 0x10;
    (**(code **)(local_88 + 0x18))(&local_88);
    local_108 = local_80;
    (**(code **)(DAT_05772688 + 0x18))(&DAT_05772688);
    local_100 = DAT_05772690;
    FUN_03111440(*(undefined8 *)(param_1 + 0x240),&local_138);
  }
  return;
}

