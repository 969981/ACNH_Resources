
void FUN_01b3cf90(int *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 local_208 [14];
  undefined *local_1d0;
  char *pcStack_1c8;
  undefined *local_1c0;
  undefined8 *puStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined *local_190;
  undefined1 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c [63];
  undefined1 local_13d;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [63];
  undefined1 local_e5;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  undefined6 local_c0;
  undefined2 uStack_ba;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = PTR_DAT_04bb2bc0;
  puVar4 = PTR_DAT_04bb28f8;
  local_1ac = 0;
  local_1b0 = 0x40;
  local_1a8 = 0xffffffff;
  uStack_1a0 = 0xffffffff00000000;
  puStack_188 = local_17c;
  local_198 = 0xffffffff;
  puStack_1b8 = &local_e0;
  local_180 = 0x40;
  local_13d = 0;
  lVar10 = *(long *)PTR_DAT_04bb28f8;
  local_17c[0] = 0;
  local_190 = PTR_DAT_04bb2bc0 + 0x10;
  local_128 = 0x40;
  local_e5 = 0;
  local_124[0] = 0;
  puStack_130 = local_124;
  local_1c0 = PTR_DAT_04bb6b18 + 0x10;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_ba = 0;
  local_b8 = 0;
  puVar1 = (undefined1 *)((long)register0x00000008 - 0x60);
  if ((undefined1 *)((long)register0x00000008 + -0x60) <= (undefined1 *)((long)&local_e0 + 2)) {
    puVar1 = (undefined1 *)((long)&local_e0 + 2);
  }
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c2 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_138 = local_190;
  memset(puStack_1b8,0,(size_t)(puVar1 + (-0xe0 - (long)&local_1c0)));
  local_1d0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_1c8 = "STR_HHA_Rank";
  FUN_006d8678(local_208,&DAT_0405bf91,*param_1 + 1);
  if ((*(long *)(lVar10 + 10000) == 0) || (*(long *)(lVar10 + 0x2718) == 0)) {
    FUN_006f50a0(&local_1c0,&local_1d0,local_208,0);
  }
  else {
    iVar7 = FUN_01be5d00(*(undefined8 *)puVar4,&local_1d0);
    if (iVar7 == 9) {
      uVar8 = *(undefined8 *)(lVar10 + 10000);
    }
    else {
      if (iVar7 != 5) goto LAB_01b3d104;
      uVar8 = *(undefined8 *)(lVar10 + 0x2718);
    }
    FUN_01ba7cc0(uVar8,&local_1c0,&local_1d0,local_208);
  }
LAB_01b3d104:
  puVar4 = PTR_DAT_04bc0a88;
  local_208[0] = 4;
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar7 != 0))
  {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  puVar6 = PTR_DAT_04bc0a80;
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar9 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar9 * 4) == 0x8c) goto LAB_01b3d15c;
      uVar9 = uVar9 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar9);
  }
  uVar9 = 0;
LAB_01b3d15c:
  local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,(int)uVar9);
  FUN_01bae480(param_2,&local_1c0,0,&local_1d0,local_208[0]);
  local_190 = puVar5 + 0x10;
  local_1ac = 0;
  local_1b0 = 0x13;
  local_1a8 = 0xffffffff;
  uStack_1a0 = 0xffffffff00000000;
  puStack_188 = local_17c;
  puStack_1b8 = &local_e0;
  local_198 = 0xffffffff;
  local_180 = 0x40;
  local_13d = 0;
  local_17c[0] = 0;
  local_128 = 0x40;
  local_e5 = 0;
  local_124[0] = 0;
  puStack_130 = local_124;
  local_1c0 = PTR_DAT_04bc0bc0 + 0x10;
  local_e0 = 0;
  uStack_d8 = 0;
  local_c0 = 0;
  puVar2 = &uStack_ba;
  if (&uStack_ba <= (undefined2 *)((long)&local_e0 + 2U)) {
    puVar2 = (undefined2 *)((long)&local_e0 + 2U);
  }
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c2 = 0;
  local_138 = local_190;
  memset(puStack_1b8,0,(long)puVar2 + (-0xe1 - (long)&local_1c0) & 0xfffffffffffffffcU | 2);
  iVar7 = param_1[1];
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_01be4af0(&local_1c0,*(undefined4 *)(lVar10 + 0x2720),iVar7,10,0,0);
  local_b8 = CONCAT44(local_b8._4_4_,iVar7);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar7 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  uVar3 = *(uint *)puVar6;
  if (0 < (int)uVar3) {
    uVar9 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 8) + uVar9 * 4) == 0x5a) goto LAB_01b3d270;
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
  }
  uVar9 = 0;
LAB_01b3d270:
  local_208[0] = (undefined4)uVar9;
  FUN_01bafc20(param_2,&local_1c0,0,local_208,0);
  return;
}

