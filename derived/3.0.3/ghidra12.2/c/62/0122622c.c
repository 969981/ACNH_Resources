
void FUN_0122622c(long param_1,long param_2,float *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x86c0) + 0xf0))((long *)(param_1 + 0x86c0));
  fVar12 = *pfVar4;
  if ((param_4 & 1) == 0) {
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x86f0) + 0xf0))();
    fVar10 = *pfVar4;
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x8750) + 0xf0))();
    fVar8 = *pfVar4;
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x8720) + 0xf0))((long *)(param_1 + 0x8720));
    fVar12 = *param_3 - fVar12;
    fVar10 = fVar10 + *param_3;
    fVar8 = param_3[2] - fVar8;
    fVar9 = *pfVar4 + param_3[2];
    iVar5 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    iVar6 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iVar2 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    iVar3 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iVar1 = iVar5;
    if (iVar2 <= iVar5) {
      iVar1 = iVar2;
    }
    if (iVar5 <= iVar2) {
      iVar5 = iVar2;
    }
    iVar2 = iVar6;
    if (iVar3 <= iVar6) {
      iVar2 = iVar3;
    }
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    *(int *)(param_2 + 0x10) = iVar1;
    *(int *)(param_2 + 0x14) = iVar2;
  }
  else {
    plVar7 = (long *)(param_1 + 0x8780);
    pfVar4 = (float *)(**(code **)(*plVar7 + 0xf0))(plVar7);
    fVar8 = *pfVar4;
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x86f0) + 0xf0))();
    fVar13 = *pfVar4;
    pfVar4 = (float *)(**(code **)(*plVar7 + 0xf0))(plVar7);
    fVar9 = *pfVar4;
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x8750) + 0xf0))();
    fVar14 = *pfVar4;
    plVar7 = (long *)(param_1 + 0x87b0);
    pfVar4 = (float *)(**(code **)(*plVar7 + 0xf0))(plVar7);
    fVar10 = *pfVar4;
    pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x8720) + 0xf0))((long *)(param_1 + 0x8720));
    fVar15 = *pfVar4;
    pfVar4 = (float *)(**(code **)(*plVar7 + 0xf0))(plVar7);
    fVar11 = *param_3 - (fVar12 + fVar8);
    fVar8 = param_3[2] - (fVar14 + fVar10);
    fVar12 = fVar13 + fVar9 + *param_3;
    fVar9 = fVar15 + *pfVar4 + param_3[2];
    iVar5 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    iVar6 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iVar2 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    iVar3 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iVar1 = iVar5;
    if (iVar2 <= iVar5) {
      iVar1 = iVar2;
    }
    if (iVar5 <= iVar2) {
      iVar5 = iVar2;
    }
    iVar2 = iVar6;
    if (iVar3 <= iVar6) {
      iVar2 = iVar3;
    }
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    *(int *)(param_2 + 0x10) = iVar1;
    *(int *)(param_2 + 0x14) = iVar2;
  }
  fVar12 = 0.0;
  *(int *)(param_2 + 0x20) = iVar5;
  *(int *)(param_2 + 0x24) = iVar6;
  if (fVar8 != fVar9) {
    fVar12 = 0.0 / (fVar9 - fVar8);
  }
  *(float *)(param_2 + 0x28) = fVar12;
  return;
}

