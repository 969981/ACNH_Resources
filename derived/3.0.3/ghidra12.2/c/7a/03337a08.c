
int FUN_03337a08(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  switch(*(undefined4 *)(param_1 + 0x308)) {
  case 0xd:
    uVar2 = *(int *)(param_1 + 0x1b2c) - 1;
    if (3 < uVar2) {
      return 0xe;
    }
    puVar4 = &DAT_04102ad0;
    break;
  default:
    if (*(uint *)(param_1 + 0x308) < 0x1a) {
      return *(int *)(&DAT_0418db14 + (long)(int)*(uint *)(param_1 + 0x308) * 4);
    }
    return 1;
  case 0x17:
    iVar1 = *(int *)(param_1 + 0x1b2c);
    iVar3 = 0xf;
    goto LAB_03337ab8;
  case 0x18:
    uVar2 = *(int *)(param_1 + 0x1b2c) - 2;
    if (2 < uVar2) {
      return 0x11;
    }
    puVar4 = &DAT_0418db08;
    break;
  case 0x19:
    iVar1 = *(int *)(param_1 + 0x1b2c);
    iVar3 = 0x14;
LAB_03337ab8:
    if ((iVar1 - 1U & 0xfffffffd) == 0) {
      iVar3 = iVar3 + 1;
    }
    return iVar3;
  }
  return *(int *)(puVar4 + (long)(int)uVar2 * 4);
}

