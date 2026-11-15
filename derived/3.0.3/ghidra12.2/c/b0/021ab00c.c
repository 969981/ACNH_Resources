
void FUN_021ab00c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (DAT_05574040 == 0) goto LAB_021ab11c;
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar1 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar1 == 0) goto LAB_021ab11c;
    lVar1 = lVar1 + 0x70;
  }
  else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
          (lVar1 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar1 == 0)) goto LAB_021ab11c;
  lVar6 = *(long *)(lVar1 + 0xd0);
  if (lVar6 == 0) {
    FUN_027d9ad0(*(long *)(lVar1 + 0xb8) + *(long *)(lVar1 + 0xb0));
    goto LAB_021ab11c;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
    plVar3 = *(long **)(lVar6 + 0x20);
joined_r0x021ab44c:
    if (plVar3 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar1 + 0xb0);
      uStack_50 = *(undefined8 *)(lVar1 + 0xb8);
      local_48 = 0x1e3388;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
    }
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar2 = uVar2 & 0xffffffff;
    if (*(long *)(lVar1 + 0xd0) != 0) {
      plVar3 = *(long **)(*(long *)(lVar1 + 0xd0) + 0x20);
      goto joined_r0x021ab44c;
    }
  }
  FUN_027d9ad0(*(long *)(lVar1 + 0xb8) + *(long *)(lVar1 + 0xb0));
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0xd0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0xd0) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_021ab11c:
  if (*(char *)(param_1 + 0xaf9) != '\0') {
    if (*(long *)(param_1 + 0xaa0) == 0) {
      uVar4 = 0x22;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0xaa0) + 4);
    }
    *(undefined4 *)(param_1 + 0xaac) = uVar4;
    *(undefined8 *)(param_1 + 0xaa0) = 0;
    FUN_0214d220(param_1 + 0x8b0);
    *(undefined1 *)(param_1 + 0xae6) = 1;
    FUN_0219d7e0(param_1,0,1,1);
  }
  if (*(char *)(param_1 + 0x1699) != '\0') {
    if (*(long *)(param_1 + 0x1640) == 0) {
      uVar4 = 0x22;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x1640) + 4);
    }
    *(undefined4 *)(param_1 + 0x164c) = uVar4;
    *(undefined8 *)(param_1 + 0x1640) = 0;
    FUN_0214d220(param_1 + 0x1450);
    *(undefined1 *)(param_1 + 0x1686) = 1;
    FUN_0219d7e0(param_1,1,1,1);
  }
  if (*(char *)(param_1 + 0x2239) != '\0') {
    if (*(long *)(param_1 + 0x21e0) == 0) {
      uVar4 = 0x22;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x21e0) + 4);
    }
    *(undefined4 *)(param_1 + 0x21ec) = uVar4;
    *(undefined8 *)(param_1 + 0x21e0) = 0;
    FUN_0214d220(param_1 + 0x1ff0);
    *(undefined1 *)(param_1 + 0x2226) = 1;
    FUN_0219d7e0(param_1,2,1,1);
  }
  if (*(char *)(param_1 + 0x2dd9) != '\0') {
    if (*(long *)(param_1 + 0x2d80) == 0) {
      uVar4 = 0x22;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x2d80) + 4);
    }
    *(undefined4 *)(param_1 + 0x2d8c) = uVar4;
    *(undefined8 *)(param_1 + 0x2d80) = 0;
    FUN_0214d220(param_1 + 0x2b90);
    *(undefined1 *)(param_1 + 0x2dc6) = 1;
    FUN_0219d7e0(param_1,3,1,1);
  }
  if (*(char *)(param_1 + 0x3979) != '\0') {
    if (*(long *)(param_1 + 0x3920) == 0) {
      uVar4 = 0x22;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x3920) + 4);
    }
    *(undefined4 *)(param_1 + 0x392c) = uVar4;
    *(undefined8 *)(param_1 + 0x3920) = 0;
    FUN_0214d220(param_1 + 0x3730);
    *(undefined1 *)(param_1 + 0x3966) = 1;
    FUN_0219d7e0(param_1,4,1,1);
  }
  if (*(char *)(param_1 + 0x4519) != '\0') {
    if (*(long *)(param_1 + 0x44c0) == 0) {
      uVar4 = 0x22;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x44c0) + 4);
    }
    *(undefined4 *)(param_1 + 0x44cc) = uVar4;
    *(undefined8 *)(param_1 + 0x44c0) = 0;
    FUN_0214d220(param_1 + 0x42d0);
    *(undefined1 *)(param_1 + 0x4506) = 1;
    FUN_0219d7e0(param_1,5,1,1);
  }
  if (*(char *)(param_1 + 0x50b9) != '\0') {
    if (*(long *)(param_1 + 0x5060) == 0) {
      uVar4 = 0x22;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x5060) + 4);
    }
    *(undefined4 *)(param_1 + 0x506c) = uVar4;
    *(undefined8 *)(param_1 + 0x5060) = 0;
    FUN_0214d220(param_1 + 0x4e70);
    *(undefined1 *)(param_1 + 0x50a6) = 1;
    FUN_0219d7e0(param_1,6,1,1);
  }
  if (*(char *)(param_1 + 0x5c59) != '\0') {
    if (*(long *)(param_1 + 0x5c00) == 0) {
      uVar4 = 0x22;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x5c00) + 4);
    }
    *(undefined4 *)(param_1 + 0x5c0c) = uVar4;
    *(undefined8 *)(param_1 + 0x5c00) = 0;
    FUN_0214d220(param_1 + 0x5a10);
    *(undefined1 *)(param_1 + 0x5c46) = 1;
    FUN_0219d7e0(param_1,7,1,1);
  }
  if (*(char *)(param_1 + 0x67f9) != '\0') {
    if (*(long *)(param_1 + 0x67a0) == 0) {
      uVar4 = 0x22;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x67a0) + 4);
    }
    *(undefined4 *)(param_1 + 0x67ac) = uVar4;
    *(undefined8 *)(param_1 + 0x67a0) = 0;
    FUN_0214d220(param_1 + 0x65b0);
    *(undefined1 *)(param_1 + 0x67e6) = 1;
    FUN_0219d7e0(param_1,8,1,1);
  }
  if (*(char *)(param_1 + 0x7399) != '\0') {
    if (*(long *)(param_1 + 0x7340) == 0) {
      uVar4 = 0x22;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x7340) + 4);
    }
    *(undefined4 *)(param_1 + 0x734c) = uVar4;
    *(undefined8 *)(param_1 + 0x7340) = 0;
    FUN_0214d220(param_1 + 0x7150);
    *(undefined1 *)(param_1 + 0x7386) = 1;
    FUN_0219d7e0(param_1,9,1,1);
  }
  return;
}

