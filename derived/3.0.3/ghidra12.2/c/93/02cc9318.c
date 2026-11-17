
void FUN_02cc9318(long *param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  
  uVar2 = *(uint *)(param_2 + 8);
  if ((-1 < (int)uVar2) && ((int)uVar2 < (int)param_1[0x3884])) {
    lVar9 = param_1[0x3885];
    piVar1 = (int *)(lVar9 + (ulong)uVar2 * 8);
    lVar4 = (**(code **)(*param_1 + 0x278))(param_1);
    if ((lVar4 == 0) || (*(uint *)(lVar4 + 0x298) < 2)) {
      iVar6 = 0;
      iVar7 = 0;
    }
    else {
      iVar3 = *(int *)(lVar4 + 0x2e8);
      iVar6 = *(int *)(lVar4 + 0x444) + iVar3 * *(int *)(lVar4 + 0x440);
      iVar8 = *(int *)(lVar4 + 0x430);
      if ((*(int *)(lVar4 + 0x418) != 2) &&
         (fVar10 = *(float *)(lVar4 + 0x424) - *(float *)(lVar4 + 0x428),
         iVar8 = *(int *)(lVar4 + 0x420), fVar10 <= 0.0001 && -0.0001 <= fVar10)) {
        iVar8 = *(int *)(lVar4 + 0x430);
      }
      iVar7 = 0;
      if (iVar3 != 0) {
        iVar7 = iVar6 / iVar3;
      }
      iVar7 = iVar7 - iVar8;
      if (iVar7 < 0) {
        iVar7 = -1;
      }
      else {
        iVar8 = 0;
        if (iVar3 != 0) {
          iVar8 = *(int *)(lVar4 + 0x2f0) / iVar3;
        }
        if (iVar8 < iVar7) {
          iVar7 = -1;
        }
      }
    }
    if (lVar9 != 0) {
      *piVar1 = iVar6;
    }
    piVar1[1] = iVar7;
  }
  FUN_02cc9468(param_1);
  FUN_02cc959c(param_1,0);
  uVar5 = (**(code **)(*param_1 + 0x278))(param_1);
  FUN_0345b4a0(uVar5,0);
                    /* WARNING: Could not recover jumptable at 0x02cc9454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c0))(param_1);
  return;
}

