
long FUN_01bb3518(long param_1,undefined1 param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  if (param_3 != 0) {
    return 0;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  lVar6 = *(long *)PTR_DAT_04bb28f8;
  if (plVar2 == (long *)0x0) {
LAB_01bb3580:
    iVar4 = 0;
LAB_01bb3584:
    switch(param_2) {
    case 0:
      uVar5 = 0x32;
      break;
    case 1:
      uVar5 = 0x34;
      break;
    case 2:
      uVar5 = 0x36;
      break;
    case 3:
      uVar5 = 0x38;
      break;
    case 4:
      uVar5 = 0x2a;
      break;
    case 5:
      uVar5 = 0x2c;
      break;
    case 6:
      uVar5 = 0x2e;
      break;
    case 7:
      uVar5 = 0x30;
      break;
    default:
      goto switchD_01bb35a8_default;
    }
    if (iVar4 != 1) {
      uVar5 = uVar5 + 1;
    }
    if (iVar4 - 1U < 2) goto LAB_01bb3618;
  }
  else if (*(char *)((long)plVar2 + 0x24) == '\0') {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
    piVar3 = (int *)(**(code **)(*plVar2 + 0x48))();
    if (piVar3 == (int *)0x0) goto LAB_01bb3580;
    iVar4 = *piVar3;
    goto LAB_01bb3584;
  }
switchD_01bb35a8_default:
  uVar5 = 0;
LAB_01bb3618:
  lVar1 = lVar6 + 0x29f8 + (ulong)uVar5 * 0x128;
  if (0x50 < uVar5) {
    lVar1 = lVar6 + 0x29f8;
  }
  return lVar1;
}

