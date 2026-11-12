
undefined8 FUN_009ba4b0(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  int *piVar7;
  float *pfVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  int local_74;
  
  lVar13 = *(long *)(DAT_04d07da8 + 0x48);
  if (lVar13 == 0) {
LAB_009ba748:
    uVar9 = 0;
  }
  else {
    uVar15 = *(uint *)(param_1 + 0xc);
    iVar14 = 0;
    do {
      if ((int)uVar15 < 2) goto LAB_009ba748;
      uVar4 = *(uint *)(param_3 + 2);
      uVar15 = uVar15 - 1;
      lVar10 = *param_3;
      lVar12 = lVar10;
      if (uVar15 < uVar4) {
        iVar16 = *(int *)((long)param_3 + 0xc) + uVar15;
        iVar1 = 0;
        if ((int)param_3[1] <= iVar16) {
          iVar1 = (int)param_3[1];
        }
        lVar12 = lVar10 + (long)(iVar16 - iVar1) * 0x1060;
      }
      lVar3 = lVar12 + (ulong)*(uint *)(param_1 + 0x10) * 0x830;
      if (1 < *(uint *)(param_1 + 0x10)) {
        lVar3 = lVar12;
      }
      uVar5 = *(uint *)(lVar3 + 0x780);
      if (((int)uVar5 < 2) || (uVar5 == 2)) {
        local_74 = 0;
      }
      else {
        iVar16 = uVar5 - 2;
        local_74 = 0;
        uVar11 = (ulong)uVar5 - 1;
        do {
          lVar10 = *param_3;
          if (uVar15 < *(uint *)(param_3 + 2)) {
            iVar1 = *(int *)((long)param_3 + 0xc) + uVar15;
            iVar2 = 0;
            if ((int)param_3[1] <= iVar1) {
              iVar2 = (int)param_3[1];
            }
            lVar10 = lVar10 + (long)(iVar1 - iVar2) * 0x1060;
          }
          lVar12 = lVar10 + (ulong)*(uint *)(param_1 + 0x10) * 0x830;
          if (1 < *(uint *)(param_1 + 0x10)) {
            lVar12 = lVar10;
          }
          lVar10 = lVar12 + (uVar11 - 1 & 0xffffffff) * 0x78;
          if (0x10 < uVar11) {
            lVar10 = lVar12;
          }
          fVar17 = *(float *)(lVar10 + 0x28);
          fVar6 = -fVar17;
          if (0.0 <= fVar17) {
            fVar6 = fVar17;
          }
          pfVar8 = (float *)(**(code **)(*(long *)(lVar13 + 0x1640) + 0xf0))
                                      ((long *)(lVar13 + 0x1640));
          if (*pfVar8 <= fVar6) {
            piVar7 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar13 + 0x1710) + 0xf0))();
            if (*piVar7 < iVar14) {
              piVar7 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar13 + 0x1710) + 0xf0))();
              iVar1 = *piVar7;
              piVar7 = (int *)(**(code **)(**(long **)(*(long *)(lVar13 + 0x1710) + 8) + 0xf0))();
              if (fVar17 <= 0.0 && iVar14 <= *piVar7 + iVar1) {
                local_74 = local_74 + 1;
              }
            }
            else if (0.0 < fVar17) {
              local_74 = local_74 + 1;
            }
          }
          iVar16 = iVar16 + -1;
          uVar11 = uVar11 - 1;
        } while (iVar16 != 0);
        uVar4 = *(uint *)(param_3 + 2);
        lVar10 = *param_3;
      }
      if (uVar15 < uVar4) {
        iVar16 = *(int *)((long)param_3 + 0xc) + uVar15;
        iVar1 = 0;
        if ((int)param_3[1] <= iVar16) {
          iVar1 = (int)param_3[1];
        }
        lVar10 = lVar10 + (long)(iVar16 - iVar1) * 0x1060;
      }
      lVar12 = lVar10 + (ulong)*(uint *)(param_1 + 0x10) * 0x830;
      if (1 < *(uint *)(param_1 + 0x10)) {
        lVar12 = lVar10;
      }
      iVar16 = *(int *)(lVar12 + 0x780);
      if (iVar16 < 0) {
        iVar16 = iVar16 + 1;
      }
      if (iVar16 >> 1 < local_74) {
        iVar14 = iVar14 + 1;
      }
      piVar7 = (int *)(**(code **)(*(long *)**(undefined8 **)(lVar13 + 0x1710) + 0xf0))();
      iVar16 = *piVar7;
      piVar7 = (int *)(**(code **)(**(long **)(*(long *)(lVar13 + 0x1710) + 8) + 0xf0))();
    } while (iVar14 < *piVar7 + iVar16);
    uVar9 = 1;
    *param_2 = (char)uVar15;
  }
  return uVar9;
}

