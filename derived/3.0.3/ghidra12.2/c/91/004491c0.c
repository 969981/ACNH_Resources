
undefined4 FUN_004491c0(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *plStack_98;
  undefined8 local_90;
  char *local_88;
  undefined8 uStack_80;
  long local_70;
  int *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  
  local_68 = (int *)0x0;
  local_60._0_4_ = 0;
  local_60._4_4_ = 0x80000000;
  uVar4 = (ulong)((long)param_3 - (long)param_2) >> 3;
  if (0 < (int)uVar4) {
    local_68 = (int *)FUN_00426720(PTR_DAT_048607c0,uVar4,4,0,0,(long)&local_60 + 4);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  puVar8 = PTR_DAT_048607c0;
  if (param_2 != param_3) {
    plVar9 = param_2;
    do {
      local_70 = *plVar9;
      if (*(int *)(param_1 + 0x68) < 1) {
LAB_00449374:
        local_58[0] = 0x80040200;
        if (DAT_04c6f6c8 != '\0') {
          FUN_00444bc0(&local_b0,&DAT_04c6f678,1);
          local_88 = 
          "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
          ;
          uStack_80 = 0x117;
          uVar3 = FUN_004446b0(&local_b0,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_048616f8,
                               "idx < 0",local_58);
          FUN_004446b0(uVar3,"Cannot remove type \'{}\' from registry (not present)",&DAT_048616b0,
                       &local_70);
          FUN_00444c00(&local_b0);
        }
        goto LAB_004493e8;
      }
      lVar10 = 0;
      while (*(long *)(*(long *)(param_1 + 0x60) + lVar10 * 8) != local_70) {
        lVar10 = lVar10 + 1;
        if (*(int *)(param_1 + 0x68) <= lVar10) goto LAB_00449374;
      }
      local_58[0] = 0x80040200;
      if ((int)lVar10 < 0) goto LAB_00449374;
      if ((uint)local_60 == (local_60._4_4_ & 0x3fffffff)) {
        FUN_00426990(puVar8,&local_68,4);
      }
      plVar9 = plVar9 + 1;
      uVar1 = (uint)local_60 + 1;
      local_68[(int)(uint)local_60] = (int)lVar10;
      local_60._0_4_ = uVar1;
    } while (plVar9 != param_3);
  }
  FUN_0046e430(param_1 + 0x90,param_2,param_3);
  if (1 < (int)(uint)local_60) {
    FUN_0044c090(local_68,0,(uint)local_60 - 1);
  }
  if ((uint)local_60 != 0) {
    lVar10 = (long)(int)(uint)local_60 << 2;
    piVar5 = local_68;
    do {
      iVar2 = *piVar5;
      lVar7 = (long)*(int *)(param_1 + 0x68) + -1;
      iVar6 = (int)lVar7;
      *(int *)(param_1 + 0x68) = iVar6;
      if (iVar6 != iVar2) {
        *(undefined8 *)(*(long *)(param_1 + 0x60) + (long)iVar2 * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar7 * 8);
      }
      piVar5 = piVar5 + 1;
      lVar10 = lVar10 + -4;
    } while (lVar10 != 0);
  }
  local_90 = 0;
  local_88 = (char *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = param_2;
  plStack_98 = param_3;
  FUN_004490c0(param_1,&local_b0);
  local_58[0] = 0;
  puVar8 = PTR_DAT_048607c0;
LAB_004493e8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  uVar1 = local_60._4_4_;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  if ((-1 < (int)uVar1) && (local_68 != (int *)0x0)) {
    FUN_00421f90(puVar8,local_68,4,uVar1 & 0x3fffffff);
  }
  return local_58[0];
}

