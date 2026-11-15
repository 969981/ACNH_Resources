
undefined8 FUN_0220f914(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  
  puVar1 = PTR_DAT_04bb30a0;
  uVar2 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  if ((uVar2 & 0xfffffffd) == 5) {
    if (param_1 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = FUN_00a86724(*(undefined8 *)puVar1);
    if ((uVar2 & 0xfffffffe) == 4) {
      piVar6 = (int *)(*(long *)puVar1 + 0x6533c);
    }
    else {
      uVar2 = FUN_00a86724();
      if ((uVar2 & 0xfffffffe) != 6) {
        uVar4 = 1;
        uVar5 = 1;
        goto LAB_0220fa7c;
      }
      piVar6 = (int *)(*(long *)puVar1 + 0x65340);
    }
    uVar5 = 1;
    uVar4 = 1;
    if (0x37 < *piVar6) {
      uVar4 = 2;
    }
    goto LAB_0220fa7c;
  }
  uVar2 = FUN_00a86724(*(undefined8 *)puVar1);
  if (uVar2 < 4) {
LAB_0220fa70:
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar2 = FUN_00a867c8(*(undefined8 *)puVar1);
    uVar3 = FUN_00a86724(*(undefined8 *)puVar1);
    if (uVar2 < 4) {
      if ((uVar3 & 0xfffffffe) == 4) {
        piVar6 = (int *)(*(long *)puVar1 + 0x6533c);
      }
      else {
        uVar2 = FUN_00a86724();
        if ((uVar2 & 0xfffffffe) != 6) goto LAB_0220fa70;
        piVar6 = (int *)(*(long *)puVar1 + 0x65340);
      }
      if (*piVar6 < 6) goto LAB_0220fa70;
    }
    else {
      if ((uVar3 & 0xfffffffe) == 4) {
        piVar6 = (int *)(*(long *)puVar1 + 0x6533c);
      }
      else {
        uVar2 = FUN_00a86724();
        if ((uVar2 & 0xfffffffe) != 6) goto LAB_0220fa70;
        piVar6 = (int *)(*(long *)puVar1 + 0x65340);
      }
      if (*piVar6 < 7) goto LAB_0220fa70;
    }
    uVar4 = 1;
    uVar5 = 1;
  }
  if (param_1 == (undefined4 *)0x0) {
    return uVar5;
  }
LAB_0220fa7c:
  *param_1 = uVar4;
  return uVar5;
}

