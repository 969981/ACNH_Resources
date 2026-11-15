
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024a3f40(long param_1)

{
  byte *pbVar1;
  ulong *puVar2;
  int *piVar3;
  byte *pbVar4;
  char cVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  undefined4 *puVar15;
  char *__src;
  int iVar16;
  long lVar17;
  ushort *puVar18;
  byte bVar19;
  undefined8 uVar20;
  uint *puVar21;
  uint *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  ulong local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  long *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined2 uStack_170;
  undefined2 uStack_16e;
  undefined6 local_16c;
  undefined2 uStack_166;
  undefined4 local_164;
  uint local_160;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined1 local_124;
  undefined5 local_120;
  undefined3 uStack_11b;
  undefined4 uStack_118;
  undefined1 local_114;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined1 local_d1;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_7d;
  uint local_74;
  
  puVar2 = (ulong *)(param_1 + 0x1902);
  FUN_02332b04(param_1,1,0);
  local_190 = (undefined *)
              ((ulong)CONCAT42(local_190._4_4_,*(undefined2 *)(param_1 + 0x1900)) << 0x10);
  FUN_02328b10(param_1,&local_190,1);
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(byte *)(param_1 + 0x17cd) >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x190a) = 1;
      goto LAB_024a3fec;
    }
  }
  else if ((*(char *)(param_1 + 0x190a) != '\0') && (*(char *)(param_1 + 0xb20) == '\0')) {
    if ((*(byte *)(param_1 + 0x17cd) >> 4 & 1) != 0) {
      FUN_0236b9d0(param_1,param_1 + 0x1ee9);
    }
LAB_024a3fec:
    *(undefined1 *)(param_1 + 0xb20) = 1;
  }
  if (*(char *)(param_1 + 0x190a) == '\0') {
    puVar23 = *(undefined8 **)(param_1 + 0x60);
    local_1a0 = 0;
    local_198 = (long *)0x0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    local_1b8 = local_1b8 & 0xffffffff00000000;
    local_190 = (undefined *)CONCAT44(local_190._4_4_,0x18);
    if ((puVar23[0x227] != 0) &&
       (uVar14 = FUN_03850890(puVar23[0x227],0x18,&local_1b0,0), (uVar14 & 1) != 0)) {
      if (local_198 == (long *)0x0) {
        uVar24 = 1;
      }
      else if (*local_198 == 0) {
        local_7d = 0;
        local_188 = (char *)((long)&local_180 + 4);
        local_180 = CONCAT35(local_180._5_3_,0x100);
        local_190 = PTR_DAT_04bb21f8 + 0x10;
        lVar17 = *(long *)(local_198[2] + 8);
        FUN_038d1270(&local_190,"%s.as",
                     lVar17 + *(int *)(lVar17 + 0x24) + (long)*(int *)(lVar17 + 8));
LAB_024a4140:
        uVar24 = 0;
      }
      else {
        iVar13 = *(int *)(*local_198 + 8);
        if (iVar13 < 0x60000000) {
          piVar3 = (int *)(*(long *)(local_198[2] + 8) + (long)iVar13);
          if (*piVar3 < 1) goto LAB_024a4140;
          uVar24 = *(uint *)(((ulong)(uint)piVar3[1] & 0xfffffff) + *(long *)(local_198[2] + 8) + 4)
          ;
        }
        else {
          uVar24 = iVar13 + 0xa0000000;
          if (*(uint *)(local_1a0 + 0x80) <= uVar24) {
            uVar24 = 0;
          }
          lVar17 = *(long *)(local_1a0 + 0x88) + (ulong)uVar24 * 0x32;
          uVar24 = *(uint *)(lVar17 + (ulong)*(byte *)(lVar17 + 0x20));
        }
      }
      *(undefined4 *)(param_1 + 0xae8) = 0;
      *(undefined1 *)(param_1 + 0xaf5) = 1;
      *(byte *)(param_1 + 0xaf4) = (byte)(uVar24 >> 0x1f);
      *(uint *)(param_1 + 0xaf0) = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
      *(uint *)(param_1 + 0xaec) = uVar24 & (int)uVar24 >> 0x1f;
    }
    if (*(char *)(param_1 + 0xaf5) == '\0') {
      fVar28 = 0.0;
    }
    else {
      iVar13 = *(int *)(param_1 + 0xaf0);
      fVar28 = 1.0;
      if ((*(int *)(param_1 + 0xae8) < iVar13) && (fVar28 = 1.0, iVar13 != 0)) {
        fVar26 = (float)*(int *)(param_1 + 0xae8) / (float)iVar13;
        fVar27 = 1.0;
        if (fVar26 <= 1.0) {
          fVar27 = fVar26;
        }
        fVar28 = 0.0;
        if (0.0 <= fVar26) {
          fVar28 = fVar27;
        }
      }
      fVar28 = fVar28 + (1.0 - fVar28) * 0.0;
      uVar25 = (**(code **)(*(long *)(param_1 + 0xae0) + (ulong)*(byte *)(param_1 + 0xaf4) * 8))
                         (param_1 + 0xae0);
      *(undefined4 *)(param_1 + 0xae8) = uVar25;
    }
    local_164 = 0x3f800000;
    local_178._0_2_ = 0xff00;
    local_188 = (char *)0x0;
    local_180 = 0x3f80000000000000;
    local_15c = 0x3f80000000000000;
    local_174 = 0;
    uStack_170 = 0;
    if (*(char *)(param_1 + 0x1913) != '\0') {
      fVar28 = 1.0;
    }
    uStack_16e = 0;
    local_16c = 0;
    local_160 = local_160 & 0xffffff00;
    local_190 = *(undefined **)PTR_DAT_04bb37e0;
    local_124 = 0;
    local_120 = 0;
    uStack_11b = 0;
    uStack_118 = 0;
    local_114 = 0;
    uStack_14c = _UNK_04102208;
    local_154 = _DAT_04102200;
    uStack_13c = _UNK_04102888;
    local_144 = _DAT_04102880;
    local_1b8 = 0xfffe;
    uStack_12c = (undefined4)_UNK_041023d8;
    iStack_128 = (int)((ulong)_UNK_041023d8 >> 0x20);
    local_134 = (undefined4)_DAT_041023d0;
    uStack_130 = (undefined4)((ulong)_DAT_041023d0 >> 0x20);
    FUN_0277d4ac(&local_1b8);
    local_190 = (undefined *)*puVar2;
    lVar17 = FUN_0251e98c(1);
    puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf00) + 0xf0))(lVar17 + 0xf00);
    uVar25 = *puVar15;
    puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf30) + 0xf0))(lVar17 + 0xf30);
    uVar29 = *puVar15;
    puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf60) + 0xf0))(lVar17 + 0xf60);
    bVar11 = *(byte *)(param_1 + 0x1ee8);
    puVar23 = *(undefined8 **)(param_1 + 0x60);
    local_188 = (char *)CONCAT44(uVar29,uVar25);
    local_114 = 0;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_180 = CONCAT44(fVar28,*puVar15);
    local_178 = (uint)CONCAT21(local_178._2_2_,bVar11) << 8;
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar13 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    FUN_0170d420(puVar23,&local_190);
    iVar13 = *(int *)(param_1 + 0x178);
  }
  else {
    FUN_0236c210(param_1,0);
    iVar13 = *(int *)(param_1 + 0x178);
  }
  if (iVar13 != 0) {
    return;
  }
  cVar5 = *(char *)(param_1 + 0x1914);
  uVar14 = FUN_024bc518(param_1);
  if ((uVar14 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1913) = 1;
    FUN_0230e2b0(&local_190);
    pcVar6 = local_188;
    uVar24 = *(uint *)(param_1 + 0x17cc);
    if (local_188 != "Player_GetDemo") {
      iVar13 = 0xe;
      if ((int)local_180 < 0xf) {
        iVar13 = (int)local_180 + -1;
      }
      memcpy(local_188,"Player_GetDemo",(long)iVar13);
      pcVar6[iVar13] = '\0';
    }
    pcVar6 = (char *)CONCAT44(uStack_12c,uStack_130);
    if (cVar5 == '\0') {
      if (pcVar6 != "Get_Insect") {
        __src = "Get_Insect";
        bVar9 = SBORROW4(iStack_128,10);
        iVar13 = iStack_128 + -10;
        bVar10 = iStack_128 == 10;
        iVar16 = 10;
        goto LAB_024a43f8;
      }
    }
    else if (pcVar6 != "Get_InsectFes") {
      __src = "Get_InsectFes";
      bVar9 = SBORROW4(iStack_128,0xd);
      iVar13 = iStack_128 + -0xd;
      bVar10 = iStack_128 == 0xd;
      iVar16 = 0xd;
LAB_024a43f8:
      if (bVar10 || iVar13 < 0 != bVar9) {
        iVar16 = iStack_128 + -1;
      }
      memcpy(pcVar6,__src,(long)iVar16);
      pcVar6[iVar16] = '\0';
    }
    local_d8 = 0xc;
    if ((uVar24 & 0x40) != 0) {
      local_d8 = 3;
    }
    local_1b0 = 0xfffe;
    FUN_0277d4ac(&local_1b0);
    local_1b0 = 0xfffe;
    local_e0 = (undefined4)*puVar2;
    local_dc = (undefined4)(*puVar2 >> 0x20);
    FUN_0277d4ac(&local_1b0);
    uVar14 = *puVar2;
    local_d4 = (undefined2)uVar14;
    local_d2 = (undefined1)(uVar14 >> 0x10);
    local_d1 = (undefined1)(uVar14 >> 0x18);
    local_d0 = (undefined4)(uVar14 >> 0x20);
    local_b8 = 0x3c;
    local_c8 = (uVar24 >> 6 & 1) != 0;
    if ((bool)local_c8) {
      local_c4 = 2;
    }
    else {
      local_c0 = local_e0;
      local_bc = local_dc;
    }
    FUN_02328d9c(param_1,&local_190);
  }
  puVar8 = PTR_DAT_04bb37e0;
  puVar7 = PTR_DAT_04bb32e0;
  if ((*(uint *)(param_1 + 0x17cc) >> 9 & 1) == 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x200;
    local_188._2_6_ = (uint6)((ulong)local_188 >> 0x10) & 0xffffffffff00;
    local_190 = *(undefined **)puVar8;
    bVar11 = *puVar7;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_188._0_2_ = CONCAT11(bVar11,1);
    local_1b0 = 0xfffe;
    FUN_0277d4ac(&local_1b0);
    local_190 = (undefined *)*puVar2;
    bVar11 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_188._0_2_ = CONCAT11(bVar11,*(int *)(param_1 + 0x178) == 0);
    FUN_02307dcc(&local_190);
  }
  uVar14 = FUN_0231eddc(param_1,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xffbfffff;
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar17 == 0) || (*(int *)(lVar17 + 0x15c) == 0)) {
LAB_024a45d0:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar17 = 0;
      if (DAT_00000028 == '\0') goto LAB_024a4614;
LAB_024a45ec:
      bVar11 = (**(code **)(*(long *)(lVar17 + 0x20) + 0x18))((long *)(lVar17 + 0x20));
      *(undefined1 *)(lVar17 + 0x28) = 0;
    }
    else {
      lVar17 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar17 + 0x28) != '\0') goto LAB_024a45ec;
LAB_024a4614:
      bVar11 = 1;
    }
    *(byte *)(lVar17 + 0x29) = bVar11 & 1;
    puVar18 = (ushort *)(lVar17 + 0x2c);
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar17 + 0x158);
    }
    bVar19 = *pbVar1;
    bVar11 = *pbVar4;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (7 < bVar19) {
      bVar19 = 0xff;
    }
    if (bVar11 == bVar19) goto LAB_024a45d0;
    puVar18 = (ushort *)PTR_DAT_04bb37e0;
  }
  uVar24 = (uint)*puVar18;
  local_1b0 = *(undefined8 *)puVar18;
  if (cVar5 != '\0') {
    FUN_0277d6c4(&local_1b0);
    local_15c._2_6_ = (uint6)((ulong)local_15c >> 0x10) & 0xffff00000000;
    local_160 = 0x3f800000;
    local_15c = CONCAT62(local_15c._2_6_,0x100);
    local_1b8 = 0xfffe;
    FUN_0277d4ac(&local_1b8);
    local_190 = (undefined *)*puVar2;
    local_188 = (char *)0x4;
    local_180 = CONCAT44(2,(int)local_180);
    local_164 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
    uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
    local_16c = (undefined6)uVar20;
    uStack_166 = (undefined2)((ulong)uVar20 >> 0x30);
    lVar17 = FUN_0251e98c(1);
    puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf00) + 0xf0))(lVar17 + 0xf00);
    uVar29 = *puVar15;
    puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf30) + 0xf0))(lVar17 + 0xf30);
    uVar30 = *puVar15;
    puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf60) + 0xf0))(lVar17 + 0xf60);
    uVar25 = *puVar15;
    local_180 = local_180 & 0xffffffffffffff00;
    local_178 = uVar29;
    local_174 = uVar30;
LAB_024a4700:
    uStack_170 = (undefined2)uVar25;
    uStack_16e = (undefined2)((uint)uVar25 >> 0x10);
    local_15c._0_3_ = CONCAT12(cVar5 != '\0',(undefined2)local_15c);
    FUN_0236cba0(param_1,&local_190);
    return;
  }
  if ((*(byte *)(param_1 + 0x17cc) >> 6 & 1) != 0) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_054f0960);
        puVar21 = (uint *)&DAT_054f0958;
        if (iVar13 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar21 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar21 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar21 = puVar21 + (ulong)*pbVar1 * 2;
      }
    }
    local_190 = (undefined *)CONCAT44(local_190._4_4_,0x13);
    *puVar21 = *puVar21 | 0x80000;
    uVar24 = (uint)local_1b0 & 0xffff;
    if ((short)local_1b0 == -2) {
      uVar24 = 0xfffe;
      local_190 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_190);
    }
  }
  puVar7 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar12 = FUN_0277d6c4(&local_1b0);
  if (*(long *)puVar7 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if (((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
       ((*(byte *)(param_1 + 0x17cc) >> 6 & 1) != 0)) {
      local_1b8 = 0xfffe;
      FUN_0277d4ac(&local_1b8);
      local_1b8 = *puVar2;
      local_190 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_190);
      FUN_016e49e4(&local_190,&local_1b8,0);
      lVar17 = *(long *)puVar7;
      uVar12 = FUN_0277d6c4(&local_190);
      if (*(long *)puVar7 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          FUN_026738b0(pbVar1,&local_190,1,0);
        }
      }
    }
  }
  if (((*(uint *)(param_1 + 0x17cc) >> 6 & 1) != 0) && (uVar24 == 0xfffe)) {
    local_190 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_190);
    local_190 = (undefined *)*puVar2;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    local_74 = 1;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined **)(param_1 + 0x1980) = local_190;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    local_1b8 = CONCAT44(local_1b8._4_4_,0x93);
    *(undefined2 *)(param_1 + 0x1988) = 1;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    lVar17 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar17 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar17,0x93);
    return;
  }
  if (((*(uint *)(param_1 + 0x17cc) >> 6 & 1) == 0) || (uVar24 == 0xfffe)) {
    local_15c._2_6_ = (uint6)((ulong)local_15c >> 0x10) & 0xffff00000000;
    local_160 = 0x3f800000;
    local_15c = CONCAT62(local_15c._2_6_,0x100);
    local_1b8 = 0xfffe;
    FUN_0277d4ac(&local_1b8);
    local_190 = (undefined *)*puVar2;
    local_188 = (char *)0x4;
    local_180 = CONCAT44(2,(int)local_180);
    local_164 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
    uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
    local_16c = (undefined6)uVar20;
    uStack_166 = (undefined2)((ulong)uVar20 >> 0x30);
    lVar17 = FUN_0251e98c(1);
    puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf00) + 0xf0))(lVar17 + 0xf00);
    uVar29 = *puVar15;
    puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf30) + 0xf0))(lVar17 + 0xf30);
    uVar30 = *puVar15;
    puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf60) + 0xf0))(lVar17 + 0xf60);
    uVar25 = *puVar15;
    local_180 = CONCAT71(local_180._1_7_,1);
    local_178 = uVar29;
    local_174 = uVar30;
    goto LAB_024a4700;
  }
  local_180 = 0;
  local_190 = PTR_DAT_04bc0510 + 0x10;
  lVar17 = *(long *)puVar7;
  local_188 = (char *)CONCAT44(local_1b0._4_4_,CONCAT22(local_1b0._2_2_,(short)uVar24));
  uVar24 = FUN_0277d6c4(&local_188);
  if (*(long *)puVar7 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar24 = FUN_0277d6c4(&local_1b0);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar17 + 0x1d8)) &&
         (puVar21 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar24 * 8),
         puVar21 != (uint *)0x0)) {
        local_74 = 0;
        local_1b8 = CONCAT44(local_1b8._4_4_,0x69);
        uVar24 = *puVar21;
        if ((uVar24 != 0) && (puVar21 != (uint *)(ulong)uVar24)) {
          puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar24);
          local_74 = 0;
          if (*puVar22 != 0) {
            uVar24 = puVar22[1];
            if ((uVar24 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
              lVar17 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar22 + lVar17 + (ulong)(ushort)puVar22[2] * 8;
              if (lVar17 != 0) {
                uVar12 = 0;
                if ((ulong)uVar24 != 0) {
                  uVar12 = (uint)((ulong)((long)puVar21 - lVar17) / (ulong)uVar24);
                }
                if (*puVar22 <= uVar12) {
                  uVar12 = 0xffffffff;
                }
                if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_74 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2),
                   local_74 < 0xbd)) goto LAB_024a4c14;
              }
            }
            local_74 = 0;
          }
        }
        goto LAB_024a4c14;
      }
    }
  }
  local_1b8 = CONCAT44(local_1b8._4_4_,0x69);
  local_74 = 0xbc;
LAB_024a4c14:
  if (local_74 == (uint)local_1b8) {
    FUN_024a4d10(param_1,&local_1b0,1);
  }
  else {
    FUN_02373ee0(param_1,6,1,1);
  }
  return;
}

