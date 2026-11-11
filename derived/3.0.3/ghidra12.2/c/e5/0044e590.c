
ulong FUN_0044e590(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  local_48 = param_2;
  uVar3 = FUN_004274f0(param_2);
  if ((uVar3 >> 1 & 1) != 0) {
    uVar6 = 0;
    uVar8 = 0xffffffff;
    goto LAB_0044e620;
  }
  lVar5 = FUN_004500e0(param_1,&local_48);
  if (lVar5 == 0) {
LAB_0044e650:
    local_60 = 0;
    local_58 = 0x8000000000000000;
    FUN_0044fb20(param_1,local_48,&local_60,0);
    if (((int)local_58 != 0) && (iVar4 = FUN_0044fd00(param_1,local_48,&local_60), iVar4 < 0)) {
      local_58 = local_58 & 0xffffffff00000000;
    }
    local_70 = 0;
    local_68 = -0x8000000000000000;
    uVar9 = FUN_0044ff60(param_1,&local_48,&local_70);
    lVar5 = local_68;
    puVar2 = PTR_DAT_048607b8;
    uVar3 = local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < lVar5) && (local_70 != 0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_70,0x10,uVar3 & 0x3fffffff);
    }
    uVar8 = local_58;
    lVar10 = *param_1;
    plVar1 = (long *)(lVar10 + (long)(int)uVar9 * 0x18 + 8);
    lVar5 = (long)(int)uVar9;
    if (&local_60 == plVar1) {
      uVar3 = local_58._4_4_;
      local_58 = (ulong)local_58._4_4_ << 0x20;
      if (-1 < (long)uVar8) goto LAB_0044e768;
    }
    else {
      puVar11 = (uint *)(lVar10 + lVar5 * 0x18 + 0x14);
      if ((int)*puVar11 < 0) {
        FUN_00426620(puVar2,plVar1,0x10);
      }
      if ((long)local_58 < 0) {
        FUN_00426620(puVar2,&local_60,0x10);
      }
      lVar7 = *plVar1;
      *plVar1 = local_60;
      *(int *)(lVar10 + lVar5 * 0x18 + 0x10) = (int)local_58;
      uVar3 = *puVar11;
      *puVar11 = (uint)(local_58 >> 0x20);
      local_58 = (ulong)uVar3 << 0x20;
      local_60 = lVar7;
      if (-1 < (int)uVar3) {
LAB_0044e768:
        if (local_60 != 0) {
          FUN_00421f90(puVar2,local_60,0x10,uVar3 & 0x3fffffff);
        }
      }
    }
  }
  else {
    uVar9 = (ulong)*(uint *)(lVar5 + 4) | (lVar5 - param_1[2]) * 0x20000000;
    if ((int)uVar9 < 0) goto LAB_0044e650;
    lVar5 = (long)(int)uVar9;
  }
  iVar4 = *(int *)(*param_1 + lVar5 * 0x18 + 0x10);
  lVar5 = FUN_00426fc0(local_48);
  uVar6 = lVar5 << 0x20;
  uVar8 = 0xffffffff;
  if (iVar4 != 0) {
    uVar8 = uVar9 & 0xffffffff;
  }
LAB_0044e620:
  return uVar6 | uVar8;
}

