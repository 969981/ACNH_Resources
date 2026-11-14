
void FUN_01738aa0(long param_1,long param_2)

{
  long lVar1;
  float *pfVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  short *psVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = *(float *)(param_1 + 0x54);
  fVar9 = 0.0;
  if (fVar8 <= 1.0) {
    fVar9 = 1.0 - fVar8;
  }
  if ((param_2 != 0) && (lVar5 = *(long *)(param_2 + 0x1150), lVar5 != 0)) {
    iVar4 = *(int *)(param_1 + 0x50);
    if (iVar4 < 0) {
      FUN_01738690(param_1);
      iVar4 = *(int *)(param_1 + 0x50);
    }
    if (0 < iVar4) {
      lVar1 = FUN_0251e98c(1);
      pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x2500) + 0xf0))(lVar1 + 0x2500);
      fVar7 = 1.0;
      if (0.0 <= fVar8) {
        fVar7 = fVar9;
      }
      fVar8 = *pfVar2 + fVar7 * (1.0 - *pfVar2);
      fVar9 = 1.0;
      if (fVar8 <= 1.0) {
        fVar9 = fVar8;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar8) {
        fVar7 = fVar9;
      }
      if (0 < *(int *)(param_1 + 0x50)) {
        lVar1 = 0;
        psVar6 = (short *)(param_1 + 4);
        do {
          plVar3 = (long *)**(undefined8 **)(*(long *)(lVar5 + 0x38) + (long)psVar6[-2] * 8);
          (**(code **)(*plVar3 + 0x118))(fVar7,plVar3,(long)psVar6[-1],(long)*psVar6);
          lVar1 = lVar1 + 1;
          psVar6 = psVar6 + 4;
        } while (lVar1 < *(int *)(param_1 + 0x50));
      }
    }
  }
  return;
}

