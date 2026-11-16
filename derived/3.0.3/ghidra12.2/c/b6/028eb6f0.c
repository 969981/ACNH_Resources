
int FUN_028eb6f0(long param_1,short param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  uint local_4;
  
  iVar1 = 0;
  local_4 = 0;
  iVar2 = 0;
  iVar3 = 0;
  while( true ) {
    psVar4 = (short *)(param_1 + (long)iVar3 * 0x1178);
    uVar5 = (uint)(ushort)psVar4[3];
    if (0x14 < uVar5) {
      uVar5 = 0;
    }
    if (local_4 == uVar5) {
      iVar2 = iVar2 + 1;
    }
    else {
      iVar2 = 0;
      local_4 = uVar5;
    }
    if (*psVar4 == param_2) break;
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 1;
    if (iVar1 == 0x26) {
      return -1;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_4;
  }
  if (param_4 == (int *)0x0) {
    return iVar1;
  }
  *param_4 = iVar2;
  return iVar1;
}

