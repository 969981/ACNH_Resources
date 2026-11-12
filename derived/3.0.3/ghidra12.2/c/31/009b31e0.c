
void FUN_009b31e0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint local_18 [2];
  
  lVar3 = *(long *)PTR_DAT_04bc95e0;
  if (*(long *)(lVar3 + 0x178) != lVar3 + 0x170) {
    lVar4 = (long)*(int *)(lVar3 + 0x184);
    lVar5 = *(long *)(lVar3 + 0x178) - lVar4;
    do {
      if (*(int *)(lVar5 + 0x18) == 0xd) break;
      lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
    } while (lVar5 != (lVar3 + 0x170) - lVar4);
  }
  local_18[1] = 0;
  iVar1 = nn::hid::GetNpadJoyAssignment(local_18 + 1);
  iVar2 = 0;
  if (iVar1 == 1) {
    uVar6 = 1;
    local_18[1] = 1;
    iVar2 = nn::hid::GetNpadJoyAssignment(local_18 + 1);
    if (iVar2 != 1) {
      uVar6 = 2;
      local_18[1] = 2;
      iVar2 = nn::hid::GetNpadJoyAssignment(local_18 + 1);
      if (iVar2 != 1) {
        uVar6 = 3;
        local_18[1] = 3;
        iVar2 = nn::hid::GetNpadJoyAssignment(local_18 + 1);
        if (iVar2 != 1) {
          if (param_2 < 1) {
            return;
          }
          local_18[1] = 0;
          nn::hid::SetNpadJoyAssignmentModeDual(local_18 + 1);
          iVar2 = 0;
          goto LAB_009b32bc;
        }
      }
    }
    local_18[1] = 0;
    local_18[0] = uVar6;
    nn::hid::MergeSingleJoyAsDualJoy(local_18 + 1,local_18);
    if (param_2 < 2) {
      return;
    }
    iVar2 = 1;
  }
LAB_009b32bc:
  local_18[1] = 1;
  iVar1 = nn::hid::GetNpadJoyAssignment(local_18 + 1);
  if (iVar1 == 1) {
    uVar6 = 2;
    local_18[1] = 2;
    iVar1 = nn::hid::GetNpadJoyAssignment(local_18 + 1);
    if (iVar1 != 1) {
      uVar6 = 3;
      local_18[1] = 3;
      iVar1 = nn::hid::GetNpadJoyAssignment(local_18 + 1);
      if (iVar1 != 1) {
        if (param_2 <= iVar2) {
          return;
        }
        local_18[1] = 1;
        nn::hid::SetNpadJoyAssignmentModeDual(local_18 + 1);
        goto LAB_009b3340;
      }
    }
    local_18[1] = 1;
    local_18[0] = uVar6;
    nn::hid::MergeSingleJoyAsDualJoy(local_18 + 1,local_18);
    iVar2 = iVar2 + 1;
    if (param_2 <= iVar2) {
      return;
    }
  }
LAB_009b3340:
  local_18[1] = 2;
  iVar1 = nn::hid::GetNpadJoyAssignment(local_18 + 1);
  if (iVar1 == 1) {
    local_18[1] = 3;
    iVar1 = nn::hid::GetNpadJoyAssignment(local_18 + 1);
    if (iVar1 == 1) {
      local_18[0] = 3;
      local_18[1] = 2;
      nn::hid::MergeSingleJoyAsDualJoy(local_18 + 1,local_18);
      iVar2 = iVar2 + 1;
      if (param_2 <= iVar2) {
        return;
      }
    }
    else {
      if (param_2 <= iVar2) {
        return;
      }
      local_18[1] = 2;
      nn::hid::SetNpadJoyAssignmentModeDual(local_18 + 1);
    }
  }
  local_18[1] = 3;
  iVar1 = nn::hid::GetNpadJoyAssignment(local_18 + 1);
  if ((iVar2 < param_2) && (iVar1 == 1)) {
    local_18[1] = 3;
    nn::hid::SetNpadJoyAssignmentModeDual(local_18 + 1);
  }
  return;
}

