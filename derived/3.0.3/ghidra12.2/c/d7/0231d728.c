
void FUN_0231d728(long param_1)

{
  long *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((*(uint *)(param_1 + 0x17d8) >> 1 & 1) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 2;
  uVar4 = *(uint *)(param_1 + 0x17cc);
  if ((uVar4 >> 0x14 & 1) == 0) {
    return;
  }
  if (*(float *)(param_1 + 0x1850) == 0.0) goto LAB_0231d92c;
  plVar1 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x4c8);
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x148))();
  fVar6 = *(float *)(param_1 + 0x184c);
  fVar5 = (float)NEON_ucvtf(*puVar3);
  fVar5 = fVar5 * 8.381903e-08;
  if (fVar5 <= 360.0) {
    fVar7 = fVar5;
    if (fVar5 < 0.0) {
      fVar7 = fVar5 / 360.0 + -1.0;
      goto LAB_0231d7d0;
    }
  }
  else {
    fVar7 = fVar5 / 360.0;
LAB_0231d7d0:
    fVar7 = fVar5 - (float)(int)fVar7 * 360.0;
  }
  if (fVar6 <= 360.0) {
    if (fVar6 < 0.0) {
      fVar6 = fVar6 - (float)(int)(fVar6 / 360.0 + -1.0) * 360.0;
    }
  }
  else {
    fVar6 = fVar6 - (float)(int)(fVar6 / 360.0) * 360.0;
  }
  fVar9 = 0.0;
  if (fVar7 == fVar6) {
LAB_0231d830:
    fVar8 = -fVar9;
  }
  else {
    fVar9 = fVar7 - fVar6;
    fVar8 = fVar6 - fVar7;
    fVar10 = fVar9;
    if (fVar7 <= fVar6) {
      fVar10 = fVar8;
    }
    if (fVar10 <= 180.0) {
      if (fVar6 < fVar7) goto LAB_0231d830;
    }
    else {
      fVar8 = 360.0 - fVar10;
      fVar9 = fVar8;
      if (fVar7 <= fVar6) goto LAB_0231d830;
    }
  }
  fVar8 = fVar5 + fVar8;
  if (fVar5 == fVar8) {
    bVar2 = true;
    fVar8 = fVar5;
  }
  else {
    fVar7 = fVar8 - fVar5;
    fVar6 = -fVar7;
    if (0.0 <= fVar7) {
      fVar6 = fVar7;
    }
    if (fVar6 <= 0.5) {
      bVar2 = true;
    }
    else {
      fVar9 = *(float *)(param_1 + 0x1850) * fVar7;
      fVar6 = 0.5;
      if (fVar7 <= 0.0) {
        fVar6 = -10.0;
      }
      fVar10 = 10.0;
      if (fVar7 <= 0.0) {
        fVar10 = -0.5;
      }
      if (fVar9 <= fVar10) {
        fVar10 = fVar9;
      }
      if (fVar6 <= fVar9) {
        fVar6 = fVar10;
      }
      bVar2 = fVar5 + fVar6 == fVar8;
      fVar8 = fVar5 + fVar6;
    }
  }
  plVar1 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0x4c8);
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x148))();
  *puVar3 = (int)(long)(fVar8 * 11930465.0);
  if (!bVar2) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x17cc);
LAB_0231d92c:
  *(uint *)(param_1 + 0x17cc) = uVar4 & 0xffefffff;
  return;
}

