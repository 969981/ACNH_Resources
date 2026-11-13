
uint FUN_013d38b0(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined **local_60;
  int local_58;
  int iStack_54;
  
  param_2 = param_2 & 0xff;
  fVar7 = (float)param_2 * 0.5 * 5.0 + -2.5;
  fVar6 = ((float)*(int *)(param_1 + 8) * 10.0 + 5.0) - fVar7;
  fVar7 = ((float)*(int *)(param_1 + 0xc) * 10.0 + 5.0) - fVar7;
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    iVar2 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    iVar4 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    iVar1 = iVar4 + param_2;
    iVar5 = iVar2;
    do {
      local_60 = &PTR_FUN_048f9730;
      fVar7 = (float)iVar5 * 0.5;
      uVar3 = 0;
      if (fVar7 != (float)(int)fVar7) {
        uVar3 = (uint)(fVar7 < 0.0);
      }
      local_58 = (int)fVar7 - uVar3;
      fVar7 = (float)iVar4 * 0.5;
      uVar3 = 0;
      if (fVar7 != (float)(int)fVar7) {
        uVar3 = (uint)(fVar7 < 0.0);
      }
      iStack_54 = (int)fVar7 - uVar3;
      uVar3 = FUN_01318220(&local_60);
      if ((uVar3 & 1) != 0) break;
      if (iVar5 < (int)(param_2 + iVar2 + -1)) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar4 = iVar4 + 1;
        iVar5 = iVar2;
      }
    } while ((iVar2 != iVar5) || (iVar1 != iVar4));
    uVar3 = uVar3 ^ 1;
  }
  return uVar3 & 1;
}

