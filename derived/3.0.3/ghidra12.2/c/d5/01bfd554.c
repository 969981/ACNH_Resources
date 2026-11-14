
void FUN_01bfd554(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_258;
  long local_250;
  long local_248;
  undefined *local_240;
  undefined1 auStack_238 [24];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined *local_1e0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  
  if (*(long *)(param_1[0x41] + 0xc0) == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(*(long *)(param_1[0x41] + 0xc0) + 0x1b9) != '\0';
  }
  FUN_01ba1624(param_1 + 0x17c,bVar4);
  memset(auStack_238,0,0x1c8);
  puVar3 = PTR_DAT_04bb2d80;
  local_54 = 0;
  local_220 = 0;
  uStack_218 = 0;
  plVar2 = param_1 + 0xdf;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_240 = PTR_DAT_04bb2d80 + 0x10;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_258 = PTR_DAT_04bc07b0 + 0x10;
  local_70 = 0xffffffff;
  local_58 = 0;
  local_248 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_250 = 0;
  local_210 = local_240;
  local_1e0 = local_240;
  local_1b0 = local_240;
  local_180 = local_240;
  local_150 = local_240;
  local_120 = local_240;
  local_f0 = local_240;
  local_c0 = local_240;
  local_90 = local_240;
  lVar5 = (**(code **)(param_1[0xdf] + 0x18))(plVar2);
  lVar6 = (**(code **)(param_1[0xdf] + 0x18))(plVar2);
  if ((lVar6 != 0) && (uVar7 = (**(code **)(*plVar2 + 0x20))(plVar2), lVar5 != 0)) {
    local_248 = lVar6 + (uVar7 & 0xffffffff) * 2;
    local_70 = 0;
    local_240 = puVar3 + 0x10;
    local_250 = lVar5;
  }
  FUN_006f17bc(&local_258);
  FUN_006f1490(&local_258);
  *(undefined4 *)(param_1 + 0x17b) = local_54;
  FUN_01b954c0(0x3f8ccccd,param_1 + 0x206,param_1 + 0x291,param_1 + 0x35f);
  *(undefined1 *)(param_1 + 0x290) = 0;
  (**(code **)(*param_1 + 0x10))(param_1);
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  lVar5 = (**(code **)(param_1[0xdf] + 0x18))(plVar2);
  lVar6 = (**(code **)(param_1[0xdf] + 0x18))(plVar2);
  if (((lVar6 != 0) && (uVar7 = (**(code **)(*plVar2 + 0x20))(plVar2), lVar5 != 0)) &&
     ((int)param_1[0x3d] < 9)) {
    uVar1 = (int)param_1[0x3d] + 1;
    *(uint *)(param_1 + 0x3d) = uVar1;
    plVar2 = param_1 + 1 + (ulong)uVar1 * 6;
    if (9 < uVar1) {
      plVar2 = param_1 + 1;
    }
    *plVar2 = lVar5;
    plVar2[1] = lVar6 + (uVar7 & 0xffffffff) * 2;
    plVar2[2] = (long)(puVar3 + 0x10);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}

