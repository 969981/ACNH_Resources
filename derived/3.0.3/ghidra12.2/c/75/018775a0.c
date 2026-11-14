
/* WARNING: Removing unreachable block (ram,0x018777bc) */
/* WARNING: Removing unreachable block (ram,0x01877b7c) */
/* WARNING: Removing unreachable block (ram,0x01877ba4) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_018775a0(long param_1,float *param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  float *******pppppppfVar9;
  float *******pppppppfVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *******pppppppuVar14;
  long lVar15;
  float *******pppppppfVar16;
  undefined8 *******pppppppuVar17;
  float *******pppppppfVar18;
  float ******ppppppfVar19;
  float *******pppppppfVar20;
  int iVar21;
  long *plVar22;
  float *******pppppppfVar23;
  long lVar24;
  int iVar25;
  undefined *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float unaff_s10;
  long *local_2b0;
  undefined8 local_2a8;
  undefined8 *local_2a0;
  undefined8 local_298 [5];
  float ******local_270 [3];
  float *******local_258;
  undefined8 local_250;
  int local_248;
  undefined8 *******local_240;
  undefined8 *******pppppppuStack_238;
  int local_230;
  undefined8 *******local_228 [5];
  undefined8 ******local_200 [5];
  undefined8 *****local_1d8 [5];
  undefined8 ****local_1b0 [5];
  undefined8 ***local_188 [5];
  undefined8 **local_160 [5];
  undefined8 *local_138 [5];
  undefined8 local_110 [5];
  byte local_e8 [4];
  undefined4 local_e4;
  code *local_e0;
  float ******ppppppfStack_d8;
  int local_d0;
  int iStack_cc;
  char local_c8 [8];
  float ******local_c0;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  
  puVar26 = PTR_DAT_04bb2010;
  lVar24 = *(long *)(param_1 + 0x300);
  ppppppfVar19 = (float ******)(PTR_DAT_04bb2010 + 0x10);
  local_b8 = (int)((float)(int)*(float *)(param_1 + 0x334) / 5.0) -
             (uint)(*(float *)(param_1 + 0x334) < 0.0);
  iStack_b4 = (int)((float)(int)*(float *)(param_1 + 0x33c) / 5.0) -
              (uint)(*(float *)(param_1 + 0x33c) < 0.0);
  local_c0 = ppppppfVar19;
  uVar3 = FUN_01a1ddd0(&local_c0,PTR_LAB_04bbe978);
  local_e0 = FUN_018773b0;
  if ((uVar3 & 1) == 0) {
    local_e0 = *(code **)(param_1 + 0x498);
  }
  local_e4 = *(undefined4 *)(param_1 + 0x4a8);
  local_c8[0] = '\0';
  local_c8[1] = '\0';
  local_c8[2] = '\0';
  local_c8[3] = '\0';
  local_c8[4] = '\0';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  local_e8[0] = *(byte *)(param_1 + 0x494) ^ 1;
  local_d0 = DAT_0517afd0;
  iStack_cc = DAT_0517afd4;
  local_250 = (float *******)
              CONCAT44((int)((float)(int)*(float *)(lVar24 + 0x280) / 5.0) -
                       (uint)(*(float *)(lVar24 + 0x280) < 0.0),
                       (int)((float)(int)*(float *)(lVar24 + 0x278) / 5.0) -
                       (uint)(*(float *)(lVar24 + 0x278) < 0.0));
  local_258 = (float *******)ppppppfVar19;
  ppppppfStack_d8 = ppppppfVar19;
  FUN_01947010(*(undefined4 *)(lVar24 + 0x27c),&local_e0,&local_258,local_e8,
               (uVar3 ^ 0xffffffff) & 1);
  puVar2 = PTR_DAT_04bb39d8;
  if ((((local_c8[4] == '\0') && (local_c8[6] == '\0')) && (local_c8[0] == '\0')) &&
     (local_c8[2] == '\0')) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    do {
      puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
      uVar11 = *puVar7 ^ *puVar7 << 0xb;
      uVar13 = puVar7[3];
      *puVar7 = puVar7[1];
      puVar7[1] = puVar7[2];
      uVar12 = uVar11 ^ uVar13;
      puVar7[2] = uVar13;
      puVar7[3] = uVar11 >> 8 ^ uVar13 >> 0x13 ^ uVar12;
      uVar6 = (ulong)(uVar12 >> 0x1d);
    } while (*(char *)(((ulong)&local_e0 | uVar6) + 0x18) == '\0');
    fVar27 = (float)(local_d0 + (&DAT_04177458)[uVar6 * 2]) * 0.5;
    uVar11 = 0;
    if (fVar27 != (float)(int)fVar27) {
      uVar11 = (uint)(fVar27 < 0.0);
    }
    fVar31 = (float)(iStack_cc + (&DAT_0417745c)[uVar6 * 2]) * 0.5;
    uVar12 = 0;
    if (fVar31 != (float)(int)fVar31) {
      uVar12 = (uint)(fVar31 < 0.0);
    }
    fVar27 = (float)(int)((int)fVar27 - uVar11) * 10.0 + 5.0;
    fVar31 = (float)(int)((int)fVar31 - uVar12) * 10.0 + 5.0;
  }
  else {
    local_248 = 0;
    local_110[0] = 0;
    local_228[0] = local_200;
    local_200[0] = local_1d8;
    local_1d8[0] = local_1b0;
    local_1b0[0] = local_188;
    local_188[0] = local_160;
    local_160[0] = local_138;
    local_258 = (float *******)&local_258;
    local_250 = (float *******)&local_258;
    local_138[0] = local_110;
    local_230 = 8;
    local_2a0 = local_298;
    local_240 = local_228;
    pppppppuStack_238 = local_228;
    local_2b0 = (long *)0x0;
    local_2a8 = 0x800000000;
    if (*(long *)PTR_DAT_04bb2200 != 0) {
      lVar24 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50);
      if (lVar24 != 0) {
        local_b0 = 0;
        plVar22 = *(long **)(lVar24 + 0x118);
        if ((plVar22 != (long *)0x0) && ((char)plVar22[7] != '\0')) {
          uVar6 = (**(code **)(*plVar22 + 0xc0))(plVar22);
          if ((uVar6 & 1) != 0) {
            local_2b0 = plVar22;
          }
        }
      }
    }
    pppppppfVar23 = (float *******)&local_250;
    fVar31 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
    fVar27 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
    if (DAT_04cfae30 == 0) {
      uVar11 = 0;
    }
    else {
      lVar24 = *(long *)(DAT_04cfae30 + 0xa8);
      uVar11 = 0;
      if ((lVar24 != 0) &&
         (uVar12 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0), -1 < (int)uVar12)) {
        uVar11 = 0;
        uVar13 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
        if ((-1 < (int)uVar13) &&
           ((uVar12 < *(uint *)(lVar24 + 0x38) && (uVar13 < *(uint *)(lVar24 + 0x3c))))) {
          uVar12 = uVar12 + *(uint *)(lVar24 + 0x38) * uVar13;
          uVar11 = 0;
          if ((uVar12 < *(uint *)(lVar24 + 0x68)) && (*(long *)(lVar24 + 0x70) != 0)) {
            local_b0 = 3;
            uVar11 = *(uint *)(*(long *)(lVar24 + 0x70) + (long)(int)uVar12 * 4) >> 3 & 1;
          }
        }
      }
    }
    lVar24 = 0;
    fVar28 = 0.0;
    fVar31 = 0.0;
    iVar25 = 0;
    fVar27 = 0.0;
    unaff_s10 = 0.0;
    do {
      pppppppuVar14 = local_240;
      pppppppfVar10 = local_258;
      if (local_c8[lVar24] != '\0') {
        if (local_248 < local_230) {
          if (local_240 != (undefined8 *******)0x0) {
            local_240 = (undefined8 *******)*local_240;
          }
          pppppppuVar14[4] = (undefined8 ******)0x0;
          pppppppuVar14[1] = (undefined8 ******)0x0;
          pppppppuVar14[2] = (undefined8 ******)0x0;
          *pppppppuVar14 = (undefined8 ******)0x0;
          local_258 = (float *******)(pppppppuVar14 + 3);
          *local_258 = (float ******)0x0;
          pppppppuVar14[4] = &local_258;
          *local_258 = (float ******)pppppppfVar10;
          if (pppppppfVar10 != (float *******)0x0) {
            pppppppfVar10[1] = (float ******)local_258;
          }
          local_248 = local_248 + 1;
        }
        else {
          pppppppuVar14 = (undefined8 *******)0x0;
        }
        uVar12 = (uint)lVar24;
        *(uint *)(pppppppuVar14 + 1) = uVar12;
        if ((int)uVar12 < 8) {
          lVar15 = lVar24;
          if (7 < uVar12) {
            lVar15 = 0;
          }
          fVar31 = (float)(local_d0 + (&DAT_04177458)[lVar15 * 2]) * 0.5;
          uVar12 = 0;
          if (fVar31 != (float)(int)fVar31) {
            uVar12 = (uint)(fVar31 < 0.0);
          }
          fVar28 = (float)(iStack_cc + (&DAT_0417745c)[lVar15 * 2]) * 0.5;
          uVar13 = 0;
          if (fVar28 != (float)(int)fVar28) {
            uVar13 = (uint)(fVar28 < 0.0);
          }
          fVar31 = (float)(int)((int)fVar31 - uVar12) * 10.0 + 5.0;
          fVar28 = (float)(int)((int)fVar28 - uVar13) * 10.0 + 5.0;
        }
        *(float *)((long)pppppppuVar14 + 0xc) = fVar31;
        *(undefined4 *)(pppppppuVar14 + 2) = 0;
        *(float *)((long)pppppppuVar14 + 0x14) = fVar28;
        uVar12 = uVar11;
        if (*(char *)(param_1 + 0x4a4) == '\0') {
          uVar12 = 1;
        }
        if (uVar12 == 0) {
          if (local_2b0 == (long *)0x0) {
LAB_01877c30:
            iVar5 = 0;
            iVar21 = 0;
          }
          else {
            if ((DAT_05231900 == 0) || (lVar15 = *(long *)(DAT_05231900 + 0x50), lVar15 == 0)) {
LAB_01877bb8:
              if (*(int *)(local_2b0[0x164] + (long)(int)local_2b0[0x166] * 0x10) < 1)
              goto LAB_01877c30;
            }
            else {
              if ((*(long *)(lVar15 + 0x118) != 0) &&
                 (*(char *)(*(long *)(lVar15 + 0x118) + 0xe0b) == '\0')) goto LAB_01877c30;
              if ((*(long *)(lVar15 + 0x118) == 0) ||
                 (*(char *)(*(long *)(lVar15 + 0x118) + 0xe0b) != '\0')) goto LAB_01877bb8;
            }
            lVar15 = local_2b0[0x168];
            iVar4 = (int)((float)(int)fVar31 / 10.0) - (uint)(fVar31 < 0.0);
            iVar1 = (int)((float)(int)fVar28 / 10.0) - (uint)(fVar28 < 0.0);
            iVar21 = iVar4;
            if (*(int *)(lVar15 + 0x20) <= iVar4) {
              iVar21 = *(int *)(lVar15 + 0x20);
            }
            iVar5 = 0;
            if (*(int *)(lVar15 + 0x10) <= iVar4) {
              iVar5 = iVar21 - *(int *)(lVar15 + 0x10);
            }
            iVar4 = iVar1;
            if (*(int *)(lVar15 + 0x24) <= iVar1) {
              iVar4 = *(int *)(lVar15 + 0x24);
            }
            iVar21 = 0;
            if (*(int *)(lVar15 + 0x14) <= iVar1) {
              iVar21 = iVar4 - *(int *)(lVar15 + 0x14);
            }
          }
          iStack_ac = iVar21 + -1;
          local_b0 = iVar5;
          iVar4 = FUN_015af618(&local_2b0,&local_b0,0);
          if (iVar4 < 1) {
            iStack_ac = iVar21 + 1;
            local_b0 = iVar5;
            iVar4 = FUN_015af618(&local_2b0,&local_b0,0);
            if (iVar4 < 1) {
              local_b0 = iVar5 + 1;
              iStack_ac = iVar21;
              iVar4 = FUN_015af618(&local_2b0,&local_b0,0);
              if (iVar4 < 1) {
                local_b0 = iVar5 + -1;
                iStack_ac = iVar21;
                iVar5 = FUN_015af618(&local_2b0,&local_b0,0);
                if (iVar5 < 1) goto LAB_01877ce4;
              }
            }
          }
          if ((int)local_2a8 < local_2a8._4_4_) {
            local_2a0[(int)local_2a8] = pppppppuVar14;
            local_2a8 = CONCAT44(local_2a8._4_4_,(int)local_2a8 + 1);
          }
        }
LAB_01877ce4:
        fVar36 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
        fVar37 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
        fVar29 = fVar31 - fVar36;
        fVar32 = fVar28 - fVar37;
        fVar33 = 0.0;
        fVar34 = SQRT(fVar29 * fVar29 + 0.0 + fVar32 * fVar32);
        if (fVar34 <= 0.0) {
          fVar35 = 0.0;
        }
        else {
          fVar34 = 1.0 / fVar34;
          fVar29 = fVar29 * fVar34;
          fVar35 = fVar34 * 0.0;
          fVar32 = fVar32 * fVar34;
        }
        fVar36 = *param_2 - fVar36;
        fVar37 = param_2[2] - fVar37;
        fVar34 = SQRT(fVar36 * fVar36 + 0.0 + fVar37 * fVar37);
        if (0.0 < fVar34) {
          fVar34 = 1.0 / fVar34;
          fVar36 = fVar36 * fVar34;
          fVar33 = fVar34 * 0.0;
          fVar37 = fVar37 * fVar34;
        }
        fVar29 = 1.0 - (fVar35 * fVar33 + fVar36 * fVar29 + fVar37 * fVar32);
        *(float *)pppppppuVar14 = fVar29;
        unaff_s10 = unaff_s10 + fVar29;
        if (1.0 < fVar29) {
          iVar25 = iVar25 + 1;
        }
        if (fVar29 <= 1.0) {
          fVar29 = -0.0;
        }
        fVar27 = fVar27 + fVar29;
        *(float *)((long)pppppppuVar14 + 4) =
             (fVar28 - param_2[2]) * (fVar28 - param_2[2]) +
             (fVar31 - *param_2) * (fVar31 - *param_2);
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != 8);
    if (local_248 == 0) {
      do {
        pppppppfVar10 = (float *******)*pppppppfVar23;
        pppppppfVar23 = pppppppfVar10 + 1;
      } while ((float ********)pppppppfVar10 != &local_258);
      return 0;
    }
    if (((int)local_2a8 != 0) && ((int)local_2a8 < local_248)) {
      lVar24 = (long)(int)local_2a8 << 3;
      puVar8 = local_2a0;
      do {
        pppppppuVar14 = (undefined8 *******)*puVar8;
        fVar29 = *(float *)pppppppuVar14;
        pppppppuVar17 = pppppppuVar14 + 3;
        fVar28 = fVar29;
        if (fVar29 <= 1.0) {
          fVar28 = 0.0;
        }
        if (*pppppppuVar17 != (undefined8 ******)0x0) {
          (*pppppppuVar17)[1] = pppppppuVar14[4];
        }
        if (pppppppuVar14[4] != (undefined8 ******)0x0) {
          *pppppppuVar14[4] = *pppppppuVar17;
        }
        *pppppppuVar17 = (undefined8 ******)0x0;
        pppppppuVar14[4] = (undefined8 ******)0x0;
        fVar27 = fVar27 - fVar28;
        unaff_s10 = unaff_s10 - fVar29;
        iVar25 = iVar25 - (uint)(1.0 < fVar29);
        puVar8 = puVar8 + 1;
        lVar24 = lVar24 + -8;
        local_248 = local_248 + -1;
        *pppppppuVar14 = local_240;
        local_240 = pppppppuVar14;
      } while (lVar24 != 0);
    }
    if (1 < local_248) {
      pppppppfVar10 = (float *******)local_250[1];
      while (pppppppfVar9 = pppppppfVar10, (float ********)pppppppfVar9 != &local_258) {
        pppppppfVar10 = (float *******)pppppppfVar9[1];
        pppppppfVar18 = (float *******)*pppppppfVar9;
        if (*(float *)(pppppppfVar18 + -3) < *(float *)(pppppppfVar9 + -3)) {
          pppppppfVar16 = pppppppfVar18;
          do {
            pppppppfVar16 = (float *******)*pppppppfVar16;
            if ((float ********)pppppppfVar16 == &local_258) {
              pppppppfVar16 = (float *******)&local_258;
              break;
            }
          } while (*(float *)(pppppppfVar16 + -3) < *(float *)(pppppppfVar9 + -3));
          pppppppfVar20 = pppppppfVar10;
          if (pppppppfVar18 != (float *******)0x0) {
            pppppppfVar18[1] = (float ******)pppppppfVar10;
            pppppppfVar20 = (float *******)pppppppfVar9[1];
          }
          if (pppppppfVar20 != (float *******)0x0) {
            *pppppppfVar20 = *pppppppfVar9;
          }
          *pppppppfVar9 = (float ******)0x0;
          pppppppfVar9[1] = (float ******)0x0;
          ppppppfVar19 = pppppppfVar16[1];
          pppppppfVar16[1] = (float ******)pppppppfVar9;
          *pppppppfVar9 = (float ******)pppppppfVar16;
          pppppppfVar9[1] = ppppppfVar19;
          if (ppppppfVar19 != (float ******)0x0) {
            *ppppppfVar19 = (float *****)pppppppfVar9;
          }
        }
      }
    }
    uVar11 = *(uint *)(param_1 + 1000);
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x3ec);
    uVar30 = *(undefined4 *)(param_1 + 0x3f0);
    uVar12 = *(uint *)(param_1 + 0x3f4);
    uVar11 = uVar11 ^ uVar11 << 0xb;
    *(uint *)(param_1 + 0x3f0) = uVar12;
    *(undefined4 *)(param_1 + 0x3ec) = uVar30;
    uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar11 ^ uVar12;
    *(uint *)(param_1 + 0x3f4) = uVar11;
    if ((float ********)local_250 != &local_258) {
      fVar28 = fVar27;
      if (iVar25 < 1) {
        fVar28 = unaff_s10;
      }
      pppppppfVar10 = local_250 + -3;
      fVar28 = fVar28 * ((float)(uVar11 >> 9 | 0x3f800000) + -1.0);
      do {
        pppppppfVar9 = local_250 + -3;
        if (fVar28 < *(float *)pppppppfVar9) {
          fVar27 = *(float *)((long)pppppppfVar10 + 0xc);
          unaff_s10 = *(float *)(pppppppfVar10 + 2);
          fVar31 = *(float *)((long)pppppppfVar10 + 0x14);
          break;
        }
        local_250 = (float *******)local_250[1];
        fVar28 = fVar28 - *(float *)pppppppfVar9;
        pppppppfVar10 = local_250 + -3;
      } while (pppppppfVar10 != local_270);
    }
    do {
      puVar26 = &DAT_048f9740;
      pppppppfVar10 = (float *******)*pppppppfVar23;
      pppppppfVar23 = pppppppfVar10 + 1;
    } while ((float ********)pppppppfVar10 != &local_258);
  }
  if ((uVar3 & 1) == 0) {
    local_258 = (float *******)(puVar26 + 0x10);
    local_250._0_4_ = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
    local_250._4_4_ = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
    uVar6 = FUN_01a1ddd0(&local_258,PTR_LAB_04bbe978);
    if ((uVar6 & 1) == 0) {
      puVar7 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar11 = puVar7[3];
      uVar3 = *puVar7 ^ *puVar7 << 0xb;
      *puVar7 = puVar7[1];
      puVar7[1] = puVar7[2];
      uVar3 = uVar3 >> 8 ^ uVar11 >> 0x13 ^ uVar3 ^ uVar11;
      puVar7[2] = uVar11;
      puVar7[3] = uVar3;
      fVar29 = ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) * 4.0 + -2.0;
      puVar7 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      puVar2 = PTR_DAT_04bb27c8;
      fVar27 = fVar27 + fVar29;
      uVar11 = puVar7[3];
      uVar3 = *puVar7 ^ *puVar7 << 0xb;
      uVar3 = uVar3 >> 8 ^ uVar11 >> 0x13 ^ uVar3 ^ uVar11;
      *puVar7 = puVar7[1];
      puVar7[1] = puVar7[2];
      puVar7[2] = uVar11;
      puVar7[3] = uVar3;
      local_258 = (float *******)(ulong)(uint)fVar27;
      local_2a8 = local_2a8 & 0xffffffff00000000;
      unaff_s10 = unaff_s10 + 0.0;
      fVar32 = ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) * 4.0 + -2.0;
      fVar31 = fVar31 + fVar32;
      local_250 = (float *******)CONCAT44(local_250._4_4_,fVar31);
      fVar28 = (float)FUN_0093a950(*(long *)puVar2 + 0x28,&local_258,&local_2a8);
      if (fVar28 + 10.0 < *(float *)(param_1 + 0x338)) {
        fVar27 = fVar27 - fVar29;
        fVar31 = fVar31 - fVar32;
      }
    }
  }
  local_258 = (float *******)(puVar26 + 0x10);
  *(float *)(param_1 + 0x328) = fVar27;
  *(float *)(param_1 + 0x32c) = unaff_s10;
  *(float *)(param_1 + 0x330) = fVar31;
  local_250 = (float *******)
              CONCAT44((int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0),
                       (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0));
  uVar6 = FUN_01a1ddd0(&local_258,PTR_LAB_04bbe978);
  if ((uVar6 & 1) == 0) {
    local_2a8 = CONCAT44(*(undefined4 *)(param_1 + 0x4a8),
                         (int)CONCAT71(local_2a8._1_7_,*(undefined1 *)(param_1 + 0x494))) ^ 1;
    uVar6 = (**(code **)(param_1 + 0x498))
                      (*(undefined4 *)(param_1 + 0x338),(ulong)local_250 & 0xffffffff,
                       local_250._4_4_,&local_2a8);
    if ((uVar6 & 1) == 0) {
      uVar30 = *(undefined4 *)(param_1 + 0x338);
      goto LAB_018781c4;
    }
  }
  local_2a8 = local_2a8 & 0xffffffff00000000;
  uVar30 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,param_1 + 0x328,&local_2a8);
LAB_018781c4:
  *(undefined4 *)(param_1 + 0x32c) = uVar30;
  return 1;
}

