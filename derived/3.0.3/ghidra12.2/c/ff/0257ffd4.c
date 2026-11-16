
undefined8 FUN_0257ffd4(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_34;
  
  if (param_1[0xc] == 0) {
    return 1;
  }
  if (*(char *)((long)param_1 + 0x15) != '\0') {
    uVar8 = (**(code **)(*param_1 + (ulong)*(byte *)((long)param_1 + 0x14) * 8))(param_1);
    *(undefined4 *)(param_1 + 1) = uVar8;
  }
  if (*(char *)((long)param_1 + 0x4d) != '\0') {
    uVar8 = (**(code **)(param_1[7] + (ulong)*(byte *)((long)param_1 + 0x4c) * 8))(param_1 + 7);
    *(undefined4 *)(param_1 + 8) = uVar8;
  }
  uVar12 = 0;
  if ((*(char *)((long)param_1 + 0x2c) == '\0') || (*(char *)((long)param_1 + 0x15) == '\0')) {
LAB_02580130:
    cVar4 = *(char *)((long)param_1 + 0x5c);
  }
  else {
    plVar9 = (long *)param_1[0xc];
    lVar6 = param_1[2];
    lVar7 = param_1[1];
    fVar13 = *(float *)(param_1 + 4) - *(float *)(plVar9 + 0x4f);
    fVar14 = *(float *)(param_1 + 5) - *(float *)(plVar9 + 0x50);
    fVar15 = SQRT(fVar13 * fVar13 + 0.0 + fVar14 * fVar14);
    if (0.0 < fVar15) {
      fVar15 = 1.0 / fVar15;
      fVar13 = fVar13 * fVar15;
      fVar14 = fVar14 * fVar15;
    }
    fVar15 = *(float *)(param_1 + 6);
    (**(code **)(*plVar9 + 0x108))(*(float *)(plVar9 + 0x4f) + fVar13 * fVar15);
    (**(code **)(*(long *)param_1[0xc] + 0x118))
              (fVar14 * fVar15 + *(float *)((long *)param_1[0xc] + 0x50));
    if ((int)lVar6 == (int)lVar7) {
      plVar9 = (long *)param_1[0xc];
      FUN_016e026c(0,plVar9 + 0x4f,0,0);
      (**(code **)(*plVar9 + 0x110))(plVar9);
      *(undefined1 *)((long)param_1 + 0x2c) = 0;
      (**(code **)(*(long *)param_1[0xc] + 0x108))((int)param_1[4]);
      (**(code **)(*(long *)param_1[0xc] + 0x118))((int)param_1[5]);
      uVar12 = 1;
      goto LAB_02580130;
    }
    fVar14 = *(float *)(param_1[0xc] + 0x27c);
    fVar14 = fVar14 + (*(float *)((long)param_1 + 0x24) - fVar14) /
                      (float)(uint)((int)lVar6 - (int)lVar7);
    fVar13 = (float)FUN_016e026c(0,param_1[0xc] + 0x278,0,0);
    if (fVar13 <= fVar14) {
      fVar13 = fVar14;
    }
    (**(code **)(*(long *)param_1[0xc] + 0x110))(fVar13);
    uVar12 = 0;
    cVar4 = *(char *)((long)param_1 + 0x5c);
  }
  if (cVar4 == '\0') {
    return uVar12;
  }
  if (*(char *)((long)param_1 + 0x4d) == '\0') {
    return uVar12;
  }
  uVar5 = (int)param_1[9] - (int)param_1[8];
  if (uVar5 == 0) {
    *(undefined1 *)((long)param_1 + 0x5c) = 0;
    (**(code **)(*(long *)param_1[0xc] + 0x160))((long *)param_1[0xc],param_1 + 0xb);
    return 1;
  }
  plVar9 = (long *)param_1[0xc];
  uVar2 = *(uint *)(param_1 + 0xb);
  uVar3 = *(uint *)((long)plVar9 + 0x2b4);
  uVar11 = uVar3 - uVar2;
  if (uVar11 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = uVar2 - uVar3;
    uVar1 = uVar11;
    if (uVar3 <= uVar2) {
      uVar1 = uVar10;
    }
    if (uVar1 < 0x80000001) {
      if (uVar2 < uVar3) goto LAB_02580220;
    }
    else {
      uVar11 = -uVar1;
      uVar10 = uVar11;
      if (uVar3 <= uVar2) {
LAB_02580220:
        fVar13 = -(float)uVar11;
        goto LAB_02580228;
      }
    }
  }
  fVar13 = (float)uVar10;
LAB_02580228:
  local_34 = uVar3 + (int)(fVar13 / (float)uVar5);
  (**(code **)(*plVar9 + 0x160))(plVar9,&local_34);
  return uVar12;
}

