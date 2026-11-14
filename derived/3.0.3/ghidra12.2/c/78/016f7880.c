
/* WARNING: Removing unreachable block (ram,0x016f792c) */
/* WARNING: Removing unreachable block (ram,0x016f7ab0) */

void FUN_016f7880(long *param_1,uint param_2,float *param_3)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  uint uVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_110;
  float local_108;
  undefined4 local_104;
  undefined1 local_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  char *local_88;
  
  puVar13 = (undefined8 *)param_1[0xc];
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_88 = "CommonWateringUpperLevel";
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  lVar9 = puVar13[0x227];
  if (lVar9 == 0) {
    local_e0 = (undefined *)((ulong)(uint)local_e0._4_4_ << 0x20);
    uVar15 = 0;
  }
  else {
    uVar15 = *(uint *)(puVar13 + 0x2d3) >> 1 & 1;
    local_e0 = (undefined *)
               (CONCAT44(local_e0._4_4_,*(uint *)(puVar13 + 0x2d3) >> 1) & 0xffffffff00000001);
    uVar4 = 0;
    if (*(long *)(lVar9 + 0x78) != 0) {
      uVar4 = *(uint *)(*(long *)(lVar9 + 0x78) + 0x18);
    }
    if (uVar4 <= uVar15) {
      uVar15 = 0;
    }
    if (*(uint *)(lVar9 + 0x80) <= uVar15) {
      uVar15 = 0;
    }
    lVar9 = *(long *)(lVar9 + 0x88) + (long)(int)uVar15 * 0xe8;
    plVar14 = (long *)(lVar9 + 0x60);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcVar16 = *(char **)(lVar9 + 0x68);
    (**(code **)(local_90 + 0x18))(&local_90);
    if (pcVar16 == local_88) {
LAB_016f7a1c:
      uVar15 = 1;
    }
    else {
      cVar2 = **(char **)(lVar9 + 0x68);
      if (cVar2 == *local_88) {
        if (cVar2 == '\0') goto LAB_016f7a1c;
        pcVar16 = *(char **)(lVar9 + 0x68) + 2;
        uVar6 = 0;
        do {
          uVar10 = uVar6;
          if (uVar10 == 0x80000) goto LAB_016f7a40;
          if (pcVar16[uVar10 - 1] != local_88[uVar10 + 1]) {
            pcVar16 = (char *)0x0;
            goto LAB_016f7a40;
          }
          if (pcVar16[uVar10 - 1] == '\0') goto LAB_016f7a14;
          if (pcVar16[uVar10] != local_88[uVar10 + 2]) {
            pcVar16 = (char *)0x0;
            uVar10 = uVar10 | 1;
            goto LAB_016f7a40;
          }
          uVar6 = uVar10 + 2;
        } while (pcVar16[uVar10] != '\0');
        uVar10 = uVar10 + 1;
LAB_016f7a14:
        pcVar16 = (char *)0x1;
LAB_016f7a40:
        uVar15 = (uint)(uVar10 < 0x80000) & (uint)pcVar16;
      }
      else {
        uVar15 = 0;
      }
    }
  }
  puVar13 = (undefined8 *)param_1[0xc];
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar13 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  if (puVar13[0x227] == 0) {
    local_110 = (ulong)local_110._4_4_ << 0x20;
    goto joined_r0x016f7aa8;
  }
  local_110 = CONCAT44(local_110._4_4_,*(uint *)(puVar13 + 0x2d3) >> 1) & 0xffffffff00000001;
  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,0x4d);
  uVar6 = FUN_03850890(puVar13[0x227],0x4d,&local_b0,*(uint *)(puVar13 + 0x2d3) >> 1 & 1);
  if ((uVar6 & 1) == 0) goto joined_r0x016f7aa8;
  uVar6 = (**(code **)(*param_1 + 0x168))(param_1);
  if ((uVar6 & 1) == 0) {
    local_e0 = PTR_DAT_04bb2010 + 0x10;
    local_d8 = CONCAT44((int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0),
                        (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0));
    FUN_022f3030(&local_e0);
    goto joined_r0x016f7aa8;
  }
  lVar9 = (**(code **)(*param_1 + 0x170))(param_1);
  if (lVar9 == 0) goto joined_r0x016f7aa8;
  plVar14 = (long *)param_1[0xc];
  if (plVar14 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      plVar14 = &DAT_05240280;
    }
    else {
      plVar14 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar14 + 0x370))(&local_110);
  puVar3 = PTR_DAT_04bb43c0;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_110);
  lVar17 = *(long *)puVar3;
  if (lVar17 == 0) {
LAB_016f8068:
    iVar5 = 0;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((*(uint *)(lVar18 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_016f8068;
    local_d0 = 0;
    local_e0 = PTR_DAT_04bc0510 + 0x10;
    local_d8 = local_110;
    uVar4 = FUN_0277d6c4(&local_d8);
    if (*(long *)puVar3 == 0) {
LAB_016f8088:
      uVar4 = 0x21;
    }
    else {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((*(uint *)(lVar17 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_016f8088;
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_110);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((*(uint *)(lVar17 + 0x1d8) <= uVar4) ||
         (puVar11 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar11 == (uint *)0x0)) goto LAB_016f8088;
      uVar1 = *puVar11;
      uVar4 = 0;
      if ((uVar1 != 0) && (puVar11 != (uint *)(ulong)uVar1)) {
        puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar1);
        uVar4 = 0;
        if (*puVar12 != 0) {
          uVar4 = puVar12[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar17 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar17 = 0x1c;
            }
            lVar17 = (long)puVar12 + lVar17 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar17 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar11 - lVar17) / (ulong)uVar4);
              }
              if (*puVar12 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0148) &&
                 (uVar4 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar1 * 2),
                 uVar4 < 0xa2)) goto LAB_016f808c;
            }
          }
          uVar4 = 0;
        }
      }
    }
LAB_016f808c:
    local_f0 = CONCAT44(local_f0._4_4_,uVar4);
    iVar5 = (uint)(uVar4 == 0x37) << 1;
    if (uVar4 == 0x36) {
      iVar5 = 1;
    }
  }
  FUN_022bd880(lVar9,param_3,param_2 & 1,&local_110,iVar5);
joined_r0x016f7aa8:
  if (uVar15 != 0) {
    puVar13 = (undefined8 *)param_1[0xc];
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    lVar9 = FUN_0170b82c(puVar13,(int)param_1[0x46],0);
    if (lVar9 == 0) {
      local_d0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      local_c8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_c0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      local_b8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      local_e0 = *(undefined **)PTR_DAT_04bb2f80;
      local_d8 = *(ulong *)(PTR_DAT_04bb2f80 + 8);
    }
    else {
      FUN_006fc650(&local_e0);
    }
    lVar9 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x1110) + 0xf0))(lVar9 + 0x1110);
    fVar29 = *pfVar7;
    pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x1140) + 0xf0))(lVar9 + 0x1140);
    fVar30 = *pfVar7;
    pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x1170) + 0xf0))(lVar9 + 0x1170);
    puVar13 = (undefined8 *)param_1[0xc];
    fVar22 = *pfVar7;
    local_e8 = 0.0;
    local_f0 = 0;
    fVar25 = local_d8._4_4_ +
             fVar30 * local_e0._4_4_ + fVar29 * (float)local_e0 + fVar22 * (float)local_d8;
    fVar27 = local_c8._4_4_ +
             fVar30 * local_d0._4_4_ + fVar29 * (float)local_d0 + fVar22 * (float)local_c8;
    fVar22 = local_b8._4_4_ +
             fVar30 * local_c0._4_4_ + fVar29 * (float)local_c0 + fVar22 * (float)local_b8;
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    FUN_016ff8c0(puVar13,6,&local_f0);
    fVar27 = fVar27 - local_f0._4_4_;
    fVar25 = fVar25 - (float)local_f0;
    fVar22 = fVar22 - local_e8;
    lVar9 = FUN_0251e98c(1);
    pfVar8 = (float *)(**(code **)(*(long *)(lVar9 + 0x11d0) + 0xf0))(lVar9 + 0x11d0);
    fVar26 = 0.0;
    pfVar7 = (float *)(PTR_DAT_04bb2d00 +
                      ((ulong)(long)(*pfVar8 * 11930465.0) >> 0x19 & 0x7f) * 0x10);
    fVar29 = (float)((uint)(long)(*pfVar8 * 11930465.0) >> 1 & 0xffffff) * 5.9604645e-08;
    fVar30 = *pfVar7 + fVar29 * pfVar7[1];
    fVar29 = pfVar7[2] + fVar29 * pfVar7[3];
    fVar20 = fVar30 * 0.0;
    fVar29 = fVar29 + fVar29;
    fVar23 = fVar30 * (fVar30 + fVar30);
    fVar24 = fVar20 * (fVar20 + fVar20);
    fVar21 = fVar29 * fVar20;
    fVar29 = fVar30 * fVar29;
    fVar28 = fVar27 * (fVar30 * (fVar20 + fVar20) - fVar21) + fVar25 * ((1.0 - fVar23) - fVar24) +
             fVar22 * (fVar29 + fVar24);
    fVar25 = fVar27 * (fVar21 + (fVar30 + fVar30) * fVar20) + fVar25 * (fVar24 - fVar29) +
             fVar22 * ((1.0 - fVar24) - fVar23);
    fVar22 = SQRT(fVar28 * fVar28 + 0.0 + fVar25 * fVar25);
    if (0.0 < fVar22) {
      fVar22 = 1.0 / fVar22;
      fVar28 = fVar28 * fVar22;
      fVar26 = fVar22 * 0.0;
      fVar25 = fVar25 * fVar22;
    }
    lVar9 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x11a0) + 0xf0))(lVar9 + 0x11a0);
    fVar22 = *pfVar7;
    local_f4 = fVar25 * fVar22 + local_e8;
    local_fc = fVar28 * fVar22 + (float)local_f0;
    fStack_f8 = fVar26 * fVar22 + local_f0._4_4_;
    fStack_f8 = (float)FUN_016e026c(0,&local_fc,0,0);
    lVar9 = param_1[0xd];
    local_110 = CONCAT44(fStack_f8,local_fc);
    local_108 = local_f4;
    uVar19 = FUN_016e026c(0,&local_110,0,0);
    local_110 = CONCAT44(uVar19,(undefined4)local_110);
    fStack_f8 = (float)FUN_016e026c(0,lVar9 + 0x278,0,0);
    local_100 = 0;
    local_104 = 0x1000001;
    local_110 = CONCAT44(fStack_f8,local_fc);
    local_108 = local_f4;
    FUN_016dec40(param_1,&local_110,1,0,0,1,0);
  }
  return;
}

