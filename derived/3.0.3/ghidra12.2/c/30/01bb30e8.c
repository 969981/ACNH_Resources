
undefined4 FUN_01bb30e8(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *local_3a0;
  undefined1 auStack_398 [16];
  undefined *local_388;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined *local_358;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined *local_328;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined *local_2f8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined *local_2c8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined *local_298;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined *local_268;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined *local_238;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined *local_208;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined *local_1d8;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_154;
  undefined1 local_14c;
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
  
  uVar4 = (**(code **)(*param_2 + 0x20))(param_2);
  puVar2 = PTR_DAT_04bb2e00;
  puVar1 = PTR_DAT_04bb2698;
  local_138 = 0;
  local_134 = 0;
  local_120 = 0xffffffff;
  local_130 = 0xffffffff;
  uStack_128 = 0xffffffff00000000;
  local_110 = local_104;
  local_108 = 0x40;
  plVar6 = *(long **)PTR_DAT_04bc08b0;
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
  lVar10 = *(long *)PTR_DAT_04bb2698;
  local_c0 = local_118;
  if (lVar10 == 0) {
    pvVar8 = malloc((ulong)uVar4 << 1);
    pvVar3 = local_140;
  }
  else {
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar10 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      pvVar3 = local_140;
      if (plVar6 == (long *)0x0) goto LAB_01bb3210;
    }
    pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)uVar4 << 1,8);
    pvVar3 = local_140;
  }
  local_140 = pvVar8;
  if (local_140 != (void *)0x0) {
    local_138 = uVar4;
    local_68 = local_140;
    (**(code **)(local_148 + 0x38))(&local_148);
    pvVar3 = local_140;
  }
LAB_01bb3210:
  local_140 = pvVar3;
  if (*(long *)(param_1 + 0x270) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x270) + 0x48);
  }
  memset(auStack_398,0,0x1e0);
  local_368 = 0;
  uStack_360 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_388 = PTR_DAT_04bb2d80 + 0x10;
  local_1b8 = 0xffffffff;
  local_308 = 0;
  uStack_300 = 0;
  local_1a0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_3a0 = PTR_DAT_04bc0800 + 0x10;
  local_158 = 1;
  local_190 = 0;
  local_188 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_154 = 0;
  local_180 = PTR_DAT_04bc0cd8 + 0x10;
  local_14c = 0;
  local_358 = local_388;
  local_328 = local_388;
  local_2f8 = local_388;
  local_2c8 = local_388;
  local_298 = local_388;
  local_268 = local_388;
  local_238 = local_388;
  local_208 = local_388;
  local_1d8 = local_388;
  local_198 = uVar9;
  uVar5 = FUN_01ba40f8(&local_3a0,&local_148,param_2);
  (**(code **)(*param_2 + 0x28))(param_2,&local_148);
  (**(code **)(*param_2 + 0x30))(param_2,&local_148);
  local_148 = puVar2 + 0x10;
  if (local_68 != (void *)0x0) {
    local_140 = (void *)0x0;
    local_138 = 0;
    local_134 = 0;
    local_120 = 0xffffffff;
    local_130 = 0xffffffff;
    uStack_128 = 0xffffffff00000000;
    *local_110 = 0;
    *local_b8 = 0;
    pvVar3 = local_68;
    if (local_68 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(local_68);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar1,local_68);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar3);
        }
      }
    }
  }
  return uVar5;
}

