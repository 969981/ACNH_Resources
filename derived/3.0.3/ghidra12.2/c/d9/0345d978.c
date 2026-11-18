
void FUN_0345d978(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_60;
  float fStack_5c;
  undefined4 local_58;
  undefined *local_50;
  undefined4 local_48;
  
  FUN_0345d250(param_1 + 0x2f0);
  plVar6 = *(long **)(param_1 + 0x2f8);
  fVar7 = 0.0;
  if (plVar6 != (long *)0x0) {
    local_50 = PTR_DAT_04bc0cb8 + 0x10;
    local_48 = 8;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
    lVar4 = (**(code **)(plVar6[3] + 0xa0))(plVar6[1]);
    fVar7 = *(float *)(lVar4 + 4);
  }
  fVar8 = (*(float *)(param_1 + 0x1510) +
          (float)*(int *)(param_1 + 0x153c) * *(float *)(param_1 + 0x308)) - fVar7;
  fVar10 = -fVar8;
  if (0.0 <= fVar8) {
    fVar10 = fVar8;
  }
  if (*(int *)(param_1 + 0x151c) == 1) {
    fVar11 = fVar10 * *(float *)(param_1 + 0x1520);
    fVar9 = *(float *)(param_1 + 0x1528);
    if (fVar11 <= *(float *)(param_1 + 0x1528)) {
      fVar9 = fVar11;
    }
    fVar12 = *(float *)(param_1 + 0x1524);
    if (*(float *)(param_1 + 0x1524) <= fVar11) {
      fVar12 = fVar9;
    }
  }
  else {
    fVar12 = 0.0;
    if (*(int *)(param_1 + 0x151c) == 0) {
      fVar12 = fVar10 / (float)*(int *)(param_1 + 0x1530);
    }
  }
  if (fVar12 <= fVar10) {
    fVar10 = fVar12;
  }
  fVar9 = -fVar10;
  if (0.0 <= fVar8) {
    fVar9 = fVar10;
  }
  bVar2 = false;
  bVar3 = true;
  if (-1.1920929e-07 <= fVar9) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar9)) {
      bVar2 = fVar9 == 1.1920929e-07;
      bVar3 = 1.1920929e-07 <= fVar9;
    }
  }
  if ((bVar3 && !bVar2) && (plVar6 = *(long **)(param_1 + 0x2f8), plVar6 != (long *)0x0)) {
    local_48 = 8;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_50 = puVar1;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
    puVar5 = (undefined8 *)(**(code **)(plVar6[3] + 0xa0))(plVar6[1]);
    local_58 = *(undefined4 *)(puVar5 + 1);
    local_48 = 8;
    plVar6 = *(long **)(param_1 + 0x2f8);
    _local_60 = CONCAT44(fVar7 + fVar9,(int)*puVar5);
    local_50 = puVar1;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
    (**(code **)(plVar6[3] + 0x98))(plVar6[1],&local_60);
  }
  return;
}

