
/* WARNING: Removing unreachable block (ram,0x024c3980) */
/* WARNING: Removing unreachable block (ram,0x024c3b90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024c2540(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  float *pfVar16;
  undefined4 *puVar17;
  char *__src;
  ulong uVar18;
  byte bVar19;
  uint uVar20;
  long lVar21;
  uint *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  char *pcVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined *local_280;
  char *local_278;
  undefined8 local_270;
  char *local_268;
  int local_260;
  undefined4 auStack_25c [15];
  undefined1 local_21d;
  undefined4 local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  long local_1f8;
  long *local_1f0;
  byte local_1e4 [4];
  float local_1e0;
  float fStack_1dc;
  float local_1d8;
  float local_1d4;
  float fStack_1d0;
  float local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined2 local_1a8;
  undefined6 local_1a4;
  undefined2 uStack_19e;
  undefined6 uStack_19c;
  undefined4 local_194;
  undefined1 local_190;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined1 local_154;
  float local_150;
  float fStack_14c;
  float local_148;
  undefined1 local_144;
  undefined2 local_110;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_ad;
  
  local_1c8 = 0xfffe;
  FUN_0277d4ac(&local_1c8);
  local_1c8 = *(undefined8 *)(param_4 + 0x1918);
  iVar3 = *(int *)(param_4 + 0x178);
  uVar14 = FUN_0251e98c(1);
  fVar27 = (float)FUN_02366a5c(uVar14,&local_1c8);
  uVar33 = 0x3f800000;
  fStack_1d0 = (float)(int)*(short *)(param_4 + 0x190e) * 0.25;
  local_1d4 = (float)*(int *)(param_4 + 0x190a) * 0.001;
  local_1e0 = (float)*(int *)(param_4 + 0x1900) * 0.001;
  fStack_1dc = (float)(int)*(short *)(param_4 + 0x1904) * 0.25;
  local_1cc = (float)*(int *)(param_4 + 0x1910) * 0.001;
  local_1d8 = (float)*(int *)(param_4 + 0x1906) * 0.001;
  FUN_023297c8(0x3e99999a,0x3f800000,param_4,&local_1e0);
  puVar7 = PTR_DAT_04bbbc68;
  lVar21 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar21 != 0) && (*(long *)(lVar21 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)) &&
     (((*(long *)(lVar21 + 0x488) != 0 && (*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0)) &&
      ((*(long *)(lVar21 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0)))))) {
    uVar11 = FUN_0277d6c4(&local_1c8);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar21 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      FUN_0124c030(&local_1c0,&local_1c8);
      iVar12 = FUN_0123db50(&local_1b8,local_1b0);
      if ((8 < iVar12 - 0x23U) && (iVar12 = FUN_0123db50(&local_1b8,local_1b0), 6 < iVar12 - 0xbU))
      {
        FUN_0123db50(&local_1b8,local_1b0);
      }
    }
  }
  iVar12 = (int)local_1e0;
  bVar9 = local_1e0 < 0.0;
  fVar30 = (float)(int)local_1d8 / 5.0;
  fVar29 = (float)(int)((int)fVar30 - (uint)(local_1d8 < 0.0) & 0xfffffffe) * 5.0;
  fVar34 = fVar29 + 5.0;
  uVar28 = FUN_016e026c(0,&local_1e0,0,0);
  local_1c0 = (undefined *)
              CONCAT44(uVar28,(float)(int)((int)((float)iVar12 / 5.0) - (uint)bVar9 & 0xfffffffe) *
                              5.0 + 5.0);
  local_1b8 = (char *)CONCAT44(local_1b8._4_4_,fVar34);
  FUN_0231ece4(param_4,&local_1d4,&local_1c0);
  uVar11 = *(uint *)(param_4 + 0x17cc);
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_054f0960);
      puVar22 = (uint *)&DAT_054f0958;
      if (iVar12 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar22 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar22 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*(byte *)(param_4 + 0x1ee8) < 8) {
      puVar22 = puVar22 + (ulong)*(byte *)(param_4 + 0x1ee8) * 2;
    }
  }
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0x13);
  if ((uVar11 >> 6 & 1) == 0) {
    uVar13 = *puVar22 & 0xfff7ffff;
  }
  else {
    uVar13 = *puVar22 | 0x80000;
  }
  *puVar22 = uVar13;
  if ((*(uint *)(param_4 + 0x17cc) >> 9 & 1) == 0) {
    uVar15 = (ulong)local_1b8 >> 0x10;
    *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) | 0x200;
    local_1c0 = (undefined *)local_1c8;
    bVar19 = *(byte *)(param_4 + 0x1ee8);
    if (7 < bVar19) {
      bVar19 = 0xff;
    }
    local_1b8._0_2_ = CONCAT11(bVar19,*(int *)(param_4 + 0x178) == 0);
    local_1b8 = (char *)(CONCAT62((int6)uVar15,(undefined2)local_1b8) & 0xffffffffff00ffff);
    FUN_02308524(&local_1c0);
  }
  puVar23 = *(undefined8 **)(param_4 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  local_270 = (undefined *)((ulong)local_270._4_4_ << 0x20);
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0x2d);
  if ((puVar23[0x227] != 0) && (uVar15 = FUN_03850890(puVar23[0x227],0x2d,0,0), (uVar15 & 1) != 0))
  {
    local_1e4[0] = *(byte *)(param_4 + 0x1ee8);
    if (*(int *)(param_4 + 0x178) == 0) {
      lVar21 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)local_1e4[0] * 0x740;
      if (7 < local_1e4[0]) {
        lVar21 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      if ((*(byte *)(lVar21 + 0x328) >> 3 & 1) != 0) {
        FUN_0231e380(param_4);
        local_1e4[0] = *(byte *)(param_4 + 0x1ee8);
      }
    }
    *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) & 0xfffffffe;
    if (7 < local_1e4[0]) {
      local_1e4[0] = 0xff;
    }
    FUN_024c43c4(local_1e4,param_4 + 0x18e0);
    *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) | 1;
    *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) | 0x10;
    *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) & 0xfffffffb;
    local_1c0 = (undefined *)CONCAT44((int)((ulong)local_1c0 >> 0x20),3);
    *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) & 0xfffffff7;
  }
  puVar23 = *(undefined8 **)(param_4 + 0x60);
  local_1f8 = 0;
  local_1f0 = (long *)0x0;
  local_208 = 0;
  uStack_200 = 0;
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  local_270 = (undefined *)((ulong)local_270 & 0xffffffff00000000);
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0x1d);
  if ((puVar23[0x227] != 0) &&
     (uVar15 = FUN_03850890(puVar23[0x227],0x1d,&local_208,0), (uVar15 & 1) != 0)) {
    if (local_1f0 == (long *)0x0) {
      uVar13 = 1;
    }
    else if (*local_1f0 == 0) {
      local_ad = 0;
      local_1b8 = (char *)((long)&local_1b0 + 4);
      local_1b0 = CONCAT35(local_1b0._5_3_,0x100);
      local_1c0 = PTR_DAT_04bb21f8 + 0x10;
      lVar21 = *(long *)(local_1f0[2] + 8);
      FUN_038d1270(&local_1c0,"%s.as",lVar21 + *(int *)(lVar21 + 0x24) + (long)*(int *)(lVar21 + 8))
      ;
LAB_024c2b20:
      uVar13 = 0;
    }
    else {
      iVar12 = *(int *)(*local_1f0 + 8);
      if (iVar12 < 0x60000000) {
        piVar1 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar12);
        if (*piVar1 < 1) goto LAB_024c2b20;
        uVar13 = *(uint *)(((ulong)(uint)piVar1[1] & 0xfffffff) + *(long *)(local_1f0[2] + 8) + 4);
      }
      else {
        uVar13 = iVar12 + 0xa0000000;
        if (*(uint *)(local_1f8 + 0x80) <= uVar13) {
          uVar13 = 0;
        }
        lVar21 = *(long *)(local_1f8 + 0x88) + (ulong)uVar13 * 0x32;
        uVar13 = *(uint *)(lVar21 + (ulong)*(byte *)(lVar21 + 0x20));
      }
    }
    *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) & 0xfffffffe;
    local_1c0 = (undefined *)CONCAT44((int)((ulong)local_1c0 >> 0x20),1);
    *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) | 2;
    puVar24 = *(undefined8 **)(param_4 + 0x60);
    puVar23 = puVar24;
    if (puVar24 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_052461c0), iVar12 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar24 = *(undefined8 **)(param_4 + 0x60);
      if (puVar24 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_052461c0), iVar12 != 0))
        {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar24 = &DAT_05240280;
        puVar23 = puVar24;
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    uVar28 = FUN_01711ce0(puVar24);
    *(undefined4 *)(puVar23 + 0x252) = uVar28;
    *(float *)((long)puVar23 + 0x1294) = fVar29;
    *(byte *)((long)puVar23 + 0x12b4) = (byte)(uVar13 >> 0x1f);
    *(float *)(puVar23 + 0x253) = fVar30;
    *(undefined4 *)(puVar23 + 0x255) = 0;
    *(uint *)((long)puVar23 + 0x12ac) = uVar13 & (int)uVar13 >> 0x1f;
    *(uint *)(puVar23 + 0x256) = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
    *(undefined1 *)((long)puVar23 + 0x12b5) = 1;
    *(undefined1 *)((long)puVar23 + 0x126c) = 0;
  }
  puVar23 = *(undefined8 **)(param_4 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  local_270 = (undefined *)((ulong)local_270 & 0xffffffff00000000);
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0x1e);
  if ((puVar23[0x227] != 0) &&
     (uVar15 = FUN_03850890(puVar23[0x227],0x1e,&local_208,0), (uVar15 & 1) != 0)) {
    if (local_1f0 == (long *)0x0) {
      uVar13 = 1;
    }
    else {
      if (*local_1f0 == 0) {
        local_ad = 0;
        local_1b8 = (char *)((long)&local_1b0 + 4);
        local_1b0 = CONCAT35(local_1b0._5_3_,0x100);
        local_1c0 = PTR_DAT_04bb21f8 + 0x10;
        lVar21 = *(long *)(local_1f0[2] + 8);
        FUN_038d1270(&local_1c0,"%s.as",
                     lVar21 + *(int *)(lVar21 + 0x24) + (long)*(int *)(lVar21 + 8));
        uVar13 = 0;
        if (local_1f0 == (long *)0x0) goto LAB_024c2e0c;
        lVar21 = *local_1f0;
      }
      else {
        iVar12 = *(int *)(*local_1f0 + 8);
        if (iVar12 < 0x60000000) {
          piVar1 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar12);
          if (*piVar1 < 1) {
            uVar13 = 0;
            lVar21 = *local_1f0;
            goto joined_r0x024c2d14;
          }
          puVar22 = (uint *)(((ulong)(uint)piVar1[1] & 0xfffffff) + *(long *)(local_1f0[2] + 8) + 4)
          ;
        }
        else {
          uVar13 = iVar12 + 0xa0000000;
          if (*(uint *)(local_1f8 + 0x80) <= uVar13) {
            uVar13 = 0;
          }
          lVar21 = *(long *)(local_1f8 + 0x88) + (ulong)uVar13 * 0x32;
          puVar22 = (uint *)(lVar21 + (ulong)*(byte *)(lVar21 + 0x20));
        }
        uVar13 = *puVar22;
        lVar21 = *local_1f0;
      }
joined_r0x024c2d14:
      if (lVar21 == 0) {
        local_ad = 0;
        local_1b8 = (char *)((long)&local_1b0 + 4);
        local_1b0._5_3_ = (undefined3)((ulong)local_1b0 >> 0x28);
        local_1b0 = CONCAT35(local_1b0._5_3_,0x100);
        local_1c0 = PTR_DAT_04bb21f8 + 0x10;
        lVar21 = *(long *)(local_1f0[2] + 8);
        FUN_038d1270(&local_1c0,"%s.as",
                     lVar21 + *(int *)(lVar21 + 0x24) + (long)*(int *)(lVar21 + 8));
        uVar33 = 0;
      }
      else {
        iVar12 = *(int *)(lVar21 + 8);
        if (iVar12 < 0x60000000) {
          uVar33 = 0;
          piVar1 = (int *)(*(long *)(local_1f0[2] + 8) + (long)iVar12);
          if (1 < *piVar1) {
            uVar33 = *(undefined4 *)
                      (((ulong)(uint)piVar1[2] & 0xfffffff) + *(long *)(local_1f0[2] + 8) + 4);
          }
        }
        else {
          uVar20 = iVar12 + 0xa0000000;
          if (*(uint *)(local_1f8 + 0x80) <= uVar20) {
            uVar20 = 0;
          }
          lVar21 = *(long *)(local_1f8 + 0x88) + (ulong)uVar20 * 0x32;
          uVar33 = *(undefined4 *)(lVar21 + (ulong)*(byte *)(lVar21 + 0x21));
        }
      }
    }
LAB_024c2e0c:
    *(undefined4 *)(param_4 + 0x720) = uVar33;
    *(byte *)(param_4 + 0x8e4) = (byte)(uVar13 >> 0x1f);
    *(uint *)(param_4 + 0x8e0) = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
    *(uint *)(param_4 + 0x8dc) = uVar13 & (int)uVar13 >> 0x1f;
    *(undefined4 *)(param_4 + 0x8d8) = 0;
    *(undefined1 *)(param_4 + 0x8e5) = 1;
    *(undefined4 *)(param_4 + 0x8e8) = uVar33;
  }
  puVar23 = *(undefined8 **)(param_4 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  local_270 = (undefined *)((ulong)local_270 & 0xffffffff00000000);
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0x48);
  if ((puVar23[0x227] != 0) && (uVar15 = FUN_03850890(puVar23[0x227],0x48,0,0), (uVar15 & 1) != 0))
  {
    *(uint *)(param_4 + 0x17d0) = *(uint *)(param_4 + 0x17d0) | 0x10000;
  }
  puVar23 = *(undefined8 **)(param_4 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  local_270 = (undefined *)((ulong)local_270 & 0xffffffff00000000);
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0x21);
  if (puVar23[0x227] == 0) {
    uVar13 = *(uint *)(param_4 + 0x17d0);
    if ((uVar13 >> 0x10 & 1) != 0) goto LAB_024c303c;
LAB_024c2eec:
    if ((uVar13 >> 0x11 & 1) != 0) {
      FUN_0124c030(&local_270,&local_1c8);
      iVar12 = FUN_0123db50(&local_268,CONCAT44(auStack_25c[0],local_260));
      if (iVar12 - 0xbU < 7) {
        lVar21 = *(long *)puVar7;
        if ((((lVar21 != 0) && (*(long *)(lVar21 + 0xb0) != 0)) &&
            (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)) &&
           (((*(long *)(lVar21 + 0x488) != 0 && (*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0)) &&
            ((*(long *)(lVar21 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0))))))
        {
          uVar13 = FUN_0277d6c4(&local_1c8);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar21 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            FUN_0124c030(&local_1c0,&local_1c8);
            iVar12 = FUN_0123db50(&local_1b8,local_1b0);
            if ((iVar12 - 0x12U < 6) ||
               ((iVar12 = FUN_0123db50(&local_1b8,local_1b0), iVar12 - 0xbU < 7 &&
                ((cVar10 = FUN_0124dff0(&local_1c0), cVar10 == '\0' ||
                 (cVar10 = FUN_0124dff0(&local_1c0), cVar10 == '\x01')))))) goto LAB_024c2fa8;
          }
        }
        lVar21 = FUN_0251e98c(1);
        pfVar16 = (float *)(**(code **)(*(long *)(lVar21 + 0xd80) + 0xf0))(lVar21 + 0xd80);
        fVar30 = *pfVar16;
        fVar29 = *(float *)(param_4 + 0x71c);
        if (fVar29 != fVar30) {
          fVar31 = fVar30 - fVar29;
          fVar34 = -fVar31;
          if (0.0 <= fVar31) {
            fVar34 = fVar31;
          }
          if (0.1 < fVar34) {
            fVar34 = fVar31 * 0.25;
            fVar30 = 0.1;
            if (fVar31 <= 0.0) {
              fVar30 = -0.5;
            }
            fVar32 = 0.5;
            if (fVar31 <= 0.0) {
              fVar32 = -0.1;
            }
            if (fVar34 <= fVar32) {
              fVar32 = fVar34;
            }
            if (fVar30 <= fVar34) {
              fVar30 = fVar32;
            }
            goto LAB_024c3238;
          }
          *(float *)(param_4 + 0x71c) = fVar30;
        }
      }
      else {
LAB_024c2fa8:
        uVar33 = 0x3e19999a;
        fVar29 = *(float *)(param_4 + 0x71c);
        if (fVar29 != 0.15) {
          fVar34 = 0.15 - fVar29;
          fVar30 = -fVar34;
          if (0.0 <= fVar34) {
            fVar30 = fVar34;
          }
          if (fVar30 <= 0.1) goto LAB_024c315c;
          fVar31 = fVar34 * 0.25;
          fVar30 = 0.1;
          if (fVar34 <= 0.0) {
            fVar30 = -0.5;
          }
          fVar32 = 0.5;
          if (fVar34 <= 0.0) {
            fVar32 = -0.1;
          }
          if (fVar31 <= fVar32) {
            fVar32 = fVar31;
          }
          if (fVar30 <= fVar31) {
            fVar30 = fVar32;
          }
LAB_024c3238:
          *(float *)(param_4 + 0x71c) = fVar29 + fVar30;
        }
      }
    }
  }
  else {
    uVar15 = FUN_03850890(puVar23[0x227],0x21,0,0);
    uVar13 = *(uint *)(param_4 + 0x17d0);
    if ((uVar15 & 1) != 0) {
      uVar13 = uVar13 | 0x20000;
      *(uint *)(param_4 + 0x17d0) = uVar13;
    }
    if ((uVar13 >> 0x10 & 1) == 0) goto LAB_024c2eec;
LAB_024c303c:
    lVar21 = *(long *)puVar7;
    if ((((((lVar21 != 0) && (*(long *)(lVar21 + 0xb0) != 0)) &&
          (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)) &&
         ((*(long *)(lVar21 + 0x488) != 0 && (*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0)))) &&
        (*(long *)(lVar21 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0)) {
      uVar13 = FUN_0277d6c4(&local_1c8);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar13) ||
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_024c3248;
      FUN_0124c030(&local_270,&local_1c8);
      iVar12 = FUN_0123db50(&local_268,CONCAT44(auStack_25c[0],local_260));
      if (iVar12 - 0xbU < 7) {
        lVar21 = *(long *)puVar7;
        if ((((lVar21 != 0) && (*(long *)(lVar21 + 0xb0) != 0)) &&
            (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)) &&
           (((*(long *)(lVar21 + 0x488) != 0 && (*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0)) &&
            ((*(long *)(lVar21 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0))))))
        {
          uVar13 = FUN_0277d6c4(&local_1c8);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar21 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            FUN_0124c030(&local_1c0,&local_1c8);
            iVar12 = FUN_0123db50(&local_1b8,local_1b0);
            if ((iVar12 - 0x12U < 6) ||
               ((iVar12 = FUN_0123db50(&local_1b8,local_1b0), iVar12 - 0xbU < 7 &&
                ((cVar10 = FUN_0124dff0(&local_1c0), cVar10 == '\0' ||
                 (cVar10 = FUN_0124dff0(&local_1c0), cVar10 == '\x01')))))) goto LAB_024c3158;
          }
        }
        goto LAB_024c3248;
      }
LAB_024c3158:
      uVar33 = 0x3f800000;
LAB_024c315c:
      *(undefined4 *)(param_4 + 0x71c) = uVar33;
    }
  }
LAB_024c3248:
  puVar22 = (uint *)(param_4 + 0x718);
  if ((*puVar22 >> 3 & 1) == 0) {
    if ((*puVar22 >> 2 & 1) != 0) {
      uVar4 = *(undefined2 *)(param_4 + 0x1914);
      goto LAB_024c32a8;
    }
    if (*(int *)(param_4 + 0x178) == 1) {
      uVar4 = *(undefined2 *)(param_4 + 0x18ef);
      uVar14 = 0;
      goto LAB_024c32e4;
    }
  }
  else {
    uVar4 = *(undefined2 *)(param_4 + 0x1916);
LAB_024c32a8:
    uVar14 = 1;
LAB_024c32e4:
    local_1c0 = (undefined *)((ulong)CONCAT42(local_1c0._4_4_,uVar4) << 0x10);
    FUN_02328b10(param_4,&local_1c0,uVar14);
  }
  local_1c0 = (undefined *)
              CONCAT44((float)(int)*(short *)(param_4 + 0x190e) * 0.25,
                       (float)*(int *)(param_4 + 0x190a) * 0.001);
  local_1b8 = (char *)CONCAT44(local_1b8._4_4_,(float)*(int *)(param_4 + 0x1910) * 0.001);
  lVar21 = FUN_0251e98c(1);
  puVar17 = (undefined4 *)(**(code **)(*(long *)(lVar21 + 0x1380) + 0xf0))(lVar21 + 0x1380);
  puVar23 = &DAT_054e9a58;
  if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
    puVar23 = *(undefined8 **)(param_4 + 0x4c8);
  }
  FUN_03eb4b60(*puVar17,0x41200000,0x3e4ccccc,puVar23 + 0x4f,&local_1c0);
  local_210 = (undefined4)local_1c8;
  uStack_20c = local_1c8._4_4_;
  lVar21 = *(long *)puVar7;
  if (((((lVar21 != 0) && (*(long *)(lVar21 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar21 + 0x488) != 0 && (*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar21 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0)))) {
    uVar13 = FUN_0277d6c4(&local_1c8);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar21 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      FUN_0124c030(&local_1c0,&local_1c8);
      iVar12 = FUN_0123db50(&local_1b8,local_1b0);
      if ((8 < iVar12 - 0x23U) &&
         (((iVar12 = FUN_0123db50(&local_1b8,local_1b0), 6 < iVar12 - 0xbU &&
           (iVar12 = FUN_0123db50(&local_1b8,local_1b0), 5 < iVar12 - 0x12U)) &&
          ((*(byte *)(param_4 + 0x17d2) & 1) != 0)))) {
        FUN_016e49e4(&local_210,&local_1c8,1);
      }
    }
  }
  puVar5 = PTR_DAT_04bb2020;
  if ((*puVar22 & 1) == 0) {
    local_1c0 = (undefined *)CONCAT44((int)((ulong)local_1c0 >> 0x20),1);
    if ((*puVar22 >> 1 & 1) != 0) {
      puVar23 = *(undefined8 **)(param_4 + 0x60);
      if (puVar23 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(&DAT_052461c0);
          puVar23 = &DAT_05240280;
          if (iVar12 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar23 = &DAT_05240280;
        }
      }
      if (*(char *)((long)puVar23 + 0x12b5) != '\0') {
        puVar23 = *(undefined8 **)(param_4 + 0x60);
        if (puVar23 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar12 = __cxa_guard_acquire(&DAT_052461c0);
            puVar23 = &DAT_05240280;
            if (iVar12 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar23 = &DAT_05240280;
          }
        }
        local_1c0 = puVar5 + 0x10;
        local_270 = (undefined *)((ulong)local_270 & 0xffffffff00000000);
        local_1b8 = "PlayerScoopDigGetPutawayAfter";
        if (puVar23[0x227] == 0) {
LAB_024c371c:
          fVar29 = *(float *)(param_4 + 0x8e8);
          if (*(char *)(param_4 + 0x8e5) == '\0') {
            fVar30 = 0.0;
            fVar29 = (fVar29 * 0.0 + 1.0) * *(float *)(param_4 + 0x71c);
          }
          else {
            iVar12 = *(int *)(param_4 + 0x8e0);
            if ((*(int *)(param_4 + 0x8d8) < iVar12) && (iVar12 != 0)) {
              fVar31 = (float)*(int *)(param_4 + 0x8d8) / (float)iVar12;
              fVar34 = 1.0;
              if (fVar31 <= 1.0) {
                fVar34 = fVar31;
              }
              fVar30 = 0.0;
              if (0.0 <= fVar31) {
                fVar30 = fVar34;
              }
              fVar29 = *(float *)(param_4 + 0x71c) * ((1.0 - fVar30) + fVar29 * fVar30);
            }
            else {
              fVar29 = *(float *)(param_4 + 0x71c) * (fVar29 + 0.0);
              fVar30 = 1.0;
            }
          }
          local_194 = 0x3f800000;
          local_18c = 0x3f80000000000000;
          bVar19 = *(byte *)(param_4 + 0x1ee8);
          puVar23 = *(undefined8 **)(param_4 + 0x60);
          uStack_19c = 0;
          local_1a4 = 0;
          uStack_19e = 0;
          local_190 = 0;
          local_154 = 0;
          local_150 = 0.0;
          fVar34 = (1.0 - fVar30) * 0.0;
          fStack_14c = 0.0;
          local_148 = 0.0;
          local_144 = 0;
          uStack_17c = _UNK_04102208;
          local_184 = _DAT_04102200;
          uStack_15c = (undefined4)_UNK_041023d8;
          iStack_158 = (int)((ulong)_UNK_041023d8 >> 0x20);
          local_164 = (undefined4)_DAT_041023d0;
          uStack_160 = (undefined4)((ulong)_DAT_041023d0 >> 0x20);
          local_1c0 = (undefined *)CONCAT44(uStack_20c,local_210);
          if (7 < bVar19) {
            bVar19 = 0xff;
          }
          uStack_16c = _UNK_04102888;
          local_174 = _DAT_04102880;
          local_1b8 = (char *)CONCAT44(fVar29 * (param_2 * fVar30 + fVar34),
                                       fVar29 * (fVar27 * fVar30 + fVar34));
          local_1b0 = CONCAT44(fVar29,fVar29 * (param_3 * fVar30 + fVar34));
          local_1a8 = (ushort)bVar19 << 8;
          if (puVar23 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar12 = __cxa_guard_acquire(&DAT_052461c0);
              puVar23 = &DAT_05240280;
              if (iVar12 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar23 = &DAT_05240280;
            }
          }
          fVar27 = 0.0;
          if (*(char *)((long)puVar23 + 0x12b5) != '\0') {
            iVar12 = *(int *)(puVar23 + 0x256);
            fVar27 = 1.0;
            if ((*(int *)(puVar23 + 0x255) < iVar12) && (iVar12 != 0)) {
              fVar30 = (float)*(int *)(puVar23 + 0x255) / (float)iVar12;
              fVar29 = 1.0;
              if (fVar30 <= 1.0) {
                fVar29 = fVar30;
              }
              fVar27 = 0.0;
              if (0.0 <= fVar30) {
                fVar27 = fVar29;
              }
            }
          }
          local_18c = CONCAT44(fVar27,(undefined4)local_18c);
          local_148 = local_1d8;
          puVar23 = *(undefined8 **)(param_4 + 0x60);
          local_150 = local_1e0;
          fStack_14c = fStack_1dc;
          local_144 = 1;
          if (puVar23 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar12 = __cxa_guard_acquire(&DAT_052461c0);
              puVar23 = &DAT_05240280;
              if (iVar12 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar23 = &DAT_05240280;
            }
          }
          FUN_0170d420(puVar23,&local_1c0);
          if (*(char *)(param_4 + 0x8e5) != '\0') {
            uVar33 = (**(code **)(*(long *)(param_4 + 0x8d0) + (ulong)*(byte *)(param_4 + 0x8e4) * 8
                                 ))(param_4 + 0x8d0);
            *(undefined4 *)(param_4 + 0x8d8) = uVar33;
          }
        }
        else {
          lVar21 = *(long *)(puVar23[0x227] + 0x88);
          plVar25 = (long *)(lVar21 + 0x60);
          (**(code **)(*plVar25 + 0x18))(plVar25);
          (**(code **)(*plVar25 + 0x18))(plVar25);
          pcVar26 = *(char **)(lVar21 + 0x68);
          (**(code **)(local_1c0 + 0x18))(&local_1c0);
          if (pcVar26 != local_1b8) {
            pcVar26 = *(char **)(lVar21 + 0x68);
            if (*pcVar26 != *local_1b8) goto LAB_024c371c;
            if (*pcVar26 != '\0') {
              uVar15 = 0;
              do {
                uVar18 = uVar15;
                if ((uVar18 == 0x80000) || (pcVar26[uVar18 + 1] != local_1b8[uVar18 + 1]))
                goto LAB_024c371c;
                if (pcVar26[uVar18 + 1] == '\0') goto LAB_024c3714;
                if (pcVar26[uVar18 + 2] != local_1b8[uVar18 + 2]) goto LAB_024c371c;
                uVar15 = uVar18 + 2;
              } while (pcVar26[uVar18 + 2] != '\0');
              uVar18 = uVar18 + 1;
LAB_024c3714:
              if (0x7ffff < uVar18) goto LAB_024c371c;
            }
          }
        }
      }
    }
  }
  else {
    local_1a8 = 0xff00;
    local_194 = 0x3f800000;
    local_1a4 = 0;
    local_1b8 = (char *)0x0;
    local_1b0 = 0x3f80000000000000;
    local_18c = 0x3f80000000000000;
    local_1c0 = *(undefined **)PTR_DAT_04bb37e0;
    uStack_19e = 0;
    uStack_19c = 0;
    local_190 = 0;
    local_154 = 0;
    local_150 = 0.0;
    fStack_14c = 0.0;
    local_148 = 0.0;
    local_144 = 0;
    uStack_17c = _UNK_04102208;
    local_184 = _DAT_04102200;
    uStack_16c = _UNK_04102888;
    local_174 = _DAT_04102880;
    uStack_15c = (undefined4)_UNK_041023d8;
    iStack_158 = (int)((ulong)_UNK_041023d8 >> 0x20);
    local_164 = (undefined4)_DAT_041023d0;
    uStack_160 = (undefined4)((ulong)_DAT_041023d0 >> 0x20);
    lVar21 = FUN_0251e98c(1);
    puVar17 = (undefined4 *)(**(code **)(*(long *)(lVar21 + 0xcf0) + 0xf0))(lVar21 + 0xcf0);
    uVar33 = *puVar17;
    puVar17 = (undefined4 *)(**(code **)(*(long *)(lVar21 + 0xd20) + 0xf0))(lVar21 + 0xd20);
    uVar28 = *puVar17;
    puVar17 = (undefined4 *)(**(code **)(*(long *)(lVar21 + 0xd50) + 0xf0))(lVar21 + 0xd50);
    local_1b8 = (char *)CONCAT44(uVar28,uVar33);
    local_18c = local_18c & 0xffffffff;
    local_144 = 1;
    puVar23 = *(undefined8 **)(param_4 + 0x60);
    local_1c0 = (undefined *)CONCAT44(uStack_20c,local_210);
    bVar19 = *(byte *)(param_4 + 0x1ee8);
    local_1b0 = CONCAT44(*(undefined4 *)(param_4 + 0x71c),*puVar17);
    if (7 < bVar19) {
      bVar19 = 0xff;
    }
    fStack_14c = fStack_1dc;
    local_150 = local_1e0;
    local_1a8 = CONCAT11(bVar19,1);
    local_148 = local_1d8;
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    FUN_0170d6ec(puVar23,&local_1c0);
  }
  puVar23 = *(undefined8 **)(param_4 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  lVar21 = puVar23[0x227];
  if (lVar21 == 0) {
    local_1c0 = (undefined *)((ulong)local_1c0._4_4_ << 0x20);
    plVar25 = &DAT_04c931a0;
  }
  else {
    uVar13 = *(uint *)(puVar23 + 0x2d3) >> 1 & 1;
    local_1c0 = (undefined *)
                (CONCAT44(local_1c0._4_4_,*(uint *)(puVar23 + 0x2d3) >> 1) & 0xffffffff00000001);
    uVar20 = 0;
    if (*(long *)(lVar21 + 0x78) != 0) {
      uVar20 = *(uint *)(*(long *)(lVar21 + 0x78) + 0x18);
    }
    if (uVar20 <= uVar13) {
      uVar13 = 0;
    }
    if (*(uint *)(lVar21 + 0x80) <= uVar13) {
      uVar13 = 0;
    }
    plVar25 = (long *)(*(long *)(lVar21 + 0x88) + (long)(int)uVar13 * 0xe8 + 0x60);
  }
  local_260 = 0x40;
  local_21d = 0;
  local_270 = PTR_DAT_04bb2f70 + 0x10;
  local_268 = (char *)auStack_25c;
  (**(code **)(*plVar25 + 0x18))(plVar25);
  pcVar26 = (char *)plVar25[1];
  if ((char *)auStack_25c != pcVar26) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
    lVar21 = 0;
    do {
      if (*(char *)(plVar25[1] + lVar21) == '\0') goto LAB_024c3a5c;
      lVar2 = plVar25[1] + lVar21;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar21 = lVar21 + 1;
        goto LAB_024c3a5c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar21 = lVar21 + 2;
        goto LAB_024c3a5c;
      }
      lVar21 = lVar21 + 3;
    } while (lVar21 != 0x80001);
    lVar21 = 0;
LAB_024c3a5c:
    iVar12 = (int)lVar21;
    if (local_260 <= (int)lVar21) {
      iVar12 = local_260 + -1;
    }
    memcpy(auStack_25c,pcVar26,(long)iVar12);
    *(char *)((long)auStack_25c + (long)iVar12) = '\0';
  }
  puVar6 = PTR_DAT_04bb2bc0;
  local_218 = (undefined4)plVar25[0xb];
  local_270 = PTR_DAT_04bb2bc0 + 0x10;
  local_278 = "PlayerScoopDigGetPutawayAfter";
  local_280 = puVar5 + 0x10;
  if ((uVar11 >> 6 & 1) == 0) {
    local_268[(long)local_260 + -1] = '\0';
    (**(code **)(puVar6 + 0x28))(&local_270);
    pcVar26 = local_268;
    (**(code **)(local_280 + 0x18))(&local_280);
    if (pcVar26 != local_278) {
      if (*local_268 == *local_278) {
        if (*local_268 != '\0') {
          lVar21 = 0;
          do {
            if ((lVar21 == 0x80000) || (local_268[lVar21 + 1] != local_278[lVar21 + 1]))
            goto LAB_024c3b44;
            if (local_268[lVar21 + 1] == '\0') break;
            lVar2 = lVar21 + 2;
            if (local_268[lVar2] != local_278[lVar21 + 2]) goto LAB_024c3b44;
            lVar21 = lVar21 + 2;
          } while (local_268[lVar2] != '\0');
        }
      }
      else {
LAB_024c3b44:
        puVar23 = *(undefined8 **)(param_4 + 0x60);
        if (puVar23 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar12 = __cxa_guard_acquire(&DAT_052461c0);
            puVar23 = &DAT_05240280;
            if (iVar12 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar23 = &DAT_05240280;
          }
        }
        uVar13 = 0;
        if (puVar23[0x227] != 0) {
          local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,1);
          uVar13 = *(uint *)(puVar23 + 0x2d3) >> 1 & 1;
        }
        uVar15 = FUN_0170a6d0(puVar23,uVar13);
        if ((uVar15 & 1) != 0) {
          puVar23 = *(undefined8 **)(param_4 + 0x60);
          if (puVar23 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar12 = __cxa_guard_acquire(&DAT_052461c0);
              puVar23 = &DAT_05240280;
              if (iVar12 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar23 = &DAT_05240280;
            }
          }
          FUN_017081d0(puVar23,&local_280,6,0,0);
        }
      }
    }
  }
  puVar23 = *(undefined8 **)(param_4 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  if (puVar23[0x227] == 0) {
    uVar13 = 0;
  }
  else {
    local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,1);
    uVar13 = *(uint *)(puVar23 + 0x2d3) >> 1 & 1;
  }
  uVar15 = FUN_0170a6d0(puVar23,uVar13);
  if ((uVar15 & 1) == 0) {
    return;
  }
  if (iVar3 != 0) {
    *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) | 8;
    FUN_023164ec(param_4,6);
    return;
  }
  if ((uVar11 >> 6 & 1) == 0) {
    FUN_02373ee0(param_4,6,1,1);
    return;
  }
  FUN_0230e2b0(&local_1c0);
  pcVar26 = local_1b8;
  local_e0 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_dc = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_d8 = 0;
  local_d0 = 0;
  if (local_1b8 != "Player_GetDemo") {
    iVar3 = 0xe;
    if ((int)local_1b0 < 0xf) {
      iVar3 = (int)local_1b0 + -1;
    }
    memcpy(local_1b8,"Player_GetDemo",(long)iVar3);
    pcVar26[iVar3] = '\0';
  }
  pcVar26 = (char *)CONCAT44(uStack_15c,uStack_160);
  if (pcVar26 != "Get_Pickup") {
    iVar3 = 10;
    if (iStack_158 < 0xb) {
      iVar3 = iStack_158 + -1;
    }
    memcpy(pcVar26,"Get_Pickup",(long)iVar3);
    pcVar26[iVar3] = '\0';
  }
  pcVar26 = local_1b8;
  local_108 = 0xc;
  if (local_1b8 != "Player_GetDemo") {
    iVar3 = 0xe;
    if ((int)local_1b0 < 0xf) {
      iVar3 = (int)local_1b0 + -1;
    }
    memcpy(local_1b8,"Player_GetDemo",(long)iVar3);
    pcVar26[iVar3] = '\0';
  }
  lVar21 = *(long *)puVar7;
  if ((((lVar21 == 0) || (*(long *)(lVar21 + 0xb0) == 0)) ||
      (*(long *)(*(long *)(lVar21 + 0xb0) + 8) == 0)) ||
     (((*(long *)(lVar21 + 0x488) == 0 || (*(long *)(*(long *)(lVar21 + 0x488) + 8) == 0)) ||
      ((*(long *)(lVar21 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) == 0)))))) {
LAB_024c3df4:
    pcVar26 = (char *)CONCAT44(uStack_15c,uStack_160);
LAB_024c3df8:
    if (pcVar26 == "Get_Scoop") goto LAB_024c3e38;
    __src = "Get_Scoop";
    bVar8 = SBORROW4(iStack_158,9);
    iVar3 = iStack_158 + -9;
    bVar9 = iStack_158 == 9;
    iVar12 = 9;
  }
  else {
    uVar11 = FUN_0277d6c4(&local_1c8);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if (*(uint *)(lVar21 + 0x1d8) <= uVar11) goto LAB_024c3df4;
    pcVar26 = (char *)CONCAT44(uStack_15c,uStack_160);
    if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) == 0) goto LAB_024c3df8;
    if (pcVar26 == "FullItem_Plant") goto LAB_024c3e38;
    __src = "FullItem_Plant";
    bVar8 = SBORROW4(iStack_158,0xe);
    iVar3 = iStack_158 + -0xe;
    bVar9 = iStack_158 == 0xe;
    iVar12 = 0xe;
  }
  if (bVar9 || iVar3 < 0 != bVar8) {
    iVar12 = iStack_158 + -1;
  }
  memcpy(pcVar26,__src,(long)iVar12);
  pcVar26[iVar12] = '\0';
LAB_024c3e38:
  local_108 = 1;
  local_f8 = 1;
  local_110 = (undefined2)local_1c8;
  local_10e = local_1c8._2_1_;
  local_d8 = CONCAT44(local_1e0,1);
  local_10d = local_1c8._3_1_;
  local_10c = local_1c8._4_4_;
  local_e0 = (undefined4)local_1c8;
  local_dc = local_1c8._4_4_;
  local_f4 = 2;
  local_e8 = 0x3c;
  local_d0 = CONCAT44(local_1d8,fStack_1dc);
  FUN_0242dbdc(param_4,&local_1c0);
  return;
}

