
void FUN_00379df0(long param_1,long param_2,undefined4 *param_3,uint param_4)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  
  lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (lVar6 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar9 = -(ulong)(param_4 >> 0x1f) & 0xfffffff000000000 | (ulong)param_4 << 4;
    lVar8 = *(long *)(*(long *)(param_1 + 0x18) +
                     (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) +
                     ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) +
                     ((ulong)(uVar3 >> 0xc) & 8) + ((ulong)(uVar3 >> 0xd) & 0x60) +
                     (ulong)(-(uVar3 >> 0xc & 1) & 0xc) + (ulong)(-(uVar3 >> 0x10 & 1) & 0x1c) +
                     ((ulong)(uVar3 >> 0xc) & 0x10) * ((ulong)(uVar3 >> 6) & 7) +
                     (ulong)((int)(uVar3 << 0xe) >> 0x1f & 0x74) +
                     (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14);
    lVar1 = lVar6 + lVar8;
    puVar2 = (undefined4 *)(lVar1 + uVar9);
    lVar8 = lVar8 + uVar9 + lVar6;
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
    puVar2[0xc] = param_3[4];
    puVar2[0xd] = param_3[5];
    puVar5 = PTR_FloatDegree180_04bcedf8;
    fVar11 = (float)param_3[6];
    fVar10 = *(float *)PTR_FloatPi_04bcedc8;
    puVar2[0xf] = 0;
    fVar13 = *(float *)puVar5;
    puVar2[0x24] = 0x3f800000;
    fVar10 = fVar10 / fVar13;
    puVar2[0xe] = fVar11 * fVar10;
    uVar12 = 0;
    if ((*(byte *)(param_3 + 0x10) & 4) != 0) {
      uVar12 = 0x3f800000;
    }
    puVar2[0x25] = uVar12;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    lVar1 = lVar1 + (long)(int)param_4 * 0x10;
    bVar4 = *(byte *)(param_3 + 0x10);
    if ((bVar4 & 1) != 0) {
      *(undefined4 *)(lVar1 + 0x60) = param_3[0xc];
      *(float *)(lVar1 + 100) = (float)param_3[0xd] - (float)param_3[0xc];
      bVar4 = *(byte *)(param_3 + 0x10);
    }
    if ((bVar4 >> 1 & 1) != 0) {
      *(float *)(lVar1 + 0x68) = fVar10 * (float)param_3[0xe];
      *(float *)(lVar1 + 0x6c) = fVar10 * ((float)param_3[0xf] - (float)param_3[0xe]);
    }
  }
  if (param_4 == 2) {
    lVar8 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = lVar8 + (ulong)*(uint *)(param_1 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0x160);
  }
  else if (param_4 == 1) {
    lVar8 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = lVar8 + (ulong)*(uint *)(param_1 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0x120);
  }
  else {
    if (param_4 != 0) {
      return;
    }
    lVar8 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = lVar8 + (ulong)*(uint *)(param_1 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0xe0);
  }
  puVar7[2] = 0x3f800000;
  puVar7[3] = 0x3f80000000000000;
  *puVar7 = 0;
  puVar7[1] = 0x3f80000000000000;
  puVar7[4] = 0x3f80000000000000;
  puVar7[5] = 0x3f80000000000000;
  puVar7[6] = &DAT_3f8000003f800000;
  puVar7[7] = 0x3f80000000000000;
  return;
}

