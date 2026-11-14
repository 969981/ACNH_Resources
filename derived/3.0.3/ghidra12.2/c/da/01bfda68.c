
float FUN_01bfda68(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined *local_248;
  long local_240;
  long local_238;
  undefined *local_230;
  undefined1 auStack_228 [24];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined *local_200;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined *local_1d0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined *local_1a0;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *local_170;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined *local_140;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  int local_44;
  
  memset(auStack_228,0,0x1c8);
  puVar2 = PTR_DAT_04bb2d80;
  local_44 = 0;
  local_48 = 0;
  local_210 = 0;
  uStack_208 = 0;
  plVar1 = (long *)(param_1 + 0x218);
  local_230 = PTR_DAT_04bb2d80 + 0x10;
  local_248 = PTR_DAT_04bc07b0 + 0x10;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_238 = 0;
  local_60 = 0xffffffff;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_240 = 0;
  local_200 = local_230;
  local_1d0 = local_230;
  local_1a0 = local_230;
  local_170 = local_230;
  local_140 = local_230;
  local_110 = local_230;
  local_e0 = local_230;
  local_b0 = local_230;
  local_80 = local_230;
  lVar3 = (**(code **)(*(long *)(param_1 + 0x218) + 0x18))(plVar1);
  lVar4 = (**(code **)(*(long *)(param_1 + 0x218) + 0x18))(plVar1);
  if ((lVar4 != 0) && (uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1), lVar3 != 0)) {
    local_238 = lVar4 + (uVar5 & 0xffffffff) * 2;
    local_60 = 0;
    local_230 = puVar2 + 0x10;
    local_240 = lVar3;
  }
  FUN_006f17bc(&local_248);
  FUN_006f1490(&local_248);
  fVar6 = (float)local_44 * 0.015151516;
  if (*(int *)(param_1 + 0xbd8) < 1) {
    fVar6 = 0.0;
  }
  return fVar6;
}

