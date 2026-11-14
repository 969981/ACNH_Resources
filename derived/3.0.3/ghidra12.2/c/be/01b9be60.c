
void FUN_01b9be60(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  void *pvVar10;
  long *plVar11;
  long lVar12;
  void *pvVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  undefined *local_430;
  long lStack_428;
  undefined *local_420;
  long lStack_418;
  undefined *local_410;
  long lStack_408;
  undefined *local_358;
  long local_350;
  long lStack_348;
  undefined *local_340;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined *local_310;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined *local_2e0;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined *local_2b0;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined *local_280;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined *local_250;
  undefined8 local_230;
  undefined8 local_228;
  undefined *local_220;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  uint local_154;
  undefined *local_150;
  void *local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined *local_120;
  undefined1 *local_118;
  undefined4 local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [63];
  undefined1 local_75;
  void *local_70;
  
  puVar8 = PTR_DAT_04bb2e00;
  puVar6 = PTR_DAT_04bb2698;
  local_140 = 0;
  local_13c = 0;
  local_128 = 0xffffffff;
  local_138 = 0xffffffff;
  uStack_130 = 0xffffffff00000000;
  lVar3 = *param_2;
  lVar4 = param_2[1];
  local_118 = local_10c;
  local_110 = 0x40;
  plVar11 = *(long **)PTR_DAT_04bc08b8;
  local_cd = 0;
  local_c0 = local_b4;
  local_10c[0] = 0;
  local_b8 = 0x40;
  local_120 = PTR_DAT_04bb2bc0 + 0x10;
  local_75 = 0;
  local_b4[0] = 0;
  lVar16 = *(long *)PTR_DAT_04bb2698;
  local_150 = PTR_DAT_04bb2e00 + 0x10;
  local_70 = (void *)0x0;
  local_148 = (void *)0x0;
  local_c8 = local_120;
  if (lVar16 == 0) {
    pvVar13 = malloc(0x1000);
    pvVar10 = local_148;
  }
  else {
    if (plVar11 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar16 + 8);
      if (lVar12 != 0) {
        plVar11 = (long *)(lVar12 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      pvVar10 = local_148;
      if (plVar11 == (long *)0x0) goto LAB_01b9bf74;
    }
    pvVar13 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,0x1000,8);
    pvVar10 = local_148;
  }
  local_148 = pvVar13;
  if (local_148 != (void *)0x0) {
    local_140 = 0x800;
    local_70 = local_148;
    (**(code **)(local_150 + 0x38))(&local_150);
    pvVar10 = local_148;
  }
LAB_01b9bf74:
  local_148 = pvVar10;
  puVar5 = PTR_DAT_04bb2020;
  local_410 = PTR_DAT_04bb2020 + 0x10;
  lStack_408 = lVar4;
  local_358 = local_410;
  local_350 = lVar3;
  FUN_006f50a0(&local_150,&local_358,&local_410,0);
  memset(&local_350,0,0x1e0);
  puVar7 = PTR_DAT_04bb2d80;
  local_320 = 0;
  uStack_318 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_340 = PTR_DAT_04bb2d80 + 0x10;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_230 = 0;
  local_228 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_358 = PTR_DAT_04bb2d50 + 0x10;
  local_154 = 1;
  local_310 = local_340;
  local_2e0 = local_340;
  local_2b0 = local_340;
  local_280 = local_340;
  local_250 = local_340;
  local_220 = local_340;
  local_1f0 = local_340;
  local_1c0 = local_340;
  local_190 = local_340;
  FUN_006f1750(&local_358);
  local_170 = 0xffffffff;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  lVar16 = (**(code **)(local_150 + 0x18))(&local_150);
  lVar12 = (**(code **)(local_150 + 0x18))(&local_150);
  if ((lVar12 != 0) && (uVar14 = (**(code **)(local_150 + 0x20))(&local_150), lVar16 != 0)) {
    lStack_348 = lVar12 + (uVar14 & 0xffffffff) * 2;
    local_170 = 0;
    local_340 = puVar7 + 0x10;
    local_350 = lVar16;
  }
  (**(code **)(local_358 + 0x18))(&local_358);
  FUN_006f1490(&local_358);
  uVar9 = local_154;
  if ((int)local_154 < 2) {
    uVar14 = 0;
  }
  else if (((lVar4 == 0) || (lVar3 == 0)) || (*(long *)(param_1 + 0x178) == 0)) {
    puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar1 = *puVar15 ^ *puVar15 << 0xb;
    uVar2 = puVar15[3];
    *puVar15 = puVar15[1];
    puVar15[1] = puVar15[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar15[2] = uVar2;
    puVar15[3] = uVar1;
    uVar14 = (ulong)uVar9 * (ulong)uVar1 >> 0x20;
  }
  else {
    local_430 = puVar5 + 0x10;
    lStack_428 = lVar4;
    local_420 = local_430;
    lStack_418 = lVar3;
    FUN_01be6180(&local_410,&local_420,&local_430);
    uVar14 = FUN_035a3f60(0x3f800000,*(undefined8 *)(param_1 + 0x178),&local_410,uVar9);
    uVar14 = uVar14 & 0xffffffff;
  }
  FUN_006f1cb0(param_1 + 8,&local_150,uVar14);
  (**(code **)(*(long *)(param_1 + 8) + 0x30))(param_1 + 8,&local_150);
  local_150 = puVar8 + 0x10;
  if (local_70 != (void *)0x0) {
    local_148 = (void *)0x0;
    local_140 = 0;
    local_13c = 0;
    local_128 = 0xffffffff;
    local_138 = 0xffffffff;
    uStack_130 = 0xffffffff00000000;
    *local_118 = 0;
    *local_c0 = 0;
    pvVar10 = local_70;
    if (local_70 != (void *)0x0) {
      if (*(long *)puVar6 == 0) {
        free(local_70);
      }
      else {
        plVar11 = (long *)FUN_038cb610(*(long *)puVar6,local_70);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
        }
      }
    }
  }
  return;
}

