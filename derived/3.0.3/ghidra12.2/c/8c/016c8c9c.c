
void FUN_016c8c9c(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar2 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_1);
  if (lVar2 == 0) {
    return;
  }
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
LAB_016c8d28:
    lVar7 = 0;
  }
  else {
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar8 + 0x38))();
      lVar7 = 0;
      if (lVar3 != 0) {
        lVar7 = lVar3 + 0x70;
      }
    }
    else {
      if (puVar8 == (undefined8 *)0x0) goto LAB_016c8d28;
      lVar7 = 0;
      if ((long *)puVar8[0x26] != (long *)0x0) {
        lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
      }
    }
  }
  lVar3 = *(long *)(&LAB_00205768 + lVar7);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar3 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(&LAB_00205768 + lVar7) == 0) goto LAB_016c8da4;
      plVar5 = *(long **)(*(long *)(&LAB_00205768 + lVar7) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_58 = *(long *)(lVar7 + 0x205748);
      local_50 = *(undefined8 *)(lVar7 + 0x205750);
      uStack_48 = 0x3a348;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
    }
  }
LAB_016c8da4:
  lVar3 = *(long *)(lVar7 + 0x205750) + *(long *)(lVar7 + 0x205748);
  if ((*(long **)(lVar2 + 0x17f68) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar2 + 0x17f68), puVar8 == (undefined8 *)0x0)) {
    FUN_02774a70(lVar3,*(long *)(lVar2 + 0x17f50) + *(long *)(lVar2 + 0x17f48));
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    FUN_02774a70(lVar3,*(long *)(lVar2 + 0x17f50) + *(long *)(lVar2 + 0x17f48));
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar2 + 0x17f68) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar2 + 0x17f68) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(&LAB_00205768 + lVar7) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(&LAB_00205768 + lVar7) + 0x18),
     puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

