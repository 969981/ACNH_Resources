
bool FUN_013d3780(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float local_6c [3];
  int local_34;
  
  lVar2 = DAT_04cfae30 + 0x28;
  fVar7 = (float)*(int *)(param_1 + 0xc) * 10.0 + 5.0 + -10.0;
  fVar6 = (float)*(int *)(param_1 + 8) * 10.0 + 5.0 + -10.0;
  iVar3 = (int)((float)(int)fVar6 / 10.0) - (uint)(fVar6 < 0.0);
  iVar4 = (int)((float)(int)fVar7 / 10.0) - (uint)(fVar7 < 0.0);
  iVar1 = iVar4 + 3;
  iVar5 = iVar3;
  do {
    local_6c[1] = 0.0;
    local_34 = 0;
    local_6c[0] = (float)iVar5 * 10.0 + 5.0;
    local_6c[2] = (float)iVar4 * 10.0 + 5.0;
    FUN_0093a950(lVar2,local_6c,&local_34);
    if (local_34 != *param_2) break;
    if (iVar5 < iVar3 + 2) {
      iVar5 = iVar5 + 1;
    }
    else {
      iVar4 = iVar4 + 1;
      iVar5 = iVar3;
    }
  } while ((iVar3 != iVar5) || (iVar1 != iVar4));
  return local_34 == *param_2;
}

