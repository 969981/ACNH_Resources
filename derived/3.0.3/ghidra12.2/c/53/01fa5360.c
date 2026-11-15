
undefined8 FUN_01fa5360(long param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0xaf9c) == '\0') {
    return 1;
  }
  uVar4 = *(uint *)(param_1 + 0xafa0);
  if ((uVar4 < 0x10) && ((0xbf6fU >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
    uVar4 = *(uint *)(&DAT_041793fc + (long)(int)uVar4 * 4);
    if (param_2 < 0x10) {
      uVar6 = 1;
      if ((1 << (ulong)(param_2 & 0x1f) & 0xb32fU) == 0) {
        if ((1 << (ulong)(param_2 & 0x1f) & 0xc00U) == 0) {
          if (param_2 != 6) goto LAB_01fa5468;
        }
        else {
          uVar6 = 3;
          if (uVar4 < 3) goto LAB_01fa5510;
        }
      }
      else {
        uVar6 = 2;
        if (uVar4 < 2) goto LAB_01fa5510;
      }
    }
    else {
LAB_01fa5468:
      uVar6 = 0;
    }
    if (uVar6 == uVar4) {
      iVar1 = *param_3;
      iVar2 = *(int *)(param_1 + 0x11ff8);
      if (iVar2 != 6) {
        lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        if (iVar2 - 2U < 4) {
          fVar8 = 0.0;
          uVar4 = *(int *)(param_1 + 0x11ff8) - 2;
          if (uVar4 < 4) {
            fVar8 = *(float *)(&DAT_04102950 + (long)(int)uVar4 * 4);
          }
        }
        else {
          uVar4 = FUN_006f0400(*(float *)(param_1 + 0x11ffc) - *(float *)(lVar7 + 0x278),
                               *(float *)(param_1 + 0x12004) - *(float *)(lVar7 + 0x280));
          fVar8 = (float)uVar4 * 8.381903e-08;
        }
        fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x2b4));
        fVar8 = fVar8 + fVar9 * -8.381903e-08;
        if (fVar8 <= 180.0) {
          if (fVar8 < -180.0) {
            fVar9 = 360.0;
            goto LAB_01fa54e0;
          }
        }
        else {
          fVar9 = -360.0;
LAB_01fa54e0:
          fVar8 = fVar8 + fVar9;
        }
        bVar3 = false;
        if ((-45.0 < fVar8) && (bVar3 = false, !NAN(fVar8))) {
          bVar3 = fVar8 < 45.0;
        }
        if (bVar3) goto LAB_01fa5524;
      }
      if (iVar1 == 1) goto LAB_01fa5510;
    }
LAB_01fa5524:
    uVar5 = 0;
  }
  else {
LAB_01fa5510:
    uVar5 = 1;
  }
  return uVar5;
}

