
/* WARNING: Removing unreachable block (ram,0x023cb5cc) */
/* WARNING: Removing unreachable block (ram,0x023cb650) */
/* WARNING: Removing unreachable block (ram,0x023cb858) */

void FUN_023cade0(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  float *pfVar12;
  ulong uVar13;
  byte bVar14;
  long *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_a4;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  uint local_78;
  uint local_74;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_054f0960);
        puVar16 = &DAT_054f0958;
        if (iVar9 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar16 = &DAT_054f0958;
      }
    }
    else {
      puVar16 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar16 = puVar16 + *(byte *)(param_1 + 0x1ee8);
      }
    }
    local_a0 = 7.28675e-44;
    if ((*(uint *)((long)puVar16 + 4) >> 0x14 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1903) = 0;
    }
  }
  uVar18 = *(uint *)(param_1 + 0x1c04);
  if ((*(char *)(param_1 + 0xcbd) != '\0') && (uVar18 == 0)) {
    plVar15 = *(long **)(param_1 + 0x60);
    if (plVar15 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        plVar15 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar15 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar15 + 0x498))(plVar15,0);
    plVar15 = *(long **)(param_1 + 0x60);
    if (plVar15 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        plVar15 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar15 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar15 + 0x4b8))(0x3f800000,plVar15);
    uVar18 = *(uint *)(param_1 + 0x1c04);
  }
  if ((*(int *)(param_1 + 0x1810) != 8) && (4 < uVar18)) {
    plVar15 = *(long **)(param_1 + 0x60);
    if (plVar15 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        plVar15 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar15 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar15 + 0x498))(plVar15,1);
    plVar15 = *(long **)(param_1 + 0x60);
    if (plVar15 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        plVar15 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar15 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar15 + 0x4c0))(0xbdcccccd,plVar15);
  }
  if ((*(uint *)(param_1 + 0x17d4) & 0xc0000) != 0) {
    pbVar1 = (byte *)(param_1 + 0x18f4);
    if ((*(byte *)(param_1 + 0x18fa) >> 5 & 1) == 0) {
      bVar14 = *pbVar1 & 0xfe;
    }
    else {
      bVar14 = *pbVar1 | 1;
    }
    local_8c = 0.0;
    local_a0 = 0.0;
    *pbVar1 = bVar14;
  }
  local_74 = (uint)*(byte *)(param_1 + 0x1902);
  if (9 < local_74) {
    local_74 = 0;
  }
  uVar18 = (uint)*(byte *)(param_1 + 0x1900);
  bVar14 = *(byte *)(param_1 + 0x1901);
  if (0x78 < uVar18) {
    uVar18 = 0;
  }
  if (7 < bVar14) {
    bVar14 = 0;
  }
  fVar23 = (float)((uint)*(ushort *)(param_1 + 0x1904) * 0x10000);
  if ((*(uint *)(param_1 + 0x17d4) & 1) != 0) {
    local_90 = 0;
    uStack_9c = 0x3e800000;
    local_98 = 0x40000000;
    local_94 = 0x41a00000;
    local_a0 = fVar23;
    uVar13 = FUN_023b7bb8(param_1,&local_a0);
    if ((uVar13 & 1) == 0) {
      return;
    }
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffffe;
    local_78 = uVar18;
    FUN_023c79d0(param_1,&local_78,&local_74);
    *(undefined1 *)(param_1 + 0xcbc) = 1;
    return;
  }
  sVar6 = *(short *)(param_1 + 0x1908);
  cVar4 = *(char *)(param_1 + 0x1903);
  uVar5 = *(ushort *)(param_1 + 0x1906);
  lVar10 = FUN_0251e98c(1);
  piVar11 = (int *)(**(code **)(*(long *)(lVar10 + 0x4b0) + 0xf0))(lVar10 + 0x4b0);
  iVar9 = *piVar11;
  if (local_74 == 6) {
    lVar10 = FUN_0251e98c(1);
    piVar11 = (int *)(**(code **)(*(long *)(lVar10 + 0x4b0) + 0xf0))(lVar10 + 0x4b0);
    if ((0 < *piVar11) && (iVar9 == *(int *)(param_1 + 0x1c04))) {
      local_a4 = uVar18;
      FUN_023c79d0(param_1,&local_a4,&local_74);
    }
  }
  fVar22 = (float)(int)sVar6 * 0.001;
  FUN_023c8568(param_1);
  if (*(int *)(param_1 + 0x1810) != 8) {
    iVar19 = *(int *)(param_1 + 0x18e5);
    iVar20 = *(int *)(param_1 + 0x18eb);
    lVar10 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
    local_88 = 0;
    puVar16 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar16 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_a0 = (float)puVar16[0x4f];
    local_98 = *(undefined4 *)(puVar16 + 0x50);
    uStack_9c = 0;
    local_8c = (float)iVar19 * 0.001;
    local_84 = (float)iVar20 * 0.001;
    FUN_03eb4b60(fVar22 * *pfVar12,0x41200000,0x3e4ccccc,&local_a0,&local_8c);
    *(float *)(puVar16 + 0x4f) = local_a0;
    *(undefined4 *)(puVar16 + 0x50) = local_98;
  }
  if (*(char *)(param_1 + 0xcbc) == '\0') {
    lVar10 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
    fVar24 = *pfVar12;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_8c = 1.4013e-44;
      local_a0 = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023cb410;
      bVar8 = true;
    }
    else {
LAB_023cb410:
      plVar15 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar15 = *(long **)(param_1 + 0x4c8);
      }
      lVar10 = (**(code **)(*plVar15 + 0x148))();
      iVar19 = (int)fVar23 - *(int *)(lVar10 + 4);
      if (iVar19 + 0x5b05afU < 0xb60b5f) {
        bVar8 = true;
        fVar22 = fVar23;
      }
      else {
        iVar7 = 0x15555560;
        iVar20 = -0x15555560;
        iVar19 = (int)(fVar22 * fVar24 * (float)iVar19);
        if (iVar19 < 1) {
          iVar7 = -0x5b05b0;
        }
        else {
          iVar20 = 0x5b05b0;
        }
        iVar3 = iVar19;
        if (iVar7 <= iVar19) {
          iVar3 = iVar7;
        }
        if (iVar20 <= iVar19) {
          iVar20 = iVar3;
        }
        fVar22 = (float)(iVar20 + *(int *)(lVar10 + 4));
        bVar8 = fVar22 == fVar23;
      }
      *(float *)(lVar10 + 4) = fVar22;
    }
    *(bool *)(param_1 + 0xcbc) = bVar8;
  }
  else if ((*(int *)(param_1 + 0x178) == 1) && ((*(byte *)(param_1 + 0x17d4) & 1) == 0)) {
    lVar10 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
    fVar23 = *pfVar12;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_8c = 1.4013e-44;
      local_a0 = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023cb4b0;
    }
    iVar19 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar15 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar15 = *(long **)(param_1 + 0x4c8);
    }
    lVar10 = (**(code **)(*plVar15 + 0x148))();
    iVar20 = iVar19 - *(int *)(lVar10 + 4);
    if (0xb60b5e < iVar20 + 0x5b05afU) {
      iVar7 = 0x15555560;
      iVar19 = -0x15555560;
      iVar20 = (int)(fVar23 * (float)iVar20);
      if (iVar20 < 1) {
        iVar7 = -0x5b05b0;
      }
      else {
        iVar19 = 0x5b05b0;
      }
      iVar3 = iVar20;
      if (iVar7 <= iVar20) {
        iVar3 = iVar7;
      }
      if (iVar19 <= iVar20) {
        iVar19 = iVar3;
      }
      iVar19 = iVar19 + *(int *)(lVar10 + 4);
    }
    *(int *)(lVar10 + 4) = iVar19;
  }
LAB_023cb4b0:
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar18 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar10 + 0x278) * 999.99994);
    iVar19 = (int)(*(float *)(lVar10 + 0x27c) * 4.0);
    if (0x7ffe < iVar19) {
      iVar19 = 0x7fff;
    }
    if (iVar19 < -0x7fff) {
      iVar19 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar19;
    fVar23 = *(float *)(lVar10 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar23 * 999.99994);
    uVar18 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar18;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar16 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar16 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar21 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar16 + 0x2ec) = uVar21;
    *(undefined1 *)((long)puVar16 + 0x2e5) = 1;
  }
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar19 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar19 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  if (puVar16[0x227] == 0) {
    local_a0 = 0.0;
LAB_023cb5f0:
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar19 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar19 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    if (puVar16[0x227] == 0) {
      local_8c = 0.0;
      local_a0 = 0.0;
    }
    else {
      local_a0 = (float)(*(uint *)(puVar16 + 0x2d3) >> 1 & 1);
      local_8c = local_a0;
      uVar13 = FUN_03850368(puVar16[0x227],local_a0);
      fVar23 = local_8c;
      if (((((uVar13 & 1) == 0) && (puVar16[0x227] != 0)) &&
          (uVar13 = FUN_03850368(puVar16[0x227],local_8c), (uVar13 & 1) == 0)) &&
         (uVar13 = FUN_0384fca4(puVar16[0x227],fVar23), (uVar13 & 1) == 0)) goto LAB_023cb5e0;
    }
    FUN_023164ec(param_1,6);
    bVar8 = true;
    iVar19 = *(int *)(param_1 + 0x178);
  }
  else {
    local_a0 = (float)(*(uint *)(puVar16 + 0x2d3) >> 1 & 1);
    uVar13 = FUN_03850368(puVar16[0x227],local_a0);
    if ((uVar13 & 1) == 0) goto LAB_023cb5f0;
LAB_023cb5e0:
    bVar8 = false;
    iVar19 = *(int *)(param_1 + 0x178);
  }
  if (((iVar19 == 0) && (uVar13 = FUN_0231fa2c(param_1), (uVar13 & 1) != 0)) &&
     (*(int *)(param_1 + 0x1f80) != 0)) {
    pcVar2 = (char *)(param_1 + 0x17ac);
    if (((local_74 == 6) || (local_74 == 1)) || (local_74 == 8)) {
      if (*(char *)(param_1 + 0xee8) == '\0') {
        uVar13 = FUN_02569820();
        if ((uVar13 & 1) == 0) {
          uVar18 = 1;
          fVar23 = 0.0;
          do {
            local_a0 = fVar23;
            if (((uint)local_a0 < 0x37) &&
               ((*(uint *)(param_1 + 0xed0 + (long)((int)local_a0 >> 5) * 4) >>
                 (ulong)((uint)local_a0 & 0x1f) & 1) != 0)) break;
            uVar18 = (uint)((uint)local_a0 < 0x36);
            fVar23 = (float)((int)local_a0 + 1U);
          } while ((float)((int)local_a0 + 1U) != 7.70714e-44);
        }
        else {
          uVar18 = 1;
        }
      }
      else {
        uVar18 = 0;
      }
      if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
        uVar17 = 0;
      }
      else {
        uVar17 = 1;
      }
      if ((*pcVar2 == '\0') && (local_a0 = 5.60519e-44, (*(uint *)(param_1 + 0xed4) >> 8 & 1) != 0))
      {
        uVar18 = uVar18 & (uint)(*(int *)(param_1 + 0x1810) == 8) & (uVar17 ^ 0xffffffff);
      }
      local_a0 = (float)FUN_00a74b78();
      if (local_a0 != 5.60519e-45) {
        if (*pcVar2 == '\0') {
          local_a0 = 5.60519e-44;
          if ((*(uint *)(param_1 + 0xed4) >> 8 & 1) == 0) {
            if (uVar17 != 0) goto LAB_023cbae8;
          }
          else {
            if (uVar17 != 0) {
              uVar18 = 0;
LAB_023cbae8:
              local_a0 = 0.0;
              uVar17 = *(uint *)(param_1 + 0xed0) & 1;
              if ((*(int *)(param_1 + 0x1810) == 8) && (uVar17 != 0)) {
                uVar13 = FUN_023ce290(param_1);
                if ((uVar13 & 1) != 0) {
                  if (*pcVar2 != '\0') goto LAB_023cb978;
LAB_023cbc74:
                  local_a0 = 6.5861e-44;
                  if (((((*(uint *)(param_1 + 0xed4) >> 0xf & 1) == 0) &&
                       (local_a0 = 5.74532e-44, (*(uint *)(param_1 + 0xed4) >> 9 & 1) == 0)) &&
                      (local_a0 = 5.46506e-44, (*(uint *)(param_1 + 0xed4) >> 7 & 1) == 0)) &&
                     ((local_a0 = 5.1848e-44, (*(uint *)(param_1 + 0xed4) >> 5 & 1) == 0 &&
                      (local_a0 = 5.32493e-44, (*(uint *)(param_1 + 0xed4) >> 6 & 1) == 0))))
                  goto LAB_023cb978;
                }
              }
              else if (uVar17 == 0) goto LAB_023cbc74;
              goto LAB_023cb7ec;
            }
            if (*(int *)(param_1 + 0x1810) != 8) goto LAB_023cb7ec;
          }
        }
        else {
          if (uVar17 == 0) goto LAB_023cbc28;
LAB_023cb978:
          uVar13 = FUN_0243b378(param_1);
          if ((uVar13 & 1) != 0) {
            if ((*pcVar2 == '\0') &&
               ((local_a0 = 6.72623e-44, (*(uint *)(param_1 + 0xed4) >> 0x10 & 1) != 0 ||
                (local_a0 = 6.86636e-44, (*(uint *)(param_1 + 0xed4) >> 0x11 & 1) != 0)))) {
              uVar18 = 0;
            }
            else {
              uVar13 = FUN_016f75d8(PTR_DAT_04bb3238);
              if (((uVar13 & 1) != 0) &&
                 (((PTR_DAT_04bbde78[0xb] != '\0' && (*pcVar2 == '\0')) &&
                  ((local_a0 = 5.04467e-44, (*(uint *)(param_1 + 0xed4) >> 4 & 1) != 0 ||
                   (local_a0 = 4.90454e-44, (*(uint *)(param_1 + 0xed4) >> 3 & 1) != 0)))))) {
                uVar18 = 0;
              }
            }
            lVar10 = FUN_0251d150(param_1 + 0x1ee8);
            local_a0 = 7.00649e-44;
            uVar18 = *(uint *)(lVar10 + 4) >> 0x12 | uVar18;
          }
        }
LAB_023cbc28:
        if (((uVar18 & 1) != 0) && (iVar9 + 10U <= *(uint *)(param_1 + 0x1f80))) {
          FUN_025699b8(param_1 + 0xec0);
          *(undefined8 *)(param_1 + 0x19f0) = 0;
          *(undefined2 *)(param_1 + 0x19fc) = 0x100;
          *(undefined4 *)(param_1 + 0x19f8) = 5;
          FUN_02373e70(param_1,6,1);
          return;
        }
      }
    }
    else if (local_74 == 3) {
      uVar13 = FUN_02569930(param_1 + 0xec0);
      if (((uVar13 & 1) != 0) &&
         ((*pcVar2 != '\0' || (local_a0 = 9.80909e-45, (*(uint *)(param_1 + 0xec8) >> 7 & 1) == 0)))
         ) {
        if (*(int *)(param_1 + 0x1810) == 8) {
          FUN_025699b8(param_1 + 0xec0);
          *(undefined8 *)(param_1 + 0x19f0) = 0;
          *(undefined2 *)(param_1 + 0x19fc) = 0x100;
          *(undefined4 *)(param_1 + 0x19f8) = 5;
        }
LAB_023cbb78:
        FUN_023755e8(param_1,bVar14,6);
        return;
      }
    }
    else if (((local_74 == 0 && bVar14 == 0) ||
             (((local_74 == 4 && (bVar14 == 0)) && (0xf < *(uint *)(param_1 + 0x1f84))))) &&
            (uVar13 = FUN_02569930(param_1 + 0xec0), (uVar13 & 1) != 0)) {
      bVar14 = 0;
      goto LAB_023cbb78;
    }
  }
LAB_023cb7ec:
  FUN_023b7320(param_1,1);
  if (cVar4 == '\0') goto LAB_023cb91c;
  if (!bVar8) {
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    if (puVar16[0x227] == 0) {
      local_a0 = 0.0;
LAB_023cb86c:
      puVar16 = *(undefined8 **)(param_1 + 0x60);
      if (puVar16 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(&DAT_052461c0);
          puVar16 = &DAT_05240280;
          if (iVar9 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar16 = &DAT_05240280;
        }
      }
      if (puVar16[0x227] == 0) {
        uVar18 = 0;
      }
      else {
        local_a0 = 1.4013e-45;
        uVar18 = *(uint *)(puVar16 + 0x2d3) >> 1 & 1;
      }
      uVar13 = FUN_0170a6d0(puVar16,uVar18);
      if ((uVar13 & 1) != 0) goto LAB_023cb8d8;
    }
    else {
      local_a0 = (float)(*(uint *)(puVar16 + 0x2d3) >> 1 & 1);
      uVar13 = FUN_03850368(puVar16[0x227],local_a0);
      if ((uVar13 & 1) == 0) goto LAB_023cb86c;
    }
    if ((((uVar5 == 0) || (*(uint *)(param_1 + 0x1f80) < (uint)uVar5)) &&
        ((*(long *)(param_1 + 0x4d0) == 0 || (*(char *)(*(long *)(param_1 + 0x4d0) + 0x15) == '\0'))
        )) && (*(uint *)(param_1 + 0x1f80) < 0xf0)) goto LAB_023cb91c;
  }
LAB_023cb8d8:
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_023752f4(param_1,bVar14,6);
  }
  else {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    if (bVar14 == 1) {
      FUN_0231b68c();
    }
    else {
      FUN_023164ec(param_1,6);
    }
  }
LAB_023cb91c:
  *(int *)(param_1 + 0x1f80) = *(int *)(param_1 + 0x1f80) + 1;
  return;
}

