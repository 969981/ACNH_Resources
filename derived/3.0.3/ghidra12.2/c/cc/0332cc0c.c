
/* WARNING: Type propagation algorithm not settling */

void FUN_0332cc0c(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char **ppcVar4;
  int iVar5;
  ulong uVar6;
  bool bVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *local_3f0;
  char *local_3e8 [6];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined *local_3a8;
  undefined8 local_388;
  undefined8 uStack_380;
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
  uint local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined **local_1e8;
  undefined2 local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined2 *local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4 [31];
  undefined2 local_176;
  undefined *local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined *local_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if (*(long *)PTR_DAT_04bc1118 == 0) {
    return;
  }
  iVar5 = *(int *)(*(long *)PTR_DAT_04bc1118 + 0x3c);
  if (iVar5 == DAT_05732524) {
    lVar10 = 0;
  }
  else if (iVar5 == DAT_05732528) {
    lVar10 = 1;
  }
  else if (iVar5 == DAT_0573252c) {
    lVar10 = 2;
  }
  else if (iVar5 == DAT_05732530) {
    lVar10 = 3;
  }
  else if (iVar5 == DAT_05732534) {
    lVar10 = 4;
  }
  else if (iVar5 == DAT_05732538) {
    lVar10 = 5;
  }
  else if (iVar5 == DAT_0573253c) {
    lVar10 = 6;
  }
  else if (iVar5 == DAT_05732540) {
    lVar10 = 7;
  }
  else if (iVar5 == DAT_05732544) {
    lVar10 = 8;
  }
  else if (iVar5 == DAT_05732548) {
    lVar10 = 9;
  }
  else if (iVar5 == DAT_0573254c) {
    lVar10 = 10;
  }
  else {
    if (iVar5 != DAT_05732550) {
      puVar11 = (undefined *)0x0;
      goto LAB_0332cdd8;
    }
    lVar10 = 0xb;
  }
  ppuVar1 = &PTR_DAT_04b1ee28;
  if (param_2 != 0) {
    ppuVar1 = &PTR_DAT_04b1ee88;
  }
  puVar11 = ppuVar1[lVar10];
LAB_0332cdd8:
  local_3f0 = (undefined *)CONCAT44(local_3f0._4_4_,iVar5);
  local_150 = 0xffffffff00000000;
  local_15c = 0;
  local_ed = 0;
  local_160 = 0x20;
  puVar2 = &DAT_040c47ff;
  if (param_2 != 0) {
    puVar2 = &DAT_040962e2;
  }
  local_158 = 0xffffffff;
  local_148 = 0xffffffff;
  local_130 = 0x40;
  if (puVar11 != (undefined *)0x0) {
    puVar2 = puVar11;
  }
  local_12c[0] = 0;
  local_138 = local_12c;
  local_140 = PTR_DAT_04bb2bc0 + 0x10;
  local_e0 = local_d4;
  local_168 = &local_90;
  local_d8 = 0x40;
  local_95 = 0;
  local_d4[0] = 0;
  local_170 = PTR_DAT_04bb4e10 + 0x10;
  local_58 = 0;
  local_60 = 0;
  puVar3 = local_d4 + 0x84;
  if (local_d4 + 0x84 <= (undefined1 *)((long)&local_90 + 2)) {
    puVar3 = (undefined1 *)((long)&local_90 + 2);
  }
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_e8 = local_140;
  memset(local_168,0,(size_t)(puVar3 + (-0xe0 - (long)&local_170)));
  local_1b8 = 0x20;
  local_176 = 0;
  local_1c0 = local_1b4;
  local_1b4[0] = 0;
  local_1c8 = PTR_DAT_04bc0840 + 0x10;
  local_3f0 = PTR_DAT_04bb2020 + 0x10;
  local_3e8[0] = "ETC_Swkbd";
  local_1d8 = local_3f0;
  local_1d0 = puVar2;
  FUN_006f50a0(&local_170,&local_3f0,&local_1d8,0);
  memset(local_3e8,0,0x1e0);
  puVar11 = PTR_DAT_04bb2d80;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_3e8[2] = PTR_DAT_04bb2d80 + 0x10;
  local_358 = 0;
  uStack_350 = 0;
  local_208 = 0xffffffff;
  local_1f0 = 0;
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
  local_200 = 0;
  uStack_1f8 = 0;
  local_3f0 = PTR_DAT_04bb2d78 + 0x10;
  local_3a8 = local_3e8[2];
  local_378 = local_3e8[2];
  local_348 = local_3e8[2];
  local_318 = local_3e8[2];
  local_2e8 = local_3e8[2];
  local_2b8 = local_3e8[2];
  local_288 = local_3e8[2];
  local_258 = local_3e8[2];
  local_228 = local_3e8[2];
  local_1e8 = &local_1c8;
  *local_1c0 = 0;
  local_1e0 = 0;
  (**(code **)(local_3f0 + 0x10))(&local_3f0);
  local_208 = 0xffffffff;
  local_1f0 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  pcVar8 = (char *)(**(code **)(local_170 + 0x18))(&local_170);
  lVar10 = (**(code **)(local_170 + 0x18))(&local_170);
  if (((lVar10 != 0) && (uVar9 = (**(code **)(local_170 + 0x20))(&local_170), pcVar8 != (char *)0x0)
      ) && ((int)local_208 < 9)) {
    local_208 = local_208 + 1;
    uVar6 = (ulong)local_208;
    bVar7 = 9 < local_208;
    ppcVar4 = local_3e8 + uVar6 * 6;
    if (bVar7) {
      ppcVar4 = local_3e8;
    }
    *ppcVar4 = pcVar8;
    ppcVar4 = local_3e8 + uVar6 * 6 + 1;
    if (bVar7) {
      ppcVar4 = local_3e8 + 1;
    }
    *ppcVar4 = (char *)(lVar10 + (uVar9 & 0xffffffff) * 2);
    ppcVar4 = local_3e8 + uVar6 * 6 + 2;
    if (bVar7) {
      ppcVar4 = local_3e8 + 2;
    }
    *ppcVar4 = puVar11 + 0x10;
  }
  (**(code **)(local_3f0 + 0x18))(&local_3f0);
  FUN_006f1490(&local_3f0);
  FUN_032d67f0(param_1,&local_1c8);
  return;
}

