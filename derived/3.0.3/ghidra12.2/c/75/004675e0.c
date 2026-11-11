
void FUN_004675e0(ulong *param_1,ulong *param_2)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *local_60;
  ulong uStack_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  if ((ulong *)*param_2 == (ulong *)0x0) {
    FUN_00467740(param_1);
    return;
  }
  cVar1 = (char)param_1[1];
  if (cVar1 == '\x02') {
    puVar10 = (ulong *)param_1[2];
joined_r0x00467638:
    if ((ulong *)*param_2 == puVar10) {
      return;
    }
LAB_0046763c:
    iVar4 = FUN_00426fc0(*param_1);
    iVar5 = FUN_00426fc0(param_2[1]);
    if (iVar4 != iVar5) {
LAB_004676a8:
      FUN_00467740(param_1);
      goto LAB_004676b0;
    }
    iVar4 = FUN_00427030(*param_1);
    iVar5 = FUN_00427030(param_2[1]);
    if (((iVar4 < iVar5) || (uVar7 = FUN_0044e270(param_2[1]), (uVar7 & 1) == 0)) ||
       (uVar7 = FUN_0044e270(*param_1), (uVar7 & 1) == 0)) goto LAB_004676a8;
    if ((char)param_1[1] == '\x02') {
      puVar10 = (ulong *)param_1[2];
    }
    else if ((char)param_1[1] == '\x01') {
      puVar10 = param_1 + 2;
    }
    else {
      puVar10 = (ulong *)0x0;
    }
    uVar7 = *param_1;
    puVar8 = (undefined8 *)FUN_00426e90(uVar7,0x100);
    if ((puVar8 != (undefined8 *)0x0) && ((code *)*puVar8 != (code *)0x0)) {
      (*(code *)*puVar8)(puVar10,uVar7,1);
    }
    *param_1 = param_2[1];
  }
  else {
    if (cVar1 == '\x01') {
      puVar10 = param_1 + 2;
      goto joined_r0x00467638;
    }
    if (cVar1 != '\0') goto LAB_0046763c;
LAB_004676b0:
    *param_1 = param_2[1];
    FUN_004672e0(param_1,param_2);
  }
  FUN_00429460(&local_48,*param_1);
  if (1 < local_48) {
    *param_1 = *(ulong *)(*param_1 + 8);
  }
  local_48 = *param_2;
  local_40 = param_2[1];
  local_38 = param_2[2];
  if ((local_38 & 1) != 0) {
    FUN_0043dd30(local_38 & 0xfffffffffffffffe);
  }
  uVar7 = local_40;
  FUN_00429460(&local_60,local_40);
  if (((ulong *)0x1 < local_60) &&
     (uVar3 = FUN_004274f0(uVar7), uVar7 = local_38, uVar2 = local_48, local_48 = uVar2,
     (uVar3 >> 3 & 1) == 0)) {
    uVar9 = *(ulong *)(local_40 + 8);
    if (uVar9 == 0) {
      local_38 = 0;
      uVar6 = local_38;
    }
    else {
      uVar6 = FUN_00428370(uVar9);
      uVar7 = local_38;
      if ((uVar6 & 1) != 0) {
        FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
        uVar7 = local_38;
      }
    }
    local_38 = uVar6;
    local_48 = uVar2;
    local_40 = uVar9;
    if ((uVar7 & 1) != 0) {
      FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
    }
  }
  if ((char)param_1[1] == '\x02') {
    local_60 = (ulong *)param_1[2];
    uStack_58 = *param_1;
    local_50 = 0;
    if (uStack_58 == 0) goto LAB_0046755c;
  }
  else if ((char)param_1[1] == '\x01') {
    local_60 = param_1 + 2;
    uStack_58 = *param_1;
    if (uStack_58 == 0) {
      local_50 = 0;
      goto LAB_0046755c;
    }
  }
  else {
    uStack_58 = *param_1;
    local_60 = (ulong *)0x0;
    if (uStack_58 == 0) {
      local_50 = 0;
      goto LAB_0046755c;
    }
  }
  local_50 = FUN_00428370();
LAB_0046755c:
  if ((local_50 & 1) != 0) {
    FUN_0043dd30(local_50 & 0xfffffffffffffffe);
  }
  FUN_0044eea0(&local_60,&local_48);
  if ((local_50 & 1) != 0) {
    FUN_0043dd50(local_50 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_0043dd50(local_38 & 0xfffffffffffffffe);
  }
  return;
}

