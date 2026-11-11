
undefined8
FUN_003bcaa4(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 *param_5,
            long param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined4 local_44;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_003bd090(param_1,param_2,param_3,param_5[2]);
  }
  if (((*(long *)(param_1 + 0xe0) != 0) && (*(long *)(param_2 + 0x28) != 0)) &&
     (*(long *)(param_2 + 0x68) != 0)) goto switchD_003bcbec_caseD_0;
  piVar1 = (int *)(param_4 + 4);
  if (param_6 != 0) {
    piVar1 = (int *)(param_6 + 0x10);
  }
  plVar8 = (long *)param_5[2];
  lVar7 = param_5[3];
  iVar9 = *piVar1;
  if (iVar9 == -1) {
    iVar9 = -1;
    local_44 = 0xffffffff;
    uVar4 = FUN_003b87e4(plVar8,&local_44,0xffffffff);
    if ((uVar4 & 1) != 0) goto LAB_003bcb9c;
    goto switchD_003bcbec_caseD_0;
  }
  uVar4 = (**(code **)(*plVar8 + 0x30))(plVar8);
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_003b8394(plVar8,iVar9);
    iVar2 = FUN_003b83ec(*param_5,uVar5);
    if (iVar2 != -1) {
      plVar8 = (long *)*param_5;
      lVar7 = param_5[1];
      iVar9 = iVar2;
    }
  }
  local_44 = 0xffffffff;
  uVar4 = FUN_003b87e4(plVar8,&local_44,iVar9);
  if ((uVar4 & 1) == 0) goto switchD_003bcbec_caseD_0;
LAB_003bcb9c:
  lVar6 = FUN_003e0344(lVar7,local_44);
  *(long *)(param_2 + 0x28) = lVar6;
  if (lVar6 == 0) {
    if (*(char *)(param_2 + 0xa4) != '\0') {
      lVar7 = 0;
      goto LAB_003bcfa4;
    }
    goto switchD_003bcbec_caseD_0;
  }
  uVar3 = FUN_003b7fb0(param_2 + 0x60,param_2 + 0xa0,lVar6,plVar8,lVar7 + 0x18);
  switch(uVar3) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(char *)(param_2 + 0xa4) != '\0') goto LAB_003bcc14;
    break;
  case 0xfffffffe:
    return 7;
  case 0xffffffff:
    if (*(char *)(param_2 + 0xa4) == '\0') {
      return 9;
    }
LAB_003bcc14:
    *(undefined1 *)(param_2 + 0xa5) = 1;
    break;
  default:
    goto switchD_003bcf7c_default;
  }
switchD_003bcbec_caseD_0:
  if (((*(long *)(param_1 + 0xe0) != 0) && (*(long *)(param_2 + 0x38) != 0)) &&
     (*(long *)(param_2 + 0x78) != 0)) goto switchD_003bcd1c_caseD_0;
  piVar1 = (int *)(param_4 + 8);
  if (param_6 != 0) {
    piVar1 = (int *)(param_6 + 0x14);
  }
  plVar8 = (long *)param_5[2];
  lVar7 = param_5[3];
  iVar9 = *piVar1;
  if (iVar9 == -1) {
    iVar9 = -1;
    local_44 = 0xffffffff;
    uVar4 = FUN_003b87e4(plVar8,&local_44,0xffffffff);
    if ((uVar4 & 1) != 0) goto LAB_003bcccc;
    goto switchD_003bcd1c_caseD_0;
  }
  uVar4 = (**(code **)(*plVar8 + 0x30))(plVar8);
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_003b8394(plVar8,iVar9);
    iVar2 = FUN_003b83ec(*param_5,uVar5);
    if (iVar2 != -1) {
      plVar8 = (long *)*param_5;
      lVar7 = param_5[1];
      iVar9 = iVar2;
    }
  }
  local_44 = 0xffffffff;
  uVar4 = FUN_003b87e4(plVar8,&local_44,iVar9);
  if ((uVar4 & 1) == 0) goto switchD_003bcd1c_caseD_0;
LAB_003bcccc:
  lVar6 = FUN_003e0344(lVar7,local_44);
  *(long *)(param_2 + 0x38) = lVar6;
  if (lVar6 == 0) {
    if (*(char *)(param_2 + 0xa4) != '\0') {
      lVar7 = 1;
      goto LAB_003bcfa4;
    }
    goto switchD_003bcd1c_caseD_0;
  }
  uVar3 = FUN_003b7fb0(param_2 + 0x70,param_2 + 0xa1,lVar6,plVar8,lVar7 + 0x18);
  uVar5 = 7;
  switch(uVar3) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(char *)(param_2 + 0xa4) != '\0') goto LAB_003bcd44;
    break;
  case 0xfffffffe:
    goto switchD_003bcf7c_caseD_fffffffe;
  case 0xffffffff:
    if (*(char *)(param_2 + 0xa4) == '\0') {
      return 9;
    }
LAB_003bcd44:
    *(undefined1 *)(param_2 + 0xa5) = 1;
    break;
  default:
    goto switchD_003bcf7c_default;
  }
switchD_003bcd1c_caseD_0:
  if (((*(long *)(param_1 + 0xe0) != 0) && (*(long *)(param_2 + 0x48) != 0)) &&
     (*(long *)(param_2 + 0x88) != 0)) goto switchD_003bce4c_caseD_0;
  piVar1 = (int *)(param_4 + 0xc);
  if (param_6 != 0) {
    piVar1 = (int *)(param_6 + 0x18);
  }
  plVar8 = (long *)param_5[2];
  lVar7 = param_5[3];
  iVar9 = *piVar1;
  if (iVar9 == -1) {
    iVar9 = -1;
    local_44 = 0xffffffff;
    uVar4 = FUN_003b87e4(plVar8,&local_44,0xffffffff);
    if ((uVar4 & 1) != 0) goto LAB_003bcdfc;
    goto switchD_003bce4c_caseD_0;
  }
  uVar4 = (**(code **)(*plVar8 + 0x30))(plVar8);
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_003b8394(plVar8,iVar9);
    iVar2 = FUN_003b83ec(*param_5,uVar5);
    if (iVar2 != -1) {
      plVar8 = (long *)*param_5;
      lVar7 = param_5[1];
      iVar9 = iVar2;
    }
  }
  local_44 = 0xffffffff;
  uVar4 = FUN_003b87e4(plVar8,&local_44,iVar9);
  if ((uVar4 & 1) == 0) goto switchD_003bce4c_caseD_0;
LAB_003bcdfc:
  lVar6 = FUN_003e0344(lVar7,local_44);
  *(long *)(param_2 + 0x48) = lVar6;
  if (lVar6 == 0) {
    if (*(char *)(param_2 + 0xa4) != '\0') {
      lVar7 = 2;
      goto LAB_003bcfa4;
    }
    goto switchD_003bce4c_caseD_0;
  }
  uVar3 = FUN_003b7fb0(param_2 + 0x80,param_2 + 0xa2,lVar6,plVar8,lVar7 + 0x18);
  uVar5 = 7;
  switch(uVar3) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(char *)(param_2 + 0xa4) != '\0') goto LAB_003bce74;
    break;
  case 0xfffffffe:
    goto switchD_003bcf7c_caseD_fffffffe;
  case 0xffffffff:
    if (*(char *)(param_2 + 0xa4) == '\0') {
      return 9;
    }
LAB_003bce74:
    *(undefined1 *)(param_2 + 0xa5) = 1;
    break;
  default:
    goto switchD_003bcf7c_default;
  }
switchD_003bce4c_caseD_0:
  if (((*(long *)(param_1 + 0xe0) != 0) && (*(long *)(param_2 + 0x58) != 0)) &&
     (*(long *)(param_2 + 0x98) != 0)) goto switchD_003bcf7c_caseD_0;
  piVar1 = (int *)(param_4 + 0x10);
  if (param_6 != 0) {
    piVar1 = (int *)(param_6 + 0x1c);
  }
  plVar8 = (long *)param_5[2];
  lVar7 = param_5[3];
  iVar9 = *piVar1;
  if (iVar9 == -1) {
    iVar9 = -1;
    local_44 = 0xffffffff;
    uVar4 = FUN_003b87e4(plVar8,&local_44,0xffffffff);
    if ((uVar4 & 1) != 0) goto LAB_003bcf2c;
    goto switchD_003bcf7c_caseD_0;
  }
  uVar4 = (**(code **)(*plVar8 + 0x30))(plVar8);
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_003b8394(plVar8,iVar9);
    iVar2 = FUN_003b83ec(*param_5,uVar5);
    if (iVar2 != -1) {
      plVar8 = (long *)*param_5;
      lVar7 = param_5[1];
      iVar9 = iVar2;
    }
  }
  local_44 = 0xffffffff;
  uVar4 = FUN_003b87e4(plVar8,&local_44,iVar9);
  if ((uVar4 & 1) == 0) goto switchD_003bcf7c_caseD_0;
LAB_003bcf2c:
  lVar6 = FUN_003e0344(lVar7,local_44);
  *(long *)(param_2 + 0x58) = lVar6;
  if (lVar6 == 0) {
    if (*(char *)(param_2 + 0xa4) != '\0') {
      lVar7 = 3;
LAB_003bcfa4:
      *(int *)(param_2 + lVar7 * 0x10 + 0x20) = iVar9;
      *(undefined1 *)(param_2 + 0xa5) = 1;
      return 0;
    }
    goto switchD_003bcf7c_caseD_0;
  }
  uVar3 = FUN_003b7fb0(param_2 + 0x90,param_2 + 0xa3,lVar6,plVar8,lVar7 + 0x18);
  uVar5 = 7;
  switch(uVar3) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(char *)(param_2 + 0xa4) != '\0') goto LAB_003bcfc4;
    break;
  case 0xfffffffe:
    goto switchD_003bcf7c_caseD_fffffffe;
  case 0xffffffff:
    if (*(char *)(param_2 + 0xa4) == '\0') {
      return 9;
    }
LAB_003bcfc4:
    *(undefined1 *)(param_2 + 0xa5) = 1;
    break;
  default:
switchD_003bcf7c_default:
    uVar5 = 0xff;
    goto switchD_003bcf7c_caseD_fffffffe;
  }
switchD_003bcf7c_caseD_0:
  uVar5 = 0;
switchD_003bcf7c_caseD_fffffffe:
  return uVar5;
}

