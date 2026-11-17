
/* WARNING: Removing unreachable block (ram,0x02b85630) */

void FUN_02b85468(long param_1,long param_2,long param_3)

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
      iVar2 = *(int *)(lVar6 + 0x5b8);
      iVar3 = *(int *)(lVar6 + 0x5bc);
      iVar5 = *(int *)(lVar6 + 0x5ac);
      iVar1 = *(int *)(lVar6 + 0x5a8);
      if (iVar2 <= *(int *)(lVar6 + 0x5a8)) {
        iVar1 = iVar2;
      }
      if (iVar3 + 1 <= iVar5) {
        iVar5 = iVar3 + 1;
      }
      iVar1 = (iVar2 - iVar1) + 1;
      iVar5 = (iVar3 - iVar5) + 2;
      fVar7 = *(float *)(param_3 + 8) - ((float)iVar1 * 0.5 * 10.0 + -5.0);
      fVar8 = *(float *)(param_3 + 0x10) - ((float)iVar5 * 0.5 * 10.0 + -5.0);
      iVar3 = (int)((float)(int)fVar7 / 10.0) - (uint)(fVar7 < 0.0);
      iVar4 = (int)((float)(int)fVar8 / 10.0) - (uint)(fVar8 < 0.0);
      fVar7 = (float)iVar3 * 10.0 + 2.5;
      iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
      fVar7 = (float)iVar4 * 10.0 + 2.5;
      fVar9 = (float)(iVar1 + iVar3 + -1) * 10.0 + 10.0 + -2.5;
      fVar8 = (float)(iVar5 + iVar4 + -1) * 10.0 + 10.0 + -2.5;
      iVar5 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
      iVar3 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
      iVar4 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
      iVar1 = iVar2;
      if (iVar3 <= iVar2) {
        iVar1 = iVar3;
      }
      if (iVar2 <= iVar3) {
        iVar2 = iVar3;
      }
      *(int *)(param_2 + 0x20) = iVar2;
      iVar2 = iVar5;
      if (iVar4 <= iVar5) {
        iVar2 = iVar4;
      }
      if (iVar5 <= iVar4) {
        iVar5 = iVar4;
      }
      *(int *)(param_2 + 0x10) = iVar1;
      *(int *)(param_2 + 0x14) = iVar2;
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

