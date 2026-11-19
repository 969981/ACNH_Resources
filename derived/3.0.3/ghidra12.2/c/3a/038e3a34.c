
void FUN_038e3a34(long param_1,uint param_2,uint param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((param_2 & 1) == 0) {
LAB_038e3aa8:
    uVar5 = 0;
    uVar4 = *(ushort *)(param_1 + 0x14) & 0xfffe;
  }
  else {
    fVar8 = *(float *)(param_1 + 0x20);
    fVar7 = *(float *)(param_1 + 0x24);
    fVar11 = *(float *)(param_1 + 0x28);
    fVar9 = *(float *)(param_1 + 0x2c);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (fVar8 <= fVar11) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar7) && !NAN(fVar9)) {
        bVar1 = fVar7 < fVar9;
        bVar2 = fVar7 == fVar9;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar10 = *param_4;
      bVar1 = false;
      bVar2 = true;
      if (fVar8 <= fVar10) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar10) && !NAN(fVar11)) {
          bVar1 = fVar10 == fVar11;
          bVar2 = fVar11 <= fVar10;
        }
      }
      if (((bVar2 && !bVar1) || (param_4[1] < fVar7)) || (fVar9 < param_4[1])) goto LAB_038e3aa8;
      *(float *)(param_1 + 0x118) = fVar10 - fVar8;
      fVar7 = param_4[1] - fVar7;
    }
    else {
      *(float *)(param_1 + 0x118) = *param_4;
      fVar7 = param_4[1];
    }
    uVar5 = 1;
    *(float *)(param_1 + 0x11c) = fVar7;
    uVar4 = *(ushort *)(param_1 + 0x14) | 1;
  }
  *(ushort *)(param_1 + 0x14) = (ushort)uVar4;
  if (-1 < (int)*(uint *)(param_1 + 0x10c)) {
    uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0x10c) & 0x1f);
    if ((uVar5 & param_3) == 1) {
      uVar6 = *(uint *)(param_1 + 0x114) | uVar6;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x114) & (uVar6 ^ 0xffffffff);
    }
    *(uint *)(param_1 + 0x114) = uVar6;
  }
  if ((uVar4 >> 3 & 1) != 0) {
    if ((uVar4 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x118) = 0xff7fffffff7fffff;
    }
    *(ushort *)(param_1 + 0x14) = (ushort)uVar4 & 0xfff7;
  }
  return;
}

