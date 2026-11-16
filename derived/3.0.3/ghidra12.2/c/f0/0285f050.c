
undefined8 FUN_0285f050(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  undefined *local_58;
  char *local_50;
  undefined8 uStack_48;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar6[0x26] == (long *)0x0) {
      return 0;
    }
    lVar4 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
    if (lVar4 == 0) {
      return 0;
    }
  }
  uVar1 = *(uint *)(DAT_04ccdcc0 + 4);
  if (4 < uVar1) {
    uVar8 = 0;
    lVar7 = *(long *)(lVar4 + 0x1c2868);
  }
  else {
    uVar8 = *(undefined4 *)(&DAT_0417bbf0 + (long)(int)uVar1 * 4);
    lVar7 = *(long *)(lVar4 + 0x1c2868);
  }
  if ((lVar7 == 0) || (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0)) {
    uVar2 = 1;
    lVar7 = *(long *)(lVar4 + 0xe7610);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    uVar2 = uVar2 ^ 1;
    lVar7 = *(long *)(lVar4 + 0xe7610);
  }
  if ((lVar7 == 0) || (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0)) {
    uVar3 = 1;
    lVar7 = *(long *)(lVar4 + 0x1c2868);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    uVar3 = uVar3 ^ 1;
    lVar7 = *(long *)(lVar4 + 0x1c2868);
  }
  if ((lVar7 != 0) && (plVar5 = *(long **)(lVar7 + 0x20), plVar5 != (long *)0x0)) {
    local_58 = *(undefined **)(lVar4 + 0x1c2848);
    local_50 = *(char **)(lVar4 + 0x1c2850);
    uStack_48 = 4;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
  }
  *(undefined4 *)(*(long *)(lVar4 + 0x1c2850) + *(long *)(lVar4 + 0x1c2848)) = uVar8;
  if ((*(long *)(lVar4 + 0xe7610) != 0) &&
     (plVar5 = *(long **)(*(long *)(lVar4 + 0xe7610) + 0x20), plVar5 != (long *)0x0)) {
    local_58 = *(undefined **)(lVar4 + 0xe75f0);
    local_50 = *(char **)(lVar4 + 0xe75f8);
    uStack_48 = 0x800;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
  }
  local_58 = PTR_DAT_04bb2020 + 0x10;
  local_50 = "NoncompliantRegionCode";
  FUN_0273f520(*(long *)(lVar4 + 0xe75f8) + *(long *)(lVar4 + 0xe75f0),&local_58,4 < uVar1);
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0xe7610) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0xe7610) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x1c2868) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x1c2868) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return 1;
}

