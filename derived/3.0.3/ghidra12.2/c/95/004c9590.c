
void FUN_004c9590(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  undefined8 local_d0 [18];
  undefined8 local_38;
  
  lVar1 = FUN_00427270(*param_1);
  FUN_004225b0(local_d0);
  uVar2 = FUN_0043a700(*param_2,param_2[1] - *param_2,lVar1);
  FUN_004225f0(local_d0,*param_3,*(int *)(param_3 + 1) - (int)*param_3);
  if ((uVar2 & 1) == 0) {
    FUN_00423880(local_d0,lVar1 + (param_2[1] - *param_2),0xffffffff);
  }
  lVar1 = param_1[3];
  FUN_0043bce0(&local_38,local_d0[0],0xffffffff);
  uVar4 = *(uint *)(lVar1 + 0x80);
  if (uVar4 == (*(uint *)(lVar1 + 0x84) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,lVar1 + 0x78,8);
    uVar4 = *(uint *)(lVar1 + 0x80);
  }
  *(undefined8 *)(*(long *)(lVar1 + 0x78) + (long)(int)uVar4 * 8) = local_38;
  local_38 = 0;
  *(uint *)(lVar1 + 0x80) = uVar4 + 1;
  FUN_0043be10(&local_38);
  uVar2 = *(ulong *)(*(long *)(param_1[3] + 0x78) + (long)*(int *)(param_1[3] + 0x80) * 8 + -8);
  puVar3 = (ulong *)FUN_00426d40(*param_1,8);
  *puVar3 = uVar2 & 0xfffffffffffffffe;
  FUN_00422550(local_d0);
  return;
}

