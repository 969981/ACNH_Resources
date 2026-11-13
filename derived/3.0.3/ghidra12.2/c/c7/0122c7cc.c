
void FUN_0122c7cc(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 == 0) {
LAB_0122c83c:
    lVar6 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar6 = 0;
      if (lVar3 != 0) {
        lVar6 = lVar3 + 0x70;
      }
    }
    else {
      if (puVar7 == (undefined8 *)0x0) goto LAB_0122c83c;
      lVar6 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
    }
  }
  lVar3 = *(long *)(lVar6 + 0x1c24e8);
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
      if (*(long *)(lVar6 + 0x1c24e8) == 0) goto LAB_0122c8b4;
      plVar5 = *(long **)(*(long *)(lVar6 + 0x1c24e8) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long *)(lVar6 + 0x1c24c8);
      local_40 = *(undefined8 *)(lVar6 + 0x1c24d0);
      uStack_38 = 0x928;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_0122c8b4:
  puVar1 = (uint *)(*(long *)(lVar6 + 0x1c24d0) + *(long *)(lVar6 + 0x1c24c8) + 0x904);
  puVar2 = puVar1 + param_1;
  if (7 < param_1) {
    puVar2 = puVar1;
  }
  *puVar2 = *(uint *)(&DAT_0514e448 + (long)(int)param_1 * 2) & 0x3ff |
            (*(uint *)((long)&DAT_0514e448 + (long)(int)param_1 * 0x10 + 4) & 0x3ff) << 10 |
            0x400000;
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x1c24e8) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1c24e8) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  *(undefined4 *)((long)&DAT_0514e4c0 + (long)(int)param_1 * 4) = 4;
  return;
}

