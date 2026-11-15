
void FUN_024dbdc8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined8 *puVar5;
  ulong uVar6;
  float *pfVar7;
  short sVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_98;
  undefined4 local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float local_84;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    iVar4 = *(int *)(param_1 + 0x191a);
    iVar16 = *(int *)(param_1 + 0x1914);
    sVar8 = *(short *)(param_1 + 0x1918);
    pfVar7 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(ushort *)(param_1 + 0x191e) >> 4) & 0xff0));
    fVar17 = (float)((*(ushort *)(param_1 + 0x191e) & 0xff) << 0x10) * 5.9604645e-08;
    fVar19 = *pfVar7 + fVar17 * pfVar7[1];
    fVar21 = pfVar7[2] + fVar17 * pfVar7[3];
    lVar9 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x10b0) + 0xf0))(lVar9 + 0x10b0);
    fVar15 = *pfVar7;
    pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x10e0) + 0xf0))(lVar9 + 0x10e0);
    fVar17 = *pfVar7;
    local_c0 = (undefined *)
               CONCAT44((float)(int)sVar8 * 0.25 + fVar15 * 0.0 + 0.0 + fVar17 * -0.0,
                        (float)iVar16 * 0.001 +
                        (fVar19 * 0.0 - fVar21 * 0.0) * 0.0 + fVar15 * (fVar21 + fVar19 * 0.0 * 0.0)
                        + fVar17 * fVar19);
    local_b8 = (char *)CONCAT44(local_b8._4_4_,
                                (float)iVar4 * 0.001 +
                                (fVar19 * 0.0 + fVar21 * 0.0) * 0.0 +
                                fVar15 * (fVar21 * 0.0 * 0.0 - fVar19) + fVar17 * fVar21);
    fVar17 = (float)FUN_016e026c(0,&local_c0,0,0);
    iVar4 = (int)(fVar17 * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    iVar16 = (int)((float)local_c0 * 999.99994);
    iVar10 = (int)((float)local_b8 * 999.99994);
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    sVar8 = (short)iVar4;
    *(short *)(param_1 + 0x190e) = sVar8;
    *(int *)(param_1 + 0x190a) = iVar16;
    *(int *)(param_1 + 0x1910) = iVar10;
  }
  else {
    iVar16 = *(int *)(param_1 + 0x190a);
    sVar8 = *(short *)(param_1 + 0x190e);
    iVar10 = *(int *)(param_1 + 0x1910);
  }
  lVar9 = *(long *)(param_1 + 0x68);
  local_b8 = (char *)CONCAT44(local_b8._4_4_,(float)iVar10 * 0.001);
  local_c0 = (undefined *)CONCAT44((float)(int)sVar8 * 0.25,(float)iVar16 * 0.001);
  uVar14 = FUN_016e026c(0,&local_c0,0,0);
  local_c0 = (undefined *)CONCAT44(uVar14,(float)local_c0);
  uVar14 = FUN_016e026c(0,lVar9 + 0x278,0,0);
  local_b0 = local_b0 & 0xffffffffffffff00;
  local_c0 = (undefined *)CONCAT44(uVar14,(float)iVar16 * 0.001);
  local_b8._0_5_ = CONCAT14(1,(float)iVar10 * 0.001);
  local_b8._0_7_ = (uint7)(uint5)local_b8;
  local_b8 = (char *)CONCAT17(1,(uint7)local_b8);
  FUN_016dec40(param_1,&local_c0,1,0,0,1,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    fStack_88 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
    local_8c = (float)*(int *)(param_1 + 0x1900) * 0.001;
    local_84 = (float)*(int *)(param_1 + 0x1906) * 0.001;
    puVar5 = (undefined8 *)FUN_016e1014(&local_8c,&local_98,0);
    *(undefined8 *)(param_1 + 0x1920) = *puVar5;
    local_a8 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
    local_a0 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
    lVar9 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar9 != 0) && (*(long *)(lVar9 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar9 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar9 + 0x488) != 0 && (*(long *)(*(long *)(lVar9 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar9 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar9 + 0x2b0) + 8) != 0)))) {
      uVar3 = FUN_0277d6c4();
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        FUN_0124c030(&local_c0,puVar5);
        iVar4 = FUN_0123db50(&local_b8,local_b0);
        if ((iVar4 - 0x12U < 6) || (iVar4 = FUN_0123db50(&local_b8,local_b0), iVar4 - 0x23U < 9)) {
          uVar6 = FUN_023266fc(param_1,0);
          if ((uVar6 & 1) != 0) {
            *(undefined1 *)(param_1 + 0x1928) = 1;
          }
          fVar17 = 0.0;
          local_cc = local_98 + 2.5;
          local_c4 = fStack_90 + 2.5;
          local_c8 = (float)local_94;
          local_c8 = (float)FUN_016e026c(0,&local_cc,0,0);
          iVar4 = (int)(local_c8 * 4.0);
          *(int *)(param_1 + 0x1900) = (int)(local_cc * 999.99994);
          if (0x7ffe < iVar4) {
            iVar4 = 0x7fff;
          }
          if (iVar4 < -0x7fff) {
            iVar4 = -0x8000;
          }
          *(short *)(param_1 + 0x1904) = (short)iVar4;
          *(int *)(param_1 + 0x1906) = (int)(local_c4 * 999.99994);
          fVar19 = *(float *)(*(long *)(param_1 + 0x68) + 0x278) - local_cc;
          fVar21 = *(float *)(*(long *)(param_1 + 0x68) + 0x280) - local_c4;
          fVar15 = SQRT(fVar19 * fVar19 + 0.0 + fVar21 * fVar21);
          if (0.0 < fVar15) {
            fVar15 = 1.0 / fVar15;
            fVar19 = fVar19 * fVar15;
            fVar17 = fVar15 * 0.0;
            fVar21 = fVar21 * fVar15;
          }
          lVar9 = FUN_0251e98c(1);
          pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x10e0) + 0xf0))(lVar9 + 0x10e0);
          fVar15 = *pfVar7;
          local_a0 = fVar21 * fVar15 + local_c4;
          local_a8 = CONCAT44(fVar17 * fVar15 + local_c8,local_cc + fVar19 * fVar15);
          uVar14 = FUN_016e026c(0,&local_a8,0,0);
          lVar9 = *(long *)(param_1 + 0x68);
          local_a8 = CONCAT44(uVar14,(float)local_a8);
          *(int *)(param_1 + 0x1914) = (int)(*(float *)(lVar9 + 0x278) * 999.99994);
          iVar4 = (int)(*(float *)(lVar9 + 0x27c) * 4.0);
          if (0x7ffe < iVar4) {
            iVar4 = 0x7fff;
          }
          if (iVar4 < -0x7fff) {
            iVar4 = -0x8000;
          }
          *(short *)(param_1 + 0x1918) = (short)iVar4;
          *(int *)(param_1 + 0x191a) = (int)(*(float *)(lVar9 + 0x280) * 999.99994);
          FUN_006f0400(local_cc - (float)local_a8,local_c4 - local_a0);
          *(undefined2 *)(param_1 + 0x191e) = extraout_var;
        }
      }
    }
    fVar19 = local_a0;
    pfVar7 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(ushort *)(param_1 + 0x191e) >> 4) & 0xff0));
    fVar17 = (float)((*(ushort *)(param_1 + 0x191e) & 0xff) << 0x10) * 5.9604645e-08;
    fVar18 = *pfVar7 + fVar17 * pfVar7[1];
    fVar20 = pfVar7[2] + fVar17 * pfVar7[3];
    fVar17 = (float)local_a8;
    fVar15 = local_a8._4_4_;
    lVar9 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x10b0) + 0xf0))(lVar9 + 0x10b0);
    fVar22 = *pfVar7;
    pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x10e0) + 0xf0))(lVar9 + 0x10e0);
    fVar21 = *pfVar7;
    local_c0 = (undefined *)
               CONCAT44(fVar15 + fVar22 * 0.0 + 0.0 + fVar21 * -0.0,
                        fVar17 + (fVar18 * 0.0 - fVar20 * 0.0) * 0.0 +
                                 fVar22 * (fVar20 + fVar18 * 0.0 * 0.0) + fVar21 * fVar18);
    local_b8._0_4_ =
         fVar19 + (fVar18 * 0.0 + fVar20 * 0.0) * 0.0 + fVar22 * (fVar20 * 0.0 * 0.0 - fVar18) +
                  fVar21 * fVar20;
    uVar14 = FUN_016e026c(0,&local_c0,0,0);
    fVar15 = (float)local_b8;
    fVar17 = (float)local_c0;
    local_c0 = (undefined *)CONCAT44(uVar14,(float)local_c0);
    lVar9 = *(long *)(param_1 + 0x68);
    uVar14 = FUN_016e026c(0,&local_c0,0,0);
    local_c0 = (undefined *)CONCAT44(uVar14,(float)local_c0);
    fVar19 = (float)FUN_016e026c(0,lVar9 + 0x278,0,0);
    iVar4 = (int)(fVar19 * 4.0);
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_c0 = (undefined *)CONCAT44(fVar19,fVar17);
    local_b8._0_5_ = CONCAT14(1,fVar15);
    local_b8._0_7_ = (uint7)(uint5)local_b8;
    local_b8 = (char *)CONCAT17(1,(uint7)local_b8);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x190e) = (short)iVar4;
    *(int *)(param_1 + 0x190a) = (int)(fVar17 * 999.99994);
    *(int *)(param_1 + 0x1910) = (int)(fVar15 * 999.99994);
    FUN_016dec40(param_1,&local_c0,1,0,0,1,0);
  }
  FUN_0252d8f0(&local_8c,param_1 + 0x1ee8);
  puVar2 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_8c);
  lVar9 = *(long *)puVar2;
  if (lVar9 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_b0 = 0;
      local_c0 = PTR_DAT_04bc0510 + 0x10;
      local_b8 = (char *)CONCAT44(fStack_88,local_8c);
      uVar3 = FUN_0277d6c4(&local_b8);
      if (*(long *)puVar2 == 0) {
LAB_024dc634:
        local_98 = 4.62428e-44;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_024dc634;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(&local_8c);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
           (puVar11 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar11 == (uint *)0x0)) goto LAB_024dc634;
        uVar3 = *puVar11;
        local_98 = 0.0;
        if ((uVar3 != 0) && (puVar11 != (uint *)(ulong)uVar3)) {
          puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar3);
          local_98 = 0.0;
          if (*puVar12 != 0) {
            uVar3 = puVar12[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar12 + lVar9 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar3);
                }
                if (*puVar12 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc0148) &&
                   (local_98 = (float)(uint)*(ushort *)
                                             (*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar1 * 2
                                             ), (uint)local_98 < 0xa2)) goto LAB_024dc638;
              }
            }
            local_98 = 0.0;
          }
        }
      }
LAB_024dc638:
      if (local_98 != 7.42688e-44) {
        puVar5 = *(undefined8 **)(param_1 + 0x60);
        if (puVar5 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_052461c0);
            puVar5 = &DAT_05240280;
            if (iVar4 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar5 = &DAT_05240280;
          }
        }
        local_b8 = "CommonWateringUpperLevel";
        goto LAB_024dc674;
      }
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  local_b8 = "CommonWatering";
LAB_024dc674:
  local_c0 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar5,&local_c0,6,1,0);
  return;
}

