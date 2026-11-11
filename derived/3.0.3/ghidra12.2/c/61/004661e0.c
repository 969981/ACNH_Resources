
void FUN_004661e0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                 int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long local_78;
  long local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  
  FUN_0043f220(&local_70,param_3,param_5);
  if (local_68 != 0) {
    uVar4 = FUN_00428440();
    lVar8 = local_68;
    lVar7 = local_70;
    if ((uVar4 & 0x1f) == 8) {
      uVar4 = local_60;
      if ((local_60 & 1) != 0) {
        FUN_0043dd30(local_60 & 0xfffffffffffffffe);
        uVar4 = local_60;
      }
      goto joined_r0x00466288;
    }
  }
  lVar7 = 0;
  lVar8 = 0;
  uVar4 = 0;
joined_r0x00466288:
  if ((local_60 & 1) != 0) {
    FUN_0043dd50(local_60 & 0xfffffffffffffffe);
  }
  if (lVar7 != 0) {
    uVar5 = FUN_00428440(param_4);
    if ((uVar5 & 0x1f) != 7) {
      param_4 = 0;
    }
    uVar6 = FUN_00427d40(param_4,param_5,1);
    FUN_004294d0(&local_70,uVar6);
    local_78 = local_70;
    uVar5 = FUN_00428440(local_70);
    if ((uVar5 & 0x1f) != 8) {
      local_70 = 0;
    }
    uVar6 = FUN_00426d90(local_70);
    iVar3 = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa0) = iVar3 + 1;
    local_60 = 0;
    local_58 = 0;
    local_70 = 0;
    local_68 = 0;
    (**(code **)(*(long *)(uVar4 & 0xfffffffffffffffe) + 0x50))
              ((long *)(uVar4 & 0xfffffffffffffffe),lVar7,lVar8,&local_70);
    iVar2 = (int)local_60;
    if ((local_58 & 1) != 0) {
      FUN_0043dd50(local_58 & 0xfffffffffffffffe);
    }
    piVar1 = (int *)(param_1 + (long)iVar3 * 0x10);
    *piVar1 = iVar2;
    iVar3 = FUN_00426fc0(uVar6);
    piVar1[1] = iVar3 * iVar2 + 0xfU & 0xfffffff0;
    iVar3 = FUN_00429050(&local_78);
    piVar1[2] = iVar3 + param_6;
    piVar1[3] = param_2;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + piVar1[1];
  }
  if ((uVar4 & 1) != 0) {
    FUN_0043dd50(uVar4 & 0xfffffffffffffffe);
  }
  return;
}

