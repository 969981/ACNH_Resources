
void FUN_020f1bac(char *param_1)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar3 = FUN_016c91a4((long)*param_1);
  if (lVar3 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar3 + 0x28);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x28) == 0) goto LAB_020f1c3c;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar3 + 8);
      uStack_40 = *(undefined8 *)(lVar3 + 0x10);
      local_38 = 0x1638;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_020f1c3c:
  uVar2 = FUN_027789e0(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8),param_1 + 1);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  lVar7 = lVar3 + 0x70 + (ulong)uVar2 * 0x428;
  if (0x13 < uVar2) {
    lVar7 = lVar3 + 0x70;
  }
  lVar3 = *(long *)(lVar7 + 0x418);
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
      if (*(long *)(lVar7 + 0x418) == 0) goto LAB_020f1cf0;
      plVar5 = *(long **)(*(long *)(lVar7 + 0x418) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar7 + 0x3f8);
      uStack_40 = *(undefined8 *)(lVar7 + 0x400);
      local_38 = 0x100;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_020f1cf0:
  lVar3 = *(long *)(lVar7 + 0x3f8);
  lVar8 = *(long *)(lVar7 + 0x400);
  sVar1 = *(short *)(param_1 + 4);
  FUN_0273b744(&local_48,*(long *)PTR_DAT_04bb2208 + 0x21e0,(long)*(short *)(param_1 + 2));
  FUN_0273b320(lVar8 + lVar3,&local_48,(int)sVar1);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x418) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x418) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

