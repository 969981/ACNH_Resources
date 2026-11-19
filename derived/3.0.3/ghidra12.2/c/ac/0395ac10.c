
void FUN_0395ac10(long param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  int aiStack_284 [3];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 *puStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 *puStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar7 = param_2;
  if (param_2 == 0) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),0,0);
    plVar1 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0xa8);
    }
    lVar7 = *plVar1;
  }
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  plVar1 = (long *)(param_1 + 0x7a8);
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  puVar6 = PTR_DAT_04bd0fa8;
  uVar8 = *(undefined8 *)PTR_DAT_04bd0fa8;
  *(byte *)(param_1 + 0x7c8) = *(byte *)(param_1 + 0x7c8) & 0xfe;
  *(undefined2 *)(param_1 + 0x7ca) = 0;
  FUN_038f8590(uVar8,param_1 + 0x7a0,lVar7,0x200,8,0);
  *(undefined2 *)(param_1 + 0x7ca) = 0;
  puVar5 = PTR_DAT_04bb2cd8;
  local_268 = 0x8000000000000000;
  local_260 = 0xbf000000;
  local_258 = 0xbf800000;
  local_250 = 0x3f8000003f000000;
  local_1c8 = 0x80000000bf000000;
  uStack_1c0 = 0xbf13cd3b00000000;
  local_1a8 = 0x3f00000000000000;
  uStack_1a0 = 0xbf13cd3b00000000;
  local_188 = 0x80000000bf000000;
  uStack_180 = 0xbf13cd3b00000000;
  local_148 = 0x3f00000000000000;
  uStack_140 = 0xbf13cd3b00000000;
  lVar7 = 0x1c;
  local_238 = 0xbf800000;
  uStack_230 = 0x3f0000003f800000;
  local_218 = 0xbf800000;
  uStack_210 = 0x3f00000000000000;
  local_1f8 = 0xbf800000;
  uStack_1f0 = 0x3f000000;
  local_128 = 0x8000000000000000;
  uStack_120 = 0x3f13cd3b3f000000;
  local_248 = 0x800000003f000000;
  uStack_240 = 0;
  local_228 = 0x80000000bf000000;
  uStack_220 = 0;
  local_1e8 = 0x8000000000000000;
  uStack_1e0 = 0xbf13cd3bbf000000;
  local_108 = 0x800000003f000000;
  uStack_100 = 0x3f13cd3b00000000;
  local_c8 = 0x800000003f000000;
  uStack_c0 = 0x3f13cd3b00000000;
  local_208 = 0x8000000000000000;
  uStack_200 = 0x3f000000;
  local_1d8 = 0xbf13cd3b3f13cd3b;
  uStack_1d0 = 0x3f80000000000000;
  local_1b8 = 0xbf13cd3b3f13cd3b;
  puStack_1b0 = &DAT_3f8000003f800000;
  local_198 = 0xbf13cd3b3f13cd3b;
  uStack_190 = 0x3f000000;
  local_178 = 0x3f13cd3b3f13cd3b;
  uStack_170 = 0x3f80000000000000;
  local_168 = 0x8000000000000000;
  uStack_160 = 0xbf13cd3b3f000000;
  local_158 = 0x3f13cd3b3f13cd3b;
  puStack_150 = &DAT_3f8000003f800000;
  local_138 = 0x3f13cd3b3f13cd3b;
  uStack_130 = 0x3f000000;
  local_118 = 0x3f13cd3b3f13cd3b;
  uStack_110 = 0x3f80000000000000;
  local_f8 = 0x3f13cd3b3f13cd3b;
  puStack_f0 = &DAT_3f8000003f800000;
  local_e8 = 0x3f00000000000000;
  uStack_e0 = 0x3f13cd3b00000000;
  local_d8 = 0x3f13cd3b3f13cd3b;
  uStack_d0 = 0x3f000000;
  local_b8 = 0xbf13cd3b3f13cd3b;
  uStack_b0 = 0x3f80000000000000;
  local_a8 = 0x8000000000000000;
  uStack_a0 = 0x3f13cd3bbf000000;
  local_98 = 0xbf13cd3b3f13cd3b;
  puStack_90 = &DAT_3f8000003f800000;
  local_88 = 0x3f00000000000000;
  uStack_80 = 0x3f13cd3b00000000;
  local_78 = 0xbf13cd3b3f13cd3b;
  local_70 = 0x3f000000;
  do {
    lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7b8));
    lVar9 = 0;
    if (*(long *)(param_1 + 0x7c0) != 0) {
      lVar9 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7c0) + 0x10);
    }
    lVar12 = lVar12 + lVar9 + lVar7;
    *(undefined4 *)(lVar12 + -0x1c) = *(undefined4 *)((long)aiStack_284 + lVar7);
    *(undefined4 *)(lVar12 + -0x18) = *(undefined4 *)((long)aiStack_284 + lVar7 + 4);
    *(undefined4 *)(lVar12 + -0x14) = *(undefined4 *)((long)aiStack_284 + lVar7 + 8);
    lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7b8));
    lVar9 = 0;
    if (*(long *)(param_1 + 0x7c0) != 0) {
      lVar9 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7c0) + 0x10);
    }
    lVar12 = lVar12 + lVar9 + lVar7;
    *(undefined4 *)(lVar12 + -0x10) = *(undefined4 *)((long)aiStack_284 + lVar7 + 0xc);
    *(undefined4 *)(lVar12 + -0xc) = *(undefined4 *)((long)aiStack_284 + lVar7 + 0x10);
    *(undefined4 *)(lVar12 + -8) = *(undefined4 *)((long)&uStack_270 + lVar7);
    lVar9 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7b8));
    lVar12 = 0;
    if (*(long *)(param_1 + 0x7c0) != 0) {
      lVar12 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7c0) + 0x10);
    }
    puVar2 = (undefined4 *)(lVar9 + lVar12 + lVar7);
    puVar2[-1] = *(undefined4 *)((long)&uStack_270 + lVar7 + 4);
    puVar4 = (undefined4 *)((long)&local_268 + lVar7);
    lVar7 = lVar7 + 0x20;
    *puVar2 = *puVar4;
  } while (lVar7 != 0x21c);
  local_278 = *(long *)(param_1 + 0x7b8);
  aiStack_284[1] = 0;
  if (*(long *)(param_1 + 0x7c0) != 0) {
    aiStack_284[1] = *(int *)plVar1 - *(int *)(*(long *)(param_1 + 0x7c0) + 0x10);
  }
  aiStack_284[2] = 0;
  if (local_278 != 0) {
    aiStack_284[2] = *(undefined4 *)(local_278 + 0x104);
  }
  uStack_270 = param_1 + 0x7a0;
  FUN_0390ebc0(param_1 + 0x848,aiStack_284 + 1,0x20,0x200);
  *(undefined8 *)(param_1 + 0x880) = 0x22;
  *(undefined8 *)(param_1 + 0x88c) = 0xc00000022;
  *(undefined2 *)(param_1 + 0x888) = 1;
  *(undefined2 *)(param_1 + 0x894) = 1;
  *(undefined8 *)(param_1 + 0x898) = 0x1800000016;
  *(undefined2 *)(param_1 + 0x8a0) = 1;
  lVar7 = param_2;
  if (param_2 == 0) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0);
    plVar1 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0xa8);
    }
    lVar7 = *plVar1;
  }
  uVar8 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x808) = 0;
  plVar1 = (long *)(param_1 + 0x7e0);
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  *(undefined8 *)(param_1 + 0x7f0) = 0;
  *(undefined8 *)(param_1 + 0x7f8) = 0;
  *(undefined2 *)(param_1 + 0x802) = 0;
  *(byte *)(param_1 + 0x800) = *(byte *)(param_1 + 0x800) & 0xfe;
  FUN_038f8590(uVar8,param_1 + 0x7d8,lVar7,0x24,4,0);
  *(undefined2 *)(param_1 + 0x802) = 0;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7) = 0;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 2) = 1;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 4) = 2;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 6) = 1;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 8) = 3;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 10) = 2;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0xc) = 4;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0xe) = 5;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0x10) = 6;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0x12) = 7;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0x14) = 8;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0x16) = 9;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0x18) = 10;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0x1a) = 0xb;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0x1c) = 0xc;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0x1e) = 0xd;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0x20) = 0xe;
  lVar12 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x7f0));
  lVar7 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    lVar7 = *plVar1 - *(long *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  *(undefined2 *)(lVar12 + lVar7 + 0x22) = 0xf;
  local_260 = *(long *)(param_1 + 0x7f0);
  iVar10 = 0;
  if (*(long *)(param_1 + 0x7f8) != 0) {
    iVar10 = *(int *)plVar1 - *(int *)(*(long *)(param_1 + 0x7f8) + 0x10);
  }
  if (local_260 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(local_260 + 0x104);
  }
  local_268 = CONCAT44(uVar11,iVar10);
  local_258 = param_1 + 0x7d8;
  FUN_03901480(param_1 + 0x968,&local_268,1,0x12);
  if (param_2 == 0) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar1 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0xa8);
    }
    param_2 = *plVar1;
  }
  uVar8 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x840) = 0;
  *(undefined8 *)(param_1 + 0x818) = 0;
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined8 *)(param_1 + 0x828) = 0;
  *(undefined8 *)(param_1 + 0x830) = 0;
  *(undefined2 *)(param_1 + 0x83a) = 0;
  *(byte *)(param_1 + 0x838) = *(byte *)(param_1 + 0x838) & 0xfe;
  FUN_038f8590(uVar8,param_1 + 0x810,param_2,0x40,4,0);
  lVar7 = 0;
  *(undefined2 *)(param_1 + 0x83a) = 0;
  do {
    uVar3 = *(undefined2 *)((long)&DAT_041b3c62 + lVar7);
    lVar9 = (**(code **)puVar5)(*(undefined8 *)(param_1 + 0x828));
    lVar12 = 0;
    if (*(long *)(param_1 + 0x830) != 0) {
      lVar12 = *(long *)(param_1 + 0x818) - *(long *)(*(long *)(param_1 + 0x830) + 0x10);
    }
    *(undefined2 *)(lVar9 + lVar12 + lVar7) = uVar3;
    lVar7 = lVar7 + 2;
  } while (lVar7 != 0x40);
  local_260 = *(long *)(param_1 + 0x828);
  iVar10 = 0;
  if (*(long *)(param_1 + 0x830) != 0) {
    iVar10 = *(int *)(param_1 + 0x818) - *(int *)(*(long *)(param_1 + 0x830) + 0x10);
  }
  if (local_260 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(local_260 + 0x104);
  }
  local_268 = CONCAT44(uVar11,iVar10);
  local_258 = param_1 + 0x810;
  FUN_03901480(param_1 + 0x9c8,&local_268,1,0x20);
  *(undefined4 *)(param_1 + 0x9d4) = 1;
  return;
}

