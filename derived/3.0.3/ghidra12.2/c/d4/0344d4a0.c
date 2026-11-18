
void FUN_0344d4a0(long *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined **local_30;
  undefined4 local_28;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  if (param_2 < 0xc) {
    uVar3 = 3;
    uVar4 = 2;
    if (param_3 != 3) {
      uVar4 = param_3;
    }
    bVar1 = param_3 == 2;
    iVar2 = 0;
LAB_0344d4e8:
    param_3 = uVar3;
    if (!bVar1) {
      param_3 = uVar4;
    }
  }
  else {
    iVar2 = 7;
    switch(param_2) {
    case 0xc:
      uVar3 = 2;
      uVar4 = param_3;
      if (param_3 == 2) {
        uVar4 = 1;
      }
      bVar1 = param_3 == 1;
      iVar2 = 4;
      goto LAB_0344d4e8;
    default:
      goto switchD_0344d568_caseD_d;
    case 0xe:
      break;
    case 0x11:
      iVar2 = 0xc;
      break;
    case 0x12:
      iVar2 = 10;
    }
  }
  local_30 = &PTR_LAB_04aa7fe0;
  local_28 = 0x14;
  (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  (**(code **)(param_1[3] + 0x158))((float)(int)(param_3 + iVar2),param_1[1]);
switchD_0344d568_caseD_d:
  return;
}

