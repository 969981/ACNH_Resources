
/* WARNING: Removing unreachable block (ram,0x02a08204) */
/* WARNING: Removing unreachable block (ram,0x02a08188) */
/* WARNING: Removing unreachable block (ram,0x02a08164) */
/* WARNING: Removing unreachable block (ram,0x02a081dc) */
/* WARNING: Removing unreachable block (ram,0x02a0821c) */

void FUN_02a08108(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 float *param_5,long param_6,long *param_7,long param_8)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  
  if (param_6 == 0) {
    *param_1 = 0;
    fVar8 = 0.0;
    *param_2 = 0;
    *param_3 = 0;
    goto LAB_02a083b8;
  }
  if (param_1 == (undefined4 *)0x0) {
    plVar2 = (long *)0x0;
    if (param_2 != (undefined4 *)0x0) goto LAB_02a08170;
LAB_02a081b0:
    plVar6 = (long *)0x0;
  }
  else {
    plVar2 = *(long **)(param_6 + 0x68);
    if (param_2 == (undefined4 *)0x0) goto LAB_02a081b0;
LAB_02a08170:
    plVar6 = *(long **)(param_6 + 0x70);
  }
  plVar1 = (long *)0x0;
  if (param_3 != (undefined4 *)0x0) {
    plVar1 = param_7;
  }
  if (param_4 == (undefined4 *)0x0) {
    plVar4 = (long *)0x0;
    if (param_5 != (float *)0x0) goto LAB_02a081e8;
LAB_02a08230:
    plVar5 = (long *)0x0;
    plVar7 = (long *)0x0;
    lVar3 = 0;
  }
  else {
    plVar4 = *(long **)(param_6 + 0x78);
    if (param_5 == (float *)0x0) goto LAB_02a08230;
LAB_02a081e8:
    lVar3 = *(long *)(param_6 + 0x90);
    plVar5 = *(long **)(param_6 + 0x80);
    if (lVar3 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = *(long **)(param_6 + 0x60);
    }
  }
  fVar14 = -1.0;
  fVar8 = -1.0;
  if (plVar2 != (long *)0x0) {
    fVar8 = *(float *)(param_8 + 0xc) / 10.0;
  }
  fVar17 = -1.0;
  if (plVar6 != (long *)0x0) {
    fVar17 = *(float *)(param_8 + 8) / 10.0;
  }
  fVar15 = -1.0;
  if (plVar4 != (long *)0x0) {
    fVar15 = *(float *)(param_8 + 0x10) / 10.0;
  }
  if (plVar5 != (long *)0x0) {
    fVar14 = *(float *)(param_8 + 0x14) / 10.0;
  }
  uVar10 = 0;
  uVar9 = 0;
  if (plVar2 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar2 + 0x28))(fVar8);
  }
  if (plVar6 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar6 + 0x28))(fVar17,plVar6);
  }
  uVar11 = uVar10;
  if (plVar1 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar1 + 0x28))(fVar17,plVar1);
  }
  if (plVar4 == (long *)0x0) {
    uVar16 = 0;
    uVar12 = 0;
    if (plVar5 != (long *)0x0) goto LAB_02a08304;
LAB_02a08390:
    fVar8 = 1.0;
  }
  else {
    uVar12 = (**(code **)(*plVar4 + 0x28))(fVar15,plVar4);
    uVar16 = uVar12;
    if (plVar5 == (long *)0x0) goto LAB_02a08390;
LAB_02a08304:
    fVar8 = (float)(**(code **)(*plVar5 + 0x28))(fVar14,plVar5);
    uVar16 = uVar12;
    if ((plVar7 != (long *)0x0) && (*(char *)(lVar3 + 0x58) != '\0')) {
      fVar17 = (float)(**(code **)(*plVar7 + 0x30))(plVar7);
      if (fVar17 == 0.0) {
        fVar17 = *(float *)(lVar3 + 0x50);
        if (fVar17 <= 0.0) {
LAB_02a083e8:
          fVar13 = 1.0;
        }
        else {
          fVar13 = 0.0;
          if (fVar14 < fVar17) {
            fVar15 = *(float *)(lVar3 + 0x54);
            if (fVar15 <= 0.0) goto LAB_02a083e8;
            fVar13 = 1.0;
            if (fVar17 - fVar15 < fVar14) {
              fVar15 = (fVar14 - (fVar17 - fVar15)) / fVar15;
LAB_02a08434:
              fVar13 = (1.0 - fVar15) * (1.0 - fVar15);
            }
          }
        }
      }
      else {
        fVar15 = *(float *)(lVar3 + 0x54);
        fVar17 = fVar17 + fVar15;
        if (fVar17 <= 0.0) {
LAB_02a08440:
          fVar13 = 1.0;
        }
        else {
          fVar13 = 0.0;
          if (fVar14 < fVar17) {
            if (fVar15 <= 0.0) goto LAB_02a08440;
            fVar13 = 1.0;
            if (fVar17 - fVar15 < fVar14) {
              fVar15 = (fVar14 - (fVar17 - fVar15)) / fVar15;
              goto LAB_02a08434;
            }
          }
        }
      }
      fVar8 = fVar8 * fVar13;
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar9;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar10;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar11;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar16;
  }
  if (param_5 == (float *)0x0) {
    return;
  }
LAB_02a083b8:
  *param_5 = fVar8;
  return;
}

