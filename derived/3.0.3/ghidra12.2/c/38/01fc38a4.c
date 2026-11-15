
undefined8
FUN_01fc38a4(long param_1,long param_2,float *param_3,float *param_4,uint param_5,uint param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  if (param_7 - 1U < 3) {
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    uVar1 = *(int *)(lVar6 + 0x2b4) + *(int *)(&PTR_DAT_04a69d78)[(int)(param_7 - 1U)];
    uVar5 = (ulong)(uVar1 >> 0x18);
    fVar7 = (float)(uVar1 & 0xffffff) * 5.9604645e-08;
    uVar1 = *(int *)(lVar6 + 0x2b4) + 0x20000000U >> 0x1e;
    fVar8 = *(float *)(lVar6 + 0x278) +
            ((float)(&DAT_04199798)[uVar5 * 4] + fVar7 * (float)(&DAT_0419979c)[uVar5 * 4]) * 5.0 +
            -2.5;
    fVar7 = ((float)(&DAT_041997a0)[uVar5 * 4] + fVar7 * (float)(&DAT_041997a4)[uVar5 * 4]) * 5.0 +
            *(float *)(lVar6 + 0x280) + -2.5;
    iVar2 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iVar3 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    if (((param_5 & 1) != 0) && (uVar1 != 1)) {
      fVar8 = *param_3;
      fVar7 = (float)(iVar2 + 1) * 5.0 + 5.0;
      bVar4 = false;
      if (((float)iVar2 * 5.0 <= fVar8) && (bVar4 = false, !NAN(fVar8) && !NAN(fVar7))) {
        bVar4 = fVar8 < fVar7;
      }
      if (bVar4) {
        fVar8 = param_3[2];
        fVar7 = (float)(iVar3 + 1) * 5.0 + 5.0;
        bVar4 = false;
        if (((float)iVar3 * 5.0 <= fVar8) && (bVar4 = false, !NAN(fVar8) && !NAN(fVar7))) {
          bVar4 = fVar8 < fVar7;
        }
        if ((bVar4) && (uVar5 = FUN_01fa4014(param_1,param_2 + 0x50,param_3,1), (uVar5 & 1) != 0))
        goto LAB_01fc3ad0;
      }
    }
    if (((param_6 & 1) != 0) && (uVar1 != 3)) {
      fVar8 = *param_4;
      fVar7 = (float)(iVar2 + 1) * 5.0 + 5.0;
      bVar4 = false;
      if (((float)iVar2 * 5.0 <= fVar8) && (bVar4 = false, !NAN(fVar8) && !NAN(fVar7))) {
        bVar4 = fVar8 < fVar7;
      }
      if (bVar4) {
        fVar8 = param_4[2];
        fVar7 = (float)(iVar3 + 1) * 5.0 + 5.0;
        bVar4 = false;
        if (((float)iVar3 * 5.0 <= fVar8) && (bVar4 = false, !NAN(fVar8) && !NAN(fVar7))) {
          bVar4 = fVar8 < fVar7;
        }
        if (bVar4) {
          uVar5 = FUN_01fa4014(param_1,param_2 + 0x50,param_4,0);
          param_3 = param_4;
          if ((uVar5 & 1) == 0) {
            return 0;
          }
LAB_01fc3ad0:
          *(float *)(param_2 + 0x44) = *param_3;
          *(float *)(param_2 + 0x48) = param_3[1];
          *(float *)(param_2 + 0x4c) = param_3[2];
          return 1;
        }
      }
    }
  }
  return 0;
}

