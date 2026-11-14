
/* WARNING: Removing unreachable block (ram,0x016e185c) */
/* WARNING: Removing unreachable block (ram,0x016e18b0) */

void FUN_016e1780(long *param_1,char *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  byte bVar15;
  ushort uVar16;
  long lVar17;
  byte *pbVar18;
  ushort uVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 local_fc;
  undefined *local_f8;
  int local_f0;
  int iStack_ec;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  byte local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  int local_b0;
  int iStack_ac;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  int iStack_84;
  undefined *local_80;
  uint local_78;
  int iStack_74;
  
  pbVar18 = PTR_DAT_04bb32e0;
  if ((*(uint *)(param_1 + 0x49) >> 8 & 1) != 0) {
    return;
  }
  bVar15 = *PTR_DAT_04bb32e0;
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  local_c0 = (undefined *)CONCAT71(local_c0._1_7_,bVar15);
  (**(code **)(*param_1 + 0x1a0))(param_1,&local_c0);
  iVar8 = 0;
  if (*(long *)PTR_DAT_04bbbc38 != 0) {
    iVar8 = *(int *)(*(long *)PTR_DAT_04bbbc38 + 0xc);
  }
  puVar20 = (undefined8 *)param_1[0xc];
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      local_98._0_4_ = iVar8;
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar20 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  local_98._0_4_ = 2;
  uVar9 = *(uint *)((long)puVar20 + 0x15f4);
  puVar20 = (undefined8 *)param_1[0xc];
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar20 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  local_98._0_4_ = 1;
  if (7 < (byte)local_c0) {
    uVar16 = 0;
    goto LAB_016e19a4;
  }
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  if (lVar17 == 0) {
LAB_016e190c:
    if (*pbVar18 < 8) goto LAB_016e1978;
LAB_016e1918:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_016e1970:
      pbVar18 = PTR_DAT_04bb5038;
      goto LAB_016e1978;
    }
    lVar17 = **(long **)PTR_DAT_04bb27d0;
    bVar15 = *(byte *)(lVar17 + 0x473);
    pbVar18 = PTR_DAT_04bb5038;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar1 = (uint *)(lVar17 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar18 = (byte *)(lVar17 + 0x471);
      }
    }
    bVar15 = *pbVar18;
    if (7 < bVar15) goto LAB_016e1970;
  }
  else {
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar18 = (byte *)(lVar17 + 0x158);
    }
    if (7 < *pbVar18) {
      if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_016e190c;
      }
      goto LAB_016e1918;
    }
LAB_016e1978:
    bVar15 = *pbVar18;
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
  }
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  uVar16 = (ushort)((byte)local_c0 == bVar15);
LAB_016e19a4:
  uVar19 = 0;
  if (*(long *)PTR_DAT_04bb3968 != 0) {
    lVar17 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0);
    uVar19 = 0;
    if (lVar17 != 0) {
      uVar19 = *(ushort *)(lVar17 + 0x1528) & 1;
    }
  }
  if (iVar8 == 0 || (uVar9 >> 2 & 1) == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = uVar16 & uVar19;
  }
  if ((*(uint *)((long)puVar20 + 0x15f4) >> 1 & 1) == 0) {
    uVar9 = 0;
    plVar21 = (long *)param_1[0xc];
  }
  else {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_054f0960);
        puVar20 = &DAT_054f0958;
        if (iVar8 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar20 = &DAT_054f0958;
      }
    }
    else {
      puVar20 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((byte)local_c0 < 8) {
        puVar20 = puVar20 + ((ulong)local_c0 & 0xff);
      }
    }
    local_98._0_4_ = 0x2f;
    uVar9 = *(uint *)((long)puVar20 + 4) >> 0xf & 1;
    plVar21 = (long *)param_1[0xc];
  }
  if (plVar21 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      plVar21 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar21 = &DAT_05240280;
    }
  }
  uVar7 = (**(code **)(*plVar21 + 0x100))(plVar21);
  if ((uVar9 != 0 || uVar16 != 0) || (uVar7 & 1) != 0) {
    lVar22 = param_1[0xd];
    lVar17 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar17 + 0x2a0) + 0xf0))(lVar17 + 0x2a0);
    fVar23 = *pfVar11;
    uVar12 = (**(code **)(*param_1 + 400))(param_1);
    fVar28 = *(float *)(param_1[0xd] + 0x2dc);
    lVar17 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar17 + 0x7e0) + 0xf0))(lVar17 + 0x7e0);
    fVar24 = *pfVar11;
    fVar29 = -fVar24;
    if (0.0 <= fVar24) {
      fVar29 = fVar24;
    }
    uVar13 = (**(code **)(*param_1 + 0x198))(param_1);
    puVar5 = PTR_DAT_04bbc1a0;
    puVar2 = PTR_DAT_04bb2010;
    fVar24 = fVar23 * 0.85 * 0.45;
    if ((uVar13 & 1) == 0) {
      fVar24 = fVar23 * 0.85;
    }
    fVar23 = fVar24 * 0.97;
    puStack_b8 = PTR_DAT_04bb2010 + 0x10;
    fVar26 = *(float *)(lVar22 + 0x278) - fVar23;
    fVar25 = fVar23 + *(float *)(lVar22 + 0x278);
    fVar27 = *(float *)(lVar22 + 0x280) - fVar23;
    fVar23 = fVar23 + *(float *)(lVar22 + 0x280);
    local_a0 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
    iStack_9c = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
    iVar8 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
    local_c0 = PTR_DAT_04bbc1a0 + 0x10;
    iVar10 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    local_b0 = local_a0;
    if (iVar8 <= local_a0) {
      local_b0 = iVar8;
    }
    if (local_a0 <= iVar8) {
      local_a0 = iVar8;
    }
    iStack_ac = iStack_9c;
    if (iVar10 <= iStack_9c) {
      iStack_ac = iVar10;
    }
    if (iStack_9c <= iVar10) {
      iStack_9c = iVar10;
    }
    local_a8 = puStack_b8;
    fVar25 = (float)FUN_016e026c(0,lVar22 + 0x278,0,0);
    fVar23 = fVar25;
    if (fVar25 <= *(float *)(lVar22 + 0x27c)) {
      fVar23 = *(float *)(lVar22 + 0x27c);
    }
    fVar25 = fVar25 - fVar23;
    fVar23 = -fVar25;
    if (0.0 <= fVar25) {
      fVar23 = fVar25;
    }
    if ((fVar29 * 0.01 <= fVar28) && (fVar23 < 0.5)) {
      FUN_016e026c(0,lVar22 + 0x278,0,0);
      FUN_01261c40(PTR_DAT_04bbcd28,&local_c0,0,1);
    }
    FUN_01261c40(*(undefined4 *)(param_1[0xd] + 0x27c),PTR_DAT_04bbcec0,&local_c0,0,0);
    puVar4 = PTR_DAT_04bbcc38;
    fVar29 = fVar24 * 0.7;
    local_98 = (undefined *)
               CONCAT44(*(undefined4 *)(lVar22 + 0x27c),*(float *)(lVar22 + 0x278) - fVar24);
    local_90._0_4_ = *(float *)(lVar22 + 0x280);
    FUN_01261e40(0,PTR_DAT_04bbcc38,&local_98,0,0);
    local_98 = (undefined *)
               CONCAT44(*(undefined4 *)(lVar22 + 0x27c),fVar24 + *(float *)(lVar22 + 0x278));
    local_90._0_4_ = *(float *)(lVar22 + 0x280);
    FUN_01261e40(0,puVar4,&local_98,0,0);
    local_98 = *(undefined **)(lVar22 + 0x278);
    local_90._0_4_ = *(float *)(lVar22 + 0x280) - fVar24;
    FUN_01261e40(0,puVar4,&local_98,0,0);
    local_98 = *(undefined **)(lVar22 + 0x278);
    local_90._0_4_ = fVar24 + *(float *)(lVar22 + 0x280);
    FUN_01261e40(0,puVar4,&local_98,0,0);
    local_98 = (undefined *)
               CONCAT44(*(undefined4 *)(lVar22 + 0x27c),*(float *)(lVar22 + 0x278) - fVar29);
    local_90._0_4_ = *(float *)(lVar22 + 0x280) - fVar29;
    FUN_01261e40(0,puVar4,&local_98,0,0);
    local_98 = (undefined *)
               CONCAT44(*(undefined4 *)(lVar22 + 0x27c),*(float *)(lVar22 + 0x278) - fVar29);
    local_90._0_4_ = fVar29 + *(float *)(lVar22 + 0x280);
    FUN_01261e40(0,puVar4,&local_98,0,0);
    local_98 = (undefined *)
               CONCAT44(*(undefined4 *)(lVar22 + 0x27c),fVar29 + *(float *)(lVar22 + 0x278));
    local_90._0_4_ = *(float *)(lVar22 + 0x280) - fVar29;
    FUN_01261e40(0,puVar4,&local_98,0,0);
    local_98 = (undefined *)
               CONCAT44(*(undefined4 *)(lVar22 + 0x27c),fVar29 + *(float *)(lVar22 + 0x278));
    local_90 = (undefined *)CONCAT44(local_90._4_4_,fVar29 + *(float *)(lVar22 + 0x280));
    FUN_01261e40(0,puVar4,&local_98,0,0);
    if (fVar23 < 0.5) {
      FUN_01261c40(*(undefined4 *)(param_1[0xd] + 0x27c),PTR_DAT_04bbcd30,&local_c0,0,1);
    }
    if ((uVar12 & 1) != 0) {
      plVar21 = (long *)param_1[0xc];
      if (plVar21 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          plVar21 = &DAT_05240280;
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar21 = &DAT_05240280;
        }
      }
      uVar12 = (**(code **)(*plVar21 + 0x100))(plVar21);
      puVar4 = PTR_DAT_04bb2720;
      if (((uVar12 & 1) != 0) && (param_2[1] == '\0')) {
        local_d0 = 0;
        fVar23 = *(float *)(param_1[0xd] + 0x278);
        fVar29 = *(float *)(param_1[0xd] + 0x280);
        lVar17 = *(long *)PTR_DAT_04bb2720;
        if (lVar17 == 0) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = &DAT_055c04a0;
          if (*(long *)(lVar17 + 0x330) != 0) {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
            iVar8 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar8 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
        }
        local_cc = *(undefined4 *)(puVar20 + 7);
        local_c8 = FUN_017baf44();
        local_f8 = puVar2 + 0x10;
        uStack_e0 = 0;
        local_c8 = local_c8 & 1;
        local_d8 = PTR_DAT_04bb3140 + 0x10;
        local_f0 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
        iStack_ec = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
        lVar17 = *(long *)puVar4;
        local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
        local_98 = PTR_DAT_04bbfe68 + 0x10;
        local_e8 = local_f8;
        if (lVar17 == 0) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = &DAT_055c04a0;
          if (*(long *)(lVar17 + 0x330) != 0) {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
            iVar8 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar8 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
        }
        local_90 = (undefined *)CONCAT44(*(undefined4 *)(puVar20 + 7),(float)local_90);
        uVar6 = FUN_017baf44();
        local_88 = CONCAT31(local_88._1_3_,uVar6) & 0xffffff01;
        FUN_01a5190c(&local_98,0,&local_f8,&local_e8);
        puVar4 = PTR_DAT_04bb43c0;
        lVar17 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4();
        if (*(long *)puVar4 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            piVar14 = (int *)FUN_014fbd50(&local_d8,0,&local_e8);
            local_f8 = (undefined *)CONCAT44(local_f8._4_4_,*piVar14);
            if (*piVar14 != 0) {
              local_fc = (undefined4)param_1[0x46];
              FUN_016e24d8(&local_98,&local_f8,&local_fc);
              if ((((local_98 != (undefined *)0x0) && ((char)local_90 != '\0')) &&
                  (local_90._1_1_ != '\0')) &&
                 ((local_90._2_1_ != '\0' && (lVar17 = FUN_016e2580(), lVar17 != 0)))) {
                FUN_0143829c();
              }
            }
          }
        }
      }
      cVar3 = *param_2;
      lVar17 = FUN_0251e98c(1);
      pfVar11 = (float *)(**(code **)(*(long *)(lVar17 + 0x2a0) + 0xf0))(lVar17 + 0x2a0);
      fVar23 = *pfVar11 * 0.95 * 0.6;
      uVar12 = (**(code **)(*param_1 + 0x198))(param_1);
      local_90 = puVar2 + 0x10;
      fVar29 = fVar23 * 0.5;
      if ((uVar12 & 1) == 0) {
        fVar29 = fVar23;
      }
      fVar29 = fVar29 * 0.97;
      fVar24 = *(float *)(lVar22 + 0x278) - fVar29;
      fVar23 = fVar29 + *(float *)(lVar22 + 0x278);
      fVar28 = *(float *)(lVar22 + 0x280) - fVar29;
      fVar29 = fVar29 + *(float *)(lVar22 + 0x280);
      local_78 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
      iStack_74 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
      uVar9 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
      iVar8 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
      local_98 = puVar5 + 0x10;
      local_88 = local_78;
      if ((int)uVar9 <= (int)local_78) {
        local_88 = uVar9;
      }
      if ((int)local_78 <= (int)uVar9) {
        local_78 = uVar9;
      }
      iStack_84 = iStack_74;
      if (iVar8 <= iStack_74) {
        iStack_84 = iVar8;
      }
      if (iStack_74 <= iVar8) {
        iStack_74 = iVar8;
      }
      puVar2 = PTR_DAT_04bbcc10;
      if (cVar3 != '\0') {
        puVar2 = PTR_DAT_04bbe208;
      }
      local_80 = local_90;
      FUN_01261c40(0,puVar2,&local_98,0,0);
    }
    uVar12 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((uVar12 & 1) != 0) {
      FUN_01261c40(0,PTR_DAT_04bbe200,&local_c0,0,0);
    }
  }
  return;
}

