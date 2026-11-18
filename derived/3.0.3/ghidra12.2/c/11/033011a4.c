
int FUN_033011a4(long param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_4;
  
  switch(*(undefined4 *)(param_1 + 0x1050)) {
  case 0:
  case 3:
    local_4 = *(int *)(param_1 + 0x1020);
    puVar3 = (undefined8 *)&DAT_05731f10;
    break;
  case 1:
    return 0x12;
  case 2:
    iVar4 = *(int *)(param_1 + 0x1024) + 0x12;
    if (2 < *(int *)(param_1 + 0x1024) - 2U) {
      iVar4 = 0x13;
    }
    return iVar4;
  case 4:
    local_4 = *(int *)(param_1 + 0x1028);
    puVar3 = &DAT_05731fb4;
    break;
  case 5:
    bVar2 = *(int *)(param_1 + 0x102c) == 2;
    iVar4 = 0x17;
    goto LAB_03301280;
  case 6:
    bVar2 = *(int *)(param_1 + 0x1030) == 2;
    iVar4 = 0x18;
    goto LAB_03301280;
  case 7:
    bVar2 = *(int *)(param_1 + 0x1034) == 2;
    iVar4 = 0x19;
LAB_03301280:
    iVar1 = 0x11;
    if (!bVar2) {
      iVar1 = iVar4;
    }
    return iVar1;
  case 8:
  case 9:
    local_4 = *(int *)(param_1 + 0x1038);
    puVar3 = &DAT_05731f5c;
    break;
  default:
    return DAT_05731f54;
  }
  return *(int *)((long)puVar3 + (long)local_4 * 4);
}

