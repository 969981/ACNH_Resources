
/* WARNING: Removing unreachable block (ram,0x024c6460) */
/* WARNING: Removing unreachable block (ram,0x024c52c0) */
/* WARNING: Removing unreachable block (ram,0x024c52c4) */
/* WARNING: Removing unreachable block (ram,0x024c69b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024c4df0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  byte *pbVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined4 *puVar29;
  char *__src;
  float fVar30;
  int iVar31;
  short *psVar32;
  uint *puVar33;
  byte bVar34;
  byte bVar35;
  uint *puVar36;
  long lVar37;
  undefined8 *puVar38;
  char *pcVar39;
  undefined8 *puVar40;
  long lVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  int iVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  long local_1f0;
  long *local_1e8;
  uint local_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  float local_1cc;
  float fStack_1c8;
  float local_1c4;
  undefined8 local_1c0;
  undefined2 local_1b4;
  undefined8 local_1b0;
  undefined1 local_1a8;
  byte bStack_1a7;
  undefined1 uStack_1a6;
  undefined1 uStack_1a5;
  float fStack_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined2 uStack_190;
  undefined2 uStack_18e;
  undefined6 local_18c;
  undefined2 uStack_186;
  undefined4 local_184;
  uint local_180;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined1 local_144;
  undefined5 local_140;
  undefined3 uStack_13b;
  undefined4 local_138;
  undefined1 local_134;
  uint local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined4 local_e4;
  uint local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined1 local_9d;
  
  if ((ulong)*(byte *)(param_4 + 0x1ee8) < 8) {
    psVar32 = (short *)(PTR_DAT_04bc30f8 + (ulong)*(byte *)(param_4 + 0x1ee8) * 0x18 + 8);
  }
  else {
    psVar32 = &DAT_054967ac;
    DAT_054967ac = 0;
  }
  local_1b4 = *psVar32;
  pbVar1 = (byte *)(param_4 + 0x1ee8);
  local_1c0 = 0xfffe;
  FUN_0277d4ac(&local_1c0);
  local_1c0 = *(undefined8 *)(param_4 + 0x1918);
  iVar48 = *(int *)(param_4 + 0x178);
  uVar27 = FUN_0251e98c(1);
  iVar42 = FUN_02366a5c(uVar27,&local_1c0);
  local_1cc = (float)*(int *)(param_4 + 0x190a) * 0.001;
  fStack_1c8 = (float)(int)*(short *)(param_4 + 0x190e) * 0.25;
  local_1c4 = (float)*(int *)(param_4 + 0x1910) * 0.001;
  fStack_1d4 = (float)(int)*(short *)(param_4 + 0x1904) * 0.25;
  local_1d8 = (float)*(int *)(param_4 + 0x1900) * 0.001;
  local_1d0 = (float)*(int *)(param_4 + 0x1906) * 0.001;
  iVar45 = (int)local_1d8;
  bVar20 = local_1d8 < 0.0;
  fVar46 = (float)(int)local_1d0 / 5.0;
  fVar50 = (float)(int)((int)fVar46 - (uint)(local_1d0 < 0.0) & 0xfffffffe) * 5.0 + 5.0;
  local_1b0._4_4_ = (float)FUN_016e026c(0,&local_1d8,0,0);
  local_1a8 = SUB41(fVar50,0);
  bStack_1a7 = (byte)((uint)fVar50 >> 8);
  uStack_1a6 = (undefined1)((uint)fVar50 >> 0x10);
  uStack_1a5 = (undefined1)((uint)fVar50 >> 0x18);
  local_1b0._0_4_ = (float)(int)((int)((float)iVar45 / 5.0) - (uint)bVar20 & 0xfffffffe) * 5.0 + 5.0
  ;
  FUN_0231ece4(param_4,&local_1cc,&local_1b0);
  fVar50 = 1.0;
  fVar44 = 1.0;
  FUN_023297c8(0x3e99999a,param_4,&local_1d8);
  if ((*(uint *)(param_4 + 0x17cc) >> 9 & 1) == 0) {
    uStack_1a6 = 0;
    *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) | 0x200;
    local_1b0._0_4_ = (float)local_1c0;
    local_1b0._4_4_ = local_1c0._4_4_;
    local_1a8 = *(int *)(param_4 + 0x178) == 0;
    bStack_1a7 = *pbVar1;
    if (7 < bStack_1a7) {
      bStack_1a7 = 0xff;
    }
    FUN_02308524(&local_1b0);
  }
  puVar7 = PTR_DAT_04bbbc68;
  lVar37 = *(long *)PTR_DAT_04bbbc68;
  if (lVar37 != 0) {
    if (((((*(long *)(lVar37 + 0xb0) == 0) || (*(long *)(*(long *)(lVar37 + 0xb0) + 8) == 0)) ||
         (*(long *)(lVar37 + 0x488) == 0)) ||
        ((*(long *)(*(long *)(lVar37 + 0x488) + 8) == 0 || (*(long *)(lVar37 + 0x2b0) == 0)))) ||
       (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) == 0)) {
LAB_024c508c:
      bVar20 = false;
    }
    else {
      uVar25 = FUN_0277d6c4(&local_1c0);
      uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
      if ((*(uint *)(lVar37 + 0x1d8) <= uVar25) ||
         (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar25 * 8) == 0)) goto LAB_024c508c;
      FUN_0124c030(&local_1b0,&local_1c0);
      iVar45 = FUN_0123db50(&local_1a8,local_1a0);
      bVar20 = iVar45 - 0xbU < 7;
    }
    lVar37 = *(long *)puVar7;
    if ((((lVar37 != 0) && (*(long *)(lVar37 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar37 + 0xb0) + 8) != 0)) &&
       (((*(long *)(lVar37 + 0x488) != 0 && (*(long *)(*(long *)(lVar37 + 0x488) + 8) != 0)) &&
        ((*(long *)(lVar37 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) != 0)))))) {
      uVar25 = FUN_0277d6c4(&local_1c0);
      uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
      if ((uVar25 < *(uint *)(lVar37 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar25 * 8) != 0)) {
        FUN_0124c030(&local_200,&local_1c0);
        uVar28 = FUN_0123d890(local_1f0,4);
        if (((uVar28 & 1) == 0) || (uVar28 = FUN_0123d890(local_1f0,0), (uVar28 & 1) != 0)) {
          uVar28 = FUN_0123d890(local_1f0,4);
          fVar43 = 0.7;
          fVar44 = 0.7;
          fVar50 = 0.7;
          if ((uVar28 & 1) == 0) {
            fVar50 = 1.0;
          }
          if (((uVar28 & 1) == 0) && (!(bool)(bVar20 ^ 1))) {
            lVar37 = *(long *)puVar7;
            fVar44 = fVar43;
            if (((lVar37 != 0) &&
                (((*(long *)(lVar37 + 0xb0) != 0 && (*(long *)(*(long *)(lVar37 + 0xb0) + 8) != 0))
                 && (*(long *)(lVar37 + 0x488) != 0)))) &&
               (((*(long *)(*(long *)(lVar37 + 0x488) + 8) != 0 && (*(long *)(lVar37 + 0x2b0) != 0))
                && (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) != 0)))) {
              fVar50 = 1.0;
              fVar44 = 0.7;
              uVar25 = FUN_0277d6c4(&local_1c0);
              uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
              if ((uVar25 < *(uint *)(lVar37 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar25 * 8) != 0)) {
                FUN_0124c030(&local_1b0,&local_1c0);
                iVar45 = FUN_0123db50(&local_1a8,local_1a0);
                if ((iVar45 - 0x12U < 6) ||
                   ((iVar45 = FUN_0123db50(&local_1a8,local_1a0), iVar45 - 0xbU < 7 &&
                    ((cVar23 = FUN_0124dff0(&local_1b0), cVar23 == '\0' ||
                     (cVar23 = FUN_0124dff0(&local_1b0), cVar23 == '\x01')))))) goto LAB_024c5238;
              }
            }
            fVar50 = 0.575;
          }
        }
        else {
          fVar50 = 0.2;
        }
      }
    }
  }
LAB_024c5238:
  uVar25 = *(uint *)(param_4 + 0x17cc);
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar45 = __cxa_guard_acquire(&DAT_054f0960);
      puVar33 = (uint *)&DAT_054f0958;
      if (iVar45 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar33 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar33 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar33 = puVar33 + (ulong)*pbVar1 * 2;
    }
  }
  local_1b0._0_4_ = 2.66247e-44;
  if ((uVar25 >> 6 & 1) == 0) {
    *puVar33 = *puVar33 & 0xfff7ffff;
    lVar37 = *(long *)puVar7;
    if (((((lVar37 == 0) || (*(long *)(lVar37 + 0xb0) == 0)) ||
         (*(long *)(*(long *)(lVar37 + 0xb0) + 8) == 0)) ||
        ((*(long *)(lVar37 + 0x488) == 0 || (*(long *)(*(long *)(lVar37 + 0x488) + 8) == 0)))) ||
       ((*(long *)(lVar37 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) == 0))))
    goto LAB_024c547c;
    uVar26 = FUN_0277d6c4(&local_1c0);
    uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
    if ((*(uint *)(lVar37 + 0x1d8) <= uVar26) ||
       (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) == 0)) goto LAB_024c547c;
    lVar37 = *(long *)PTR_DAT_04bb39b0;
    if (lVar37 != 0) {
      if (*(int *)(lVar37 + 0x15c) != 0) {
        pbVar3 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar37 + 0x15c) != 0) {
          pbVar3 = (byte *)(lVar37 + 0x158);
        }
        bVar35 = *pbVar1;
        bVar24 = *pbVar3;
        if (7 < bVar24) {
          bVar24 = 0xff;
        }
        if (7 < bVar35) {
          bVar35 = 0xff;
        }
        if (bVar24 != bVar35) goto LAB_024c547c;
      }
      if ((*(int *)(lVar37 + 0x15c) != 0) && (*(int *)(lVar37 + 0x15c) != 0)) {
        pbVar3 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar37 + 0x15c) != 0) {
          pbVar3 = (byte *)(lVar37 + 0x158);
        }
        bVar35 = *pbVar1;
        bVar24 = *pbVar3;
        if (7 < bVar24) {
          bVar24 = 0xff;
        }
        if (7 < bVar35) {
          bVar35 = 0xff;
        }
        if (bVar24 != bVar35) goto LAB_024c547c;
      }
    }
    FUN_0124c030(&local_1b0,&local_1c0);
    iVar45 = FUN_0123db50(&local_1a8,local_1a0);
    if ((((iVar45 - 0x23U < 9) || (iVar45 = FUN_0123db50(&local_1a8,local_1a0), iVar45 - 0x18U < 7))
        || (iVar45 = FUN_0123db50(&local_1a8,local_1a0), iVar45 == 0x1f)) ||
       ((iVar45 = FUN_0123db50(&local_1a8,local_1a0), iVar45 - 0xbU < 7 ||
        (uVar28 = FUN_0123d890(local_1a0,4), (uVar28 & 1) != 0)))) {
      bVar20 = false;
      puVar38 = *(undefined8 **)(param_4 + 0x60);
    }
    else {
      iVar45 = FUN_0123db50(&local_1a8,local_1a0);
      bVar20 = iVar45 - 0x18U < 0xfffffffa;
      puVar38 = *(undefined8 **)(param_4 + 0x60);
    }
  }
  else {
    *puVar33 = *puVar33 | 0x80000;
LAB_024c547c:
    bVar20 = true;
    puVar38 = *(undefined8 **)(param_4 + 0x60);
  }
  if (puVar38 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar45 = __cxa_guard_acquire(&DAT_052461c0);
      puVar38 = &DAT_05240280;
      if (iVar45 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar38 = &DAT_05240280;
    }
  }
  local_200 = (undefined *)((ulong)(uint)local_200._4_4_ << 0x20);
  local_1b0._0_4_ = 1.00893e-43;
  uVar28 = 0;
  if (puVar38[0x227] != 0) {
    uVar28 = FUN_03850890(puVar38[0x227],0x48,0,0);
  }
  if (((uVar28 & 1) != 0) || ((char)local_1b4 != '\0')) {
    lVar37 = *(long *)puVar7;
    if (((lVar37 != 0) &&
        (((*(long *)(lVar37 + 0xb0) != 0 && (*(long *)(*(long *)(lVar37 + 0xb0) + 8) != 0)) &&
         (*(long *)(lVar37 + 0x488) != 0)))) &&
       (((*(long *)(*(long *)(lVar37 + 0x488) + 8) != 0 && (*(long *)(lVar37 + 0x2b0) != 0)) &&
        (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) != 0)))) {
      uVar26 = FUN_0277d6c4(&local_1c0);
      uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
      if ((uVar26 < *(uint *)(lVar37 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) {
        FUN_0124c030(&local_1b0,&local_1c0);
        iVar45 = FUN_0123db50(&local_1a8,local_1a0);
        if (iVar45 - 0xbU < 7) {
          lVar37 = *(long *)puVar7;
          if ((((((lVar37 != 0) && (*(long *)(lVar37 + 0xb0) != 0)) &&
                (*(long *)(*(long *)(lVar37 + 0xb0) + 8) != 0)) &&
               ((*(long *)(lVar37 + 0x488) != 0 && (*(long *)(*(long *)(lVar37 + 0x488) + 8) != 0)))
               ) && (*(long *)(lVar37 + 0x2b0) != 0)) &&
             (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) != 0)) {
            uVar26 = FUN_0277d6c4(&local_1c0);
            uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
            if ((((uVar26 < *(uint *)(lVar37 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) &&
                ((lVar37 = *(long *)puVar7, lVar37 != 0 &&
                 (((*(long *)(lVar37 + 0xb0) != 0 && (*(long *)(*(long *)(lVar37 + 0xb0) + 8) != 0))
                  && (*(long *)(lVar37 + 0x488) != 0)))))) &&
               (((*(long *)(*(long *)(lVar37 + 0x488) + 8) != 0 && (*(long *)(lVar37 + 0x2b0) != 0))
                && (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) != 0)))) {
              uVar26 = FUN_0277d6c4(&local_1c0);
              uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
              if ((uVar26 < *(uint *)(lVar37 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) {
                FUN_0124c030(&local_1b0,&local_1c0);
                iVar45 = FUN_0123db50(&local_1a8,local_1a0);
                if ((iVar45 - 0x12U < 6) ||
                   ((iVar45 = FUN_0123db50(&local_1a8,local_1a0), iVar45 - 0xbU < 7 &&
                    ((cVar23 = FUN_0124dff0(&local_1b0), cVar23 == '\0' ||
                     (cVar23 = FUN_0124dff0(&local_1b0), cVar23 == '\x01')))))) goto LAB_024c5650;
              }
            }
          }
          goto LAB_024c5668;
        }
      }
    }
LAB_024c5650:
    fVar50 = 1.0;
    *(uint *)(param_4 + 0x17d0) = *(uint *)(param_4 + 0x17d0) | 0x10000;
    *(undefined4 *)(param_4 + 0x71c) = 0x3f800000;
  }
LAB_024c5668:
  puVar38 = *(undefined8 **)(param_4 + 0x60);
  if (puVar38 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar45 = __cxa_guard_acquire(&DAT_052461c0);
      puVar38 = &DAT_05240280;
      if (iVar45 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar38 = &DAT_05240280;
    }
  }
  local_200 = (undefined *)((ulong)local_200 & 0xffffffff00000000);
  local_1b0._0_4_ = 4.62428e-44;
  if (puVar38[0x227] == 0) {
    uVar26 = *(uint *)(param_4 + 0x17d0);
    if ((uVar26 >> 0x10 & 1) != 0) goto LAB_024c58f4;
LAB_024c56d4:
    if ((uVar26 >> 0x11 & 1) == 0) goto LAB_024c5a7c;
    lVar37 = *(long *)puVar7;
    if ((((lVar37 == 0) || (*(long *)(lVar37 + 0xb0) == 0)) ||
        (*(long *)(*(long *)(lVar37 + 0xb0) + 8) == 0)) ||
       (((*(long *)(lVar37 + 0x488) == 0 || (*(long *)(*(long *)(lVar37 + 0x488) + 8) == 0)) ||
        ((*(long *)(lVar37 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) == 0)))))) {
LAB_024c5858:
      uVar49 = 0x3e19999a;
      fVar43 = *(float *)(param_4 + 0x71c);
      fVar44 = 0.15;
      if (fVar43 != 0.15) {
        fVar44 = 0.15 - fVar43;
        fVar46 = -fVar44;
        if (0.0 <= fVar44) {
          fVar46 = fVar44;
        }
        if (fVar46 <= 0.1) goto LAB_024c5a78;
LAB_024c58a8:
        fVar30 = 0.1;
        fVar46 = fVar44 * 0.25;
        if (fVar44 <= 0.0) {
          fVar30 = -0.5;
        }
        fVar47 = 0.5;
        if (fVar44 <= 0.0) {
          fVar47 = -0.1;
        }
        if (fVar46 <= fVar47) {
          fVar47 = fVar46;
        }
        fVar44 = fVar30;
        if (fVar30 <= fVar46) {
          fVar44 = fVar47;
        }
        *(float *)(param_4 + 0x71c) = fVar43 + fVar44;
      }
    }
    else {
      uVar26 = FUN_0277d6c4(&local_1c0);
      uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
      if ((*(uint *)(lVar37 + 0x1d8) <= uVar26) ||
         (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) == 0)) goto LAB_024c5858;
      FUN_0124c030(&local_1b0,&local_1c0);
      iVar45 = FUN_0123db50(&local_1a8,local_1a0);
      if ((6 < iVar45 - 0xbU) ||
         (((((lVar37 = *(long *)puVar7, lVar37 == 0 || (*(long *)(lVar37 + 0xb0) == 0)) ||
            (*(long *)(*(long *)(lVar37 + 0xb0) + 8) == 0)) ||
           ((*(long *)(lVar37 + 0x488) == 0 || (*(long *)(*(long *)(lVar37 + 0x488) + 8) == 0)))) ||
          ((*(long *)(lVar37 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) == 0))))))
      goto LAB_024c5858;
      uVar26 = FUN_0277d6c4(&local_1c0);
      uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
      if ((*(uint *)(lVar37 + 0x1d8) <= uVar26) ||
         (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) == 0)) goto LAB_024c5858;
      lVar37 = *(long *)puVar7;
      if (((lVar37 != 0) &&
          (((*(long *)(lVar37 + 0xb0) != 0 && (*(long *)(*(long *)(lVar37 + 0xb0) + 8) != 0)) &&
           (*(long *)(lVar37 + 0x488) != 0)))) &&
         (((*(long *)(*(long *)(lVar37 + 0x488) + 8) != 0 && (*(long *)(lVar37 + 0x2b0) != 0)) &&
          (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) != 0)))) {
        uVar26 = FUN_0277d6c4(&local_1c0);
        uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
        if ((uVar26 < *(uint *)(lVar37 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) {
          FUN_0124c030(&local_1b0,&local_1c0);
          iVar45 = FUN_0123db50(&local_1a8,local_1a0);
          if ((iVar45 - 0x12U < 6) ||
             ((iVar45 = FUN_0123db50(&local_1a8,local_1a0), iVar45 - 0xbU < 7 &&
              ((cVar23 = FUN_0124dff0(&local_1b0), cVar23 == '\0' ||
               (cVar23 = FUN_0124dff0(&local_1b0), cVar23 == '\x01')))))) goto LAB_024c5858;
        }
      }
      fVar43 = *(float *)(param_4 + 0x71c);
      if (fVar43 != fVar50) {
        fVar44 = fVar50 - fVar43;
        fVar46 = -fVar44;
        if (0.0 <= fVar44) {
          fVar46 = fVar44;
        }
        if (fVar46 <= 0.1) {
          *(float *)(param_4 + 0x71c) = fVar50;
          goto LAB_024c5a7c;
        }
        goto LAB_024c58a8;
      }
    }
  }
  else {
    uVar28 = FUN_03850890(puVar38[0x227],0x21,0,0);
    uVar26 = *(uint *)(param_4 + 0x17d0);
    if ((fVar50 != 1.0) && ((uVar28 & 1) != 0)) {
      uVar26 = uVar26 | 0x20000;
      *(uint *)(param_4 + 0x17d0) = uVar26;
    }
    if ((uVar26 >> 0x10 & 1) == 0) goto LAB_024c56d4;
LAB_024c58f4:
    lVar37 = *(long *)puVar7;
    if ((((lVar37 != 0) && (*(long *)(lVar37 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar37 + 0xb0) + 8) != 0)) &&
       (((*(long *)(lVar37 + 0x488) != 0 && (*(long *)(*(long *)(lVar37 + 0x488) + 8) != 0)) &&
        ((*(long *)(lVar37 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) != 0)))))) {
      uVar26 = FUN_0277d6c4(&local_1c0);
      uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
      if ((*(uint *)(lVar37 + 0x1d8) <= uVar26) ||
         (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) == 0)) goto LAB_024c5a74;
      FUN_0124c030(&local_1b0,&local_1c0);
      iVar45 = FUN_0123db50(&local_1a8,local_1a0);
      if (6 < iVar45 - 0xbU) goto LAB_024c5a74;
      lVar37 = *(long *)puVar7;
      if (((((lVar37 != 0) && (*(long *)(lVar37 + 0xb0) != 0)) &&
           (*(long *)(*(long *)(lVar37 + 0xb0) + 8) != 0)) &&
          ((*(long *)(lVar37 + 0x488) != 0 && (*(long *)(*(long *)(lVar37 + 0x488) + 8) != 0)))) &&
         ((*(long *)(lVar37 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) != 0)))) {
        uVar26 = FUN_0277d6c4(&local_1c0);
        uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
        if ((((((uVar26 < *(uint *)(lVar37 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) &&
              (lVar37 = *(long *)puVar7, lVar37 != 0)) &&
             (((*(long *)(lVar37 + 0xb0) != 0 && (*(long *)(*(long *)(lVar37 + 0xb0) + 8) != 0)) &&
              (*(long *)(lVar37 + 0x488) != 0)))) &&
            ((*(long *)(*(long *)(lVar37 + 0x488) + 8) != 0 && (*(long *)(lVar37 + 0x2b0) != 0))))
           && (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) != 0)) {
          uVar26 = FUN_0277d6c4(&local_1c0);
          uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
          if ((uVar26 < *(uint *)(lVar37 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) {
            FUN_0124c030(&local_1b0,&local_1c0);
            iVar45 = FUN_0123db50(&local_1a8,local_1a0);
            if ((iVar45 - 0x12U < 6) ||
               ((iVar45 = FUN_0123db50(&local_1a8,local_1a0), iVar45 - 0xbU < 7 &&
                ((cVar23 = FUN_0124dff0(&local_1b0), cVar23 == '\0' ||
                 (cVar23 = FUN_0124dff0(&local_1b0), cVar23 == '\x01')))))) goto LAB_024c5a74;
          }
        }
      }
      goto LAB_024c5a7c;
    }
LAB_024c5a74:
    uVar49 = 0x3f800000;
LAB_024c5a78:
    *(undefined4 *)(param_4 + 0x71c) = uVar49;
  }
LAB_024c5a7c:
  local_1e0 = (uint)(float)local_1c0;
  fStack_1dc = local_1c0._4_4_;
  lVar37 = *(long *)puVar7;
  if (((((lVar37 != 0) && (*(long *)(lVar37 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar37 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar37 + 0x488) != 0 && (*(long *)(*(long *)(lVar37 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar37 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) != 0)))) {
    uVar26 = FUN_0277d6c4(&local_1c0);
    uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
    if ((uVar26 < *(uint *)(lVar37 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) != 0)) {
      FUN_0124c030(&local_1b0,&local_1c0);
      iVar45 = FUN_0123db50(&local_1a8,local_1a0);
      if ((8 < iVar45 - 0x23U) &&
         (((iVar45 = FUN_0123db50(&local_1a8,local_1a0), 6 < iVar45 - 0xbU &&
           (iVar45 = FUN_0123db50(&local_1a8,local_1a0), 5 < iVar45 - 0x12U)) &&
          ((*(byte *)(param_4 + 0x17d2) & 1) != 0)))) {
        FUN_016e49e4(&local_1e0,&local_1c0,1);
      }
    }
  }
  uVar14 = uStack_1a5;
  uVar12 = uStack_1a6;
  bVar24 = bStack_1a7;
  uVar10 = local_1a8;
  local_1a8 = (undefined1)iVar42;
  uVar11 = local_1a8;
  bStack_1a7 = (byte)((uint)iVar42 >> 8);
  bVar35 = bStack_1a7;
  uStack_1a6 = (undefined1)((uint)iVar42 >> 0x10);
  uVar13 = uStack_1a6;
  uStack_1a5 = (undefined1)((uint)iVar42 >> 0x18);
  uVar15 = uStack_1a5;
  if (local_1b4._1_1_ == '\0') {
    if ((char)local_1b4 == '\0') {
      puVar38 = *(undefined8 **)(param_4 + 0x60);
      local_1a8 = uVar10;
      bStack_1a7 = bVar24;
      uStack_1a6 = uVar12;
      uStack_1a5 = uVar14;
      if (puVar38 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar45 = __cxa_guard_acquire(&DAT_052461c0);
          puVar38 = &DAT_05240280;
          if (iVar45 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar38 = &DAT_05240280;
        }
      }
      local_200 = (undefined *)((ulong)local_200 & 0xffffffff00000000);
      local_1b0._0_4_ = 6.30584e-44;
      if (puVar38[0x227] != 0) {
        uVar28 = FUN_03850890(puVar38[0x227],0x2d,0,0);
        puVar7 = PTR_DAT_04bb4f78;
        if ((uVar28 & 1) != 0) {
          bVar24 = *pbVar1;
          uVar26 = (uint)bVar24;
          if (*(int *)(param_4 + 0x178) == 0) {
            lVar37 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)bVar24 * 0x740;
            if (7 < bVar24) {
              lVar37 = *(long *)PTR_DAT_04bb4f78 + 0x20;
            }
            if ((*(byte *)(lVar37 + 0x328) >> 3 & 1) != 0) {
              FUN_0231e380(param_4);
              uVar26 = (uint)*pbVar1;
            }
          }
          *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) & 0xfffffffe;
          local_1b0._0_4_ = 9.18327e-41;
          local_1b0._4_4_ = 0.0;
          FUN_0277d4ac(&local_1b0);
          bVar22 = 7 < uVar26;
          if (bVar22) {
            uVar26 = 0xff;
          }
          local_1b0._0_4_ = (float)*(undefined8 *)(param_4 + 0x1918);
          local_1b0._4_4_ = (float)((ulong)*(undefined8 *)(param_4 + 0x1918) >> 0x20);
          lVar37 = *(long *)puVar7 + 0x20 + (ulong)uVar26 * 0x740;
          if (bVar22) {
            lVar37 = *(long *)puVar7 + 0x20;
          }
          if (*(short *)(param_4 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
            *(undefined4 *)(lVar37 + 0x24c) = 3;
            FUN_01393458(lVar37 + 0x2f0);
          }
          else {
            *(undefined4 *)(lVar37 + 0x24c) = 4;
          }
          *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) | 1;
          *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) | 0x10;
          *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) & 0xfffffffb;
          local_1b0._0_4_ = 4.2039e-45;
          *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) | 8;
          *(undefined4 *)(param_4 + 0x1bf8) = 3;
        }
      }
      puVar38 = *(undefined8 **)(param_4 + 0x60);
      local_1f0 = 0;
      local_1e8 = (long *)0x0;
      local_200 = (undefined *)0x0;
      local_1f8 = 0;
      if (puVar38 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar45 = __cxa_guard_acquire(&DAT_052461c0);
          puVar38 = &DAT_05240280;
          if (iVar45 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar38 = &DAT_05240280;
        }
      }
      local_210 = (ulong)local_210._4_4_ << 0x20;
      local_1b0._0_4_ = 4.06377e-44;
      if ((puVar38[0x227] != 0) &&
         (uVar28 = FUN_03850890(puVar38[0x227],0x1d,&local_200,0), (uVar28 & 1) != 0)) {
        if (local_1e8 == (long *)0x0) {
          uVar26 = 1;
        }
        else if (*local_1e8 == 0) {
          local_9d = 0;
          lVar37 = (long)&local_1a0 + 4;
          local_1a0 = CONCAT35(local_1a0._5_3_,0x100);
          local_1b0 = PTR_DAT_04bb21f8 + 0x10;
          local_1a8 = (undefined1)lVar37;
          bStack_1a7 = (byte)((ulong)lVar37 >> 8);
          uStack_1a6 = (undefined1)((ulong)lVar37 >> 0x10);
          uStack_1a5 = (undefined1)((ulong)lVar37 >> 0x18);
          fStack_1a4 = (float)((ulong)lVar37 >> 0x20);
          lVar37 = *(long *)(local_1e8[2] + 8);
          FUN_038d1270(&local_1b0,"%s.as",
                       lVar37 + *(int *)(lVar37 + 0x24) + (long)*(int *)(lVar37 + 8));
LAB_024c71e0:
          uVar26 = 0;
        }
        else {
          iVar45 = *(int *)(*local_1e8 + 8);
          if (iVar45 < 0x60000000) {
            piVar2 = (int *)(*(long *)(local_1e8[2] + 8) + (long)iVar45);
            if (*piVar2 < 1) goto LAB_024c71e0;
            uVar26 = *(uint *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_1e8[2] + 8) +
                              4);
          }
          else {
            uVar26 = iVar45 + 0xa0000000;
            if (*(uint *)(local_1f0 + 0x80) <= uVar26) {
              uVar26 = 0;
            }
            lVar37 = *(long *)(local_1f0 + 0x88) + (ulong)uVar26 * 0x32;
            uVar26 = *(uint *)(lVar37 + (ulong)*(byte *)(lVar37 + 0x20));
          }
        }
        *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) & 0xfffffffe;
        local_1b0._0_4_ = 1.4013e-45;
        *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) | 2;
        puVar40 = *(undefined8 **)(param_4 + 0x60);
        puVar38 = puVar40;
        if (puVar40 == (undefined8 *)0x0) {
          if (((DAT_052461c0 & 1) == 0) &&
             (iVar45 = __cxa_guard_acquire(&DAT_052461c0), iVar45 != 0)) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          puVar40 = *(undefined8 **)(param_4 + 0x60);
          if (puVar40 == (undefined8 *)0x0) {
            if (((DAT_052461c0 & 1) == 0) &&
               (iVar45 = __cxa_guard_acquire(&DAT_052461c0), iVar45 != 0)) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
            puVar40 = &DAT_05240280;
            puVar38 = puVar40;
          }
          else {
            puVar38 = &DAT_05240280;
          }
        }
        uVar49 = FUN_01711ce0(puVar40);
        *(undefined4 *)(puVar38 + 0x252) = uVar49;
        *(float *)((long)puVar38 + 0x1294) = fVar44;
        *(byte *)((long)puVar38 + 0x12b4) = (byte)(uVar26 >> 0x1f);
        *(float *)(puVar38 + 0x253) = fVar46;
        *(undefined4 *)(puVar38 + 0x255) = 0;
        *(uint *)((long)puVar38 + 0x12ac) = uVar26 & (int)uVar26 >> 0x1f;
        *(uint *)(puVar38 + 0x256) = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
        *(undefined1 *)((long)puVar38 + 0x12b5) = 1;
        *(undefined1 *)((long)puVar38 + 0x126c) = 0;
      }
      puVar38 = *(undefined8 **)(param_4 + 0x60);
      if (puVar38 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar45 = __cxa_guard_acquire(&DAT_052461c0);
          puVar38 = &DAT_05240280;
          if (iVar45 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar38 = &DAT_05240280;
        }
      }
      local_210 = local_210 & 0xffffffff00000000;
      local_1b0._0_4_ = 4.2039e-44;
      puVar7 = (undefined *)CONCAT44(local_1b0._4_4_,0x1e);
      if (puVar38[0x227] != 0) {
        uVar28 = FUN_03850890(puVar38[0x227],0x1e,&local_200,0);
        puVar7 = local_1b0;
        if ((uVar28 & 1) != 0) {
          uVar49 = 0x3f800000;
          if (local_1e8 == (long *)0x0) {
            uVar26 = 1;
          }
          else {
            if (*local_1e8 == 0) {
              local_9d = 0;
              lVar37 = (long)&local_1a0 + 4;
              local_1a0 = CONCAT35(local_1a0._5_3_,0x100);
              local_1b0 = PTR_DAT_04bb21f8 + 0x10;
              local_1a8 = (undefined1)lVar37;
              bStack_1a7 = (byte)((ulong)lVar37 >> 8);
              uStack_1a6 = (undefined1)((ulong)lVar37 >> 0x10);
              uStack_1a5 = (undefined1)((ulong)lVar37 >> 0x18);
              fStack_1a4 = (float)((ulong)lVar37 >> 0x20);
              lVar37 = *(long *)(local_1e8[2] + 8);
              FUN_038d1270(&local_1b0,"%s.as",
                           lVar37 + *(int *)(lVar37 + 0x24) + (long)*(int *)(lVar37 + 8));
              uVar26 = 0;
              if (local_1e8 == (long *)0x0) goto LAB_024c74d8;
LAB_024c7404:
              lVar37 = *local_1e8;
            }
            else {
              iVar45 = *(int *)(*local_1e8 + 8);
              if (0x5fffffff < iVar45) {
                uVar26 = iVar45 + 0xa0000000;
                if (*(uint *)(local_1f0 + 0x80) <= uVar26) {
                  uVar26 = 0;
                }
                lVar37 = *(long *)(local_1f0 + 0x88) + (ulong)uVar26 * 0x32;
                puVar33 = (uint *)(lVar37 + (ulong)*(byte *)(lVar37 + 0x20));
LAB_024c7400:
                uVar26 = *puVar33;
                goto LAB_024c7404;
              }
              piVar2 = (int *)(*(long *)(local_1e8[2] + 8) + (long)iVar45);
              if (0 < *piVar2) {
                puVar33 = (uint *)(((ulong)(uint)piVar2[1] & 0xfffffff) +
                                   *(long *)(local_1e8[2] + 8) + 4);
                goto LAB_024c7400;
              }
              uVar26 = 0;
              lVar37 = *local_1e8;
            }
            if (lVar37 == 0) {
              local_9d = 0;
              lVar37 = (long)&local_1a0 + 4;
              local_1a0._5_3_ = (undefined3)((ulong)local_1a0 >> 0x28);
              local_1a0 = CONCAT35(local_1a0._5_3_,0x100);
              local_1b0 = PTR_DAT_04bb21f8 + 0x10;
              local_1a8 = (undefined1)lVar37;
              bStack_1a7 = (byte)((ulong)lVar37 >> 8);
              uStack_1a6 = (undefined1)((ulong)lVar37 >> 0x10);
              uStack_1a5 = (undefined1)((ulong)lVar37 >> 0x18);
              fStack_1a4 = (float)((ulong)lVar37 >> 0x20);
              lVar37 = *(long *)(local_1e8[2] + 8);
              FUN_038d1270(&local_1b0,"%s.as",
                           lVar37 + *(int *)(lVar37 + 0x24) + (long)*(int *)(lVar37 + 8));
              uVar49 = 0;
            }
            else {
              iVar45 = *(int *)(lVar37 + 8);
              if (iVar45 < 0x60000000) {
                uVar49 = 0;
                piVar2 = (int *)(*(long *)(local_1e8[2] + 8) + (long)iVar45);
                if (1 < *piVar2) {
                  uVar49 = *(undefined4 *)
                            (((ulong)(uint)piVar2[2] & 0xfffffff) + *(long *)(local_1e8[2] + 8) + 4)
                  ;
                }
              }
              else {
                uVar4 = iVar45 + 0xa0000000;
                if (*(uint *)(local_1f0 + 0x80) <= uVar4) {
                  uVar4 = 0;
                }
                lVar37 = *(long *)(local_1f0 + 0x88) + (ulong)uVar4 * 0x32;
                uVar49 = *(undefined4 *)(lVar37 + (ulong)*(byte *)(lVar37 + 0x21));
              }
            }
          }
LAB_024c74d8:
          *(undefined4 *)(param_4 + 0x720) = uVar49;
          *(byte *)(param_4 + 0x8e4) = (byte)(uVar26 >> 0x1f);
          *(uint *)(param_4 + 0x8e0) = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
          *(uint *)(param_4 + 0x8dc) = uVar26 & (int)uVar26 >> 0x1f;
          *(undefined4 *)(param_4 + 0x8d8) = 0;
          *(undefined1 *)(param_4 + 0x8e5) = 1;
          *(undefined4 *)(param_4 + 0x8e8) = uVar49;
          puVar7 = local_1b0;
        }
      }
    }
    else {
      puVar38 = *(undefined8 **)(param_4 + 0x60);
      local_184 = 0x3f800000;
      local_17c = 0x3f80000000000000;
      local_18c = 0;
      local_194 = 0;
      uStack_190 = 0;
      uStack_18e = 0;
      local_180 = local_180 & 0xffffff00;
      local_144 = 0;
      local_140 = 0;
      uStack_13b = 0;
      local_138 = 0;
      local_1a0 = CONCAT44(fVar50,param_3);
      uStack_16c = _UNK_04102208;
      local_174 = _DAT_04102200;
      uStack_15c = _UNK_04102888;
      local_164 = _DAT_04102880;
      local_1b0._0_4_ = (float)local_1e0;
      local_1b0._4_4_ = fStack_1dc;
      bVar24 = *pbVar1;
      uStack_14c = (undefined4)_UNK_041023d8;
      iStack_148 = (int)((ulong)_UNK_041023d8 >> 0x20);
      local_154 = (undefined4)_DAT_041023d0;
      uStack_150 = (undefined4)((ulong)_DAT_041023d0 >> 0x20);
      if (7 < bVar24) {
        bVar24 = 0xff;
      }
      local_198 = (uint)CONCAT21((short)((uint)local_198 >> 0x10),bVar24) << 8;
      local_134 = 1;
      fStack_1a4 = (float)param_2;
      if (puVar38 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar45 = __cxa_guard_acquire(&DAT_052461c0);
          puVar38 = &DAT_05240280;
          if (iVar45 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar38 = &DAT_05240280;
        }
      }
      FUN_0170d420(puVar38,&local_1b0);
      *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) & 0xfffffffb;
      *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) & 0xfffffffe;
      *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) | 8;
      local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
      *(uint *)(param_4 + 0x718) = *(uint *)(param_4 + 0x718) | 2;
      puVar7 = (undefined *)CONCAT44(local_1b0._4_4_,(float)local_1b0);
    }
  }
  else {
    local_1a8 = uVar10;
    bStack_1a7 = bVar24;
    uStack_1a6 = uVar12;
    uStack_1a5 = uVar14;
    FUN_0236c210(param_4,0);
    puVar7 = (undefined *)CONCAT44(local_1b0._4_4_,(float)local_1b0);
  }
  bVar22 = (bool)(bVar20 ^ 1);
  if (iVar48 != 0) {
    bVar22 = true;
  }
  local_1b0 = puVar7;
  if (!bVar22) {
    uVar28 = FUN_024bc518(param_4);
    if ((uVar28 & 1) != 0) {
      FUN_0230e2b0(&local_1b0);
      pcVar39 = (char *)CONCAT44(fStack_1a4,
                                 CONCAT13(uStack_1a5,
                                          CONCAT12(uStack_1a6,CONCAT11(bStack_1a7,local_1a8))));
      if (pcVar39 != "Player_GetDemo") {
        iVar45 = 0xe;
        if ((int)local_1a0 < 0xf) {
          iVar45 = (int)local_1a0 + -1;
        }
        memcpy(pcVar39,"Player_GetDemo",(long)iVar45);
        pcVar39[iVar45] = '\0';
      }
      puVar7 = PTR_DAT_04bb43c0;
      local_100 = local_1e0;
      local_fc = fStack_1dc;
      lVar41 = *(long *)PTR_DAT_04bb43c0;
      uVar26 = FUN_0277d6c4(&local_1e0);
      lVar37 = *(long *)puVar7;
      if (lVar37 == 0) {
LAB_024c5f08:
        pcVar39 = (char *)CONCAT44(uStack_14c,uStack_150);
        if (pcVar39 != "Get_Scoop") {
          __src = "Get_Scoop";
          bVar21 = SBORROW4(iStack_148,9);
          iVar45 = iStack_148 + -9;
          bVar22 = iStack_148 == 9;
          iVar31 = 9;
LAB_024c5f34:
          if (bVar22 || iVar45 < 0 != bVar21) {
            iVar31 = iStack_148 + -1;
          }
          memcpy(pcVar39,__src,(long)iVar31);
          pcVar39[iVar31] = '\0';
        }
      }
      else {
        lVar41 = *(long *)(lVar41 + 0x57e58);
        uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar41 + 0x1f8);
        if ((*(uint *)(lVar41 + 0x1d8) <= uVar26) ||
           (*(long *)(*(long *)(lVar41 + 0x1e0) + (long)(int)uVar26 * 8) == 0)) goto LAB_024c5f08;
        local_1f0 = 0;
        local_200 = PTR_DAT_04bc0510 + 0x10;
        local_1f8 = CONCAT44(fStack_1dc,local_1e0);
        uVar26 = FUN_0277d6c4(&local_1f8);
        if (*(long *)puVar7 == 0) goto LAB_024c5f08;
        lVar37 = *(long *)(lVar37 + 0x57e58);
        uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
        if ((*(uint *)(lVar37 + 0x1d8) <= uVar26) ||
           (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8) == 0)) goto LAB_024c5f08;
        lVar37 = *(long *)PTR_DAT_04bc0428;
        uVar26 = FUN_0277d6c4(&local_1e0);
        uVar26 = (uVar26 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
        if ((*(uint *)(lVar37 + 0x1d8) <= uVar26) ||
           (((puVar33 = *(uint **)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar26 * 8),
             puVar33 == (uint *)0x0 || (uVar26 = *puVar33, uVar26 == 0)) ||
            (puVar33 == (uint *)(ulong)uVar26)))) goto LAB_024c5f08;
        puVar36 = (uint *)((long)puVar33 - (long)(ulong)uVar26);
        if (((*puVar36 == 0) || (uVar26 = puVar36[1], uVar26 == 0)) ||
           ((ulong)(ushort)puVar36[2] == 0)) goto LAB_024c5f08;
        lVar37 = 0xc;
        if (*(char *)((long)puVar36 + 10) != '\0') {
          lVar37 = 0x1c;
        }
        lVar37 = (long)puVar36 + lVar37 + (ulong)(ushort)puVar36[2] * 8;
        if (lVar37 == 0) goto LAB_024c5f08;
        uVar4 = 0;
        if ((ulong)uVar26 != 0) {
          uVar4 = (uint)((ulong)((long)puVar33 - lVar37) / (ulong)uVar26);
        }
        if (*puVar36 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        if (((*(uint *)PTR_DAT_04bc00c8 <= uVar4) ||
            (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
            0xbc < uVar5)) || (uVar5 != 0x92)) goto LAB_024c5f08;
        pcVar39 = (char *)CONCAT44(uStack_14c,uStack_150);
        if (pcVar39 != "Get_TreasureHunt") {
          __src = "Get_TreasureHunt";
          bVar21 = SBORROW4(iStack_148,0x10);
          iVar45 = iStack_148 + -0x10;
          bVar22 = iStack_148 == 0x10;
          iVar31 = 0x10;
          goto LAB_024c5f34;
        }
      }
      local_f8 = 0xc;
      if ((uVar25 & 0x40) != 0) {
        local_f8 = 1;
      }
      lVar37 = *(long *)PTR_DAT_04bb39b0;
      if ((lVar37 == 0) || (*(int *)(lVar37 + 0x15c) == 0)) {
LAB_024c6130:
        if ((uVar25 >> 6 & 1) == 0) {
LAB_024c6148:
          local_200 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_200);
          FUN_016e49e4(&local_200,&local_1e0,1);
          local_e0 = (uint)local_200;
          local_dc = local_200._4_4_;
          goto LAB_024c616c;
        }
        local_e8 = 1;
        local_e4 = 2;
      }
      else {
        pbVar3 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar37 + 0x15c) != 0) {
          pbVar3 = (byte *)(lVar37 + 0x158);
        }
        bVar34 = *pbVar1;
        bVar24 = *pbVar3;
        if (7 < bVar24) {
          bVar24 = 0xff;
        }
        if (7 < bVar34) {
          bVar34 = 0xff;
        }
        if (((uVar25 >> 6 & 1) != 0) || (bVar24 == bVar34)) goto LAB_024c6130;
        lVar41 = *(long *)puVar7;
        uVar25 = FUN_0277d6c4(&local_1e0);
        lVar37 = *(long *)puVar7;
        if (lVar37 == 0) goto LAB_024c6148;
        lVar41 = *(long *)(lVar41 + 0x57e58);
        uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar41 + 0x1f8);
        if ((*(uint *)(lVar41 + 0x1d8) <= uVar25) ||
           (*(long *)(*(long *)(lVar41 + 0x1e0) + (long)(int)uVar25 * 8) == 0)) goto LAB_024c6148;
        local_1f0 = 0;
        local_200 = PTR_DAT_04bc0510 + 0x10;
        local_1f8 = CONCAT44(fStack_1dc,local_1e0);
        uVar25 = FUN_0277d6c4(&local_1f8);
        if (*(long *)puVar7 == 0) goto LAB_024c6148;
        lVar37 = *(long *)(lVar37 + 0x57e58);
        uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
        if ((*(uint *)(lVar37 + 0x1d8) <= uVar25) ||
           (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar25 * 8) == 0)) goto LAB_024c6148;
        lVar37 = *(long *)PTR_DAT_04bc0428;
        uVar25 = FUN_0277d6c4(&local_1e0);
        uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
        if ((*(uint *)(lVar37 + 0x1d8) <= uVar25) ||
           (((puVar33 = *(uint **)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar25 * 8),
             puVar33 == (uint *)0x0 || (uVar25 = *puVar33, uVar25 == 0)) ||
            (puVar33 == (uint *)(ulong)uVar25)))) goto LAB_024c6148;
        puVar36 = (uint *)((long)puVar33 - (long)(ulong)uVar25);
        if (((*puVar36 == 0) || (uVar25 = puVar36[1], uVar25 == 0)) ||
           ((ulong)(ushort)puVar36[2] == 0)) goto LAB_024c6148;
        lVar37 = 0xc;
        if (*(char *)((long)puVar36 + 10) != '\0') {
          lVar37 = 0x1c;
        }
        lVar37 = (long)puVar36 + lVar37 + (ulong)(ushort)puVar36[2] * 8;
        if (lVar37 == 0) goto LAB_024c6148;
        uVar26 = 0;
        if ((ulong)uVar25 != 0) {
          uVar26 = (uint)((ulong)((long)puVar33 - lVar37) / (ulong)uVar25);
        }
        if (*puVar36 <= uVar26) {
          uVar26 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc00c8 <= uVar26) ||
           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2) != 0x8a))
        goto LAB_024c6148;
        iVar45 = FUN_0274bce0(pbVar1,&DAT_054de510);
        if (iVar45 == 0) {
          local_e4 = 8;
          local_e8 = 1;
          goto LAB_024c6178;
        }
        local_e0 = local_1e0;
        local_dc = fStack_1dc;
LAB_024c616c:
        local_e8 = 0;
      }
LAB_024c6178:
      local_d8 = 0x3c;
      local_210 = 0xfffe;
      FUN_0277d4ac(&local_210);
      FUN_016e49e4(&local_210,&local_1e0,1);
      lVar41 = *(long *)puVar7;
      uVar25 = FUN_0277d6c4(&local_210);
      lVar37 = *(long *)puVar7;
      if (lVar37 != 0) {
        lVar41 = *(long *)(lVar41 + 0x57e58);
        uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar41 + 0x1f8);
        if ((uVar25 < *(uint *)(lVar41 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar41 + 0x1e0) + (long)(int)uVar25 * 8) != 0)) {
          local_1f0 = 0;
          local_200 = PTR_DAT_04bc0510 + 0x10;
          local_1f8 = local_210;
          uVar25 = FUN_0277d6c4(&local_1f8);
          if (*(long *)puVar7 != 0) {
            lVar37 = *(long *)(lVar37 + 0x57e58);
            uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
            if ((uVar25 < *(uint *)(lVar37 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar25 * 8) != 0)) {
              lVar37 = *(long *)PTR_DAT_04bc0428;
              uVar25 = FUN_0277d6c4(&local_210);
              uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
              if ((uVar25 < *(uint *)(lVar37 + 0x1d8)) &&
                 (((puVar33 = *(uint **)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar25 * 8),
                   puVar33 != (uint *)0x0 && (uVar25 = *puVar33, uVar25 != 0)) &&
                  (puVar33 != (uint *)(ulong)uVar25)))) {
                puVar36 = (uint *)((long)puVar33 - (long)(ulong)uVar25);
                if (((*puVar36 != 0) && (uVar25 = puVar36[1], uVar25 != 0)) &&
                   ((ulong)(ushort)puVar36[2] != 0)) {
                  lVar37 = 0xc;
                  if (*(char *)((long)puVar36 + 10) != '\0') {
                    lVar37 = 0x1c;
                  }
                  lVar37 = (long)puVar36 + lVar37 + (ulong)(ushort)puVar36[2] * 8;
                  if (lVar37 != 0) {
                    uVar26 = 0;
                    if ((ulong)uVar25 != 0) {
                      uVar26 = (uint)((ulong)((long)puVar33 - lVar37) / (ulong)uVar25);
                    }
                    if (*puVar36 <= uVar26) {
                      uVar26 = 0xffffffff;
                    }
                    if ((uVar26 < *(uint *)PTR_DAT_04bc00c8) &&
                       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2) == 0x6d)
                       ) {
                      local_f4 = (undefined4)local_210;
                      local_f0 = local_210._4_4_;
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_02328d9c(param_4,&local_1b0);
    }
  }
  uVar18 = uStack_18e;
  uVar16 = uStack_190;
  uStack_190 = (undefined2)param_3;
  uVar17 = uStack_190;
  uStack_18e = (undefined2)((uint)param_3 >> 0x10);
  uVar19 = uStack_18e;
  uStack_190 = uVar16;
  uStack_18e = uVar18;
  if (local_1b4._1_1_ == '\0') {
    puVar38 = *(undefined8 **)(param_4 + 0x60);
    puVar7 = local_1b0;
    if (puVar38 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar45 = __cxa_guard_acquire(&DAT_052461c0);
        puVar38 = &DAT_05240280;
        puVar7 = local_1b0;
        if (iVar45 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          puVar7 = local_1b0;
        }
      }
      else {
        puVar38 = &DAT_05240280;
      }
    }
    local_1b0._4_4_ = (float)((ulong)puVar7 >> 0x20);
    local_1b0._0_4_ = SUB84(puVar7,0);
    uVar25 = 0;
    if (puVar38[0x227] != 0) {
      local_1b0._0_4_ = 1.4013e-45;
      uVar25 = *(uint *)(puVar38 + 0x2d3) >> 1 & 1;
    }
    uVar28 = FUN_0170a6d0(puVar38,uVar25);
    if ((uVar28 & 1) != 0) {
      local_180 = 0x3f800000;
      local_17c = CONCAT26(local_17c._6_2_,0x10000000000);
      local_1a8 = 3;
      bStack_1a7 = 0;
      uStack_1a6 = 0;
      uStack_1a5 = 0;
      fStack_1a4 = 0.0;
      local_1a0._1_7_ = (uint7)((ulong)local_1a0 >> 8) & 0xffffff;
      local_184 = *(undefined4 *)(*(long *)(param_4 + 0x68) + 0x280);
      uVar27 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x278);
      local_1a0 = (ulong)local_1a0._1_7_ << 8;
      local_1b0._0_4_ = (float)local_1e0;
      local_1b0._4_4_ = fStack_1dc;
      local_18c = (undefined6)uVar27;
      uStack_186 = (undefined2)((ulong)uVar27 >> 0x30);
      local_17c = CONCAT62(local_17c._2_6_,0x101);
      local_198 = iVar42;
      local_194 = param_2;
      uStack_190 = uVar17;
      uStack_18e = uVar19;
      FUN_0236b830(param_4,&local_1b0);
    }
  }
  puVar9 = PTR_DAT_04bc30f8;
  puVar7 = local_1b0;
  if (*(int *)(param_4 + 0x178) == 0) {
    if ((*(byte *)(param_4 + 0x17cd) >> 5 & 1) != 0) {
      local_1b4 = CONCAT11(1,(char)local_1b4);
      uVar28 = (ulong)*pbVar1;
      if ((uVar28 < 8) && (*(short *)(PTR_DAT_04bc30f8 + uVar28 * 0x18 + 8) != local_1b4)) {
        *(short *)(PTR_DAT_04bc30f8 + uVar28 * 0x18 + 8) = local_1b4;
        puVar9[uVar28 * 0x18 + 10] = 1;
      }
    }
  }
  else if ((local_1b4._1_1_ != '\0') && ((*(byte *)(param_4 + 0x17cd) >> 4 & 1) != 0)) {
    FUN_0236b9d0(param_4,param_4 + 0x1ee9);
    puVar7 = local_1b0;
  }
  local_1b0._4_4_ = (float)((ulong)puVar7 >> 0x20);
  if (bVar20) {
    local_1b0 = puVar7;
    FUN_02332b04(param_4,1,0);
  }
  puVar33 = (uint *)(param_4 + 0x718);
  if ((*puVar33 >> 3 & 1) == 0) {
    if ((*puVar33 >> 2 & 1) != 0) {
      uVar5 = *(ushort *)(param_4 + 0x1914);
      goto LAB_024c65c0;
    }
    if (*(int *)(param_4 + 0x178) == 1) {
      uVar5 = *(ushort *)(param_4 + 0x18ef);
      uVar27 = 0;
      goto LAB_024c65fc;
    }
  }
  else {
    uVar5 = *(ushort *)(param_4 + 0x1916);
LAB_024c65c0:
    uVar27 = 1;
LAB_024c65fc:
    local_1b0._0_4_ = (float)((uint)uVar5 << 0x10);
    FUN_02328b10(param_4,&local_1b0,uVar27);
  }
  local_1b0._4_4_ = (float)(int)*(short *)(param_4 + 0x190e) * 0.25;
  local_1b0._0_4_ = (float)*(int *)(param_4 + 0x190a) * 0.001;
  fVar50 = (float)*(int *)(param_4 + 0x1910) * 0.001;
  local_1a8 = SUB41(fVar50,0);
  bStack_1a7 = (byte)((uint)fVar50 >> 8);
  uStack_1a6 = (undefined1)((uint)fVar50 >> 0x10);
  uStack_1a5 = (undefined1)((uint)fVar50 >> 0x18);
  lVar37 = FUN_0251e98c(1);
  puVar29 = (undefined4 *)(**(code **)(*(long *)(lVar37 + 0x1380) + 0xf0))(lVar37 + 0x1380);
  puVar38 = &DAT_054e9a58;
  if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
    puVar38 = *(undefined8 **)(param_4 + 0x4c8);
  }
  FUN_03eb4b60(*puVar29,0x41200000,0x3e4ccccc,puVar38 + 0x4f,&local_1b0);
  if ((*puVar33 & 1) == 0) {
    local_1b0._0_4_ = 1.4013e-45;
    if ((*puVar33 >> 1 & 1) != 0) {
      puVar38 = *(undefined8 **)(param_4 + 0x60);
      if (puVar38 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar45 = __cxa_guard_acquire(&DAT_052461c0);
          puVar38 = &DAT_05240280;
          if (iVar45 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar38 = &DAT_05240280;
        }
      }
      if ((*(char *)((long)puVar38 + 0x12b5) != '\0') && (local_1b4._1_1_ == '\0')) {
        local_184 = 0x3f800000;
        local_17c = 0x3f80000000000000;
        puVar38 = *(undefined8 **)(param_4 + 0x60);
        local_18c = 0;
        local_194 = 0;
        uStack_190 = 0;
        uStack_18e = 0;
        local_180 = local_180 & 0xffffff00;
        local_144 = 0;
        local_140 = 0;
        uStack_13b = 0;
        local_138 = 0;
        local_134 = 0;
        local_1a0 = CONCAT44(*(undefined4 *)(param_4 + 0x71c),param_3);
        uStack_16c = _UNK_04102208;
        local_174 = _DAT_04102200;
        uStack_15c = _UNK_04102888;
        local_164 = _DAT_04102880;
        local_1b0._0_4_ = (float)local_1e0;
        local_1b0._4_4_ = fStack_1dc;
        bVar24 = *pbVar1;
        uStack_14c = (undefined4)_UNK_041023d8;
        iStack_148 = (int)((ulong)_UNK_041023d8 >> 0x20);
        local_154 = (undefined4)_DAT_041023d0;
        uStack_150 = (undefined4)((ulong)_DAT_041023d0 >> 0x20);
        if (7 < bVar24) {
          bVar24 = 0xff;
        }
        local_198 = CONCAT31(CONCAT21(local_198._2_2_,bVar24),1);
        local_1a8 = uVar11;
        bStack_1a7 = bVar35;
        uStack_1a6 = uVar13;
        uStack_1a5 = uVar15;
        fStack_1a4 = (float)param_2;
        if (puVar38 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar45 = __cxa_guard_acquire(&DAT_052461c0);
            puVar38 = &DAT_05240280;
            if (iVar45 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar38 = &DAT_05240280;
          }
        }
        if (*(char *)((long)puVar38 + 0x12b5) == '\0') {
          fVar50 = 0.0;
        }
        else {
          iVar45 = *(int *)(puVar38 + 0x256);
          fVar50 = 1.0;
          if ((*(int *)(puVar38 + 0x255) < iVar45) && (iVar45 != 0)) {
            fVar46 = (float)*(int *)(puVar38 + 0x255) / (float)iVar45;
            fVar44 = 1.0;
            if (fVar46 <= 1.0) {
              fVar44 = fVar46;
            }
            fVar50 = 0.0;
            if (0.0 <= fVar46) {
              fVar50 = fVar44;
            }
          }
        }
        puVar38 = *(undefined8 **)(param_4 + 0x60);
        local_17c = CONCAT44(fVar50,(undefined4)local_17c);
        local_134 = 1;
        if (puVar38 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar45 = __cxa_guard_acquire(&DAT_052461c0);
            puVar38 = &DAT_05240280;
            if (iVar45 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar38 = &DAT_05240280;
          }
        }
        FUN_0170d420(puVar38,&local_1b0);
        if (*(char *)(param_4 + 0x8e5) != '\0') {
          uVar49 = (**(code **)(*(long *)(param_4 + 0x8d0) + (ulong)*(byte *)(param_4 + 0x8e4) * 8))
                             (param_4 + 0x8d0);
          *(undefined4 *)(param_4 + 0x8d8) = uVar49;
        }
      }
    }
  }
  else {
    local_198._0_2_ = 0xff00;
    local_184 = 0x3f800000;
    local_194 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    bStack_1a7 = 0;
    uStack_1a6 = 0;
    uStack_1a5 = 0;
    fStack_1a4 = 0.0;
    local_1a0 = 0x3f80000000000000;
    local_17c = 0x3f80000000000000;
    local_1b0._0_4_ = *(float *)PTR_DAT_04bb37e0;
    local_1b0._4_4_ = *(float *)(PTR_DAT_04bb37e0 + 4);
    uStack_18e = 0;
    local_18c = 0;
    local_180 = local_180 & 0xffffff00;
    local_144 = 0;
    local_140 = 0;
    uStack_13b = 0;
    local_138 = 0;
    local_134 = 0;
    uStack_16c = _UNK_04102208;
    local_174 = _DAT_04102200;
    uStack_15c = _UNK_04102888;
    local_164 = _DAT_04102880;
    uStack_14c = (undefined4)_UNK_041023d8;
    iStack_148 = (int)((ulong)_UNK_041023d8 >> 0x20);
    local_154 = (undefined4)_DAT_041023d0;
    uStack_150 = (undefined4)((ulong)_DAT_041023d0 >> 0x20);
    lVar37 = FUN_0251e98c(1);
    puVar29 = (undefined4 *)(**(code **)(*(long *)(lVar37 + 0xcf0) + 0xf0))(lVar37 + 0xcf0);
    uVar49 = *puVar29;
    puVar29 = (undefined4 *)(**(code **)(*(long *)(lVar37 + 0xd20) + 0xf0))(lVar37 + 0xd20);
    uVar51 = *puVar29;
    puVar29 = (undefined4 *)(**(code **)(*(long *)(lVar37 + 0xd50) + 0xf0))(lVar37 + 0xd50);
    bVar24 = *pbVar1;
    puVar38 = *(undefined8 **)(param_4 + 0x60);
    local_1b0._0_4_ = (float)local_1e0;
    local_1b0._4_4_ = fStack_1dc;
    local_134 = 1;
    local_1a8 = (undefined1)uVar49;
    bStack_1a7 = (byte)((uint)uVar49 >> 8);
    uStack_1a6 = (undefined1)((uint)uVar49 >> 0x10);
    uStack_1a5 = (undefined1)((uint)uVar49 >> 0x18);
    local_17c = local_17c & 0xffffffff;
    if (7 < bVar24) {
      bVar24 = 0xff;
    }
    local_1a0 = CONCAT44(*(undefined4 *)(param_4 + 0x71c),*puVar29);
    local_198._0_2_ = CONCAT11(bVar24,1);
    fStack_1a4 = (float)uVar51;
    if (puVar38 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar45 = __cxa_guard_acquire(&DAT_052461c0);
        puVar38 = &DAT_05240280;
        if (iVar45 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar38 = &DAT_05240280;
      }
    }
    FUN_0170d6ec(puVar38,&local_1b0);
  }
  puVar38 = *(undefined8 **)(param_4 + 0x60);
  if (puVar38 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) != 0) || (iVar45 = __cxa_guard_acquire(&DAT_052461c0), iVar45 == 0)) {
      puVar38 = &DAT_05240280;
      goto LAB_024c6988;
    }
    FUN_016fcf10(&DAT_05240280);
    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052461c0);
    puVar38 = &DAT_05240280;
    if (DAT_052413b8 != 0) goto LAB_024c6990;
    uVar25 = 0;
  }
  else {
LAB_024c6988:
    uVar25 = 0;
    if (puVar38[0x227] != 0) {
LAB_024c6990:
      local_1b0._0_4_ = 1.4013e-45;
      uVar25 = *(uint *)(puVar38 + 0x2d3) >> 1 & 1;
    }
  }
  uVar28 = FUN_0170a6d0(puVar38,uVar25);
  puVar7 = PTR_DAT_04bc30f8;
  if (iVar48 != 0) {
    return;
  }
  if ((uVar28 & 1) == 0) {
    return;
  }
  local_1b4 = CONCAT11(local_1b4._1_1_,1);
  uVar28 = (ulong)*pbVar1;
  if ((uVar28 < 8) && (*(short *)(PTR_DAT_04bc30f8 + uVar28 * 0x18 + 8) != local_1b4)) {
    *(short *)(PTR_DAT_04bc30f8 + uVar28 * 0x18 + 8) = local_1b4;
    puVar7[uVar28 * 0x18 + 10] = 1;
  }
  if ((bVar20) && (uVar28 = FUN_0231eddc(param_4,0), (uVar28 & 1) == 0)) {
    return;
  }
  uVar25 = *(uint *)(param_4 + 0x17cc);
  uVar26 = *(uint *)(param_4 + 0x17d0);
  *(uint *)(param_4 + 0x17d0) = uVar26 & 0xffbfffff;
  lVar37 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar37 == 0) || (*(int *)(lVar37 + 0x15c) == 0)) {
LAB_024c6a98:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar37 = 0;
      if (DAT_00000028 == '\0') goto LAB_024c6adc;
LAB_024c6ab4:
      bVar24 = (**(code **)(*(long *)(lVar37 + 0x20) + 0x18))((long *)(lVar37 + 0x20));
      *(undefined1 *)(lVar37 + 0x28) = 0;
    }
    else {
      lVar37 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar37 + 0x28) != '\0') goto LAB_024c6ab4;
LAB_024c6adc:
      bVar24 = 1;
    }
    *(byte *)(lVar37 + 0x29) = bVar24 & 1;
    puVar7 = (undefined *)(lVar37 + 0x2c);
    plVar8 = (long *)PTR_DAT_04bb43c0;
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar37 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar37 + 0x158);
    }
    bVar35 = *pbVar1;
    bVar24 = *pbVar3;
    if (7 < bVar24) {
      bVar24 = 0xff;
    }
    if (7 < bVar35) {
      bVar35 = 0xff;
    }
    puVar7 = PTR_DAT_04bb37e0;
    plVar8 = (long *)PTR_DAT_04bb43c0;
    if (bVar24 == bVar35) goto LAB_024c6a98;
  }
  PTR_DAT_04bb43c0 = (undefined *)plVar8;
  if ((uVar25 & 0x40) == 0 && (uVar26 & 0x40000000) == 0) {
    local_180 = *(undefined4 *)(param_4 + 0x71c);
    local_17c._6_2_ = (undefined2)(local_17c >> 0x30);
    local_17c = CONCAT26(local_17c._6_2_,0x10000000100);
    local_1a8 = 3;
    bStack_1a7 = 0;
    uStack_1a6 = 0;
    uStack_1a5 = 0;
    fStack_1a4 = 0.0;
    local_1a0._1_7_ = (uint7)((ulong)local_1a0 >> 8) & 0xffffff;
    local_184 = *(undefined4 *)(*(long *)(param_4 + 0x68) + 0x280);
    uVar27 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x278);
    local_1a0 = CONCAT71(local_1a0._1_7_,1);
    local_18c = (undefined6)uVar27;
    uStack_186 = (undefined2)((ulong)uVar27 >> 0x30);
    local_1b0._0_4_ = (float)local_1e0;
    local_1b0._4_4_ = fStack_1dc;
    local_198 = iVar42;
    local_194 = param_2;
    uStack_190 = uVar17;
    uStack_18e = uVar19;
    FUN_0236cba0(param_4,&local_1b0);
    return;
  }
  iVar42 = *(int *)(param_4 + 0x1900);
  sVar6 = *(short *)(param_4 + 0x1904);
  iVar48 = *(int *)(param_4 + 0x1906);
  lVar41 = *plVar8;
  uVar25 = FUN_0277d6c4(puVar7);
  lVar37 = *plVar8;
  if (lVar37 == 0) {
LAB_024c6b5c:
    uVar25 = FUN_0277d6c4(&local_1e0);
    if (*plVar8 == 0) {
      return;
    }
    lVar37 = *(long *)(lVar37 + 0x57e58);
    uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
    if (*(uint *)(lVar37 + 0x1d8) <= uVar25) {
      return;
    }
    if (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar25 * 8) == 0) {
      return;
    }
    FUN_02332d7c(param_4,0);
    lVar37 = *plVar8;
    local_1f0 = 0;
    local_200 = PTR_DAT_04bc0510 + 0x10;
    local_1f8 = CONCAT44(fStack_1dc,local_1e0);
    uVar25 = FUN_0277d6c4(&local_1f8);
    if (*plVar8 != 0) {
      lVar37 = *(long *)(lVar37 + 0x57e58);
      uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
      if ((uVar25 < *(uint *)(lVar37 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar25 * 8) != 0)) {
        lVar37 = *(long *)PTR_DAT_04bc0428;
        uVar25 = FUN_0277d6c4(&local_1e0);
        uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
        if ((uVar25 < *(uint *)(lVar37 + 0x1d8)) &&
           (((puVar33 = *(uint **)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar25 * 8),
             puVar33 != (uint *)0x0 && (uVar25 = *puVar33, uVar25 != 0)) &&
            (puVar33 != (uint *)(ulong)uVar25)))) {
          puVar36 = (uint *)((long)puVar33 - (long)(ulong)uVar25);
          if (*puVar36 != 0) {
            uVar25 = puVar36[1];
            if ((uVar25 != 0) && ((ulong)(ushort)puVar36[2] != 0)) {
              lVar37 = 0xc;
              if (*(char *)((long)puVar36 + 10) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar36 + lVar37 + (ulong)(ushort)puVar36[2] * 8;
              if (lVar37 == 0) goto LAB_024c6cc4;
              uVar26 = 0;
              if ((ulong)uVar25 != 0) {
                uVar26 = (uint)((ulong)((long)puVar33 - lVar37) / (ulong)uVar25);
              }
              if (*puVar36 <= uVar26) {
                uVar26 = 0xffffffff;
              }
              if ((*(uint *)PTR_DAT_04bc00c8 <= uVar26) ||
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2) != 0x6d))
              goto LAB_024c6cc4;
LAB_024c6d30:
              if (*pbVar1 < 8) {
                uVar25 = FUN_02582d8c(pbVar1,1);
                puVar7 = PTR_DAT_04bb4fb8;
                if ((((uVar25 < 8) &&
                     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar25 * 0x13f0 + 0x13d4) != '\0'
                     )) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar25 * 0x13f0 + 0x13d6)
                            != '\0')) &&
                   ((uVar25 = FUN_02582d8c(pbVar1,1), uVar25 < 8 &&
                    (*(char *)(*(long *)puVar7 + (ulong)uVar25 * 0x13f0 + 0x13d4) != '\0')))) {
                  lVar37 = *(long *)puVar7 + (ulong)uVar25 * 0x13f0;
                  *(undefined8 *)(lVar37 + 0x6a8) = 0;
                  *(uint *)(lVar37 + 0x698) = *(uint *)(lVar37 + 0x698) & 0xfffffffe;
                }
              }
              local_208 = 0;
              local_210 = 0;
              uVar28 = FUN_009a6f5c(*(undefined8 *)PTR_DAT_04bb4820,&local_210,pbVar1);
              if ((uVar28 & 1) == 0) {
                uVar27 = FUN_016debb0(param_4);
                FUN_016ff8c0(uVar27,8,&local_210);
              }
              bVar24 = *pbVar1;
              local_198 = CONCAT22(local_198._2_2_,0xffff);
              local_1a0 = CONCAT44(fStack_1dc,local_1e0);
              local_1b0._4_4_ = (float)local_210;
              local_1a8 = (undefined1)(local_210 >> 0x20);
              bStack_1a7 = (byte)(local_210 >> 0x28);
              uStack_1a6 = (undefined1)(local_210 >> 0x30);
              uStack_1a5 = (undefined1)(local_210 >> 0x38);
              if (7 < bVar24) {
                bVar24 = 0xff;
              }
              fStack_1a4 = (float)local_208;
              local_1b0._0_4_ = (float)CONCAT31(local_1b0._1_3_,bVar24);
              FUN_025446cc(&local_1b0);
              goto LAB_024c7148;
            }
LAB_024c6cc4:
            if ((*puVar36 != 0) &&
               ((uVar25 = puVar36[1], uVar25 != 0 && ((ulong)(ushort)puVar36[2] != 0)))) {
              lVar37 = 0xc;
              if (*(char *)((long)puVar36 + 10) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar36 + lVar37 + (ulong)(ushort)puVar36[2] * 8;
              if (lVar37 != 0) {
                uVar26 = 0;
                if ((ulong)uVar25 != 0) {
                  uVar26 = (uint)((ulong)((long)puVar33 - lVar37) / (ulong)uVar25);
                }
                if (*puVar36 <= uVar26) {
                  uVar26 = 0xffffffff;
                }
                if ((uVar26 < *(uint *)PTR_DAT_04bc00c8) &&
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2) == 0x8a))
                goto LAB_024c6d30;
              }
            }
          }
        }
      }
    }
    local_1b0._0_4_ = (float)((uint)(float)local_1b0 & 0xffffff00);
    local_1b0._4_4_ = (float)local_1e0;
    local_1a8 = SUB41(fStack_1dc,0);
    bStack_1a7 = (byte)((uint)fStack_1dc >> 8);
    uStack_1a6 = (undefined1)((uint)fStack_1dc >> 0x10);
    uStack_1a5 = (undefined1)((uint)fStack_1dc >> 0x18);
    fStack_1a4 = (float)iVar42 * 0.001;
    local_1a0 = CONCAT44((float)iVar48 * 0.001,(float)(int)sVar6 * 0.25);
    FUN_024bc7f8(param_4,&local_1b0);
  }
  else {
    lVar41 = *(long *)(lVar41 + 0x57e58);
    uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar41 + 0x1f8);
    if ((*(uint *)(lVar41 + 0x1d8) <= uVar25) ||
       (*(long *)(*(long *)(lVar41 + 0x1e0) + (long)(int)uVar25 * 8) == 0)) goto LAB_024c6b5c;
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar37 = 0;
    }
    else {
      lVar37 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    }
    if (*(char *)(lVar37 + 0x28) == '\0') {
      bVar24 = 1;
    }
    else {
      bVar24 = (**(code **)(*(long *)(lVar37 + 0x20) + 0x18))((long *)(lVar37 + 0x20));
      *(undefined1 *)(lVar37 + 0x28) = 0;
    }
    *(byte *)(lVar37 + 0x29) = bVar24 & 1;
    local_1b0._0_4_ = 9.18327e-41;
    local_1b0._4_4_ = 0.0;
    FUN_0277d4ac(&local_1b0);
    FUN_016e49e4(&local_1b0,&local_1e0,1);
    lVar37 = *plVar8;
    uVar25 = FUN_0277d6c4(&local_1b0);
    if (*plVar8 != 0) {
      lVar37 = *(long *)(lVar37 + 0x57e58);
      uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
      if ((uVar25 < *(uint *)(lVar37 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar25 * 8) != 0)) {
        FUN_026738b0(pbVar1,&local_1b0,1,0);
      }
    }
LAB_024c7148:
    FUN_02373ee0(param_4,6,1,1);
  }
  return;
}

