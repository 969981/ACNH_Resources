
void FUN_0340d37c(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined *local_40 [4];
  undefined4 local_4;
  
  uVar2 = *(uint *)(param_1 + 6);
  *(undefined4 *)((long)param_1 + 0x1a4) = 0xffffffff;
  if ((int)uVar2 < 1) {
    piVar7 = (int *)0x0;
  }
  else {
    iVar5 = uVar2 + *(int *)((long)param_1 + 0x2c) + -1;
    iVar3 = 0;
    if (*(int *)(param_1 + 5) <= iVar5) {
      iVar3 = *(int *)(param_1 + 5);
    }
    piVar7 = (int *)(param_1[4] + (long)(iVar5 - iVar3) * 0x78);
  }
  if (3 < uVar2) {
    return;
  }
  switch(uVar2) {
  case 0:
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 == -1) {
      return;
    }
    local_40[0] = PTR_DAT_04bbba70 + 0x10;
    (**(code **)*param_1)(&local_4,param_1);
    iVar5 = *(int *)(param_1 + 6);
    if (7 < (byte)local_4) {
      local_4._0_1_ = 0xff;
    }
    iVar4 = *(int *)(param_1 + 5);
    if (iVar5 < iVar4) {
      *(int *)(param_1 + 6) = iVar5 + 1;
      iVar5 = *(int *)((long)param_1 + 0x2c) + iVar5;
      iVar1 = 0;
      if (iVar4 <= iVar5) {
        iVar1 = iVar4;
      }
      puVar8 = (undefined4 *)(param_1[4] + (long)(iVar5 - iVar1) * 0x78);
      *puVar8 = 1;
      puVar8[2] = iVar3;
      if (7 < (byte)local_4) {
        local_4._0_1_ = 0xff;
      }
      *(byte *)(puVar8 + 3) = (byte)local_4;
      (**(code **)(local_40[0] + 0x10))(local_40,puVar8 + 4);
    }
    if (*(int *)(param_1 + 0x36) == 0) {
      local_4 = 1;
      FUN_03ebb160(param_1 + 0x35,1);
      return;
    }
    return;
  case 1:
    if (*piVar7 != 0) {
      return;
    }
    local_40[0] = PTR_DAT_04bbba70 + 0x10;
    iVar5 = piVar7[2];
    (**(code **)*param_1)(&local_4,param_1);
    iVar3 = *(int *)(param_1 + 6);
    if (7 < (byte)local_4) {
      local_4._0_1_ = 0xff;
    }
    iVar4 = *(int *)(param_1 + 5);
    if (iVar4 <= iVar3) {
      return;
    }
    *(int *)(param_1 + 6) = iVar3 + 1;
    iVar3 = *(int *)((long)param_1 + 0x2c) + iVar3;
    iVar1 = 0;
    if (iVar4 <= iVar3) {
      iVar1 = iVar4;
    }
    puVar8 = (undefined4 *)(param_1[4] + (long)(iVar3 - iVar1) * 0x78);
    *puVar8 = 1;
    puVar8[2] = iVar5;
    if (7 < (byte)local_4) {
      local_4._0_1_ = 0xff;
    }
    *(byte *)(puVar8 + 3) = (byte)local_4;
    (**(code **)(local_40[0] + 0x10))(local_40,puVar8 + 4);
    return;
  case 2:
    if (*piVar7 != 0) {
      return;
    }
    break;
  case 3:
    if (*piVar7 == 0) {
      uVar6 = 2;
      goto LAB_0340d5ac;
    }
  }
  uVar6 = 1;
LAB_0340d5ac:
  *(undefined4 *)(param_1 + 6) = uVar6;
  return;
}

