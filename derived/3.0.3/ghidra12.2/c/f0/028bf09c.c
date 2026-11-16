
undefined8 FUN_028bf09c(void)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (DAT_05aed670 == 0) {
    return 1;
  }
  if (*(long *)(DAT_05aed670 + 0x330) == 0) {
    return 1;
  }
  puVar3 = (undefined8 *)
           (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
  iVar2 = FUN_006bd550(*puVar3,0);
  if (iVar2 != 0x758f7eaf) {
    return 1;
  }
  if (DAT_05574040 == 0) {
    return 0;
  }
  lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  lVar9 = *(long *)PTR_DAT_04bb32e8;
  if (lVar4 == 0 || lVar9 == 0) {
    return 0;
  }
  lVar8 = *(long *)(lVar4 + 0x27f520);
  if (lVar8 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(lVar4 + 0x27f520);
      uVar5 = uVar5 & 0xffffffff;
      if (lVar8 == 0) goto LAB_028bf1bc;
    }
    plVar6 = *(long **)(lVar8 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_58 = *(long *)(lVar4 + 0x27f500);
      local_50 = *(undefined8 *)(lVar4 + 0x27f508);
      uStack_48 = 8;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
    }
  }
LAB_028bf1bc:
  lVar8 = *(long *)(lVar4 + 0x27f500);
  lVar1 = *(long *)(lVar4 + 0x27f508);
  local_58 = *(long *)(lVar9 + 0x20) / 1000000000 + *(long *)(lVar9 + 8) +
             (((*(long *)(lVar9 + 0x10) + (long)*(int *)(lVar9 + 0x38)) - *(long *)(lVar9 + 8)) *
             1000000000) / 1000000000;
  uVar7 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
  *(undefined8 *)(lVar1 + lVar8) = uVar7;
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0x27f520) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0x27f520) + 0x18), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return 1;
}

