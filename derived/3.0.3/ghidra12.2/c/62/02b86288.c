
/* WARNING: Removing unreachable block (ram,0x02b86440) */

void FUN_02b86288(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_2 != 0) {
    lVar6 = *(long *)(param_1 + 8);
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = *(int *)(lVar6 + 0x5b8) - *(int *)(lVar6 + 0x5a8);
      iVar5 = *(int *)(lVar6 + 0x5bc) - *(int *)(lVar6 + 0x5ac);
      fVar7 = (*(float *)(param_3 + 8) + 0.0) - ((float)(iVar1 + 1) * 0.5 * 10.0 + -5.0);
      fVar8 = (*(float *)(param_3 + 0x10) + -5.0) - ((float)(iVar5 + 1) * 0.5 * 10.0 + -5.0);
      iVar2 = (int)((float)(int)fVar7 / 10.0) - (uint)(fVar7 < 0.0);
      iVar3 = (int)((float)(int)fVar8 / 10.0) - (uint)(fVar8 < 0.0);
      fVar7 = (float)iVar2 * 10.0 + 2.5;
      fVar9 = (float)iVar3 * 10.0 + 2.5;
      iVar4 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
      fVar7 = (float)(iVar1 + iVar2) * 10.0 + 10.0 + -2.5;
      fVar8 = (float)(iVar5 + iVar3) * 10.0 + 10.0 + -2.5;
      iVar5 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
      iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
      iVar3 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
      iVar1 = iVar4;
      if (iVar2 <= iVar4) {
        iVar1 = iVar2;
      }
      if (iVar4 <= iVar2) {
        iVar4 = iVar2;
      }
      *(int *)(param_2 + 0x20) = iVar4;
      iVar4 = iVar5;
      if (iVar3 <= iVar5) {
        iVar4 = iVar3;
      }
      if (iVar5 <= iVar3) {
        iVar5 = iVar3;
      }
      *(int *)(param_2 + 0x10) = iVar1;
      *(int *)(param_2 + 0x14) = iVar4;
    }
    else {
      if ((*(byte *)(lVar6 + 0x560) >> 1 & 1) == 0) {
        lVar6 = lVar6 + 0x570;
      }
      else {
        lVar6 = lVar6 + 0x8a8;
      }
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar6 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(lVar6 + 0x14);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar6 + 0x20);
      iVar5 = *(int *)(lVar6 + 0x24);
    }
    *(int *)(param_2 + 0x24) = iVar5;
  }
  return;
}

