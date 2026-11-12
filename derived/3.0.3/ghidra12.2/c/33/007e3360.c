
void FUN_007e3360(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar3 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar3 == 0) {
    return;
  }
  if ((*(long **)(lVar3 + 0x17bb0) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x17bb0), puVar4 == (undefined8 *)0x0)) {
    uVar2 = 1;
    if (*(long *)(lVar3 + 0x194b8) == 0) goto LAB_007e33c8;
LAB_007e33e0:
    lVar7 = lVar3 + 0x194b0;
  }
  else {
    uVar2 = (**(code **)*puVar4)();
    uVar2 = uVar2 ^ 1;
    if (*(long *)(lVar3 + 0x194b8) != 0) goto LAB_007e33e0;
LAB_007e33c8:
    lVar7 = *(long *)(*(long *)puVar1 + 0x20);
  }
  lVar8 = *(long *)(lVar7 + 0x8528);
  if (lVar8 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar7 + 0x8528) == 0) goto LAB_007e345c;
      plVar6 = *(long **)(*(long *)(lVar7 + 0x8528) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_48 = *(long *)(lVar7 + 0x8508);
      local_40 = *(undefined8 *)(lVar7 + 0x8510);
      uStack_38 = 0xeab4;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
LAB_007e345c:
  FUN_0282eeac(*(long *)(lVar7 + 0x8510) + *(long *)(lVar7 + 0x8508),
               *(long *)(lVar3 + 0x17b98) + *(long *)(lVar3 + 0x17b90));
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x8528) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x8528) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x17bb0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x17bb0) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

