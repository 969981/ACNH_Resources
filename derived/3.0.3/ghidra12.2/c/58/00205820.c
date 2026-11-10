
void FUN_00205820(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint *puVar14;
  bool bVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  undefined1 auStack_1b8 [8];
  undefined *local_1b0;
  uint local_1a8;
  undefined4 uStack_1a4;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined1 local_19c;
  undefined1 local_19b;
  undefined1 local_19a;
  undefined1 local_199;
  uint *local_198;
  undefined8 uStack_190;
  undefined *local_188;
  undefined4 local_180;
  undefined1 local_17c;
  long local_178;
  long local_170;
  long local_160;
  undefined1 auStack_150 [24];
  long local_138;
  int local_130;
  long local_128;
  undefined *local_120;
  uint local_118;
  undefined4 uStack_114;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  uint *local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 auStack_c0 [40];
  undefined *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_04bcc018;
  local_90 = 1;
  local_8c = 0;
  puVar1 = PTR_DAT_04bcc018 + 0x10;
  local_98 = puVar1;
  uVar16 = FUN_00196a18();
  FUN_00196a24(&local_98,uVar16,0);
  uVar17 = FUN_001f9c64(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28),param_3,&local_98);
  if ((uVar17 & 1) == 0) {
    *param_1 = (long)&PTR_LAB_0483f8d8;
    param_1[1] = 0;
    goto LAB_00205bd0;
  }
  FUN_0019c934(auStack_c0);
  local_f0 = 1;
  local_ec = 0;
  local_f8 = puVar1;
  uVar16 = FUN_00196a18();
  FUN_00196a24(&local_f8,uVar16,0);
  puVar1 = PTR_DAT_04bc0ec8;
  local_118 = local_118 & 0xffffff00;
  local_120 = PTR_DAT_04bc0ec8 + 0x10;
  uStack_100 = 0x10;
  local_108 = &local_118;
  FUN_00195b30(auStack_150,&local_98);
  uVar16 = FUN_0019cd9c(auStack_c0,0x20);
  FUN_00196210(auStack_150,uVar16,0x100);
  FUN_001967bc(auStack_150,&local_58,8,1);
  FUN_001968b4(auStack_150,&local_f8);
  if (local_128 != (ulong)(7 - local_130) + local_138 * 8) {
    local_180 = 1;
    local_188 = puVar3 + 0x10;
    local_17c = 0;
    uVar16 = FUN_00196a18();
    FUN_00196a24(&local_188,uVar16,0);
    FUN_001968b4(auStack_150,&local_188);
    if (local_170 != 0) {
      *(undefined1 *)(local_170 + local_178 + local_160 + -1) = 0;
      local_1b0 = puVar1 + 0x10;
      local_1a8 = local_1a8 & 0xffffff00;
      uStack_190 = 0x10;
      local_198 = &local_1a8;
      FUN_0018b070(&local_1b0,local_178 + local_160,0xffffffffffffffff);
      uVar16 = uStack_100;
      puVar14 = local_108;
      uVar13 = local_109;
      uVar12 = local_10a;
      uVar11 = local_10b;
      uVar10 = local_10c;
      uVar9 = local_10d;
      uVar8 = local_10e;
      uVar7 = local_10f;
      uVar6 = local_110;
      uVar5 = uStack_1a4;
      uVar4 = local_1a8;
      local_1a8 = local_118;
      uStack_1a4 = uStack_114;
      local_118 = uVar4;
      uStack_114 = uVar5;
      local_110 = local_1a0;
      local_1a0 = uVar6;
      local_10f = local_19f;
      local_19f = uVar7;
      local_10e = local_19e;
      local_19e = uVar8;
      local_10d = local_19d;
      local_19d = uVar9;
      local_10c = local_19c;
      local_19c = uVar10;
      local_10b = local_19b;
      local_19b = uVar11;
      local_10a = local_19a;
      local_19a = uVar12;
      local_109 = local_199;
      local_199 = uVar13;
      bVar15 = local_108 != &local_118;
      local_108 = local_198;
      uStack_100 = uStack_190;
      uStack_190 = uVar16;
      puVar2 = &local_1a8;
      if (bVar15) {
        puVar2 = puVar14;
      }
      if (local_198 == &local_1a8) {
        local_108 = &local_118;
      }
      local_1b0 = puVar1 + 0x10;
      local_198 = puVar2;
      FUN_0018b1a0(&local_1b0);
    }
    FUN_00196ce0(&local_188);
  }
  FUN_00186524(&local_188);
  FUN_00187068(&local_188);
  lVar18 = FUN_00185a6c(0xb8);
  if (lVar18 == 0) {
    *param_1 = (long)(PTR_DAT_04bccbc0 + 0x10);
    plVar19 = (long *)FUN_00185a6c(0x20);
    if (plVar19 != (long *)0x0) {
      lVar18 = 0;
      goto LAB_00205b6c;
    }
  }
  else {
    FUN_0018652c(auStack_1b8,&local_188);
    FUN_001fd178(lVar18,&local_f8,param_4,local_58,auStack_c0,auStack_1b8,0x9ea5,2,&local_120);
    *param_1 = (long)(PTR_DAT_04bccbc0 + 0x10);
    plVar19 = (long *)FUN_00185a6c(0x20);
    if (plVar19 != (long *)0x0) {
LAB_00205b6c:
      *plVar19 = (long)(PTR_DAT_04bcbf40 + 0x10);
      *(undefined4 *)(plVar19 + 1) = 1;
      *(undefined4 *)((long)plVar19 + 0xc) = 1;
      plVar19[2] = lVar18;
      *plVar19 = (long)&PTR_LAB_0483f910;
    }
  }
  param_1[1] = (long)plVar19;
  FUN_00195bf0(auStack_150);
  local_120 = puVar1 + 0x10;
  FUN_0018b1a0(&local_120);
  FUN_00196ce0(&local_f8);
  FUN_0019cd34(auStack_c0);
LAB_00205bd0:
  FUN_00196ce0(&local_98);
  return;
}

