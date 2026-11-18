
undefined8 FUN_03640e48(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    uVar5 = 1;
    *(undefined1 *)((long)param_1 + 0x12) = 1;
    *(undefined4 *)(param_1 + 6) = 0x1333;
    goto LAB_03641148;
  case 1:
    iVar6 = *(int *)(param_1 + 6) + -1;
    *(int *)(param_1 + 6) = iVar6;
    if (*(char *)((long)param_1 + 0x3a) != '\0') {
      if (*(int *)((long)param_1 + 0xc) == 1) {
        *(undefined4 *)(param_1 + 3) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x8fa) = 1;
        if (*(int *)((long)param_1 + 0x14) == 0x80) {
          *(undefined4 *)(param_1 + 6) = 0;
          *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + iVar6;
          *(undefined4 *)(param_1 + 4) = 2;
          iVar6 = 0;
        }
      }
      if (*(char *)((long)param_1 + 0x11) != '\0') {
        uVar4 = nn::os::GetSystemTick();
        param_1[0x8fb] = uVar4;
        *(uint *)*param_1 = *(uint *)*param_1 | 0x40;
        iVar6 = *(int *)(param_1 + 6);
      }
    }
    if (iVar6 == 0) {
      uVar3 = 2;
LAB_036410e0:
      *(undefined4 *)(param_1 + 4) = uVar3;
    }
    break;
  case 2:
    if (*(char *)(param_1 + 7) != '\0') {
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)((long)param_1 + 0x3a) = 1;
    }
    uVar3 = FUN_03641f00(param_1);
    uVar5 = 3;
    *(undefined4 *)((long)param_1 + 0x24) = uVar3;
    iVar6 = 0x39;
    switch(uVar3) {
    case 0:
      iVar6 = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      uVar5 = 5;
      break;
    case 1:
      break;
    case 2:
      iVar6 = 3;
      break;
    case 3:
      iVar6 = 0x11;
      break;
    case 4:
      iVar6 = -4;
      if (*(char *)((long)param_1 + 0x6c) != '\0') {
        iVar6 = -6;
      }
      uVar1 = iVar6 + *(int *)((long)param_1 + 0x2c);
      iVar6 = CONCAT11(*(undefined1 *)(param_1[9] + (ulong)(uVar1 + 1)),
                       *(undefined1 *)(param_1[9] + (ulong)uVar1)) + 2;
      uVar5 = 3;
      break;
    default:
      iVar6 = -1;
    }
    *(int *)((long)param_1 + 0x34) = iVar6;
LAB_03641148:
    uVar4 = 0x94;
    *(undefined4 *)(param_1 + 4) = uVar5;
    goto LAB_03641150;
  case 3:
    if (*(char *)(param_1 + 7) != '\0') {
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)((long)param_1 + 0x3a) = 1;
    }
    FUN_03641f00(param_1);
    iVar6 = *(int *)((long)param_1 + 0x34) + -1;
    *(int *)((long)param_1 + 0x34) = iVar6;
    if (iVar6 == 2) {
      uVar3 = 4;
      goto LAB_036410e0;
    }
    break;
  case 4:
    if (*(char *)(param_1 + 7) == '\0') {
      uVar3 = 0x88;
      if (*(int *)((long)param_1 + 0x34) != 1) {
        uVar3 = 0;
      }
      uVar5 = 0x91;
      if (*(int *)((long)param_1 + 0x34) != 2) {
        uVar5 = uVar3;
      }
      if (*(char *)((long)param_1 + 0x3a) != '\0') goto LAB_03641004;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x3a) = 1;
      uVar3 = 0x88;
      if (*(int *)((long)param_1 + 0x34) != 1) {
        uVar3 = 0;
      }
      uVar5 = 0x91;
      if (*(int *)((long)param_1 + 0x34) != 2) {
        uVar5 = uVar3;
      }
LAB_03641004:
      if (*(int *)((long)param_1 + 0xc) == 1) {
        *(undefined4 *)(param_1 + 3) = uVar5;
        cVar2 = *(char *)((long)param_1 + 0x11);
      }
      else {
        *(undefined1 *)(param_1 + 0x8fa) = 1;
        cVar2 = *(char *)((long)param_1 + 0x11);
      }
      if (cVar2 != '\0') {
        uVar4 = nn::os::GetSystemTick();
        param_1[0x8fb] = uVar4;
        *(uint *)*param_1 = *(uint *)*param_1 | 0x40;
      }
    }
    if (*(char *)((long)param_1 + 0x6c) != '\0') {
      *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + 1;
    }
    iVar6 = *(int *)((long)param_1 + 0x34) + -1;
    *(int *)((long)param_1 + 0x34) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 6) = 0x82;
      uVar3 = 1;
      goto LAB_036410e0;
    }
    break;
  case 5:
    if (*(int *)((long)param_1 + 0x2c) == *(int *)(param_1 + 0xe) + -1 ||
        *(int *)(param_1 + 5) == 67999) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)((long)param_1 + 0x12) = 0;
      *(undefined1 *)(param_1 + 0x8fa) = 0;
      param_1[5] = 0xffffffff;
      param_1[6] = 0;
      if (*(char *)((long)param_1 + 0x39) == '\0') {
        uVar4 = 0x400;
      }
      else {
        *(undefined1 *)((long)param_1 + 0x3a) = 0;
        uVar4 = 0x400;
        *(undefined1 *)((long)param_1 + 0xb) = 0;
      }
      goto LAB_03641150;
    }
    *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + 1;
  }
  uVar4 = 0x94;
LAB_03641150:
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
  return uVar4;
}

