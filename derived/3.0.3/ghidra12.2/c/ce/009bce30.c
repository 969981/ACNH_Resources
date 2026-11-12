
void FUN_009bce30(long param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  float fVar12;
  undefined1 auStack_b74 [2792];
  undefined4 local_8c;
  
  uVar10 = *param_3;
  *(uint *)(param_1 + 0xc) = uVar10;
  if (0 < (int)param_2[2]) {
    if (*(char *)(param_1 + 8) == '\0') {
      local_8c = 0x41f00000;
      FUN_009be870(0x41f00000,auStack_b74,param_2);
      uVar5 = *(uint *)(param_2 + 2);
      uVar10 = uVar5 - 1;
      if ((int)uVar5 < 1) {
        uVar7 = 0;
      }
      else {
        if (0x1d < uVar10) {
          uVar10 = 0x1e;
        }
        uVar9 = 0;
        uVar7 = 0;
        do {
          uVar6 = uVar7 - (uVar7 >> 1 & 0x5555);
          uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
          uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
          uVar6 = uVar6 + (uVar6 >> 8);
          uVar6 = uVar6 + (uVar6 >> 0x10);
          uVar1 = uVar6 & 0x3f;
          if (5 < uVar1) break;
          pfVar11 = (float *)*param_2;
          if (uVar9 < uVar5) {
            iVar2 = 0;
            if ((int)param_2[1] <= (int)(uVar9 + *(int *)((long)param_2 + 0xc))) {
              iVar2 = (int)param_2[1];
            }
            pfVar11 = pfVar11 + (long)(int)(uVar9 + (*(int *)((long)param_2 + 0xc) - iVar2)) * 0x418
            ;
          }
          pfVar4 = pfVar11 + (ulong)*(uint *)(param_1 + 0xc) * 0x20c;
          if (1 < *(uint *)(param_1 + 0xc)) {
            pfVar4 = pfVar11;
          }
          fVar12 = SQRT(pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4 + pfVar4[2] * pfVar4[2]);
          if (uVar1 < 3) {
            if (*(float *)(param_1 + 0x28) + 1.5 <= fVar12) {
LAB_009bcf50:
              uVar7 = uVar7 | 1 << (ulong)(uVar6 & 0x1f) & 0xffffU;
            }
          }
          else if (fVar12 <= *(float *)(param_1 + 0x2c) + 0.4) goto LAB_009bcf50;
          uVar9 = uVar9 + 1;
        } while (uVar10 + 1 != uVar9);
      }
      uVar7 = uVar7 - (uVar7 >> 1 & 0x5555);
      uVar10 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
      uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
      uVar10 = uVar10 + (uVar10 >> 8);
      if (5 < (uVar10 + (uVar10 >> 0x10) & 0x3e)) {
        *(undefined1 *)(param_1 + 8) = 1;
      }
    }
    else {
      iVar2 = 0;
      if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
        iVar2 = (int)param_2[1];
      }
      lVar8 = *param_2 + (long)(*(int *)((long)param_2 + 0xc) - iVar2) * 0x1060;
      lVar3 = lVar8 + (ulong)uVar10 * 0x830;
      if (1 < uVar10) {
        lVar3 = lVar8;
      }
      if ((0 < *(int *)(lVar3 + 0x780)) &&
         (SQRT(*(float *)(lVar3 + 0x10) * *(float *)(lVar3 + 0x10) +
               *(float *)(lVar3 + 0xc) * *(float *)(lVar3 + 0xc) +
               *(float *)(lVar3 + 0x14) * *(float *)(lVar3 + 0x14)) < 3.0)) {
        *(undefined1 *)(param_1 + 8) = 0;
      }
    }
  }
  return;
}

