
void FUN_032b7100(long param_1,float *param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_30;
  char *pcStack_28;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xf0);
  local_30 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_28 = "B_Hit";
  lVar3 = FUN_032ba110(&local_8,&local_30);
  fVar8 = *(float *)(lVar3 + 0x30);
  fVar6 = *(float *)(lVar3 + 0x34);
  if (*(long *)(lVar3 + 0x18) == 0) {
    fVar7 = 0.0;
    fVar9 = 0.0;
  }
  else {
    fVar9 = 0.0;
    fVar7 = 0.0;
    lVar4 = lVar3;
    lVar5 = *(long *)(lVar3 + 0x18);
    do {
      bVar2 = *(byte *)(lVar4 + 0x5b) >> 6;
      if (bVar2 == 2) {
        fVar10 = *(float *)(lVar5 + 0x4c) * *(float *)(lVar5 + 0x54) * -0.5;
LAB_032b71e0:
        fVar6 = fVar6 + fVar10;
      }
      else if (bVar2 == 1) {
        fVar10 = *(float *)(lVar5 + 0x4c) * *(float *)(lVar5 + 0x54) * 0.5;
        goto LAB_032b71e0;
      }
      bVar2 = *(byte *)(lVar4 + 0x5b) >> 4 & 3;
      if (bVar2 == 1) {
        fVar10 = *(float *)(lVar5 + 0x48) * *(float *)(lVar5 + 0x50) * -0.5;
LAB_032b7180:
        fVar8 = fVar8 + fVar10;
      }
      else if (bVar2 == 2) {
        fVar10 = *(float *)(lVar5 + 0x48) * *(float *)(lVar5 + 0x50) * 0.5;
        goto LAB_032b7180;
      }
      fVar9 = fVar9 + fVar8;
      fVar7 = fVar7 + fVar6;
      plVar1 = (long *)(lVar5 + 0x18);
      fVar8 = *(float *)(lVar5 + 0x30);
      fVar6 = *(float *)(lVar5 + 0x34);
      lVar4 = lVar5;
      lVar5 = *plVar1;
    } while (*plVar1 != 0);
  }
  bVar2 = *(byte *)(lVar3 + 0x5b);
  fVar9 = fVar9 + fVar8;
  if ((bVar2 & 3) == 2) {
    fVar10 = fVar9 - *(float *)(lVar3 + 0x50);
    fVar8 = fVar9;
  }
  else if ((bVar2 & 3) == 1) {
    fVar8 = fVar9 + *(float *)(lVar3 + 0x50);
    fVar10 = fVar9;
  }
  else {
    fVar8 = 0.0;
    fVar10 = 0.0;
    if ((bVar2 & 3) == 0) {
      fVar10 = *(float *)(lVar3 + 0x50) * 0.5;
      fVar8 = fVar9 + fVar10;
      fVar10 = fVar9 - fVar10;
    }
  }
  fVar7 = fVar7 + fVar6;
  bVar2 = bVar2 >> 2 & 3;
  if (bVar2 == 2) {
    fVar9 = fVar7 + *(float *)(lVar3 + 0x54);
    fVar6 = fVar7;
  }
  else if (bVar2 == 1) {
    fVar6 = fVar7 - *(float *)(lVar3 + 0x54);
    fVar9 = fVar7;
  }
  else {
    fVar6 = 0.0;
    fVar9 = 0.0;
    if (bVar2 == 0) {
      fVar9 = *(float *)(lVar3 + 0x54) * 0.5;
      fVar6 = fVar7 - fVar9;
      fVar9 = fVar7 + fVar9;
    }
  }
  *param_2 = fVar10;
  param_2[1] = fVar6;
  param_2[2] = fVar8;
  param_2[3] = fVar9;
  return;
}

