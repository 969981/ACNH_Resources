
void FUN_004166f0(long param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  uint *puVar19;
  long lVar20;
  size_t sVar21;
  long lVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  ulong uVar28;
  int local_350 [6];
  char *local_338;
  char *local_330;
  undefined1 local_328;
  undefined1 uStack_327;
  undefined2 uStack_324;
  undefined1 local_322;
  undefined1 local_321;
  undefined1 local_320;
  undefined1 local_31f;
  undefined1 local_31e;
  undefined1 local_31d;
  undefined1 local_31c;
  undefined1 local_31b;
  undefined1 local_31a;
  undefined1 local_319;
  undefined1 *local_318;
  undefined8 local_310;
  char *local_210;
  undefined1 local_208 [16];
  undefined1 *local_1f8;
  undefined8 uStack_1f0;
  char *local_1e8;
  undefined1 local_1e0 [16];
  undefined1 *local_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  char *local_1a8;
  char *local_1a0;
  undefined1 local_198 [16];
  undefined1 *local_188;
  undefined8 uStack_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  char *local_160;
  undefined1 local_158;
  undefined1 uStack_157;
  undefined2 local_154;
  undefined1 local_152;
  undefined1 local_151;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  undefined1 *local_148;
  undefined8 local_140;
  
  puVar8 = PTR_DAT_04bcb908;
  puVar7 = PTR_DAT_04bcb900;
  plVar24 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar19 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar5 = *puVar19;
    if (uVar5 != 0) {
      lVar20 = **(long **)(puVar7 + 0xa0);
      if ((ulong)((*(long **)(puVar7 + 0xa0))[1] - lVar20 >> 3) <= (ulong)uVar5) goto LAB_00416d8c;
      plVar24 = (long *)(*(long *)(lVar20 + (ulong)uVar5 * 8) + 0x20);
    }
  }
  lVar20 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar24 + 0x10) + 0x18),
                        *(undefined4 *)(param_1 + 0xa0));
  if (lVar20 == 0) {
    local_160 = (char *)CONCAT44(local_160._4_4_,0x80010004);
    FUN_0018aa70(&local_338,&local_160);
    FUN_00416da4(param_1,&local_338);
  }
  else {
    lVar20 = param_1 + 0xc0;
    *(undefined4 *)(param_1 + 0x150) = 0;
    FUN_001984a0(lVar20);
    puVar6 = PTR_DAT_04bc0ec8;
    local_188 = local_198;
    local_168 = (undefined1 *)0x0;
    local_198[0] = 0;
    local_178 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_1a0 = PTR_DAT_04bc0ec8 + 0x10;
    uStack_180 = 0x10;
    FUN_00416ea0(param_1 + 0x188,&local_1a0);
    local_1a8 = (char *)0x0;
    FUN_00189050(&local_1a0,&local_1a8);
    pcVar2 = local_1a8;
    sVar21 = strlen(local_1a8);
    FUN_001a2ac0(&local_178,pcVar2,pcVar2 + sVar21,sVar21);
    FUN_00189128(local_1a8);
    puVar25 = local_170;
    puVar27 = local_178;
    if (local_170 < local_168) {
      *local_170 = 0;
      local_170 = local_170 + 1;
    }
    else {
      puVar1 = local_170 + (1 - (long)local_178);
      if ((long)puVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c6e7e8(&local_178);
      }
      puVar26 = (undefined1 *)(((long)local_168 - (long)local_178) * 2);
      if (puVar26 <= puVar1) {
        puVar26 = puVar1;
      }
      if (0x3ffffffffffffffe < (ulong)((long)local_168 - (long)local_178)) {
        puVar26 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar26 == (undefined1 *)0x0) {
        lVar22 = 0;
      }
      else {
        lVar22 = FUN_00187df4(puVar26);
      }
      puVar25 = puVar25 + (lVar22 - (long)puVar27);
      local_168 = puVar26 + lVar22;
      puVar27 = puVar25 + 1;
      *puVar25 = 0;
      if (local_170 != local_178) {
        uVar5 = (int)local_170 - (int)local_178;
        puVar1 = local_170 + ~(ulong)local_178;
        uVar28 = (ulong)uVar5 & 3;
        if ((uVar5 & 3) != 0) {
          do {
            local_170 = local_170 + -1;
            uVar28 = uVar28 - 1;
            puVar25 = puVar25 + -1;
            *puVar25 = *local_170;
          } while (uVar28 != 0);
        }
        if ((undefined1 *)0x2 < puVar1) {
          do {
            puVar25[-1] = local_170[-1];
            puVar25[-2] = local_170[-2];
            puVar25[-3] = local_170[-3];
            local_170 = local_170 + -4;
            puVar25 = puVar25 + -4;
            *puVar25 = *local_170;
          } while (local_170 != local_178);
        }
        local_170 = local_178;
      }
      bVar3 = local_170 != (undefined1 *)0x0;
      local_178 = puVar25;
      local_170 = puVar27;
      if (bVar3) {
        FUN_00187e4c();
      }
    }
    local_1c0 = &local_1b8;
    local_1b8 = 0;
    uStack_1b0 = 0;
    lVar22 = FUN_0018b798(param_1 + 0x158);
    if (lVar22 != 0) {
      pcVar2 = puVar6 + 0x10;
      local_1e0[0] = 0;
      local_1d0 = local_1e0;
      uStack_1c8 = 0x10;
      local_1e8 = pcVar2;
      FUN_0018b070(&local_1e8,"Bearer ",0xffffffffffffffff);
      FUN_0018b650(&local_160,&local_1e8,param_1 + 0x158);
      local_310 = local_140;
      uVar18 = local_319;
      uVar17 = local_31a;
      uVar16 = local_31b;
      uVar15 = local_31c;
      uVar14 = local_31d;
      uVar13 = local_31e;
      uVar12 = local_31f;
      uVar11 = local_320;
      uVar10 = local_321;
      uVar9 = local_322;
      local_338 = "Authorization";
      local_158 = 0;
      uStack_157 = uStack_327;
      uStack_324 = local_154;
      local_322 = local_152;
      local_152 = uVar9;
      local_321 = local_151;
      local_151 = uVar10;
      local_320 = local_150;
      local_150 = uVar11;
      local_31f = local_14f;
      local_14f = uVar12;
      local_31e = local_14e;
      local_14e = uVar13;
      local_31d = local_14d;
      local_14d = uVar14;
      local_31c = local_14c;
      local_14c = uVar15;
      local_31b = local_14b;
      local_14b = uVar16;
      local_31a = local_14a;
      local_14a = uVar17;
      local_319 = local_149;
      local_140 = 0x10;
      local_149 = uVar18;
      local_318 = local_148;
      if (local_148 == &local_158) {
        local_318 = &local_328;
      }
      local_330 = pcVar2;
      local_148 = &local_158;
      FUN_00421390(&local_1c0,&local_338);
      local_330 = pcVar2;
      FUN_0018b1a0(&local_330);
      local_160 = pcVar2;
      FUN_0018b1a0(&local_160);
      local_1e8 = pcVar2;
      FUN_0018b1a0(&local_1e8);
    }
    pcVar2 = puVar6 + 0x10;
    local_1e0[0] = 0;
    local_1d0 = local_1e0;
    uStack_1c8 = 0x10;
    local_1e8 = pcVar2;
    FUN_004170d0(&local_1e8);
    local_328 = 0;
    local_338 = "User-Agent";
    local_318 = &local_328;
    local_310 = 0x10;
    local_330 = pcVar2;
    FUN_0018b070(&local_330,local_1d0,0xffffffffffffffff);
    FUN_00421390(&local_1c0,&local_338);
    local_330 = pcVar2;
    FUN_0018b1a0(&local_330);
    local_338 = "Content-Type";
    local_330 = "application/json";
    FUN_00421510(&local_1c0,&local_338);
    local_1f8 = local_208;
    local_208[0] = 0;
    uStack_1f0 = 0x10;
    local_210 = pcVar2;
    snprintf((char *)&local_338,0x100,"api-%%.znc.srv.nintendo.net");
    nn::nsd::ResolveEx((Fqdn *)&local_160,(Fqdn *)&local_338);
    FUN_0018a58c(&local_210,&local_160);
    FUN_0018c3a4(&local_338);
    uVar23 = FUN_00186ea0(&local_338,"https://");
    uVar23 = FUN_0018c0b0(uVar23,&local_210);
    uVar23 = FUN_00186ea0(uVar23,"/v1/NX/");
    FUN_00186ea0(uVar23,*(undefined8 *)PTR_PTR_04bd2bb8);
    local_148 = &local_158;
    local_158 = 0;
    local_140 = 0x10;
    local_160 = pcVar2;
    FUN_0018b070(&local_160,local_330,0xffffffffffffffff);
    FUN_001f0040(local_350,param_1 + 0x180,lVar20,&local_160,2,*(undefined4 *)(param_1 + 0xa4),
                 &local_178,0,&local_1c0,0x2800,param_1 + 0xa8,param_1 + 0x150);
    puVar4 = PTR_LAB_04bc0ee0;
    if (local_350[0] < 0) {
      puVar4 = (undefined *)0x0;
    }
    local_160 = pcVar2;
    FUN_0018b1a0(&local_160);
    if (puVar4 == (undefined *)0x0) {
      local_350[0] = -0x7ffefff3;
      FUN_0018aa70(&local_160,local_350);
      FUN_00416da4(param_1,&local_160);
    }
    else {
      plVar24 = (long *)(puVar7 + 0x28);
      if (*puVar8 != '\0') {
        puVar19 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar5 = *puVar19;
        if (uVar5 != 0) {
          lVar22 = **(long **)(puVar7 + 0xa0);
          if ((ulong)((*(long **)(puVar7 + 0xa0))[1] - lVar22 >> 3) <= (ulong)uVar5) {
LAB_00416d8c:
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar24 = (long *)(*(long *)(lVar22 + (ulong)uVar5 * 8) + 0x20);
        }
      }
      FUN_0019a150(*(undefined8 *)(*(long *)(*plVar24 + 0x10) + 0x18),
                   *(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xd8));
      FUN_0019c910(param_1,2);
      plVar24 = (long *)FUN_00185a6c(0x20);
      puVar8 = PTR_LAB_04bd2bc0;
      puVar7 = PTR_DAT_04bcc0c0;
      if (plVar24 != (long *)0x0) {
        plVar24[2] = 0;
        plVar24[3] = (long)&DAT_0407ebb1;
        *plVar24 = (long)(puVar7 + 0x10);
        plVar24[1] = (long)puVar8;
      }
      FUN_0019ab80(param_1,lVar20);
    }
    FUN_0018c3d4(&local_338);
    pcVar2 = puVar6 + 0x10;
    local_210 = pcVar2;
    FUN_0018b1a0(&local_210);
    local_1e8 = pcVar2;
    FUN_0018b1a0(&local_1e8);
    FUN_001dbfc8(&local_1c0,local_1b8);
    local_1a0 = pcVar2;
    FUN_0018b1a0(&local_1a0);
    if (local_178 != (undefined1 *)0x0) {
      local_170 = local_178;
      FUN_00187e4c();
    }
  }
  return;
}

