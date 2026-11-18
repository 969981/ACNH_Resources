
/* WARNING: Removing unreachable block (ram,0x0340506c) */
/* WARNING: Removing unreachable block (ram,0x03404fbc) */
/* WARNING: Removing unreachable block (ram,0x03404f7c) */
/* WARNING: Removing unreachable block (ram,0x03404f9c) */
/* WARNING: Removing unreachable block (ram,0x03404fdc) */
/* WARNING: Removing unreachable block (ram,0x03405114) */
/* WARNING: Removing unreachable block (ram,0x03405134) */

void FUN_03404d70(uint *param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  ulong uVar12;
  undefined8 uVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  undefined *local_80;
  undefined4 local_78;
  
  *(long *)(param_1 + 4) = param_2[5];
  lVar19 = DAT_05ae7600;
  uVar7 = *(int *)((long)param_2 + 0x24) - (int)param_2[4];
  if (0 < (int)uVar7) {
    if (DAT_05ae7600 == 0) {
      pvVar11 = malloc((long)(int)(uVar7 * 8));
    }
    else {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar19 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_03404e28;
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,(long)(int)(uVar7 * 8),8);
    }
    if (pvVar11 != (void *)0x0) {
      *(void **)(param_1 + 2) = pvVar11;
      *param_1 = 0;
      param_1[1] = uVar7;
    }
  }
LAB_03404e28:
  iVar17 = (int)param_2[4];
  iVar6 = *(int *)((long)param_2 + 0x24);
  if (iVar6 == iVar17) {
    uVar18 = *param_1;
  }
  else {
    do {
      uVar12 = (**(code **)(*param_2 + 8))(param_2);
      if ((uVar12 & 1) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (**(code **)*param_2)(param_2,iVar17);
      }
      uVar18 = *param_1;
      if ((int)uVar18 < (int)param_1[1]) {
        *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar18 * 8) = uVar13;
        uVar18 = *param_1 + 1;
        *param_1 = uVar18;
      }
      iVar17 = iVar17 + 1;
    } while (iVar6 != iVar17);
  }
  if (uVar18 == 0) {
    param_1[6] = 0;
  }
  else {
    lVar20 = *(long *)(param_1 + 2);
    lVar19 = 0;
    lVar9 = (long)(int)uVar18 << 3;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    fVar21 = NAN;
    do {
      local_78 = 8;
      plVar10 = *(long **)(*(long *)(lVar20 + lVar19 * 8) + 0x1d0);
      local_80 = puVar1;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_80);
      pfVar14 = (float *)(**(code **)(plVar10[3] + 0xa0))(plVar10[1]);
      if (*pfVar14 <= fVar21) {
        uVar18 = (uint)lVar19;
        break;
      }
      lVar19 = lVar19 + 1;
      lVar9 = lVar9 + -8;
      fVar21 = *pfVar14;
    } while (lVar9 != 0);
    param_1[6] = uVar18;
    if (*param_1 != 0) {
      lVar19 = (long)(int)*param_1 << 3;
      plVar10 = *(long **)(param_1 + 2);
      do {
        lVar9 = *plVar10;
        *(long *)(*(long *)(lVar9 + 0x218) + 0x1478) = *(long *)(lVar9 + 0x218);
        *(long *)(*(long *)(lVar9 + 0x218) + 0x1470) = *(long *)(lVar9 + 0x218);
        *(long *)(*(long *)(lVar9 + 0x218) + 0x1460) = *(long *)(lVar9 + 0x218);
        lVar19 = lVar19 + -8;
        *(long *)(*(long *)(lVar9 + 0x218) + 0x1468) = *(long *)(lVar9 + 0x218);
        plVar10 = plVar10 + 1;
      } while (lVar19 != 0);
    }
  }
  if ((0 < (int)uVar7) && ((int)param_2[6] == 1)) {
    uVar12 = 0;
    do {
      uVar3 = uVar12 + uVar18;
      if (uVar18 != 0) {
        do {
          uVar8 = DAT_0418ea88;
          uVar2 = uVar12 + 1;
          if ((uVar2 < uVar3) && ((int)uVar2 < (int)uVar7)) {
            uVar15 = (ulong)*param_1;
            if (uVar12 < uVar15) {
              lVar19 = *(long *)(*(long *)(param_1 + 2) + uVar12 * 8);
              if (uVar2 < uVar15) goto LAB_034050ec;
LAB_034050d4:
              lVar9 = 0;
            }
            else {
              lVar19 = 0;
              if (uVar15 <= uVar2) goto LAB_034050d4;
LAB_034050ec:
              lVar9 = *(long *)(*(long *)(param_1 + 2) + uVar12 * 8 + 8);
            }
            *(undefined8 *)(*(long *)(lVar19 + 0x218) + 0x1478) = *(undefined8 *)(lVar9 + 0x218);
            puVar4 = (undefined8 *)(*(long *)(lVar9 + 0x218) + 0x1460);
            puVar5 = puVar4 + uVar8;
            if (7 < uVar8) {
              puVar5 = puVar4;
            }
            *puVar5 = *(undefined8 *)(lVar19 + 0x218);
          }
          uVar8 = DAT_0418ea80;
          uVar15 = uVar18 + uVar12;
          if ((int)uVar15 < (int)uVar7) {
            uVar16 = (ulong)*param_1;
            if (uVar12 < uVar16) {
              lVar19 = *(long *)(*(long *)(param_1 + 2) + uVar12 * 8);
              if (uVar15 < uVar16) goto LAB_0340519c;
LAB_03405188:
              lVar9 = 0;
            }
            else {
              lVar19 = 0;
              if (uVar16 <= uVar15) goto LAB_03405188;
LAB_0340519c:
              lVar9 = *(long *)(*(long *)(param_1 + 2) + (ulong)uVar18 * 8 + uVar12 * 8);
            }
            *(undefined8 *)(*(long *)(lVar19 + 0x218) + 0x1468) = *(undefined8 *)(lVar9 + 0x218);
            puVar4 = (undefined8 *)(*(long *)(lVar9 + 0x218) + 0x1460);
            puVar5 = puVar4 + uVar8;
            if (7 < uVar8) {
              puVar5 = puVar4;
            }
            *puVar5 = *(undefined8 *)(lVar19 + 0x218);
          }
          uVar12 = uVar2;
        } while (uVar2 < uVar3);
      }
      uVar12 = uVar3;
    } while ((int)uVar3 < (int)uVar7);
  }
  return;
}

