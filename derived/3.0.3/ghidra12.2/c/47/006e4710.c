
void FUN_006e4710(long param_1,undefined4 param_2)

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
    __dest = *(char **)(param_1 + 8);
    if (__dest == "commercial") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "commercial";
    goto LAB_006e47b8;
  case 1:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "criminal") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "criminal";
    goto LAB_006e486c;
  case 2:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "harassment") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "harassment";
LAB_006e47b8:
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,10);
    bVar2 = iVar4 + -10 < 0;
    bVar3 = iVar4 == 10;
    iVar4 = 10;
    break;
  case 3:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "immoral") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "immoral";
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,7);
    bVar2 = iVar4 + -7 < 0;
    bVar3 = iVar4 == 7;
    iVar4 = 7;
    break;
  case 4:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "personal") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "personal";
    goto LAB_006e486c;
  case 5:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "sexually_explicit") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "sexually_explicit";
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,0x11);
    bVar2 = iVar4 + -0x11 < 0;
    bVar3 = iVar4 == 0x11;
    iVar4 = 0x11;
    break;
  case 6:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "cheating") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "cheating";
LAB_006e486c:
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,8);
    bVar2 = iVar4 + -8 < 0;
    bVar3 = iVar4 == 8;
    iVar4 = 8;
    break;
  case 7:
    __dest = *(char **)(param_1 + 8);
    if (__dest == "other") {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    __src = "other";
    iVar5 = iVar4 + -1;
    bVar1 = SBORROW4(iVar4,5);
    bVar2 = iVar4 + -5 < 0;
    bVar3 = iVar4 == 5;
    iVar4 = 5;
    break;
  default:
    goto switchD_006e474c_default;
  }
  if (bVar3 || bVar2 != bVar1) {
    iVar4 = iVar5;
  }
  memcpy(__dest,__src,(long)iVar4);
  __dest[iVar4] = '\0';
switchD_006e474c_default:
  return;
}

