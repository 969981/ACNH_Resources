
undefined8 FUN_0272d760(long *param_1,long *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  local_a0 = *param_1;
  if (local_a0 == 0) {
    return 0;
  }
  if (*(int *)(local_a0 + 0x2c) == 1) {
    local_70 = param_1[1];
    local_68 = param_1[2];
    local_60 = param_1[3];
    local_58 = param_1[4];
    iVar1 = *param_3;
    if (iVar1 != 0) {
      lVar7 = *(long *)(param_3 + 2);
      iVar6 = 0;
      local_78 = local_a0;
      do {
        local_a0 = local_70;
        local_98 = local_68;
        iVar2 = FUN_0272e334(&local_a0,*(undefined4 *)(lVar7 + (long)iVar6 * 0xc));
        if (iVar2 == -1) goto LAB_0272d860;
        local_88 = 0;
        lStack_80 = 0;
        lVar5 = lVar7 + (long)iVar6 * 0xc;
        local_98 = 0;
        lStack_90 = 0;
        local_a0 = 0;
        uVar3 = FUN_0272d888(&local_78,&local_a0,iVar2,*(undefined4 *)(lVar5 + 4),
                             *(undefined4 *)(lVar5 + 8));
        if ((uVar3 & 1) == 0) goto LAB_0272d860;
        local_70 = local_98;
        local_68 = lStack_90;
        iVar6 = iVar6 + 1;
        local_78 = local_a0;
        local_60 = local_88;
        local_58 = lStack_80;
      } while (iVar1 != iVar6);
    }
    if (param_2 != (long *)0x0) {
      param_2[4] = local_58;
      *param_2 = local_a0;
      param_2[1] = local_70;
      param_2[2] = local_68;
      param_2[3] = local_60;
    }
    uVar4 = 1;
  }
  else {
LAB_0272d860:
    uVar4 = 0;
  }
  return uVar4;
}

