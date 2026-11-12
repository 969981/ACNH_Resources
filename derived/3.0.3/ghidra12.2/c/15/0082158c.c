
void FUN_0082158c(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar2 = DAT_055021a0;
  if (DAT_055021a0 == 0) {
    return;
  }
  plVar6 = (long *)(DAT_055021a0 + 0x2173b8);
  plVar1 = (long *)(&LAB_001fdf08 + DAT_055021a0);
  lVar8 = *(long *)(&LAB_001fdf28 + DAT_055021a0);
  if (lVar8 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(&LAB_001fdf28 + lVar2) == 0) goto LAB_00821634;
      plVar4 = *(long **)(*(long *)(&LAB_001fdf28 + lVar2) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_58 = *plVar1;
      local_50 = *(undefined8 *)(&LAB_001fdf10 + lVar2);
      local_48 = 0x37ad0;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
LAB_00821634:
  lVar8 = *(long *)(&LAB_001fdf10 + lVar2) + *plVar1;
  FUN_0274b0d0(lVar8 + 0xc170);
  FUN_02791920(lVar8 + 0xd170);
  if (*plVar6 == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
    lVar9 = *(long *)(lVar8 + 0x28);
  }
  else {
    lVar8 = lVar2 + 0x2173b0;
    lVar9 = *(long *)(lVar2 + 0x2173d8);
  }
  if (lVar9 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_008216e8;
      plVar6 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_58 = *(long *)(lVar8 + 8);
      local_50 = *(undefined8 *)(lVar8 + 0x10);
      local_48 = 0x3ce60;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
    }
  }
LAB_008216e8:
  lVar9 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
  FUN_02803ed0(lVar9 + 0x11c18);
  FUN_027523f0(lVar9 + 0x30784);
  FUN_02754a90(lVar9 + 0x30984);
  nn::oe::GetPseudoDeviceId((Uuid *)(lVar9 + 0x30a84));
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if ((((uVar3 & 1) != 0) && (*(long *)(&LAB_001fdf28 + lVar2) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(&LAB_001fdf28 + lVar2) + 0x18),
     puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

