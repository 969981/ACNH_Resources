
float FUN_01912f20(float param_1,long param_2)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(int *)(param_2 + 0xe0) < 1) {
    return 0.0;
  }
  fVar7 = 0.0;
  if (*(int *)(param_2 + 0xe0) != 1) {
    uVar6 = 1;
    do {
      if (uVar6 < *(uint *)(param_2 + 0xc0)) {
        lVar1 = *(long *)(*(long *)(param_2 + 200) + uVar6 * 8);
      }
      else {
        lVar1 = 0;
      }
      lVar1 = (**(code **)(*(long *)(lVar1 + 0x30) + 0xf0))();
      uVar6 = uVar6 + 1;
      fVar7 = fVar7 + *(float *)(lVar1 + 4);
    } while ((long)uVar6 < (long)*(int *)(param_2 + 0xe0));
  }
  if (*(int *)(param_2 + 0xc0) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = **(long **)(param_2 + 200);
  }
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x68) + 0xf0))();
  iVar3 = *(int *)(param_2 + 0xe0);
  if (1 < iVar3) {
    uVar6 = 1;
    fVar9 = 0.0;
    fVar8 = *pfVar2;
    do {
      if (uVar6 < *(uint *)(param_2 + 0xc0)) {
        lVar1 = *(long *)(*(long *)(param_2 + 200) + uVar6 * 8);
      }
      else {
        lVar1 = 0;
      }
      lVar1 = (**(code **)(*(long *)(lVar1 + 0x30) + 0xf0))();
      if (uVar6 < *(uint *)(param_2 + 0xc0)) {
        lVar4 = *(long *)(*(long *)(param_2 + 200) + uVar6 * 8);
      }
      else {
        lVar4 = 0;
      }
      fVar10 = fVar9 + *(float *)(lVar1 + 4);
      pfVar2 = (float *)(**(code **)(*(long *)(lVar4 + 0x68) + 0xf0))((long *)(lVar4 + 0x68));
      if (fVar7 * param_1 < fVar10) {
        return fVar8 + ((fVar7 * param_1 - fVar9) / (fVar10 - fVar9)) * (*pfVar2 - fVar8);
      }
      iVar3 = *(int *)(param_2 + 0xe0);
      uVar6 = uVar6 + 1;
      fVar9 = fVar10;
      fVar8 = *pfVar2;
    } while ((long)uVar6 < (long)iVar3);
  }
  if (iVar3 < 1) {
    if (*(uint *)(param_2 + 0xc0) != 0) {
      plVar5 = *(long **)(param_2 + 200);
      goto LAB_01913098;
    }
  }
  else if (iVar3 - 1U < *(uint *)(param_2 + 0xc0)) {
    plVar5 = (long *)(*(long *)(param_2 + 200) + (ulong)(iVar3 - 1U) * 8);
LAB_01913098:
    lVar1 = *plVar5;
    goto LAB_019130a4;
  }
  lVar1 = 0;
LAB_019130a4:
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x68) + 0xf0))();
  return *pfVar2;
}

