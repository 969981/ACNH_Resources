
undefined4 FUN_004412a0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 **ppuVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *local_60;
  undefined *local_58;
  ulong local_50;
  ulong local_48;
  
  ppuVar5 = &local_60;
  uVar2 = 0x80040200;
  uVar1 = FUN_00428440(param_2[1]);
  switch(uVar1 & 0x1f) {
  case 0:
  case 1:
    goto switchD_004412f0_caseD_0;
  case 2:
    param_1 = (undefined8 *)*param_1;
    if ((param_1[1] == 0) || (uVar3 = FUN_00428440(), (uVar3 & 0x1f) != 2)) {
      uVar3 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = *param_1;
      uVar9 = param_1[1];
      uVar3 = param_1[2];
      if ((uVar3 & 1) != 0) {
        FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
        uVar3 = param_1[2];
      }
    }
    local_60 = (undefined1 *)((ulong)local_60 & 0xffffffffffffff00);
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_60);
    ppuVar5 = (undefined1 **)((ulong)local_60 & 0xff);
    break;
  case 3:
    param_1 = (undefined8 *)*param_1;
    if ((param_1[1] == 0) || (uVar3 = FUN_00428440(), (uVar3 & 0x1f) != 3)) {
      uVar3 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = *param_1;
      uVar9 = param_1[1];
      uVar3 = param_1[2];
      if ((uVar3 & 1) != 0) {
        FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
        uVar3 = param_1[2];
      }
    }
    local_60 = (undefined1 *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_60);
    ppuVar5 = (undefined1 **)local_60;
    break;
  case 4:
    param_1 = (undefined8 *)*param_1;
    if ((param_1[1] == 0) || (uVar3 = FUN_00428440(), (uVar3 & 0x1f) != 4)) {
      uVar3 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = *param_1;
      uVar9 = param_1[1];
      uVar3 = param_1[2];
      if ((uVar3 & 1) != 0) {
        FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
        uVar3 = param_1[2];
      }
    }
    local_60 = (undefined1 *)0x0;
    local_58 = (undefined *)((ulong)local_58 & 0xffffffffffffff00);
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_60);
    plVar8 = (long *)(uVar3 & 0xfffffffffffffffe);
    pcVar6 = *(code **)(*plVar8 + 0x30);
    goto LAB_00441570;
  case 5:
    param_1 = (undefined8 *)*param_1;
    if ((param_1[1] == 0) || (uVar3 = FUN_00428440(), (uVar3 & 0x1f) != 5)) {
      uVar3 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = *param_1;
      uVar9 = param_1[1];
      uVar3 = param_1[2];
      if ((uVar3 & 1) != 0) {
        FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
        uVar3 = param_1[2];
      }
    }
    local_60 = (undefined1 *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_60);
    plVar8 = (long *)(uVar3 & 0xfffffffffffffffe);
    uVar2 = (**(code **)(*plVar8 + 0x30))(local_60,plVar8,uVar10,uVar9);
    goto joined_r0x004415dc;
  case 6:
    param_1 = (undefined8 *)*param_1;
    if ((param_1[1] == 0) || (uVar3 = FUN_00428440(), (uVar3 & 0x1f) != 6)) {
      uVar3 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = *param_1;
      uVar9 = param_1[1];
      uVar3 = param_1[2];
      if ((uVar3 & 1) != 0) {
        FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
        uVar3 = param_1[2];
      }
    }
    local_58 = (undefined *)0x0;
    local_50 = 0;
    local_60 = (undefined1 *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_60);
    plVar8 = (long *)(uVar3 & 0xfffffffffffffffe);
    uVar2 = (**(code **)(*plVar8 + 0x48))(plVar8,uVar10,uVar9,&local_60);
    if ((local_50 & 1) != 0) {
      FUN_0043dd50(local_50 & 0xfffffffffffffffe);
    }
    goto joined_r0x00441704;
  case 7:
    param_1 = (undefined8 *)*param_1;
    if ((param_1[1] == 0) || (uVar3 = FUN_00428440(), (uVar3 & 0x1f) != 7)) {
      uVar3 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = *param_1;
      uVar9 = param_1[1];
      uVar3 = param_1[2];
      if ((uVar3 & 1) != 0) {
        FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
        uVar3 = param_1[2];
      }
    }
    local_60 = (undefined1 *)*param_2;
    local_58 = (undefined *)param_2[1];
    uVar7 = param_2[2];
    local_50 = uVar7;
    if ((uVar7 & 1) == 0) {
      uVar4 = FUN_00427110(local_58,uVar9);
    }
    else {
      FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
      uVar4 = FUN_00427110(local_58,uVar9);
    }
    if ((uVar4 & 1) != 0) {
      uVar2 = (**(code **)(*(long *)(uVar3 & 0xfffffffffffffffe) + 0x48))
                        ((long *)(uVar3 & 0xfffffffffffffffe),uVar10,uVar9,&local_60);
      uVar7 = local_50;
    }
    if ((uVar7 & 1) != 0) {
      FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
    }
    if ((uVar3 & 1) == 0) {
      return uVar2;
    }
    plVar8 = (long *)(uVar3 & 0xfffffffffffffffe);
    goto LAB_0044170c;
  case 8:
    param_1 = (undefined8 *)*param_1;
    if ((param_1[1] == 0) || (uVar3 = FUN_00428440(), (uVar3 & 0x1f) != 8)) {
      uVar3 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = *param_1;
      uVar9 = param_1[1];
      uVar3 = param_1[2];
      if ((uVar3 & 1) != 0) {
        FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
        uVar3 = param_1[2];
      }
    }
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1 *)0x0;
    local_58 = (undefined *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_60);
    plVar8 = (long *)(uVar3 & 0xfffffffffffffffe);
    uVar2 = (**(code **)(*plVar8 + 0x48))(plVar8,uVar10,uVar9,&local_60);
    if ((local_48 & 1) != 0) {
      FUN_0043dd50(local_48 & 0xfffffffffffffffe);
    }
joined_r0x00441704:
    if ((uVar3 & 1) == 0) {
      return uVar2;
    }
    goto LAB_0044170c;
  default:
    local_50 = 0;
    local_60 = (undefined1 *)0x0;
    local_58 = &DAT_0413df78;
    FUN_004223c0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch",&local_60);
    goto switchD_004412f0_caseD_0;
  }
  plVar8 = (long *)(uVar3 & 0xfffffffffffffffe);
  pcVar6 = *(code **)(*plVar8 + 0x30);
LAB_00441570:
  uVar2 = (*pcVar6)(plVar8,uVar10,uVar9,ppuVar5);
joined_r0x004415dc:
  if ((uVar3 & 1) != 0) {
LAB_0044170c:
    FUN_0043dd50(plVar8);
  }
switchD_004412f0_caseD_0:
  return uVar2;
}

