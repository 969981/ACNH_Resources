
void FUN_0029c318(long param_1,uint param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50 [4];
  undefined4 local_34;
  
  puVar3 = auStack_90;
  iVar5 = *(int *)(param_1 + 0x158);
  piVar1 = (int *)(param_1 + 0xdc);
  FUN_002296c4(local_50,piVar1);
  if (*(int *)(param_1 + 0x158) == 2) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xd8);
  if (param_3 == 2) {
    if (iVar2 != 0) {
      FUN_00229780(local_50,param_4);
      iVar5 = 2;
    }
    goto LAB_0029c444;
  }
  if ((param_2 < 3) && (iVar2 - 3U < 5)) {
    return;
  }
  switch(param_2) {
  case 0:
    if (iVar2 == 0) goto LAB_0029c444;
  case 1:
    goto switchD_0029c3cc_caseD_1;
  case 2:
    if (iVar2 == 0) {
      return;
    }
    if ((*(int *)(param_1 + 0x158) != 0) && ((param_3 == 0 || (param_3 == 5)))) goto LAB_0029c444;
    goto switchD_0029c3cc_caseD_1;
  case 3:
    local_60 = 0xc406;
    break;
  case 4:
    local_60 = 0xa471;
    break;
  case 5:
    local_60 = 0xc420;
    break;
  case 6:
    local_60 = 0xc421;
    break;
  case 7:
    local_34 = 0;
    local_60 = 0xa46e;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
    if (*param_4 != local_60) {
      local_60 = 0xc406;
      break;
    }
    goto LAB_0029c43c;
  default:
    goto switchD_0029c3cc_default;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
  param_4 = &local_60;
LAB_0029c43c:
  FUN_00229780(local_50,param_4);
switchD_0029c3cc_default:
  iVar5 = 8;
LAB_0029c444:
  if (((*(uint *)(param_1 + 0xd8) == param_2) && (*(int *)(param_1 + 0x158) == iVar5)) &&
     (*piVar1 == local_50[0])) {
    return;
  }
  *(uint *)(param_1 + 0xd8) = param_2;
  *(int *)(param_1 + 0x158) = iVar5;
  FUN_00229780(piVar1,local_50);
  if (*(int *)(param_1 + 0xd8) - 3U < 5) {
    if (*piVar1 == 0) {
      local_34 = 0;
      uVar4 = *(undefined8 *)PTR_DAT_04bcb8c0;
      local_60 = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
      FUN_002296c4(auStack_90,&local_60);
      goto LAB_0029c544;
    }
  }
  else {
    if (*(int *)(param_1 + 0xd8) != 2) {
      return;
    }
    if (*piVar1 == 0) {
      local_34 = 0;
      uVar4 = *(undefined8 *)PTR_DAT_04bcb8c0;
      local_60 = 0x8c56;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
      FUN_002296c4(auStack_80,&local_60);
      puVar3 = auStack_80;
      goto LAB_0029c544;
    }
  }
  uVar4 = *(undefined8 *)PTR_DAT_04bcb8c0;
  FUN_002296c4(auStack_70,piVar1);
  puVar3 = auStack_70;
LAB_0029c544:
  FUN_00223628(uVar4,puVar3);
  return;
switchD_0029c3cc_caseD_1:
  FUN_00229780(local_50,param_4);
  iVar5 = param_3;
  goto LAB_0029c444;
}

