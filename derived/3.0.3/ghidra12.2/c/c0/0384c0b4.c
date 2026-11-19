
undefined8 FUN_0384c0b4(float param_1,float *param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (*(long *)(param_3 + 0x30) == 0) {
    return 0;
  }
  plVar6 = *(long **)(*(long *)(param_3 + 0x30) + 0x18);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar1 = plVar6 + 3;
    }
    if (((long *)*plVar1 != (long *)0x0) && (lVar15 = *(long *)*plVar1, lVar15 != 0)) {
      (**(code **)(*plVar6 + 0x10))();
      puVar11 = (ulong *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_4 + 0x18));
      puVar2 = puVar11 + 0x20000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_4 + 0x18)) {
        puVar2 = puVar11;
      }
      if ((*puVar2 >> ((ulong)param_5 & 0x3f) & 1) != 0) {
        uVar9 = *puVar2 & 0xffffffffffffffffU >> (~(ulong)param_5 & 0x3f);
        uVar7 = (int)uVar9 - ((uint)(uVar9 >> 1) & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar5 = (uint)(uVar9 >> 0x20);
        uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
        uVar5 = uVar5 + (uVar5 >> 8);
        uVar7 = *(uint *)((long)puVar2 +
                         (long)(int)((uVar7 + (uVar7 >> 0x10) & 0x3f) +
                                     (uVar5 + (uVar5 >> 0x10) & 0x3f) + -1) * 4 + 8);
        if (((uVar7 >> 0x18 == 2) && (lVar8 = *(long *)(lVar15 + 0x58), lVar8 != 0)) &&
           (*(long *)(lVar15 + 0x60) != 0)) {
          uVar12 = (ulong)uVar7 & 0xffffff;
          lVar13 = lVar8 + uVar12 * 0x14;
          uVar4 = *(ushort *)(lVar13 + 2);
          uVar9 = (ulong)uVar4;
          lVar15 = *(long *)(lVar15 + 0x60) + (ulong)*(ushort *)(lVar8 + uVar12 * 0x14) * 8;
          uVar7 = (uint)uVar4;
          if (*(short *)(lVar13 + 4) == 0) {
            pfVar14 = (float *)(lVar15 + 4);
            iVar10 = 1;
            do {
              fVar17 = pfVar14[-1];
              if (fVar17 == param_1) {
                fVar16 = *pfVar14;
LAB_0384c2c8:
                if (fVar16 != INFINITY) goto LAB_0384c230;
                break;
              }
              if (param_1 <= fVar17) {
                fVar16 = *pfVar14;
                if (iVar10 != 1) {
                  iVar3 = 0;
                  if ((uint)-iVar10 < uVar7) {
                    iVar3 = -iVar10;
                  }
                  pfVar14 = (float *)(lVar15 + (long)iVar3 * 8);
                  fVar18 = *pfVar14;
                  fVar19 = pfVar14[1];
                  fVar16 = fVar19 + (param_1 - fVar18) * ((fVar16 - fVar19) / (fVar17 - fVar18));
                }
                goto LAB_0384c2c8;
              }
              pfVar14 = pfVar14 + 2;
              iVar10 = iVar10 + -1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uVar5 = 0;
          if (uVar7 != 0) {
            uVar5 = uVar7 - 1;
          }
          fVar16 = *(float *)(lVar15 + (ulong)uVar5 * 8 + 4);
LAB_0384c230:
          *param_2 = fVar16;
          return 1;
        }
      }
    }
  }
  return 0;
}

