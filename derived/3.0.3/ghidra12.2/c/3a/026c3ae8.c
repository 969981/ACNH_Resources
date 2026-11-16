
void FUN_026c3ae8(long param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xc:
  case 0xd:
  case 0x16:
  case 0x19:
  case 0x1b:
  case 0x1e:
    *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) | 0x80;
    return;
  case 5:
  case 0xb:
    iVar1 = FUN_026c4448();
    if (*(int *)(param_1 + 0x10) == iVar1) {
      return;
    }
    break;
  default:
    goto switchD_026c3b1c_caseD_9;
  case 0xe:
    FUN_03ebb160(param_1 + 8,0x10);
    return;
  case 0x1a:
    iVar1 = FUN_026c4448();
    if (*(int *)(param_1 + 0x10) == iVar1) {
      return;
    }
  }
  FUN_03ebb160(param_1 + 8,iVar1);
switchD_026c3b1c_caseD_9:
  return;
}

