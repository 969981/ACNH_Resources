
int FUN_0085a8b0(long param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined *puVar5;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b) {
    return 0;
  }
  if (param_4 == 0) {
    switch(param_2) {
    default:
      piVar2 = (int *)(param_1 + 1000);
      break;
    case 1:
      piVar2 = (int *)(param_1 + 0x3f8);
      break;
    case 2:
      piVar2 = (int *)(param_1 + 0x408);
      break;
    case 3:
      piVar2 = (int *)(param_1 + 0x418);
      break;
    case 4:
      piVar2 = (int *)(param_1 + 0x428);
      break;
    case 5:
      piVar2 = (int *)(param_1 + 0x438);
      break;
    case 6:
      piVar2 = (int *)(param_1 + 0x448);
      break;
    case 7:
      piVar2 = (int *)(param_1 + 0x458);
      break;
    case 8:
      piVar2 = (int *)(param_1 + 0x468);
    }
    if (*piVar2 <= (int)param_3) {
      return 0;
    }
    switch(param_2) {
    default:
      puVar3 = (uint *)(param_1 + 1000);
      break;
    case 1:
      puVar3 = (uint *)(param_1 + 0x3f8);
      break;
    case 2:
      puVar3 = (uint *)(param_1 + 0x408);
      break;
    case 3:
      puVar3 = (uint *)(param_1 + 0x418);
      break;
    case 4:
      puVar3 = (uint *)(param_1 + 0x428);
      break;
    case 5:
      puVar3 = (uint *)(param_1 + 0x438);
      break;
    case 6:
      puVar3 = (uint *)(param_1 + 0x448);
      break;
    case 7:
      puVar3 = (uint *)(param_1 + 0x458);
      break;
    case 8:
      puVar3 = (uint *)(param_1 + 0x468);
    }
    if (*puVar3 <= param_3) {
      param_3 = 0;
    }
    iVar1 = *(int *)(*(long *)(puVar3 + 2) + (long)(int)param_3 * 4);
    if (8 < param_2) goto LAB_0085ab0c;
    puVar5 = &DAT_04167148;
  }
  else {
    switch(param_2) {
    default:
      piVar2 = (int *)(param_1 + 0x478);
      break;
    case 1:
      piVar2 = (int *)(param_1 + 0x488);
      break;
    case 2:
      piVar2 = (int *)(param_1 + 0x498);
      break;
    case 3:
      piVar2 = (int *)(param_1 + 0x4a8);
      break;
    case 4:
      piVar2 = (int *)(param_1 + 0x4b8);
      break;
    case 5:
      piVar2 = (int *)(param_1 + 0x4c8);
      break;
    case 6:
      piVar2 = (int *)(param_1 + 0x4d8);
      break;
    case 7:
      piVar2 = (int *)(param_1 + 0x4e8);
      break;
    case 8:
      piVar2 = (int *)(param_1 + 0x4f8);
    }
    if (*piVar2 <= (int)param_3) {
      return 0;
    }
    switch(param_2) {
    default:
      puVar3 = (uint *)(param_1 + 0x478);
      break;
    case 1:
      puVar3 = (uint *)(param_1 + 0x488);
      break;
    case 2:
      puVar3 = (uint *)(param_1 + 0x498);
      break;
    case 3:
      puVar3 = (uint *)(param_1 + 0x4a8);
      break;
    case 4:
      puVar3 = (uint *)(param_1 + 0x4b8);
      break;
    case 5:
      puVar3 = (uint *)(param_1 + 0x4c8);
      break;
    case 6:
      puVar3 = (uint *)(param_1 + 0x4d8);
      break;
    case 7:
      puVar3 = (uint *)(param_1 + 0x4e8);
      break;
    case 8:
      puVar3 = (uint *)(param_1 + 0x4f8);
    }
    if (*puVar3 <= param_3) {
      param_3 = 0;
    }
    iVar1 = *(int *)(*(long *)(puVar3 + 2) + (long)(int)param_3 * 4);
    if (8 < param_2) {
LAB_0085ab0c:
      iVar4 = -1;
      goto LAB_0085ab10;
    }
    puVar5 = &DAT_0416716c;
  }
  iVar4 = *(int *)(puVar5 + (long)(int)param_2 * 4);
LAB_0085ab10:
  if (iVar4 <= iVar1) {
    iVar1 = iVar4;
  }
  return iVar1;
}

