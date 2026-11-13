
void FUN_01225ddc(long param_1,long param_2,float *param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  plVar9 = (long *)(param_1 + 0x8690);
  plVar11 = (long *)(param_1 + 0x8570);
  if (DAT_055cdb30 == -0x17df00c3) {
    iVar7 = 0;
    if (DAT_051f0338 != 0) {
      iVar7 = *(int *)(DAT_051f0338 + 0xc);
    }
    bVar5 = iVar7 != 0;
    if ((param_4 & 1) != 0) goto LAB_01225f28;
LAB_01225e64:
    pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x8540) + 0xf0))((long *)(param_1 + 0x8540));
    fVar14 = *pfVar6;
    if ((param_5 & 1) == 0) {
      pfVar6 = (float *)(**(code **)(*plVar11 + 0xf0))(plVar11);
      fVar15 = *pfVar6;
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x85d0) + 0xf0))();
      fVar16 = *pfVar6;
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x85a0) + 0xf0))();
      fVar17 = *pfVar6;
    }
    else {
      plVar10 = (long *)(param_1 + 0x8630);
      pfVar6 = (float *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      fVar14 = fVar14 + *pfVar6;
      pfVar6 = (float *)(**(code **)(*plVar11 + 0xf0))(plVar11);
      fVar15 = *pfVar6;
      pfVar6 = (float *)(**(code **)(*plVar10 + 0xf0))(plVar10);
      fVar15 = fVar15 + *pfVar6;
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x85d0) + 0xf0))();
      fVar16 = *pfVar6;
      pfVar6 = (float *)(**(code **)(*plVar9 + 0xf0))(plVar9);
      fVar16 = fVar16 + *pfVar6;
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x85a0) + 0xf0))();
      fVar17 = *pfVar6;
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x8660) + 0xf0))();
      fVar17 = fVar17 + *pfVar6;
    }
    plVar9 = (long *)(param_1 + 0x8600);
    lVar8 = *plVar9;
  }
  else {
    bVar5 = false;
    if ((param_4 & 1) == 0) goto LAB_01225e64;
LAB_01225f28:
    pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x8450) + 0xf0))((long *)(param_1 + 0x8450));
    fVar14 = *pfVar6;
    if ((param_5 & 1) == 0) {
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x8480) + 0xf0))();
      fVar15 = *pfVar6;
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x84e0) + 0xf0))();
      fVar16 = *pfVar6;
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x84b0) + 0xf0))();
      fVar17 = *pfVar6;
    }
    else {
      plVar11 = (long *)(param_1 + 0x8630);
      pfVar6 = (float *)(**(code **)(*plVar11 + 0xf0))(plVar11);
      fVar14 = fVar14 + *pfVar6;
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x8480) + 0xf0))();
      fVar15 = *pfVar6;
      pfVar6 = (float *)(**(code **)(*plVar11 + 0xf0))(plVar11);
      fVar15 = fVar15 + *pfVar6;
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x84e0) + 0xf0))();
      fVar16 = *pfVar6;
      pfVar6 = (float *)(**(code **)(*plVar9 + 0xf0))(plVar9);
      fVar16 = fVar16 + *pfVar6;
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x84b0) + 0xf0))();
      fVar17 = *pfVar6;
      pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x8660) + 0xf0))
                                  ((long *)(param_1 + 0x8660));
      fVar17 = fVar17 + *pfVar6;
    }
    if (bVar5) {
      fVar14 = *param_3 - fVar14;
      fVar16 = param_3[2] - fVar16;
      fVar15 = fVar15 + *param_3;
      fVar17 = fVar17 + param_3[2];
      fVar12 = 0.0;
      iVar1 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
      iVar2 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      iVar3 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      iVar4 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
      iVar7 = iVar1;
      if (iVar3 <= iVar1) {
        iVar7 = iVar3;
      }
      if (iVar1 <= iVar3) {
        iVar1 = iVar3;
      }
      iVar3 = iVar2;
      if (iVar4 <= iVar2) {
        iVar3 = iVar4;
      }
      if (iVar2 <= iVar4) {
        iVar2 = iVar4;
      }
      *(int *)(param_2 + 0x10) = iVar7;
      *(int *)(param_2 + 0x14) = iVar3;
      *(int *)(param_2 + 0x20) = iVar1;
      *(int *)(param_2 + 0x24) = iVar2;
      if (fVar16 != fVar17) {
        fVar12 = 0.0 / (fVar17 - fVar16);
      }
      goto LAB_01226208;
    }
    plVar9 = (long *)(param_1 + 0x8510);
    lVar8 = *plVar9;
  }
  pfVar6 = (float *)(**(code **)(lVar8 + 0xf0))(plVar9);
  fVar14 = *param_3 - fVar14;
  fVar16 = param_3[2] - fVar16;
  fVar15 = fVar15 + *param_3;
  fVar17 = fVar17 + param_3[2];
  fVar13 = *pfVar6;
  fVar12 = 0.0;
  iVar1 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar2 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar3 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  iVar4 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar7 = iVar1;
  if (iVar3 <= iVar1) {
    iVar7 = iVar3;
  }
  if (iVar1 <= iVar3) {
    iVar1 = iVar3;
  }
  iVar3 = iVar2;
  if (iVar4 <= iVar2) {
    iVar3 = iVar4;
  }
  if (iVar2 <= iVar4) {
    iVar2 = iVar4;
  }
  *(int *)(param_2 + 0x10) = iVar7;
  *(int *)(param_2 + 0x14) = iVar3;
  *(int *)(param_2 + 0x20) = iVar1;
  *(int *)(param_2 + 0x24) = iVar2;
  if (fVar16 != fVar17) {
    fVar12 = fVar13 / (fVar17 - fVar16);
  }
LAB_01226208:
  *(float *)(param_2 + 0x28) = fVar12;
  return;
}

