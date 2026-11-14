
bool FUN_0153f0e0(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  char local_44 [4];
  
  bVar6 = false;
  if ((param_1 != 0) && (param_2 - 2U < 4)) {
    local_44[0] = '\0';
    local_5c = 0x7f7fffff7f7fffff;
    local_54 = 0xff7fffff7f7fffff;
    local_4c = 0xff7fffffff7fffff;
    FUN_0180e7f0(param_3,param_2,0,0,local_44,&local_5c);
    bVar6 = local_44[0] != '\0';
    if (local_44[0] != '\0') {
      fStack_64 = local_5c._4_4_ + 1.0;
      local_68 = (float)local_5c + 1.0;
      local_60 = (float)local_54 + 1.0;
      fVar9 = (float)local_54;
      fVar7 = (float)FUN_0153e900(&local_68,param_2,param_3);
      fStack_64 = (float)local_4c + -1.0;
      local_68 = local_54._4_4_ + -1.0;
      local_60 = local_4c._4_4_ + -1.0;
      fVar8 = (float)FUN_0153e900(&local_68,param_2,param_3);
      iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
      iVar3 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
      iVar4 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
      iVar5 = (int)((float)(int)local_4c._4_4_ / 5.0) - (uint)(local_4c._4_4_ < 0.0);
      iVar1 = iVar2;
      if (iVar4 <= iVar2) {
        iVar1 = iVar4;
      }
      if (iVar2 <= iVar4) {
        iVar2 = iVar4;
      }
      iVar4 = iVar3;
      if (iVar5 <= iVar3) {
        iVar4 = iVar5;
      }
      if (iVar3 <= iVar5) {
        iVar3 = iVar5;
      }
      *(int *)(param_1 + 0x10) = iVar1;
      *(int *)(param_1 + 0x14) = iVar4;
      *(int *)(param_1 + 0x20) = iVar2;
      *(int *)(param_1 + 0x24) = iVar3;
    }
  }
  return bVar6;
}

