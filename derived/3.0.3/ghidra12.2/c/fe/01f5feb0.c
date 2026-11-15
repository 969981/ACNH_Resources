
undefined8 FUN_01f5feb0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  void *__s;
  uint *puVar7;
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  undefined1 uVar12;
  long lVar13;
  undefined8 *puVar14;
  uint local_918;
  uint uStack_914;
  uint local_910;
  uint uStack_90c;
  undefined8 local_908;
  undefined1 auStack_900 [1876];
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  undefined4 local_198 [2];
  undefined *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined5 local_13c;
  undefined3 uStack_137;
  undefined5 uStack_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [31];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [31];
  undefined1 local_8d;
  undefined8 local_88;
  uint *puStack_80;
  
  if (((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) &&
      (1 < *(int *)(*(long *)(param_1 + 8) + 0x750) - 1U)) &&
     (uVar5 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x2b4) + 0x20000000U >> 0x1e,
     local_908 = (undefined *)CONCAT44(local_908._4_4_,uVar5), uVar5 != 2)) {
    local_198[0] = 0;
    local_170 = 0;
    local_180 = 0;
    local_188 = PTR_DAT_04bb2010 + 0x10;
    local_190 = PTR_DAT_04bbc1a0 + 0x10;
    local_154 = 0;
    local_15c = 0;
    uStack_158 = 0xfffe;
    local_178 = local_188;
    FUN_0277d4ac(&uStack_158);
    local_13c = 0;
    uStack_137 = 0;
    uStack_134 = 0;
    local_150 = 0x41c8000041800000;
    local_148 = 0xbf800000bf800000;
    local_140 = 0xbf800000;
    local_12c = 0xfffe;
    FUN_0277d4ac(&local_12c);
    local_124 = 0;
    local_e8 = 0x20;
    local_b8 = local_ac;
    local_b0 = 0x20;
    local_f0 = local_e4;
    local_c5 = 0;
    local_f8 = PTR_DAT_04bb2028 + 0x10;
    local_e4[0] = 0;
    local_8d = 0;
    local_ac[0] = 0;
    local_198[0] = 0;
    local_180 = 0;
    local_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_15c = 0;
    local_908 = (undefined *)0xfffe;
    local_c0 = local_f8;
    FUN_0277d4ac(&local_908);
    uStack_158 = (undefined4)local_908;
    local_154 = local_908._4_4_;
    local_150 = 0x41c8000041800000;
    local_148 = 0xbf800000bf800000;
    local_140 = 0xbf800000;
    local_13c = 0;
    uStack_137 = 0;
    uStack_134 = 0;
    local_908 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_908);
    local_124 = 0;
    local_120 = 0;
    local_11c = 0;
    local_114 = 0;
    local_10c = 0;
    local_104 = 0;
    local_fc = 0;
    local_12c = local_908;
    *local_f0 = 0;
    *local_b8 = 0;
    local_198[0] = 0;
    local_180 = 0;
    local_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_15c = 0;
    local_908 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_908);
    uStack_158 = (undefined4)local_908;
    local_154 = local_908._4_4_;
    local_150 = 0x41c8000041800000;
    local_148 = 0xbf800000bf800000;
    local_140 = 0xbf800000;
    local_13c = 0;
    uStack_137 = 0;
    uStack_134 = 0;
    local_908 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_908);
    local_11c = 0;
    local_114 = 0;
    local_10c = 0;
    local_104 = 0;
    local_124 = 0;
    local_120 = 0;
    local_fc = 0;
    local_12c = local_908;
    *local_f0 = 0;
    *local_b8 = 0;
    local_908 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_900,0,0x754);
    uVar5 = nn::os::GetSystemTick();
    local_1ac = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
    local_1a8 = (local_1ac ^ local_1ac >> 0x1e) * 0x6c078965 + 2;
    local_1a4 = (local_1a8 ^ local_1a8 >> 0x1e) * 0x6c078965 + 3;
    local_1a0 = (local_1a4 ^ local_1a4 >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)FUN_01a451fc(&local_908);
    memset(__s,0,0x754);
    puStack_80 = &local_918;
    local_918 = 0x32;
    local_88 = &PTR_FUN_049ff448;
    FUN_008a1ba0(&local_908,&local_88);
    puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar5 = *puVar7 ^ *puVar7 << 0xb;
    uVar2 = puVar7[3];
    *puVar7 = puVar7[1];
    puVar7[1] = puVar7[2];
    uVar1 = uVar5 ^ uVar2;
    uVar5 = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar5;
    uVar5 = (uVar5 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
    uVar1 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
    uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
    local_918 = uVar5;
    uStack_914 = uVar1;
    local_910 = uVar2;
    uStack_90c = uVar3;
    lVar8 = (**(code **)(local_908 + 0x20))(&local_908);
    lVar13 = 0;
    iVar10 = 0;
    do {
      puVar7 = (uint *)(lVar8 + lVar13);
      lVar13 = lVar13 + 4;
      uVar11 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      iVar10 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar10;
    } while (lVar13 != 0x754);
    if (iVar10 == 0) {
      uVar9 = PTR_DAT_04bb37e0[2];
      uVar12 = PTR_DAT_04bb37e0[3];
      puVar14 = (undefined8 *)PTR_DAT_04bb37e0;
    }
    else {
      lVar8 = (**(code **)(local_908 + 0x20))(&local_908);
      lVar13 = 0;
      uVar11 = 0;
      do {
        puVar7 = (uint *)(lVar8 + lVar13);
        lVar13 = lVar13 + 4;
        uVar4 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
        uVar4 = uVar4 + (uVar4 >> 8);
        uVar11 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + uVar11;
      } while (lVar13 != 0x754);
      uVar5 = uVar5 ^ uVar5 * 0x800;
      uStack_90c = uVar5 >> 8 ^ uVar3 >> 0x13 ^ uVar5 ^ uVar3;
      local_918 = uVar1;
      uStack_914 = uVar2;
      local_910 = uVar3;
      FUN_00889f80(&local_88,&local_908,(int)((ulong)uStack_90c * (ulong)uVar11 >> 0x20) + 1);
      FUN_01a4c66c(&local_918,&local_88);
      puVar14 = &local_88;
      uVar9 = local_88._2_1_;
      uVar12 = local_88._3_1_;
    }
    local_12c = CONCAT44(*(undefined4 *)((long)puVar14 + 4),
                         CONCAT22(CONCAT11(uVar12,uVar9),*(undefined2 *)puVar14));
    FUN_01e6648c(param_1,0x4f,local_198,1);
    if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) != 0) {
      local_88 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      puStack_80 = (uint *)0x40b6162;
      FUN_021c98f0(*(undefined8 *)(param_1 + 8),&local_88,1);
    }
    if (*(char *)(param_1 + 0x13716) != '\0') {
      *(undefined1 *)(param_1 + 0x13716) = 0;
    }
    uVar6 = 1;
    *(undefined4 *)(param_1 + 0x1367c) = 0x4f;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

