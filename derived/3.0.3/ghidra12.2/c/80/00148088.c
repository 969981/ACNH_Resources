
ulong FUN_00148088(long param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  
  if (*(long **)(param_1 + 0x10) == (long *)0x0) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x60);
  if (iVar6 - 3U < 0xe) {
    **(long **)(param_1 + 0x10) = param_1;
    iVar6 = *(int *)(param_1 + 0x60);
  }
  uVar3 = 0;
  switch(iVar6) {
  case 3:
    uVar3 = FUN_0014adf0(*(undefined8 *)(param_1 + 0x10),param_2,5);
    return uVar3;
  case 4:
    lVar4 = *(long *)(param_1 + 0x10);
    if ((*(int *)(lVar4 + 0x178) == 2) && (*(char *)(lVar4 + 0x418) == '\0')) {
      return 0;
    }
    lVar7 = 0;
    uVar3 = 0;
    iVar6 = 0;
    bVar2 = true;
    do {
      bVar8 = bVar2;
      iVar1 = *(int *)(lVar4 + lVar7 * 4 + 0x260);
      if (iVar1 != -1) {
        param_2[iVar6] = iVar1;
        uVar5 = iVar6 + 0x10;
        iVar6 = iVar6 + 1;
        uVar3 = (ulong)(1 << (ulong)(uVar5 & 0x1f) | (uint)uVar3);
      }
      lVar7 = 1;
      bVar2 = false;
    } while (bVar8);
    break;
  case 5:
    lVar4 = *(long *)(param_1 + 0x10);
    *param_2 = *(undefined4 *)(lVar4 + 600);
    uVar5 = 0x10000;
    if (*(long *)(lVar4 + 0x678) != 0) {
      uVar5 = 1;
    }
    return (ulong)uVar5;
  case 6:
  case 7:
    uVar3 = FUN_0014fce8(*(undefined8 *)(param_1 + 0x10),param_2,5);
    return uVar3;
  case 9:
  case 10:
    uVar3 = FUN_0014fd08(*(undefined8 *)(param_1 + 0x10),param_2,5);
    return uVar3;
  case 0xb:
    lVar4 = *(long *)(param_1 + 0x10);
    uVar3 = 0;
    if (lVar4 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + 0x440) + 0x50);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x001481a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(lVar4,param_2,5);
      return uVar3;
    }
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    uVar3 = FUN_001610c8(*(undefined8 *)(param_1 + 0x10),param_2,5);
    return uVar3;
  }
  return uVar3;
}

