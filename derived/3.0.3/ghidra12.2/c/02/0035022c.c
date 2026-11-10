
void FUN_0035022c(float param_1,float *param_2,long param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = *(ushort *)(param_3 + 0x18);
  if (*(char *)(*(long *)(param_2 + 10) + 9) == '\0') {
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x14));
    fVar10 = (float)uVar2 / fVar9;
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x16));
    fVar9 = (float)((uint)*(ushort *)(param_3 + 0xe) + (uint)uVar2) / fVar9;
    fVar12 = (float)*(ushort *)(param_3 + 0x1a) / fVar13;
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 10));
    fVar3 = param_2[3] * fVar3;
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x10));
    fVar4 = param_2[4] * fVar4;
    fVar11 = param_2[6];
    fVar13 = (float)((uint)*(ushort *)(param_3 + 0x12) + (uint)*(ushort *)(param_3 + 0x1a)) / fVar13
    ;
    lVar7 = *(long *)(param_2 + 0xc);
    iVar5 = *(int *)(lVar7 + 0x9c);
    if (*(int *)(lVar7 + 0x98) <= iVar5) {
      return;
    }
  }
  else {
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x14));
    fVar10 = ((float)uVar2 + -0.5) / fVar9;
    fVar9 = ((float)((uint)*(ushort *)(param_3 + 0xe) + (uint)uVar2) + 0.5) / fVar9;
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x16));
    fVar12 = ((float)*(ushort *)(param_3 + 0x1a) + -0.5) / fVar13;
    param_1 = param_1 + param_2[3] * -0.5;
    fVar11 = param_2[6] + param_2[4] * -0.5;
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 10));
    fVar3 = param_2[3] * (fVar3 + 1.0);
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x10));
    fVar4 = param_2[4] * (fVar4 + 1.0);
    fVar13 = ((float)((uint)*(ushort *)(param_3 + 0x12) + (uint)*(ushort *)(param_3 + 0x1a)) + 0.5)
             / fVar13;
    lVar7 = *(long *)(param_2 + 0xc);
    iVar5 = *(int *)(lVar7 + 0x9c);
    if (*(int *)(lVar7 + 0x98) <= iVar5) {
      return;
    }
  }
  *(int *)(lVar7 + 0x9c) = iVar5 + 1;
  pfVar8 = (float *)(*(long *)(*(long *)(param_2 + 0xc) + 0xa0) + (long)iVar5 * 0x38);
  *pfVar8 = fVar3;
  pfVar8[1] = fVar4;
  pfVar8[2] = param_1;
  pfVar8[3] = fVar11;
  pfVar8[4] = *param_2;
  pfVar8[5] = param_2[1];
  uVar1 = *(undefined1 *)((long)param_2 + 0x39);
  pfVar8[6] = fVar10;
  pfVar8[7] = 1.0 - fVar12;
  pfVar8[8] = fVar9;
  pfVar8[9] = 1.0 - fVar13;
  *(undefined1 *)((long)pfVar8 + 0x33) = uVar1;
  fVar9 = param_2[9];
  fVar11 = param_2[3];
  iVar5 = (**(code **)(**(long **)(param_2 + 10) + 0x20))();
  *(short *)(pfVar8 + 0xc) = (short)(int)(fVar9 * fVar11 * (float)iVar5);
  iVar5 = (**(code **)(**(long **)(param_2 + 10) + 0x28))();
  fVar9 = -0.0;
  if (*(char *)(*(long *)(param_2 + 10) + 9) != '\0') {
    fVar9 = param_2[4];
  }
  FUN_003513c8(param_2[4] * (float)iVar5 + fVar9,*(undefined8 *)(param_2 + 0xc));
  *(undefined1 *)((long)pfVar8 + 0x32) = *(undefined1 *)(param_3 + 0x1f);
  uVar6 = (**(code **)(**(long **)(param_2 + 10) + 0x110))();
  *(ulong *)(pfVar8 + 10) = *(ulong *)(param_3 + 0x20) | uVar6 & 1;
  return;
}

