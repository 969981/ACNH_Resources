
undefined8 FUN_02ad8220(long param_1,int *param_2,int *param_3,long param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
    fVar8 = (float)*(int *)(param_4 + 8) * 0.5;
    uVar5 = 0;
    if (fVar8 != (float)(int)fVar8) {
      uVar5 = (uint)(fVar8 < 0.0);
    }
    fVar7 = (float)*(int *)(param_4 + 0xc) * 0.5;
    uVar6 = 0;
    if (fVar7 != (float)(int)fVar7) {
      uVar6 = (uint)(fVar7 < 0.0);
    }
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 8) + 200);
      plVar3 = plVar1 + param_5;
      if (2 < param_5) {
        plVar3 = plVar1;
      }
      if ((*plVar3 != 0) && (*(char *)(*plVar3 + 0x48) != '\0')) {
        lVar2 = param_1 + 0x510;
        lVar4 = lVar2 + (ulong)param_5 * 0x70;
        if (2 < param_5) {
          lVar4 = lVar2;
        }
        if (((*(int *)(lVar4 + 0x10) <= (int)((int)fVar8 - uVar5) &&
              (int)((int)fVar8 - uVar5) <= *(int *)(lVar4 + 0x20)) &&
            (*(int *)(lVar4 + 0x14) <= (int)((int)fVar7 - uVar6))) &&
           ((int)((int)fVar7 - uVar6) <= *(int *)(lVar4 + 0x24))) {
          fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x10));
          lVar4 = lVar2 + (ulong)param_5 * 0x70;
          if (2 < param_5) {
            lVar4 = lVar2;
          }
          fVar10 = (float)(*(int *)(param_4 + 8) - *(int *)(lVar4 + 0x68));
          fVar11 = (float)(*(int *)(param_4 + 0xc) - *(int *)(lVar4 + 0x6c));
          fVar7 = sinf(fVar8 * 1.4629181e-09);
          fVar8 = cosf(fVar8 * 1.4629181e-09);
          fVar9 = -(fVar7 * fVar11) + fVar10 * fVar8;
          fVar8 = fVar8 * fVar11 + fVar10 * fVar7;
          fVar7 = 0.5;
          if (fVar9 < 0.0) {
            fVar7 = -0.5;
          }
          fVar10 = 0.5;
          if (fVar8 < 0.0) {
            fVar10 = -0.5;
          }
          *param_2 = (int)(fVar9 + fVar7);
          *param_3 = (int)(fVar8 + fVar10);
          return 1;
        }
      }
    }
  }
  return 0;
}

