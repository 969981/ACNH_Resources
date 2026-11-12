
int FUN_006933b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  
  iVar1 = 0;
  switch(param_1 / 100) {
  case 2:
    goto switchD_006933f8_caseD_2;
  case 3:
    iVar1 = (int)(param_1 - 0x12dU) * 0x200 + 0x11fadb;
    if (3 < param_1 - 0x12dU) {
      iVar1 = 0x12bedb;
    }
    return iVar1;
  case 4:
    uVar2 = param_1 - 400;
    if (0x1f < uVar2) {
      return 0x1386db;
    }
    puVar3 = &DAT_04148748;
    break;
  case 5:
    uVar2 = param_1 - 500;
    if (9 < uVar2) {
      return 0x144edb;
    }
    puVar3 = &DAT_041487c8;
    break;
  default:
    return 0x176edb;
  }
  iVar1 = *(int *)(puVar3 + uVar2 * 4);
switchD_006933f8_caseD_2:
  return iVar1;
}

