
void FUN_004dc0a0(long *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_60 [16];
  long local_48;
  
  lVar7 = param_2[1];
  uVar5 = FUN_00428440(lVar7);
  if ((uVar5 & 0x1f) != 7) {
    lVar7 = 0;
  }
  FUN_004297c0(auStack_60,param_3);
  local_48 = FUN_004dc1c0(lVar7,auStack_60);
  lVar7 = *param_2;
  iVar4 = FUN_00429050(&local_48);
  lVar3 = local_48;
  lVar7 = lVar7 + iVar4;
  if (local_48 == 0) {
    uVar5 = 0;
    bVar1 = true;
  }
  else {
    uVar5 = FUN_00428370(local_48);
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
    }
    else {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      bVar1 = false;
    }
  }
  lVar8 = param_2[3];
  lVar2 = param_2[4];
  param_1[2] = uVar5;
  *param_1 = lVar7;
  param_1[1] = lVar3;
  if (!bVar1) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
    lVar7 = *param_1;
  }
  param_1[3] = lVar8;
  *(int *)(param_1 + 4) = (int)lVar2;
  if (((lVar7 != 0) && (lVar7 = param_1[1], uVar6 = FUN_00428440(lVar7), lVar7 != 0)) &&
     ((uVar6 & 0x1f) == 7)) {
    FUN_004d6770(param_1);
  }
  if (!bVar1) {
    FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
  }
  return;
}

