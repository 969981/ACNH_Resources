
bool FUN_008c7440(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined1 uStack_1;
  
  iVar5 = *(int *)(param_1 + 0x410);
  if ((iVar5 - 0xfU < 4 || iVar5 == 1) ||
     ((iVar1 = *(int *)(param_1 + 0x307e8), iVar5 == 0 && (iVar1 == 1)))) {
LAB_008c7460:
    bVar3 = true;
  }
  else {
    bVar3 = true;
    switch(iVar5) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
    case 10:
    case 0xb:
    case 0x1b:
    case 0x1c:
      goto switchD_008c74b0_caseD_2;
    case 0x18:
      if (iVar1 == 1) {
        return true;
      }
      break;
    case 0x1a:
      if (*(int *)(param_1 + 0x3080c) != 1) {
        return true;
      }
      break;
    case 0x1d:
      iVar2 = *(int *)(param_1 + 0x31804);
      if (iVar2 - 5U < 2) {
        return true;
      }
      if (iVar2 == 3) {
        return true;
      }
      if ((iVar2 == 1) && (*(int *)(param_1 + 0x30950) != *(int *)(param_1 + 0x30954))) {
        return true;
      }
    }
    if (iVar1 == 0) {
      FUN_025196e4(&uStack_1,1);
      uVar4 = FUN_0253299c(&uStack_1);
      if ((uVar4 & 1) != 0) goto LAB_008c7460;
      iVar5 = *(int *)(param_1 + 0x410);
    }
    if ((iVar5 == 0x21) || (iVar5 == 0x22)) {
      bVar3 = *(char *)(param_1 + 0x37fb8) != '\0';
    }
    else {
      bVar3 = false;
    }
  }
switchD_008c74b0_caseD_2:
  return bVar3;
}

