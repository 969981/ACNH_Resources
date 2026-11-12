
int FUN_00a8656c(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  float fVar12;
  ulong local_58;
  long local_38;
  
  plVar9 = (long *)(param_1 + 0x64d40);
  iVar4 = FUN_00a86724();
  if ((*(int *)(param_1 + 0x65410) == 0) || (0xf < *(int *)(param_1 + 0x65410) - 1U)) {
    uVar10 = (ulong)*(byte *)(param_1 + 0x651dc);
  }
  else {
    local_58 = *(ulong *)(param_1 + 0x65438);
    if ((local_58 & 0xffff) != 0) {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_38 = local_38 + -0xe10;
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar10 = local_58 >> 0x20;
  }
  iVar5 = FUN_00a868d0(param_1,uVar10);
  uVar6 = FUN_00a867c8(param_1);
  local_38 = CONCAT44(local_38._4_4_,iVar4);
  cVar1 = *(char *)(param_1 + 0x651e5);
  cVar2 = *(char *)(param_1 + 0x651e6);
  if (iVar4 == 5) {
    plVar7 = (long *)(param_1 + 0x64d70);
  }
  else {
    plVar7 = plVar9;
    if (iVar4 != 4) {
      return 0;
    }
  }
  piVar8 = (int *)(**(code **)(*plVar7 + 0xf0))();
  iVar4 = *piVar8;
  iVar3 = (int)cVar2 + cVar1 * 0x3c;
  iVar11 = *(int *)(param_1 + 0x65ae0);
  if (iVar11 <= iVar3) {
    if (iVar3 < 0xe10 - *(int *)(param_1 + 0x65ae4)) {
      return iVar4;
    }
    if ((uVar6 & 0xfffffffe) == 4) {
      return iVar4;
    }
    fVar12 = ((float)(0xe10 - iVar3) / (float)*(int *)(param_1 + 0x65ae4)) * (float)iVar4;
    goto LAB_00a86700;
  }
  local_58 = CONCAT44(local_58._4_4_,iVar5);
  if (iVar5 == 5) {
    plVar9 = (long *)(param_1 + 0x64d70);
LAB_00a866c8:
    piVar8 = (int *)(**(code **)(*plVar9 + 0xf0))();
    iVar11 = *(int *)(param_1 + 0x65ae0);
    fVar12 = (float)*piVar8;
  }
  else {
    if (iVar5 == 4) goto LAB_00a866c8;
    fVar12 = 0.0;
  }
  fVar12 = fVar12 * (1.0 - (float)iVar3 / (float)iVar11) +
           ((float)iVar3 / (float)iVar11) * (float)iVar4;
LAB_00a86700:
  return (int)fVar12;
}

