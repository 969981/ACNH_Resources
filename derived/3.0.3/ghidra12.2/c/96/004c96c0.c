
bool FUN_004c96c0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long local_50 [2];
  long local_38;
  
  lVar1 = param_1 + 0x148;
  local_38 = param_2;
  iVar3 = FUN_00470770(lVar1,&local_38,local_50);
  puVar2 = PTR_DAT_048607b8;
  if (-1 < iVar3) {
    return 1 < (int)local_50[0] - 1U;
  }
  local_38 = 2;
  local_50[0] = param_2;
  FUN_00470440(lVar1,PTR_DAT_048607b8,local_50,&local_38);
  uVar6 = FUN_00428440(param_2);
  if ((param_2 == 0) || ((uVar6 & 0x1f) != 7)) {
    uVar6 = FUN_00428440(param_2);
    if ((((param_2 != 0) && ((uVar6 & 0x1f) == 8)) ||
        ((uVar6 = FUN_00428440(param_2), param_2 != 0 && ((uVar6 & 0x1f) == 6)))) &&
       (lVar8 = FUN_00426d90(param_2), lVar8 != 0)) {
      uVar7 = FUN_00426d90(param_2);
      uVar6 = FUN_004c96c0(param_1,uVar7);
      if ((uVar6 & 1) != 0) goto LAB_004c9834;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x110);
    uVar7 = FUN_00427270(param_2);
    FUN_004297c0(local_50,uVar7);
    uVar4 = FUN_00427340(param_2);
    lVar8 = FUN_0047a610(uVar9,local_50,uVar4);
    if ((lVar8 != 0) ||
       ((*(long *)(param_2 + 8) != 0 && (uVar6 = FUN_004c96c0(param_1), (uVar6 & 1) != 0)))) {
LAB_004c9834:
      local_38 = 0;
      local_50[0] = param_2;
      FUN_00470440(lVar1,puVar2,local_50,&local_38);
      return true;
    }
    iVar3 = FUN_004284f0(param_2);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        uVar7 = FUN_004285f0(param_2,iVar3);
        uVar6 = FUN_004c96c0(param_1,uVar7);
        if ((uVar6 & 1) != 0) goto LAB_004c9834;
        iVar3 = iVar3 + 1;
        iVar5 = FUN_004284f0(param_2);
      } while (iVar3 < iVar5);
    }
  }
  local_38 = 1;
  local_50[0] = param_2;
  FUN_00470440(lVar1,puVar2,local_50,&local_38);
  return false;
}

