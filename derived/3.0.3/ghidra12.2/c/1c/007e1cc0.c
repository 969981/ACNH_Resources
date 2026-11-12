
void FUN_007e1cc0(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar4 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar4 == 0) {
    return;
  }
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    return;
  }
  puVar8 = *(undefined8 **)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
    if (lVar7 == 0) {
      return;
    }
    lVar7 = lVar7 + 0x70;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar8[0x26] == (long *)0x0) {
      return;
    }
    lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
    if (lVar7 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar4 + 0x17bb0) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar4 + 0x17bb0), puVar8 == (undefined8 *)0x0)) {
    uVar2 = 1;
    plVar9 = *(long **)(lVar7 + 0xe7290);
    if (plVar9 != (long *)0x0) goto LAB_007e1d90;
LAB_007e1dbc:
    uVar3 = 1;
    if (*(long *)(lVar4 + 0x194b8) != 0) goto LAB_007e1dc8;
LAB_007e1db0:
    lVar10 = *(long *)(*(long *)puVar1 + 0x20);
  }
  else {
    uVar2 = (**(code **)*puVar8)();
    uVar2 = uVar2 ^ 1;
    plVar9 = *(long **)(lVar7 + 0xe7290);
    if (plVar9 == (long *)0x0) goto LAB_007e1dbc;
LAB_007e1d90:
    if ((undefined8 *)*plVar9 == (undefined8 *)0x0) goto LAB_007e1dbc;
    uVar3 = (*(code *)**(undefined8 **)*plVar9)();
    uVar3 = uVar3 ^ 1;
    if (*(long *)(lVar4 + 0x194b8) == 0) goto LAB_007e1db0;
LAB_007e1dc8:
    lVar10 = lVar4 + 0x194b0;
  }
  plVar9 = (long *)(lVar10 + 0x8508);
  lVar11 = *(long *)(lVar10 + 0x8528);
  if (lVar11 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      lVar11 = *(long *)(lVar10 + 0x8528);
      uVar5 = uVar5 & 0xffffffff;
      if (lVar11 == 0) goto LAB_007e1e3c;
    }
    plVar6 = *(long **)(lVar11 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_58 = *plVar9;
      local_50 = *(undefined8 *)(lVar10 + 0x8510);
      uStack_48 = 0xeab4;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
    }
  }
LAB_007e1e3c:
  FUN_0282eeac(*(long *)(lVar10 + 0x8510) + *plVar9,
               *(long *)(lVar4 + 0x17b98) + *(long *)(lVar4 + 0x17b90));
  if ((*(long *)(lVar10 + 0x8528) != 0) &&
     (plVar6 = *(long **)(*(long *)(lVar10 + 0x8528) + 0x20), plVar6 != (long *)0x0)) {
    local_58 = *plVar9;
    local_50 = *(undefined8 *)(lVar10 + 0x8510);
    uStack_48 = 0xeab4;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
  }
  FUN_0282fbb4(*(long *)(lVar10 + 0x8510) + *plVar9,
               *(long *)(lVar4 + 0x17b98) + *(long *)(lVar4 + 0x17b90),
               *(long *)(lVar7 + 0xe7278) + *(long *)(lVar7 + 0xe7270));
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar10 + 0x8528) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x8528) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar7 + 0xe7290) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0xe7290) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x17bb0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar4 + 0x17bb0) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

