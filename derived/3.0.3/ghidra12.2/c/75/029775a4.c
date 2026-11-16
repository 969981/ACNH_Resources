
undefined2 FUN_029775a4(long param_1)

{
  CalendarTime *pCVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  CalendarTime *pCVar9;
  long local_48;
  
  puVar3 = PTR_DAT_04bb32e8;
  pCVar1 = (CalendarTime *)(param_1 + 0x274);
  lVar7 = *(long *)PTR_DAT_04bb32e8;
  uVar8 = *(undefined8 *)(lVar7 + 0x4060);
  *(undefined8 *)pCVar1 = uVar8;
  if ((char)((ulong)uVar8 >> 0x20) < '\x05') {
    local_48 = nn::time::ToPosixTimeFromUtc(pCVar1);
    local_48 = local_48 + -0x15180;
    uVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    *(undefined8 *)pCVar1 = uVar8;
    lVar7 = *(long *)puVar3;
  }
  *(undefined1 *)(param_1 + 0x27a) = 0;
  *(undefined2 *)(param_1 + 0x278) = 5;
  uVar8 = *(undefined8 *)(lVar7 + 0x4060);
  pCVar9 = (CalendarTime *)(param_1 + 0x27c);
  *(undefined8 *)pCVar9 = uVar8;
  if ((char)((ulong)uVar8 >> 0x20) < '\x05') {
    local_48 = nn::time::ToPosixTimeFromUtc(pCVar9);
    local_48 = local_48 + -0x15180;
    uVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    *(undefined8 *)pCVar9 = uVar8;
  }
  *(undefined2 *)(param_1 + 0x280) = 5;
  *(undefined1 *)(param_1 + 0x282) = 0;
  local_48 = nn::time::ToPosixTimeFromUtc(pCVar9);
  local_48 = local_48 + -0x15180;
  uVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
  *(undefined8 *)(param_1 + 0x27c) = uVar8;
  uVar5 = FUN_00a82aa0(*(undefined8 *)puVar3,pCVar1);
  *(undefined4 *)(param_1 + 0x284) = uVar5;
  iVar6 = FUN_00a82aa0(*(undefined8 *)puVar3,pCVar9);
  uVar4 = 0;
  *(int *)(param_1 + 0x288) = iVar6;
  switch(*(undefined4 *)(param_1 + 0x284)) {
  case 0:
  case 0xf:
    goto switchD_029776b8_caseD_0;
  case 1:
    if (iVar6 == 0x1d) goto switchD_029776b8_caseD_0;
    goto LAB_029776f8;
  default:
    goto switchD_029776b8_caseD_2;
  case 0x10:
    if (iVar6 != 0xe) goto LAB_029776f8;
switchD_029776b8_caseD_0:
    uVar2 = *(short *)(param_1 + 0x28c) - 3;
    if (uVar2 < 8) {
      uVar4 = *(undefined2 *)(&DAT_04101fe0 + (long)(short)uVar2 * 2);
    }
    else {
LAB_029776f8:
      uVar4 = 0;
    }
switchD_029776b8_caseD_2:
    return uVar4;
  }
}

