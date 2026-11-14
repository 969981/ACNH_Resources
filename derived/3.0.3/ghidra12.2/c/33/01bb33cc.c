
long FUN_01bb33cc(long param_1,undefined1 param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = DAT_0533ec08;
  if (param_3 == 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 == (long *)0x0) {
      iVar4 = 0;
      lVar6 = *(long *)PTR_DAT_04bb28f8;
    }
    else {
      if (*(char *)((long)plVar2 + 0x24) != '\0') {
        return 0;
      }
      plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
      piVar3 = (int *)(**(code **)(*plVar2 + 0x48))();
      if (piVar3 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar3;
      }
    }
    switch(param_2) {
    case 0:
      uVar5 = 0x22;
      break;
    case 1:
      uVar5 = 0x24;
      break;
    case 2:
      uVar5 = 0x26;
      break;
    case 3:
      uVar5 = 0x28;
      if (iVar4 != 1) {
        uVar5 = 0x29;
      }
      if (1 < iVar4 - 1U) {
        return 0;
      }
      goto LAB_01bb34f4;
    case 4:
      uVar5 = 0x1a;
      break;
    case 5:
      uVar5 = 0x1c;
      break;
    case 6:
      uVar5 = 0x1e;
      break;
    case 7:
      uVar5 = 0x20;
      break;
    default:
      goto switchD_01bb3474_default;
    }
    if (iVar4 != 1) {
      uVar5 = uVar5 + 1;
    }
    if (iVar4 - 1U < 2) {
LAB_01bb34f4:
      lVar1 = lVar6 + 0x29f8 + (ulong)uVar5 * 0x128;
      if (0x50 < uVar5) {
        lVar1 = lVar6 + 0x29f8;
      }
      return lVar1;
    }
  }
switchD_01bb3474_default:
  return 0;
}

