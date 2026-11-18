
long FUN_035a4ae8(ushort *param_1,ushort *param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  if (7 < param_3) {
    return 0;
  }
  uVar8 = (uint)*param_2;
  uVar7 = (uint)param_2[1];
  switch(param_3) {
  case 0:
    uVar8 = uVar8 - 1;
    break;
  case 1:
    uVar8 = uVar8 + 1;
    break;
  case 2:
    uVar7 = uVar7 - 1;
    break;
  case 3:
    goto switchD_035a4b10_caseD_3;
  case 4:
    uVar8 = uVar8 - 1;
    uVar7 = uVar7 - 1;
    break;
  case 5:
    uVar8 = uVar8 + 1;
    goto switchD_035a4b10_caseD_3;
  case 6:
    uVar8 = uVar8 + 1;
    uVar7 = uVar7 - 1;
    break;
  case 7:
    uVar8 = uVar8 - 1;
switchD_035a4b10_caseD_3:
    uVar7 = uVar7 + 1;
  }
  uVar2 = *param_1;
  lVar6 = 0;
  if ((uint)uVar2 <= (uVar8 & 0xffff)) {
    iVar1 = *(int *)(param_1 + 6);
    if ((uVar8 & 0xffff) <= (((uint)uVar2 + iVar1) - 1 & 0xffff)) {
      uVar3 = param_1[1];
      uVar7 = uVar7 & 0xffff;
      lVar6 = 0;
      if (uVar3 <= uVar7) {
        if (uVar7 <= (((uint)uVar3 + *(int *)(param_1 + 8)) - 1 & 0xffff)) {
          lVar6 = 0;
          iVar4 = (uVar8 & 0xffff) - (uint)uVar2;
          if ((((-1 < iVar4) && (iVar4 < iVar1)) && (iVar5 = uVar7 - uVar3, -1 < iVar5)) &&
             (iVar5 < *(int *)(param_1 + 8))) {
            lVar6 = *(long *)(param_1 + 0x10) + (long)(iVar4 + iVar5 * iVar1) * 0x28;
          }
        }
      }
    }
  }
  return lVar6;
}

