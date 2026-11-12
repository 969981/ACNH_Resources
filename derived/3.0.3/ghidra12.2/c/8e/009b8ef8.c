
/* WARNING: Type propagation algorithm not settling */

void FUN_009b8ef8(long param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  char cVar11;
  uint uVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  
  if (*(int *)(param_1 + 0x14) != param_3) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(int *)(param_1 + 0x14) = param_3;
  lVar15 = *(long *)(DAT_04d07da8 + 0x48);
  if (lVar15 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x12) = 1;
  if (*(char *)(param_1 + 0x11) != '\0') {
    fVar16 = *(float *)(param_1 + 0x18);
    piVar7 = (int *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x2890) + (long)param_3 * 8) + 0xf0)
                    )();
    if (fVar16 < (float)*piVar7) {
      *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + 1.0;
      return;
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((int)param_2[2] < 1) {
    return;
  }
  puVar13 = (ulong *)(param_1 + 8);
  uVar9 = *puVar13;
  uVar6 = (uint)(uVar9 >> 0x20);
  uVar14 = (int)uVar9 - ((uint)(uVar9 >> 1) & 0x55555555);
  uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
  uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
  uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
  uVar14 = uVar14 + (uVar14 >> 8);
  uVar6 = uVar6 + (uVar6 >> 8);
  if ((uVar6 + (uVar6 >> 0x10) & 0x3f) + (uVar14 + (uVar14 >> 0x10) & 0x3f) < 0x3c) {
    cVar11 = *(char *)(param_1 + 0x10);
  }
  else {
    cVar11 = '\0';
    uVar9 = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  uVar6 = (uint)(uVar9 >> 0x20);
  bVar4 = true;
  uVar14 = (uint)uVar9 - ((uint)uVar9 >> 1 & 0x55555555);
  uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
  uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
  uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
  uVar14 = uVar14 + (uVar14 >> 8);
  uVar6 = uVar6 + (uVar6 >> 8);
  iVar3 = param_4 * 5 + param_3 * 0x14 + -5;
  *(ulong *)(param_1 + 8) =
       1L << ((ulong)((uVar6 + (uVar6 >> 0x10) & 0x3f) + (uVar14 + (uVar14 >> 0x10) & 0x3f)) & 0x3f)
       | uVar9;
  if (0x9f < (uint)(iVar3 + cVar11)) {
    uVar14 = 0xffffffff;
    goto LAB_009b91a8;
  }
  puVar8 = (uint *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x2ad8) +
                                           (ulong)(uint)(iVar3 + cVar11) * 8) + 0xf0))();
  uVar14 = *puVar8;
  switch(uVar14) {
  case 1:
  case 2:
    break;
  case 3:
    uVar14 = 8;
    break;
  case 4:
    uVar14 = 0x10;
    break;
  case 5:
    uVar14 = 0x2000;
    break;
  case 6:
    uVar14 = 0x4000;
    break;
  case 7:
    uVar14 = 0x400000;
    break;
  case 8:
    uVar14 = 0x800000;
    break;
  case 9:
    uVar14 = 0x100000;
    break;
  case 10:
    uVar14 = 0x200000;
    break;
  case 0xb:
    uVar14 = 0x40000;
    break;
  case 0xc:
    uVar14 = 0x80000;
    break;
  case 0xd:
    uVar14 = 0x10000;
    break;
  case 0xe:
    uVar14 = 0x20000;
    break;
  case 0xf:
    bVar4 = false;
    uVar14 = 0x400000;
    goto LAB_009b91a8;
  case 0x10:
    bVar4 = false;
    uVar14 = 0x800000;
    goto LAB_009b91a8;
  case 0x11:
    uVar14 = 4;
    break;
  case 0x12:
    uVar14 = 0x20;
    break;
  default:
    uVar14 = 0xffffffff;
  }
  bVar4 = true;
LAB_009b91a8:
  uVar6 = uVar14;
  if (*(char *)(param_1 + 0x10) != 0) {
    uVar6 = (iVar3 + *(char *)(param_1 + 0x10)) - 1;
    if (uVar6 < 0xa0) {
      piVar7 = (int *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x2ad8) + (ulong)uVar6 * 8) + 0xf0
                                  ))();
      if (*piVar7 - 1U < 0x12) {
        uVar6 = *(uint *)(&DAT_0416804c + (long)(int)(*piVar7 - 1U) * 4);
        goto LAB_009b91fc;
      }
    }
    uVar6 = 0xffffffff;
  }
LAB_009b91fc:
  if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
    if ((int)uVar14 < 0x20000) {
      if (uVar14 == 4) {
        uVar14 = 0x2000;
      }
      else if (uVar14 == 0x20) {
        uVar14 = 0x4000;
      }
      else if (uVar14 == 0x10000) {
        uVar14 = 0x100000;
      }
    }
    else if (uVar14 == 0x80000) {
      uVar14 = 0x800000;
    }
    else if (uVar14 == 0x40000) {
      uVar14 = 0x400000;
    }
    else if (uVar14 == 0x20000) {
      uVar14 = 0x200000;
    }
    if ((int)uVar6 < 0x20000) {
      if (uVar6 == 4) {
        uVar6 = 0x2000;
      }
      else if (uVar6 == 0x20) {
        uVar6 = 0x4000;
      }
      else if (uVar6 == 0x10000) {
        uVar6 = 0x100000;
      }
    }
    else if (uVar6 == 0x80000) {
      uVar6 = 0x800000;
    }
    else if (uVar6 == 0x40000) {
      uVar6 = 0x400000;
    }
    else if (uVar6 == 0x20000) {
      uVar6 = 0x200000;
    }
  }
  if (!bVar4) {
    if (uVar14 == 0x800000) {
      uVar9 = FUN_009b9580(param_1,param_2,1);
    }
    else {
      uVar9 = FUN_009b9580(param_1,param_2,0);
    }
    if ((uVar9 & 1) == 0) {
      return;
    }
  }
  uVar2 = (uint)(CONCAT44(uVar14,uVar14 - 0x100000) >> 0x14);
  uVar12 = uVar14;
  if ((uVar2 < 8) && ((0x8bU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    uVar12 = *(uint *)(&UNK_040586a0 + (long)(int)uVar2 * 4);
  }
  lVar10 = *param_2;
  if ((int)param_2[2] == 0) {
    if ((*(uint *)(lVar10 + 0x1044) & uVar14) == 0) {
      bVar5 = false;
      if ((*(uint *)(lVar10 + 0x1044) & uVar12) == 0) {
        bVar5 = bVar4;
      }
      if (bVar5) {
        uVar14 = *(uint *)(lVar10 + 0xfc0);
        goto LAB_009b93f0;
      }
    }
  }
  else {
    iVar1 = 0;
    if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
      iVar1 = (int)param_2[1];
    }
    uVar2 = *(uint *)(lVar10 + ((long)*(int *)((long)param_2 + 0xc) - (long)iVar1) * 0x1060 + 0x1044
                     );
    if ((uVar2 & uVar14) == 0) {
      bVar5 = false;
      if ((uVar2 & uVar12) == 0) {
        bVar5 = bVar4;
      }
      if (bVar5) {
        iVar1 = 0;
        if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
          iVar1 = (int)param_2[1];
        }
        uVar14 = *(uint *)(lVar10 + ((long)*(int *)((long)param_2 + 0xc) - (long)iVar1) * 0x1060 +
                          0xfc0);
LAB_009b93f0:
        if ((uVar14 & 0xf7601b) == 0) {
          if (((uVar14 >> 0x13 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) goto LAB_009b9490;
          if (*(char *)(param_1 + 0x10) == '\0') goto LAB_009b9500;
LAB_009b94c0:
          uVar6 = FUN_009b950c(puVar13);
          uVar14 = (iVar3 + *(char *)(param_1 + 0x10)) - 1;
          if ((uVar14 < 0xa0) &&
             (puVar8 = (uint *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x4e30) +
                                                       (ulong)uVar14 * 8) + 0xf0))(),
             uVar6 < *puVar8)) {
            return;
          }
        }
        else if (*(char *)(param_1 + 0x10) != '\0') {
LAB_009b9490:
          if ((int)param_2[2] != 0) {
            iVar1 = 0;
            if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
              iVar1 = (int)param_2[1];
            }
            lVar10 = lVar10 + (long)(*(int *)((long)param_2 + 0xc) - iVar1) * 0x1060;
          }
          if ((*(uint *)(lVar10 + 0xfc0) & uVar6) != 0) goto LAB_009b94c0;
        }
LAB_009b9500:
        cVar11 = '\0';
        *puVar13 = 0;
        goto LAB_009b9464;
      }
    }
  }
  if (((*(char *)(param_1 + 0x10) < '\x04') &&
      (uVar14 = iVar3 + *(char *)(param_1 + 0x10) + 1, uVar14 < 0xa0)) &&
     (piVar7 = (int *)(**(code **)(**(long **)(*(long *)(lVar15 + 0x4e30) + (ulong)uVar14 * 8) +
                                  0xf0))(), *piVar7 != 0)) {
    *(undefined8 *)(param_1 + 8) = 0;
    cVar11 = *(char *)(param_1 + 0x10) + '\x01';
  }
  else {
    cVar11 = '\0';
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
LAB_009b9464:
  *(char *)(param_1 + 0x10) = cVar11;
  return;
}

