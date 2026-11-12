
undefined8 FUN_007dfb50(long param_1,long param_2,byte param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  float *pfVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  float local_88;
  
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      fVar22 = 0.0;
      fVar21 = 0.0;
      uVar12 = 0;
      fVar20 = 0.0;
      fVar23 = 0.0;
      fVar19 = 0.0;
    }
    else {
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      fVar19 = 0.0;
      fVar23 = 0.0;
      fVar20 = 0.0;
      fVar21 = 0.0;
      uVar12 = 0;
      fVar22 = 0.0;
      lVar11 = (long)*(int *)(param_1 + 8) << 3;
      do {
        plVar9 = (long *)*puVar10;
        if ((*(byte *)(plVar9 + 4) & param_3) != 0) {
          local_a8 = 0.0;
          local_c0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          puVar3 = (undefined8 *)(**(code **)(*(long *)plVar9[3] + 0x20))();
          (**(code **)*puVar3)();
          iVar1 = FUN_007e0214();
          iVar2 = 0;
          if (iVar1 != -1) {
            iVar2 = iVar1;
          }
          local_a0 = CONCAT44(local_a0._4_4_,iVar2);
          iVar2 = FUN_007e00fc(&local_a0);
          if (iVar2 == 9) {
            uVar5 = (**(code **)(*(long *)plVar9[3] + 0x20))();
            uVar6 = FUN_03eafa70(param_2,uVar5,&local_c0);
            if ((uVar6 & 1) != 0) {
LAB_007dfcf8:
              if ((param_4 != (int *)0x0) && (*param_4 < param_4[1])) {
                plVar8 = *(long **)(param_4 + 4);
                if (plVar8 != (long *)0x0) {
                  *(long *)(param_4 + 4) = *plVar8;
                }
                local_a0 = local_c0;
                lStack_98 = local_b8;
                local_90 = local_b0;
                local_88 = local_a8;
                *plVar8 = (long)(plVar9 + 1);
                plVar8[1] = local_c0;
                *(float *)(plVar8 + 4) = local_a8;
                plVar8[2] = local_b8;
                plVar8[3] = local_b0;
                if (*param_4 < param_4[1]) {
                  *(long **)(*(long *)(param_4 + 2) + (long)*param_4 * 8) = plVar8;
                  *param_4 = *param_4 + 1;
                }
              }
              fVar13 = *(float *)((long)plVar9 + 0x34);
              if (fVar23 <= fVar13) {
                fVar23 = fVar13;
              }
              fVar13 = fVar19 + fVar13;
              fVar19 = 5.0;
              if (fVar13 <= 5.0) {
                fVar19 = fVar13;
              }
              plVar9 = (long *)(**(code **)(*plVar9 + 0x50))(plVar9);
              pfVar7 = (float *)(**(code **)(*plVar9 + 0x28))();
              fVar21 = fVar21 + pfVar7[1];
              fVar22 = fVar22 + *pfVar7;
              fVar20 = fVar20 + pfVar7[2];
              fVar13 = SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar20 * fVar20);
              if (0.0 < fVar13) {
                fVar13 = 1.0 / fVar13;
                fVar22 = fVar22 * fVar13;
                fVar21 = fVar21 * fVar13;
                fVar20 = fVar20 * fVar13;
              }
              uVar12 = 1;
            }
          }
          else if (iVar2 == 5) {
            lVar4 = (**(code **)(*(long *)plVar9[3] + 0x20))();
            fVar14 = *(float *)(param_2 + 0xc) - *(float *)(lVar4 + 0xc);
            fVar15 = *(float *)(param_2 + 8) - *(float *)(lVar4 + 8);
            fVar13 = *(float *)(param_2 + 0x14);
            fVar18 = *(float *)(param_2 + 0x10) - *(float *)(lVar4 + 0x10);
            fVar24 = fVar14 * fVar14 + fVar15 * fVar15 + fVar18 * fVar18;
            fVar16 = fVar13 + *(float *)(lVar4 + 0x14);
            if (fVar24 < fVar16 * fVar16) {
              fVar24 = SQRT(fVar24);
              fVar26 = 1.0;
              fVar17 = 0.0;
              fVar25 = 0.0;
              if (0.0 < fVar24) {
                fVar25 = 1.0 / fVar24;
                fVar17 = fVar15 * fVar25;
                fVar26 = fVar14 * fVar25;
                fVar25 = fVar18 * fVar25;
              }
              local_c0 = CONCAT44(fVar26,fVar17);
              local_b8 = CONCAT44(fVar16 - fVar24,fVar25);
              local_a8 = *(float *)(param_2 + 0x10) - fVar13 * fVar25;
              local_b0 = CONCAT44(*(float *)(param_2 + 0xc) - fVar13 * fVar26,
                                  *(float *)(param_2 + 8) - fVar13 * fVar17);
              goto LAB_007dfcf8;
            }
          }
        }
        puVar10 = puVar10 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    if (param_4 != (int *)0x0) {
      param_4[0xcb] = (int)fVar23;
      param_4[0xcc] = (int)fVar19;
      param_4[200] = (int)fVar22;
      param_4[0xc9] = (int)fVar21;
      param_4[0xca] = (int)fVar20;
    }
  }
  return uVar12;
}

