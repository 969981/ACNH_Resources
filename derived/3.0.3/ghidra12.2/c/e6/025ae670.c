
int FUN_025ae670(long param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_58 = CONCAT71(local_58._1_7_,*(byte *)(param_1 + 0x18));
    lVar4 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      return 0;
    }
    if (DAT_05574040 == 0) {
      return 0;
    }
    lVar4 = FUN_026eec4c();
  }
  if (lVar4 == 0) {
    return 0;
  }
  lVar7 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar7 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar7 + 0x2a938);
  plVar8 = *(long **)(lVar7 + 0x2a958);
  if ((plVar8 == (long *)0x0) || ((undefined8 *)*plVar8 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (*(code *)**(undefined8 **)*plVar8)();
    plVar8 = *(long **)(lVar7 + 0x2a958);
    uVar3 = uVar3 ^ 1;
  }
  uVar2 = *(uint *)(*(long *)(lVar7 + 0x2a940) + *plVar1 + (param_2 & 0xffffffff) * 4);
  if ((uVar3 & 1) == 0) {
    if (plVar8 != (long *)0x0) {
      if ((undefined8 *)plVar8[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar8[1])();
        plVar8 = *(long **)(lVar7 + 0x2a958);
        goto LAB_025ae76c;
      }
      goto LAB_025ae770;
    }
LAB_025ae7bc:
    uVar3 = *(uint *)(*(long *)(lVar7 + 0x2a940) + *plVar1 + (param_3 & 0xffffffff) * 4);
LAB_025ae7cc:
    iVar10 = 0;
    if (uVar3 <= uVar2) {
      iVar10 = uVar2 - uVar3;
    }
    if (plVar8 == (long *)0x0) {
LAB_025ae868:
      lVar4 = *(long *)(lVar7 + 0x2a940) + *plVar1;
      lVar7 = (param_3 & 0xffffffff) * 4;
      *(uint *)(lVar4 + lVar7) = *(int *)(lVar4 + lVar7) + uVar2;
      return iVar10;
    }
    puVar6 = (undefined8 *)plVar8[2];
  }
  else {
LAB_025ae76c:
    if (plVar8 == (long *)0x0) goto LAB_025ae7bc;
LAB_025ae770:
    if ((undefined8 *)*plVar8 == (undefined8 *)0x0) goto LAB_025ae7bc;
    uVar5 = (*(code *)**(undefined8 **)*plVar8)();
    plVar8 = *(long **)(lVar7 + 0x2a958);
    uVar3 = *(uint *)(*(long *)(lVar7 + 0x2a940) + *plVar1 + (param_3 & 0xffffffff) * 4);
    if ((uVar5 & 1) == 0) goto LAB_025ae7cc;
    if (plVar8 == (long *)0x0) {
      iVar10 = 0;
      if (uVar3 <= uVar2) {
        iVar10 = uVar2 - uVar3;
      }
      goto LAB_025ae868;
    }
    if ((undefined8 *)plVar8[1] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)plVar8[1])();
      plVar8 = *(long **)(lVar7 + 0x2a958);
      goto LAB_025ae7cc;
    }
    iVar10 = 0;
    if (uVar3 <= uVar2) {
      iVar10 = uVar2 - uVar3;
    }
    puVar6 = (undefined8 *)plVar8[2];
  }
  if (puVar6 == (undefined8 *)0x0) {
    uVar5 = 0;
    plVar8 = (long *)plVar8[4];
  }
  else {
    uVar5 = (**(code **)*puVar6)();
    uVar5 = uVar5 & 0xffffffff;
    if (*(long *)(lVar7 + 0x2a958) == 0) goto LAB_025ae824;
    plVar8 = *(long **)(*(long *)(lVar7 + 0x2a958) + 0x20);
  }
  if (plVar8 != (long *)0x0) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar7 + 0x2a940);
    uStack_48 = 0x80;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
  }
LAB_025ae824:
  lVar4 = *(long *)(lVar7 + 0x2a940) + *plVar1;
  lVar9 = (param_3 & 0xffffffff) * 4;
  *(uint *)(lVar4 + lVar9) = *(int *)(lVar4 + lVar9) + uVar2;
  if ((uVar5 & 1) == 0) {
    return iVar10;
  }
  if (*(long *)(lVar7 + 0x2a958) == 0) {
    return iVar10;
  }
  puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x2a958) + 0x18);
  if (puVar6 == (undefined8 *)0x0) {
    return iVar10;
  }
  (**(code **)*puVar6)();
  return iVar10;
}

