
bool FUN_02416248(long param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined2 local_70;
  undefined4 local_6c;
  int local_68;
  float local_64;
  undefined1 local_60;
  float local_5c;
  undefined4 local_58;
  undefined1 local_54;
  
  fVar25 = *param_2 - *(float *)(*(long *)(param_1 + 0x68) + 0x278);
  fVar26 = param_2[2] - *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  uVar5 = FUN_006f0400(fVar25,fVar26);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffff9;
  uVar7 = FUN_0231fa2c(param_1);
  if ((uVar7 & 1) == 0) {
    return false;
  }
  fVar25 = SQRT(fVar26 * fVar26 + fVar25 * fVar25);
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x1ff0) + 0xf0))(lVar8 + 0x1ff0);
  if (*pfVar9 * 10.0 < fVar25) {
    fVar25 = *param_2;
    uVar22 = FUN_0231eef4(param_1,param_2,0);
    local_90 = (undefined *)CONCAT44(uVar22,fVar25);
    local_88 = (char *)CONCAT44(local_88._4_4_,param_2[2]);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_90,1);
    *(undefined8 *)(param_1 + 0x1820) = 0;
    *(undefined8 *)(param_1 + 0x1844) = 0;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
    puVar11 = *(undefined4 **)(param_2 + 4);
    if (puVar11 == (undefined4 *)0x0) {
      return true;
    }
    lVar8 = (**(code **)(**(long **)(param_1 + 0x68) + 0x148))();
    *(undefined4 *)(lVar8 + 4) = *puVar11;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffdfffff;
    puVar21 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar21 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar22 = *(undefined4 *)((long)puVar21 + 0x2b4);
    *(undefined4 *)(param_1 + 0x1858) = 0;
    *(undefined4 *)(param_1 + 0x1854) = uVar22;
    return true;
  }
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x2020) + 0xf0))(lVar8 + 0x2020);
  if (((uint)param_2[9] >> 2 & 1) == 0) {
    fVar26 = *pfVar9;
    if (((uint)param_2[9] >> 1 & 1) == 0) {
      if (fVar25 < fVar26 * 10.0) {
        uVar5 = *(uint *)(param_1 + 0x17cc);
        *(uint *)(param_1 + 0x17cc) = uVar5 & 0xffdfffff;
        puVar21 = &DAT_054e9a58;
        if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
          puVar21 = *(undefined8 **)(param_1 + 0x4c8);
        }
        uVar22 = *(undefined4 *)((long)puVar21 + 0x2b4);
        *(undefined4 *)(param_1 + 0x1858) = 0;
        *(uint *)(param_1 + 0x17cc) = uVar5 & 0xffd7ffff;
        *(undefined8 *)(param_1 + 0x1820) = 0;
        *(undefined4 *)(param_1 + 0x1854) = uVar22;
        *(undefined8 *)(param_1 + 0x1844) = 0;
        FUN_0231ade8(param_1,6);
        piVar20 = *(int **)(param_2 + 4);
        if (piVar20 == (int *)0x0) {
          return true;
        }
        if (*(int *)(param_1 + 0x178) == 0) {
          local_68 = 10;
          local_90 = (undefined *)CONCAT44(local_90._4_4_,10);
          if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
            return true;
          }
        }
        plVar13 = &DAT_054e9a58;
        if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
          plVar13 = *(long **)(param_1 + 0x4c8);
        }
        lVar8 = (**(code **)(*plVar13 + 0x148))();
        iVar6 = *piVar20;
        iVar19 = iVar6 - *(int *)(lVar8 + 4);
        if (iVar19 + 0x5b05afU < 0xb60b5f) {
          *(int *)(lVar8 + 4) = iVar6;
          return true;
        }
        iVar17 = 0x15555560;
        iVar16 = -0x15555560;
        iVar19 = (int)((float)iVar19 * 0.16666667);
        if (iVar19 < 1) {
          iVar17 = -0x5b05b0;
        }
        else {
          iVar16 = 0x5b05b0;
        }
        iVar1 = iVar19;
        if (iVar17 <= iVar19) {
          iVar1 = iVar17;
        }
        if (iVar16 <= iVar19) {
          iVar16 = iVar1;
        }
        iVar16 = iVar16 + *(int *)(lVar8 + 4);
        *(int *)(lVar8 + 4) = iVar16;
        return iVar16 == iVar6;
      }
      lVar8 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x20b0) + 0xf0))(lVar8 + 0x20b0);
      fVar27 = *pfVar9;
      lVar8 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x2110) + 0xf0))(lVar8 + 0x2110);
      fVar28 = *pfVar9;
      lVar8 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x20e0) + 0xf0))(lVar8 + 0x20e0);
      fVar26 = *pfVar9;
      if (*(int *)(param_1 + 0x178) == 0) {
        local_68 = 10;
        local_90 = (undefined *)CONCAT44(local_90._4_4_,10);
        if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02416898;
      }
      else {
LAB_02416898:
        plVar13 = &DAT_054e9a58;
        if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
          plVar13 = *(long **)(param_1 + 0x4c8);
        }
        lVar8 = (**(code **)(*plVar13 + 0x148))();
        iVar6 = (int)(long)(fVar26 * 11930465.0);
        iVar19 = -iVar6;
        iVar16 = uVar5 - *(int *)(lVar8 + 4);
        if ((iVar6 <= iVar16) || (uVar18 = uVar5, iVar16 <= iVar19)) {
          iVar17 = (int)(fVar27 * (float)iVar16);
          iVar16 = (int)(long)(fVar28 * 11930465.0);
          if (iVar17 < 1) {
            iVar6 = -iVar16;
            iVar16 = iVar19;
          }
          iVar19 = iVar17;
          if (iVar16 <= iVar17) {
            iVar19 = iVar16;
          }
          if (iVar6 <= iVar17) {
            iVar6 = iVar19;
          }
          uVar18 = iVar6 + *(int *)(lVar8 + 4);
        }
        *(uint *)(lVar8 + 4) = uVar18;
      }
      switch(param_2[6]) {
      case 1.4013e-45:
        iVar6 = 1;
        break;
      case 2.8026e-45:
        iVar6 = 3;
        if (fVar25 <= 15.0) {
          iVar6 = 0;
        }
        break;
      case 4.2039e-45:
        iVar6 = (uint)(15.0 < fVar25) << 2;
        break;
      case 5.60519e-45:
        iVar6 = 0;
        break;
      default:
        iVar6 = 2;
      }
      lVar8 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x2050) + 0xf0))(lVar8 + 0x2050);
      fVar26 = *pfVar9;
      lVar8 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x2080) + 0xf0))(lVar8 + 0x2080);
      if (*pfVar9 <= fVar25) {
        fVar26 = 1.0;
LAB_02416b88:
        uVar18 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
        uVar14 = uVar18 - uVar5;
        if (uVar14 == 0) {
LAB_02416bb8:
          fVar25 = 8.381903e-08;
          uVar15 = uVar14;
        }
        else {
          uVar15 = uVar5 - uVar18;
          uVar2 = uVar14;
          if (uVar18 <= uVar5) {
            uVar2 = uVar15;
          }
          if (uVar2 < 0x80000001) {
            if (uVar18 <= uVar5) {
              fVar25 = 8.381903e-08;
              goto LAB_02416be4;
            }
          }
          else {
            uVar14 = -uVar2;
            if (uVar5 < uVar18) goto LAB_02416bb8;
          }
          fVar25 = -8.381903e-08;
          uVar15 = uVar14;
        }
LAB_02416be4:
        fVar25 = fVar25 * (float)uVar15;
      }
      else {
        fVar26 = fVar26 + (1.0 - fVar26) * (fVar25 / *pfVar9);
        if (0.01 < fVar26) goto LAB_02416b88;
        fVar25 = 180.0;
      }
      local_60 = 1;
      local_58 = 0x43340000;
      local_54 = 0;
      local_68 = iVar6;
      local_64 = fVar26;
      local_5c = fVar25;
      uStack_7c = FUN_02417014(param_1,&local_68);
      local_6c = 0;
      local_88 = (char *)CONCAT44(fVar26,fVar26);
      local_90 = (undefined *)CONCAT35(local_90._5_3_,0x100000000);
      uStack_74 = 0;
      local_70 = 0x100;
      local_90 = (undefined *)CONCAT44(local_90._4_4_,*(undefined4 *)(param_1 + 0x1820));
      local_80 = fVar25;
      local_78 = iVar6;
      fVar26 = (float)FUN_024171c8(param_1,&local_90);
      *(float *)(param_1 + 0x1820) = fVar26;
      fVar27 = (float)FUN_0231ebc4(param_1);
      fVar28 = *(float *)(param_1 + 0x183c);
      if (fVar26 <= fVar27 * 0.5) {
        fVar25 = 0.0;
      }
      if (fVar25 <= fVar28) {
        if (fVar28 <= fVar25) goto LAB_02416ca8;
        fVar26 = fVar28 + -3.5;
        bVar3 = true;
        if ((fVar25 < fVar26) && (bVar3 = false, !NAN(fVar28) && !NAN(fVar26))) {
          bVar3 = fVar28 < fVar26;
        }
      }
      else {
        fVar26 = fVar28 + 3.5;
        bVar3 = true;
        if ((fVar26 < fVar25) && (bVar3 = false, !NAN(fVar26) && !NAN(fVar28))) {
          bVar3 = fVar26 < fVar28;
        }
      }
      if (!bVar3) {
        fVar25 = fVar26;
      }
      *(float *)(param_1 + 0x183c) = fVar25;
LAB_02416ca8:
      puVar21 = *(undefined8 **)(param_1 + 0x60);
      if (puVar21 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar21 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar21 = &DAT_05240280;
        }
      }
      if (((puVar21[0x227] != 0) && (lVar8 = *(long *)(puVar21[0x227] + 0x78), lVar8 != 0)) &&
         (plVar13 = *(long **)(lVar8 + 0x48), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x30))(*(undefined4 *)(param_1 + 0x183c),plVar13,&DAT_054beca8);
      }
      fVar26 = *(float *)(param_1 + 0x1820);
      lVar8 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x750) + 0xf0))(lVar8 + 0x750);
      fVar25 = *pfVar9;
      if (*pfVar9 <= fVar26) {
        fVar25 = fVar26;
      }
      fVar26 = *(float *)(param_1 + 0x1824);
      if (fVar26 != fVar25) {
        fVar28 = fVar25 - fVar26;
        fVar27 = -fVar28;
        if (0.0 <= fVar28) {
          fVar27 = fVar28;
        }
        fVar23 = fVar25;
        if (0.1 < fVar27) {
          fVar27 = fVar28 * 0.5;
          fVar23 = 0.1;
          if (fVar28 <= 0.0) {
            fVar23 = -5.0;
          }
          fVar24 = 5.0;
          if (fVar28 <= 0.0) {
            fVar24 = -0.1;
          }
          if (fVar27 <= fVar24) {
            fVar24 = fVar27;
          }
          if (fVar23 <= fVar27) {
            fVar23 = fVar24;
          }
          fVar23 = fVar26 + fVar23;
        }
        *(float *)(param_1 + 0x1824) = fVar23;
      }
      iVar6 = *(int *)(param_1 + 0x178);
      puVar21 = *(undefined8 **)(param_1 + 0x60);
      if (puVar21 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar19 = __cxa_guard_acquire(&DAT_052461c0);
          puVar21 = &DAT_05240280;
          if (iVar19 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar21 = &DAT_05240280;
        }
      }
      if (iVar6 != 0) {
        fVar25 = *(float *)(param_1 + 0x1824);
      }
      if (((puVar21[0x227] != 0) && (lVar8 = *(long *)(puVar21[0x227] + 0x78), lVar8 != 0)) &&
         (plVar13 = *(long **)(lVar8 + 0x48), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x30))(fVar25,plVar13,&DAT_054bec98);
      }
      puVar21 = *(undefined8 **)(param_1 + 0x60);
      if (puVar21 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar21 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar21 = &DAT_05240280;
        }
      }
      local_90 = PTR_DAT_04bb2020 + 0x10;
      local_88 = "PlayerAIMove";
      FUN_01707d90(puVar21,&local_90,6,0,0);
      return false;
    }
    uVar5 = *(uint *)(param_1 + 0x17cc);
    *(uint *)(param_1 + 0x17cc) = uVar5 & 0xffdfffff;
    puVar21 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar21 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar22 = *(undefined4 *)((long)puVar21 + 0x2b4);
    *(undefined4 *)(param_1 + 0x1858) = 0;
    *(undefined8 *)(param_1 + 0x1820) = 0;
    *(undefined4 *)(param_1 + 0x1854) = uVar22;
    *(uint *)(param_1 + 0x17cc) = uVar5 & 0xffd7ffff;
    *(undefined8 *)(param_1 + 0x1844) = 0;
    uVar10 = (**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
    lVar8 = FUN_0251e98c(1);
    puVar11 = (undefined4 *)
              (**(code **)(*(long *)(&DAT_00002140 + lVar8) + 0xf0))(&DAT_00002140 + lVar8);
    FUN_03eb4b60(*puVar11,0x41200000,0x3e4ccccc,uVar10,param_2);
    if (*(long *)(param_2 + 4) != 0) {
      lVar8 = (**(code **)(**(long **)(param_1 + 0x68) + 0x148))();
      iVar6 = **(int **)(param_2 + 4);
      lVar12 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar12 + 0x2170) + 0xf0))(lVar12 + 0x2170);
      iVar19 = (int)(*pfVar9 * (float)(iVar6 - *(int *)(lVar8 + 4)));
      iVar6 = 0x7fffffff;
      if (iVar19 < 1) {
        iVar6 = 0;
      }
      iVar16 = 0;
      if (iVar19 < 1) {
        iVar16 = -0x7fffffff;
      }
      iVar17 = iVar19;
      if (iVar6 <= iVar19) {
        iVar17 = iVar6;
      }
      if (iVar16 <= iVar19) {
        iVar16 = iVar17;
      }
      *(int *)(lVar8 + 4) = iVar16 + *(int *)(lVar8 + 4);
    }
    fVar25 = *(float *)(*(long *)(param_1 + 0x68) + 0x278) - *param_2;
    fVar27 = *(float *)(*(long *)(param_1 + 0x68) + 0x280) - param_2[2];
    if (fVar26 * 10.0 <= SQRT(fVar27 * fVar27 + fVar25 * fVar25)) goto LAB_024167bc;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x17cc);
    plVar13 = *(long **)(param_1 + 0x68);
    *(uint *)(param_1 + 0x17cc) = uVar5 & 0xffdfffff;
    puVar21 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar21 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar22 = *(undefined4 *)((long)puVar21 + 0x2b4);
    *(undefined4 *)(param_1 + 0x1858) = 0;
    *(undefined8 *)(param_1 + 0x1820) = 0;
    *(undefined4 *)(param_1 + 0x1854) = uVar22;
    *(uint *)(param_1 + 0x17cc) = uVar5 & 0xffd7ffff;
    *(undefined8 *)(param_1 + 0x1844) = 0;
    fVar25 = *(float *)(plVar13 + 0x4f);
    fVar26 = *(float *)(plVar13 + 0x50);
    uVar10 = (**(code **)(*plVar13 + 0xf8))();
    lVar8 = FUN_0251e98c(1);
    puVar11 = (undefined4 *)
              (**(code **)(*(long *)(&DAT_00002140 + lVar8) + 0xf0))(&DAT_00002140 + lVar8);
    FUN_03eb4b60(*puVar11,0x41200000,0x3e4ccccc,uVar10,param_2);
    plVar13 = *(long **)(param_1 + 0x68);
    fVar25 = SQRT((fVar26 - *(float *)(plVar13 + 0x50)) * (fVar26 - *(float *)(plVar13 + 0x50)) +
                  (fVar25 - *(float *)(plVar13 + 0x4f)) * (fVar25 - *(float *)(plVar13 + 0x4f)));
    if (*(long *)(param_2 + 4) != 0) {
      lVar8 = (**(code **)(*plVar13 + 0x148))();
      iVar6 = **(int **)(param_2 + 4);
      lVar12 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar12 + 0x2170) + 0xf0))(lVar12 + 0x2170);
      iVar19 = (int)(*pfVar9 * (float)(iVar6 - *(int *)(lVar8 + 4)));
      iVar6 = 0x7fffffff;
      if (iVar19 < 1) {
        iVar6 = 0;
      }
      iVar16 = 0;
      if (iVar19 < 1) {
        iVar16 = -0x7fffffff;
      }
      iVar17 = iVar19;
      if (iVar6 <= iVar19) {
        iVar17 = iVar6;
      }
      if (iVar16 <= iVar19) {
        iVar16 = iVar17;
      }
      *(int *)(lVar8 + 4) = iVar16 + *(int *)(lVar8 + 4);
    }
    fVar26 = -fVar25;
    if (0.0 <= fVar25) {
      fVar26 = fVar25;
    }
    if (1.1920929e-07 <= fVar26) {
      fVar26 = *(float *)(param_1 + 0x183c);
      if (0.0 <= fVar26) {
        if (fVar26 <= 0.0) goto LAB_02416974;
        fVar27 = fVar26 + -3.5;
        bVar3 = false;
        bVar4 = false;
        if (fVar27 <= fVar26) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar27)) {
            bVar3 = fVar27 == 0.0;
            bVar4 = 0.0 <= fVar27;
          }
        }
        fVar26 = 0.0;
        if (bVar4 && !bVar3) {
          fVar26 = fVar27;
        }
      }
      else {
        fVar27 = fVar26 + 3.5;
        bVar3 = false;
        bVar4 = false;
        if (fVar26 <= fVar27) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar27)) {
            bVar3 = fVar27 < 0.0;
            bVar4 = false;
          }
        }
        fVar26 = 0.0;
        if (bVar3 != bVar4) {
          fVar26 = fVar27;
        }
      }
      *(float *)(param_1 + 0x183c) = fVar26;
LAB_02416974:
      puVar21 = *(undefined8 **)(param_1 + 0x60);
      if (puVar21 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar21 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar21 = &DAT_05240280;
        }
      }
      if (((puVar21[0x227] != 0) && (lVar8 = *(long *)(puVar21[0x227] + 0x78), lVar8 != 0)) &&
         (plVar13 = *(long **)(lVar8 + 0x48), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x30))(*(undefined4 *)(param_1 + 0x183c),plVar13,&DAT_054beca8);
      }
      puVar21 = *(undefined8 **)(param_1 + 0x60);
      if (puVar21 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar21 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar21 = &DAT_05240280;
        }
      }
      if (((puVar21[0x227] != 0) && (lVar8 = *(long *)(puVar21[0x227] + 0x78), lVar8 != 0)) &&
         (plVar13 = *(long **)(lVar8 + 0x48), plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x30))(fVar25,plVar13,&DAT_054bec98);
      }
      puVar21 = *(undefined8 **)(param_1 + 0x60);
      if (puVar21 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar21 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar21 = &DAT_05240280;
        }
      }
      local_90 = PTR_DAT_04bb2020 + 0x10;
      local_88 = "PlayerAIMove";
      FUN_01707d90(puVar21,&local_90,6,0,0);
      return true;
    }
  }
  *(undefined4 *)(param_1 + 0x17e0) = 0;
  *(undefined2 *)(param_1 + 0x17e4) = 0;
  *(undefined4 *)(param_1 + 0x17e6) = 0;
LAB_024167bc:
  FUN_0231ade8(param_1,6);
  return true;
}

