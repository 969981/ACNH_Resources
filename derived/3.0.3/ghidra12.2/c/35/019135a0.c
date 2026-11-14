
void FUN_019135a0(float param_1,long param_2,float *param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (param_3 == (float *)0x0) {
    return;
  }
  uVar5 = (ulong)*(uint *)(param_2 + 0xe0);
  fVar16 = 0.0;
  if ((int)*(uint *)(param_2 + 0xe0) < 1) {
    fVar17 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
  }
  else {
    fVar13 = *param_4;
    fVar14 = param_4[1];
    fVar15 = param_4[2];
    lVar7 = 0;
    uVar9 = 0;
    do {
      if ((long)uVar9 < (long)(int)uVar5) {
        if (*(uint *)(param_2 + 0xc0) <= uVar9) goto LAB_01913600;
        plVar6 = (long *)(*(long *)(param_2 + 200) + lVar7);
LAB_01913668:
        lVar3 = *plVar6;
      }
      else {
        if (*(uint *)(param_2 + 0xc0) != 0) {
          plVar6 = *(long **)(param_2 + 200);
          goto LAB_01913668;
        }
LAB_01913600:
        lVar3 = 0;
      }
      pfVar2 = (float *)(**(code **)(*(long *)(lVar3 + 0x30) + 0xf0))();
      uVar9 = uVar9 + 1;
      iVar1 = *(int *)(param_2 + 0xe0);
      uVar5 = (ulong)iVar1;
      lVar7 = lVar7 + 8;
      fVar14 = fVar14 + pfVar2[1];
      fVar13 = fVar13 + *pfVar2;
      fVar15 = fVar15 + pfVar2[2];
    } while ((long)uVar9 < (long)uVar5);
    if (iVar1 < 1) {
      if (*(uint *)(param_2 + 0xc0) != 0) {
        plVar6 = *(long **)(param_2 + 200);
        goto LAB_019136b0;
      }
LAB_019136b8:
      lVar7 = 0;
    }
    else {
      if (*(uint *)(param_2 + 0xc0) <= iVar1 - 1U) goto LAB_019136b8;
      plVar6 = (long *)(*(long *)(param_2 + 200) + (ulong)(iVar1 - 1U) * 8);
LAB_019136b0:
      lVar7 = *plVar6;
    }
    pfVar2 = (float *)(**(code **)(*(long *)(lVar7 + 0x68) + 0xf0))();
    fVar17 = *pfVar2;
    if (0 < *(int *)(param_2 + 0xe0)) {
      if (*(int *)(param_2 + 0xc0) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = **(long **)(param_2 + 200);
      }
      pfVar2 = (float *)(**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
      fVar18 = param_4[1] + pfVar2[1];
      fVar19 = *param_4 + *pfVar2;
      fVar16 = param_4[2] + pfVar2[2];
      pfVar2 = (float *)(**(code **)(*(long *)(lVar7 + 0x68) + 0xf0))((long *)(lVar7 + 0x68));
      fVar10 = *pfVar2;
      goto LAB_01913740;
    }
  }
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar10 = 0.0;
LAB_01913740:
  fVar12 = fVar14;
  if (param_1 <= fVar14) {
    fVar12 = param_1;
  }
  fVar11 = fVar18;
  if (fVar18 <= param_1) {
    fVar11 = fVar12;
  }
  if (fVar11 <= fVar18) {
    *param_3 = fVar10;
    param_3[1] = fVar19;
    param_3[2] = fVar18;
    param_3[3] = fVar16;
  }
  else {
    uVar5 = (ulong)*(uint *)(param_2 + 0xe0);
    if (1 < (int)*(uint *)(param_2 + 0xe0)) {
      lVar3 = 0;
      lVar7 = 8;
      do {
        if ((long)(lVar3 + 1U) < (long)(int)uVar5) {
          if ((ulong)*(uint *)(param_2 + 0xc0) <= lVar3 + 1U) goto LAB_019137a4;
          plVar6 = (long *)(*(long *)(param_2 + 200) + lVar7);
LAB_0191379c:
          lVar4 = *plVar6;
        }
        else {
          if (*(uint *)(param_2 + 0xc0) != 0) {
            plVar6 = *(long **)(param_2 + 200);
            goto LAB_0191379c;
          }
LAB_019137a4:
          lVar4 = 0;
        }
        pfVar2 = (float *)(**(code **)(*(long *)(lVar4 + 0x30) + 0xf0))();
        fVar12 = fVar18 + pfVar2[1];
        fVar10 = pfVar2[2];
        if (param_1 <= fVar12) {
          uVar8 = (uint)lVar3 + 1;
          fVar13 = (param_1 - fVar18) / (fVar12 - fVar18);
          param_3[1] = fVar19 + fVar13 * ((fVar19 + *pfVar2) - fVar19);
          param_3[2] = fVar18 + fVar13 * (fVar12 - fVar18);
          param_3[3] = fVar16 + fVar13 * ((fVar16 + fVar10) - fVar16);
          if (*(int *)(param_2 + 0xe0) < (int)uVar8) {
            if (*(uint *)(param_2 + 0xc0) == 0) goto LAB_0191387c;
            plVar6 = *(long **)(param_2 + 200);
LAB_01913874:
            lVar3 = *plVar6;
          }
          else {
            if ((uint)lVar3 < *(uint *)(param_2 + 0xc0)) {
              plVar6 = (long *)(*(long *)(param_2 + 200) + lVar7 + -8);
              goto LAB_01913874;
            }
LAB_0191387c:
            lVar3 = 0;
          }
          pfVar2 = (float *)(**(code **)(*(long *)(lVar3 + 0x68) + 0xf0))();
          fVar16 = *pfVar2;
          if ((int)uVar8 < *(int *)(param_2 + 0xe0)) {
            if (uVar8 < *(uint *)(param_2 + 0xc0)) {
              plVar6 = (long *)(*(long *)(param_2 + 200) + lVar7);
LAB_019138bc:
              lVar7 = *plVar6;
              goto LAB_019138c8;
            }
          }
          else if (*(uint *)(param_2 + 0xc0) != 0) {
            plVar6 = *(long **)(param_2 + 200);
            goto LAB_019138bc;
          }
          lVar7 = 0;
LAB_019138c8:
          pfVar2 = (float *)(**(code **)(*(long *)(lVar7 + 0x68) + 0xf0))();
          *param_3 = fVar16 + fVar13 * (*pfVar2 - fVar16);
          return;
        }
        uVar5 = (ulong)*(int *)(param_2 + 0xe0);
        lVar4 = lVar3 + 2;
        lVar7 = lVar7 + 8;
        lVar3 = lVar3 + 1;
        fVar18 = fVar12;
        fVar19 = fVar19 + *pfVar2;
        fVar16 = fVar16 + fVar10;
      } while (lVar4 < (long)uVar5);
    }
    *param_3 = fVar17;
    param_3[1] = fVar13;
    param_3[2] = fVar14;
    param_3[3] = fVar15;
  }
  return;
}

