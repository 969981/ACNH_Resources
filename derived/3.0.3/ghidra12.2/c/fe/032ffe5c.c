
void FUN_032ffe5c(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0x12;
  switch(*(undefined4 *)(param_1 + 0x1050)) {
  case 0:
  case 3:
    local_4 = *(int *)(param_1 + 0x1020);
    puVar3 = (undefined8 *)&DAT_05731f10;
    break;
  case 1:
    goto switchD_032ffe84_caseD_1;
  case 2:
    iVar4 = *(int *)(param_1 + 0x1024) + 0x12;
    if (2 < *(int *)(param_1 + 0x1024) - 2U) {
      iVar4 = 0x13;
    }
    goto switchD_032ffe84_caseD_1;
  case 4:
    local_4 = *(int *)(param_1 + 0x1028);
    puVar3 = &DAT_05731fb4;
    break;
  case 5:
    bVar1 = *(int *)(param_1 + 0x102c) == 2;
    iVar2 = 0x17;
    goto LAB_032fff28;
  case 6:
    bVar1 = *(int *)(param_1 + 0x1030) == 2;
    iVar2 = 0x18;
    goto LAB_032fff28;
  case 7:
    bVar1 = *(int *)(param_1 + 0x1034) == 2;
    iVar2 = 0x19;
LAB_032fff28:
    iVar4 = 0x11;
    if (!bVar1) {
      iVar4 = iVar2;
    }
    goto switchD_032ffe84_caseD_1;
  case 8:
  case 9:
    local_4 = *(int *)(param_1 + 0x1038);
    puVar3 = &DAT_05731f5c;
    break;
  default:
    iVar4 = DAT_05731f54;
    goto switchD_032ffe84_caseD_1;
  }
  iVar4 = *(int *)((long)puVar3 + (long)local_4 * 4);
switchD_032ffe84_caseD_1:
  FUN_033008cc(param_1,iVar4,1,0);
  return;
}

