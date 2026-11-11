
void FUN_004dafa0(undefined8 *param_1,int *param_2,long param_3,undefined8 param_4,
                 undefined4 *param_5,long param_6)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  
  *param_1 = 0;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 6) = *param_5;
  uVar3 = FUN_00428440(param_3);
  if ((param_3 != 0) && ((uVar3 & 0x1f) == 8)) {
    puVar4 = (undefined8 *)FUN_00426e90(param_3,1);
    if ((puVar4 == (undefined8 *)0x0) || ((int)((ulong)*puVar4 >> 8) == 0)) {
      *param_1 = param_2;
      if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
        FUN_004db210(param_1[2]);
      }
      FUN_004dad30(&local_70,param_1);
      if (local_68 == 0) {
        uVar5 = FUN_00426d90(param_3);
        param_1[5] = uVar5;
        if ((local_60 & 1) == 0) goto LAB_004db128;
LAB_004db148:
        uVar3 = local_60;
        uVar5 = local_70;
        uVar7 = local_60 & 0xfffffffffffffffe;
        FUN_0043dd30(uVar7);
        param_1[3] = uVar5;
        FUN_0043dd50(uVar7);
      }
      else {
        param_1[5] = local_68;
        if ((local_60 & 1) != 0) goto LAB_004db148;
LAB_004db128:
        param_1[3] = local_70;
        uVar3 = local_60;
      }
      iVar1 = -(int)local_58;
      if (-1 < (int)local_58) {
        iVar1 = (int)local_58;
      }
      *(int *)(param_1 + 4) = iVar1;
      if ((uVar3 & 1) == 0) goto LAB_004db17c;
      plVar9 = (long *)(uVar3 & 0xfffffffffffffffe);
    }
    else {
      uVar3 = FUN_00428370(param_3);
      plVar9 = (long *)(uVar3 & 0xfffffffffffffffe);
      if ((uVar3 & 1) != 0) {
        FUN_0043dd30(plVar9);
      }
      local_60 = 0;
      local_58 = 0;
      local_70 = 0;
      local_68 = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9,param_2,param_3,&local_70);
      lVar8 = local_68;
      if ((local_58 & 1) != 0) {
        FUN_0043dd50(local_58 & 0xfffffffffffffffe);
      }
      param_1[5] = lVar8;
      local_60 = 0;
      local_58 = 0;
      local_70 = 0;
      local_68 = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9,param_2,param_3,&local_70);
      uVar5 = local_70;
      if ((local_58 & 1) != 0) {
        FUN_0043dd50(local_58 & 0xfffffffffffffffe);
      }
      param_1[3] = uVar5;
      local_60 = 0;
      local_58 = 0;
      local_70 = 0;
      local_68 = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9,param_2,param_3,&local_70);
      uVar2 = (undefined4)local_60;
      if ((local_58 & 1) != 0) {
        FUN_0043dd50(local_58 & 0xfffffffffffffffe);
      }
      *(undefined4 *)(param_1 + 4) = uVar2;
      if ((uVar3 & 1) == 0) goto LAB_004db17c;
    }
    FUN_0043dd50(plVar9);
  }
LAB_004db17c:
  lVar8 = param_1[5];
  if (param_6 == 0) {
    if (lVar8 == 0) {
      uVar2 = 0;
      goto LAB_004db1e8;
    }
  }
  else {
    uVar3 = FUN_00428440(lVar8);
    if ((uVar3 & 0x1f) != 7) {
      lVar8 = 0;
    }
    uVar5 = FUN_00427d40(lVar8,param_6,1);
    FUN_004294d0(&local_70,uVar5);
    lVar6 = param_1[3];
    iVar1 = FUN_00429050(&local_70);
    param_1[3] = lVar6 + iVar1;
    param_1[5] = local_70;
  }
  uVar2 = FUN_00426fc0(lVar8);
LAB_004db1e8:
  *(undefined4 *)((long)param_1 + 0x24) = uVar2;
  return;
}

