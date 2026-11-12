
void FUN_006e4570(long param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char *__src;
  int iVar4;
  int iVar5;
  char *__dest;
  
  **(undefined1 **)(param_1 + 8) = 0;
  switch(param_2) {
  case 0:
  case 1:
  case 5:
  case 7:
  case 8:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "user") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "user";
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,4);
    bVar2 = iVar4 + -4 < 0;
    bVar3 = iVar4 == 4;
    iVar4 = 4;
    break;
  case 2:
  case 9:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "nopopid_user") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "nopopid_user";
    goto LAB_006e4624;
  case 3:
  case 4:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "user_profile") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "user_profile";
LAB_006e4624:
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,0xc);
    bVar2 = iVar4 + -0xc < 0;
    bVar3 = iVar4 == 0xc;
    iVar4 = 0xc;
    break;
  case 6:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "messagecard") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "messagecard";
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,0xb);
    bVar2 = iVar4 + -0xb < 0;
    bVar3 = iVar4 == 0xb;
    iVar4 = 0xb;
    break;
  case 10:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "design") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "design";
    goto LAB_006e46d8;
  case 0xb:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "dream_land") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "dream_land";
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,10);
    bVar2 = iVar4 + -10 < 0;
    bVar3 = iVar4 == 10;
    iVar4 = 10;
    break;
  case 0xc:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "resort") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "resort";
LAB_006e46d8:
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,6);
    bVar2 = iVar4 + -6 < 0;
    bVar3 = iVar4 == 6;
    iVar4 = 6;
    break;
  default:
    goto switchD_006e45ac_default;
  }
  if (bVar3 || bVar2 != bVar1) {
    iVar4 = iVar5;
  }
  memcpy(__dest,__src,(long)iVar4);
  __dest[iVar4] = '\0';
switchD_006e45ac_default:
  return;
}

