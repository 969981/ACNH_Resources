
undefined4 FUN_01bb2cd4(long *param_1,long *param_2,long param_3,long param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  undefined *local_390;
  undefined1 auStack_388 [16];
  undefined *local_378;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined *local_348;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined *local_318;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined *local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined *local_2b8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined *local_288;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined *local_258;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined *local_228;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined *local_1f8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined *local_1c8;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined *local_148;
  void *local_140;
  uint local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined *local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  void *local_68;
  
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x56) = 1;
  *(undefined4 *)((long)param_1 + 0x2b4) = 0;
  if (param_2 != (long *)0x0) {
    param_1[0x52] = (long)param_1;
    param_1[0x53] = (long)param_2;
    lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x54] = lVar8;
    param_1[0x55] = lVar8;
    uVar9 = (**(code **)(*param_2 + 0x20))(param_2);
    param_1[0x55] = param_1[0x55] + (uVar9 & 0xffffffff) * 2 + -2;
    (**(code **)(*(long *)param_1[0x53] + 0x38))();
  }
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x20f) = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((long)param_1 + 0x22d) = 0;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x50) = 9;
  *(undefined4 *)((long)param_1 + 0x214) = 0;
  *(undefined2 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined2 *)((long)param_1 + 0x284) = 0;
  *(undefined1 *)((long)param_1 + 0x4bc) = 0;
  (**(code **)(*param_1 + 0x10))(param_1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  puVar3 = PTR_DAT_04bb2d80;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x3d) = 0;
    param_1[3] = (long)(puVar3 + 0x10);
    param_1[1] = param_3;
    param_1[2] = param_4;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_006f1490(param_1);
  if (*(char *)((long)param_1 + 0x4b9) == '\0') {
    uVar6 = *(undefined4 *)((long)param_1 + 0x2b4);
    cVar1 = (char)param_1[0x97];
  }
  else {
    uVar6 = FUN_01bb30e8(param_1,param_2);
    cVar1 = (char)param_1[0x97];
  }
  if (cVar1 == '\0') {
    return uVar6;
  }
  uVar7 = (**(code **)(*param_2 + 0x20))(param_2);
  puVar4 = PTR_DAT_04bb2e00;
  puVar2 = PTR_DAT_04bb2698;
  local_138 = 0;
  local_134 = 0;
  local_120 = 0xffffffff;
  local_130 = 0xffffffff;
  uStack_128 = 0xffffffff00000000;
  local_110 = local_104;
  local_108 = 0x40;
  plVar10 = *(long **)PTR_DAT_04bc08b0;
  local_c5 = 0;
  local_104[0] = 0;
  local_118 = PTR_DAT_04bb2bc0 + 0x10;
  local_b0 = 0x40;
  local_6d = 0;
  local_ac[0] = 0;
  local_b8 = local_ac;
  local_148 = PTR_DAT_04bb2e00 + 0x10;
  local_140 = (void *)0x0;
  local_68 = (void *)0x0;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  local_c0 = local_118;
  if (lVar8 == 0) {
    pvVar12 = malloc((ulong)uVar7 << 1);
    pvVar5 = local_140;
  }
  else {
    if (plVar10 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar8 + 8);
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      pvVar5 = local_140;
      if (plVar10 == (long *)0x0) goto LAB_01bb2f4c;
    }
    pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,(ulong)uVar7 << 1,8);
    pvVar5 = local_140;
  }
  local_140 = pvVar12;
  if (local_140 != (void *)0x0) {
    local_138 = uVar7;
    local_68 = local_140;
    (**(code **)(local_148 + 0x38))(&local_148);
    pvVar5 = local_140;
  }
LAB_01bb2f4c:
  local_140 = pvVar5;
  memset(auStack_388,0,0x1e0);
  local_378 = puVar3 + 0x10;
  local_358 = 0;
  uStack_350 = 0;
  local_1a8 = 0xffffffff;
  local_190 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_390 = PTR_DAT_04bc07f8 + 0x10;
  local_18c = 0;
  local_18a = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 1;
  local_15c = 0;
  local_188 = PTR_DAT_04bc0cd8 + 0x10;
  local_158 = 0;
  local_150 = 0;
  local_348 = local_378;
  local_318 = local_378;
  local_2e8 = local_378;
  local_2b8 = local_378;
  local_288 = local_378;
  local_258 = local_378;
  local_228 = local_378;
  local_1f8 = local_378;
  local_1c8 = local_378;
  uVar6 = FUN_01ba3c24(&local_390,&local_148,param_2);
  (**(code **)(*param_2 + 0x28))(param_2,&local_148);
  (**(code **)(*param_2 + 0x30))(param_2,&local_148);
  local_148 = puVar4 + 0x10;
  if (local_68 != (void *)0x0) {
    local_140 = (void *)0x0;
    local_138 = 0;
    local_134 = 0;
    local_120 = 0xffffffff;
    local_130 = 0xffffffff;
    uStack_128 = 0xffffffff00000000;
    *local_110 = 0;
    *local_b8 = 0;
    pvVar5 = local_68;
    if (local_68 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(local_68);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)puVar2,local_68);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar5);
        }
      }
    }
  }
  return uVar6;
}

