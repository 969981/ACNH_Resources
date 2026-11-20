
void FUN_03ed0b20(long param_1,uint *param_2,long param_3,long param_4,long param_5,uint param_6)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar5 = (ulong)*(byte *)(param_5 + 0x12);
  if (uVar5 != 0) {
    piVar6 = (int *)(param_5 + (ulong)*(byte *)(param_5 + 0x13) * 4 + 0x14);
    do {
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) +
                       (long)*(short *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (long)*piVar6) *
                       8);
      if (*(short *)(lVar3 + 8) == 0xc) {
        fVar8 = (float)FUN_03ed7768(lVar3,param_2,param_3,param_4);
        if (0.0 <= fVar8) {
          bVar2 = false;
          uVar4 = *param_2;
          goto joined_r0x03ed0bf8;
        }
        break;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 != 0);
  }
  fVar8 = *(float *)(param_4 + 0x80);
  bVar2 = true;
  uVar4 = *param_2;
joined_r0x03ed0bf8:
  if ((((uVar4 >> 5 & 1) != 0) && (lVar3 = *(long *)(*(long *)(param_3 + 8) + 0x70), lVar3 != 0)) &&
     (uVar1 = *(ushort *)(lVar3 + 0x5a), -1 < (short)uVar1)) {
    uVar5 = (ulong)uVar1;
    if (3 < uVar1) {
      uVar5 = 0;
    }
    lVar7 = *(long *)(lVar3 + uVar5 * 8);
    if ((lVar7 != 0 && lVar7 != *(long *)(lVar3 + 0x90)) && *(long *)(lVar3 + 0x90) != 0) {
      uVar4 = uVar4 & 0xfffffffd;
      *param_2 = uVar4;
    }
  }
  if (0.0 <= fVar8) {
    fVar10 = (float)param_2[10];
    if (bVar2) {
      fVar9 = *(float *)(param_4 + 0x88);
      if (fVar10 < 0.0) {
        fVar9 = (float)param_2[8] + ((float)param_2[5] - (float)param_2[8]) * fVar9;
      }
      else {
        fVar9 = (1.0 - fVar9) * (float)param_2[8] + fVar10 * fVar9;
      }
    }
    else {
      fVar9 = (float)param_2[1];
    }
    if (0.0 <= fVar10) {
      fVar12 = (float)param_2[5];
      fVar8 = (1.0 - fVar8) * (float)param_2[8] + fVar10 * fVar8;
    }
    else {
      fVar12 = (float)param_2[5];
      fVar8 = (float)param_2[8] + (fVar12 - (float)param_2[8]) * fVar8;
    }
    param_2[9] = (uint)fVar8;
    fVar11 = fVar12;
    if (0.0 <= fVar10) {
      fVar11 = fVar10;
    }
    param_2[1] = (uint)fVar8;
    if (fVar12 <= fVar8) {
      if (fVar11 <= fVar8 && (uVar4 & 2) == 0) {
        fVar10 = fVar12;
      }
      else {
        fVar10 = 0.0;
        if (0.0 < fVar12) {
          if (fVar12 + fVar12 <= fVar8) {
            fVar10 = fVar8 - fVar12 * (float)(int)(fVar8 / fVar12);
          }
          else {
            fVar10 = fVar8 - fVar12;
          }
        }
      }
      param_2[1] = (uint)fVar10;
    }
    if (fVar11 <= fVar8) {
      param_2[9] = (uint)fVar11;
    }
    param_2[2] = (uint)fVar9;
    return;
  }
  if ((param_6 & 1) == 0) {
    FUN_03ec5290(*(float *)(param_3 + 0x10) * *(float *)(*(long *)(param_3 + 8) + 0xa0),param_2);
    return;
  }
  return;
}

