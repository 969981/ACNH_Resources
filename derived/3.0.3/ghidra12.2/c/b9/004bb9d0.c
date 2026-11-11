
long FUN_004bb9d0(long *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long local_290;
  int local_288;
  uint local_230;
  ulong local_220;
  ulong local_170;
  undefined1 local_67;
  long local_60;
  long lStack_58;
  long local_48;
  
  local_48 = param_2;
  lVar3 = FUN_00427270(param_2);
  if ((((lVar3 != 0) && (uVar4 = FUN_00428440(param_2), param_2 != 0)) && ((uVar4 & 0x1f) == 7)) &&
     (uVar1 = FUN_004274f0(param_2), (uVar1 >> 5 & 1) == 0)) {
    FUN_004225b0(&local_290);
    FUN_00427570(param_2,&local_290,0,0);
    lStack_58 = local_290 + local_288 + -1;
    local_60 = local_290;
    uVar2 = FUN_00427340(param_2);
    lVar3 = (**(code **)(*param_1 + 8))(param_1,&local_60,uVar2);
    FUN_00422550(&local_290);
    return *(long *)(lVar3 + 0x50);
  }
  uVar4 = FUN_00428440(param_2);
  if (((param_2 != 0) && ((uVar4 & 0x1f) == 7)) &&
     (uVar1 = FUN_004274f0(param_2), (uVar1 >> 5 & 1) != 0)) {
    local_290 = 0;
    uVar1 = FUN_004a09f0(param_1 + 0x37,&local_48,&local_290);
    plVar7 = (long *)(param_1[0x37] + ((long)((ulong)uVar1 << 0x20) >> 0x1c) + 8);
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      return lVar3;
    }
    *plVar7 = 1;
    FUN_00451ea0(&local_290);
    local_67 = 1;
    if (*(long *)(local_48 + 8) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004bb9d0(param_1);
    }
    uVar6 = FUN_00427270(local_48);
    FUN_00452270(&local_290,uVar6,uVar5);
    auVar9 = FUN_00428010(local_48);
    if (auVar9._0_8_ != auVar9._8_8_) {
      plVar7 = auVar9._0_8_;
      do {
        uVar5 = FUN_00427b40(plVar7);
        uVar2 = FUN_004290b0(plVar7);
        plVar8 = plVar7 + 1;
        uVar6 = FUN_004bb9d0(param_1,*(undefined8 *)(*plVar7 + 8));
        FUN_00453ad0(&local_290,uVar5,uVar2,uVar6);
        plVar7 = plVar8;
      } while (auVar9._8_8_ != plVar8);
    }
    local_170 = (ulong)local_230 | 0x1020;
    local_220 = local_220 | 0x200000;
    local_230 = (uint)local_170;
    FUN_00452230(&local_290,param_1);
    lVar3 = FUN_004535c0(&local_290,param_1 + 0x28);
    *(long *)(param_1[0x37] + (long)(int)uVar1 * 0x10 + 8) = lVar3;
    FUN_00451fa0(&local_290);
    return lVar3;
  }
  uVar4 = FUN_00428440(param_2);
  if ((param_2 == 0) || ((uVar4 & 0x1f) != 6)) {
    uVar4 = FUN_00428440(param_2);
    if ((param_2 == 0) || ((uVar4 & 0x1f) != 8)) {
      uVar4 = FUN_00428440(param_2);
      if ((param_2 != 0) && ((uVar4 & 0x1f) == 3)) {
        uVar5 = FUN_00427270(param_2);
        uVar5 = FUN_004adce0(uVar5,0xffffffff);
        uVar4 = FUN_00428440(param_2);
        lVar3 = (**(code **)(param_1[0x28] + 0x10))(param_1 + 0x28,0x38,0);
        FUN_00453fd0(lVar3,4,4,param_1 + 0x48,uVar5,uVar4 >> 7 & 1,0x1000);
        return lVar3;
      }
      uVar4 = FUN_00428440(param_2);
      if ((((param_2 != 0) && ((uVar4 & 0x1f) == 1)) && (lVar3 = FUN_00446eb0(param_2), lVar3 != 0))
         && (uVar4 = FUN_00427110(lVar3,&DAT_04c16210), (uVar4 & 1) != 0)) {
        return lVar3;
      }
    }
    else {
      uVar4 = FUN_004cb400(param_2);
      if ((uVar4 & 1) == 0) {
        lVar3 = FUN_00426d90(param_2);
        if (lVar3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_004bb9d0(param_1,lVar3);
        }
        uVar6 = FUN_00427270(param_2);
        FUN_004297c0(&local_290,uVar6);
        param_2 = FUN_004c04c0(param_1 + 0x8f,&local_290,uVar5,1,0,0,0);
      }
    }
  }
  else {
    lVar3 = FUN_00426d90(param_2);
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004bb9d0(param_1,lVar3);
    }
    param_2 = FUN_004c0140(param_1 + 0x8f,param_2,uVar5);
  }
  return param_2;
}

