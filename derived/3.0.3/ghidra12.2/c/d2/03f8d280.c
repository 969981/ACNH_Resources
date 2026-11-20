
void FUN_03f8d280(long *param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  undefined1 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  plVar1 = param_1 + 0x2809;
  uVar8 = param_2 >> 0x10;
  uVar7 = (uint)param_2;
  uVar2 = (undefined1)(param_3 >> 8);
  if (((uVar7 ^ 0xffffffff) & 0xfff) == 0) {
    FUN_03f5ef94(param_1,uVar8 & 0xffffffff,param_2 & 0xffffffff,param_3);
    if (((uVar7 ^ 0xffffffff) & 0xffff) != 0) {
      FUN_03f5ef94(param_1,uVar8 & 0xffffffff,uVar7 + 1,param_3 >> 8 & 0xff);
      return;
    }
    uVar8 = (ulong)((int)(param_2 >> 0x10) + 1);
    puVar5 = (undefined1 *)param_1[(uVar8 & 0xff) * 0x10 + 0x1004];
    if ((undefined1 *)0x63 < puVar5) {
      *puVar5 = uVar2;
      return;
    }
    switch(puVar5) {
    case (undefined1 *)0x1:
      return;
    default:
      goto switchD_03f8d3c0_caseD_2;
    case (undefined1 *)0x7:
      *(undefined1 *)param_1[3] = uVar2;
      return;
    case (undefined1 *)0x8:
      *(undefined1 *)(*plVar1 + ((ulong)*(uint *)(param_1 + 0x280c) & (uVar8 & 3) << 0x10)) = uVar2;
      return;
    case (undefined1 *)0x9:
      lVar6 = *param_1;
      iVar3 = 0;
      goto LAB_03f8d500;
    case (undefined1 *)0xa:
      param_3 = param_3 >> 8 & 0xff0000ff;
      iVar3 = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
    }
    goto LAB_03f8d4b0;
  }
  uVar4 = param_1[(param_2 >> 0x10 & 0xff) * 0x10 + (param_2 >> 0xc & 0xf) + 0x1004];
  if (99 < uVar4) {
    *(short *)(uVar4 + (param_2 & 0xfff)) = (short)param_3;
    return;
  }
  switch(uVar4) {
  case 1:
    if ((uVar7 >> 9 & 0x7f) < 0x11) {
      return;
    }
    (**(code **)(*param_1 + 0x28))(param_1,param_2 & 0xffffffff,param_3);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
    break;
  default:
switchD_03f8d3c0_caseD_2:
    *(int *)param_1[0x280f] = *(int *)param_1[0x280f] + 1;
    return;
  case 7:
    uVar7 = uVar7 & 0xfff;
    if (0x7ff < uVar7) {
      return;
    }
    *(char *)(param_1[3] + (param_2 & 0xfff)) = (char)param_3;
    if (uVar7 == 0x7ff) {
      return;
    }
    lVar6 = param_1[3] + (ulong)uVar7;
    goto LAB_03f8d448;
  case 8:
    uVar8 = (ulong)*(uint *)(param_1 + 0x280c) & (param_2 & 0xffff | (uVar8 & 3) << 0x10);
    *(char *)(*plVar1 + uVar8) = (char)param_3;
    lVar6 = uVar8 + *plVar1;
LAB_03f8d448:
    *(undefined1 *)(lVar6 + 1) = uVar2;
    return;
  case 9:
    (**(code **)(*param_1 + 0x18))(param_1,uVar8 & 0xffffffff,param_2 & 0xffffffff,param_3);
    lVar6 = *param_1;
    iVar3 = uVar7 + 1;
    uVar8 = param_2 >> 0x10 & 0xffffffff;
LAB_03f8d500:
                    /* WARNING: Could not recover jumptable at 0x03f8d514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x18))(param_1,uVar8,iVar3,param_3 >> 8 & 0xff);
    return;
  case 10:
    (**(code **)(*param_1 + 0x10))(param_1,param_2 & 0xffffffff,param_3);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
  }
  param_3 = param_3 >> 8;
  iVar3 = uVar7 + 1;
LAB_03f8d4b0:
                    /* WARNING: Could not recover jumptable at 0x03f8d4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,iVar3,param_3 & 0xff);
  return;
}

