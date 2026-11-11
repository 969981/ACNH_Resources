
void FUN_00512bd0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  FUN_004435a0(param_2);
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 0x18,8);
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  *(long *)(*(long *)(param_1 + 0x18) + (long)(int)uVar1 * 8) = param_2;
  *(uint *)(param_1 + 0x20) = uVar1 + 1;
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar2 = 0;
    do {
      FUN_0053c880(*(undefined8 *)(*(long *)(param_2 + 0x40) + lVar2 * 8),
                   *(undefined8 *)(param_1 + 0x48));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x48));
  }
  FUN_00512d50(param_1 + 0xa0,param_1,param_2);
  FUN_00512e10(param_2 + 0x98,param_1,&LAB_00512e90,0,0);
  FUN_00512ea0(param_2 + 0xa0,param_1,&LAB_00512f20,0,0);
  FUN_00512f30(param_2 + 0x100,param_1,&LAB_00512fb0,0,0);
  FUN_00512f30(param_2 + 0xd0,param_1,&LAB_00512fc0,0,0);
  FUN_00512fd0(param_2 + 0x110,param_1,&LAB_00513050,0,0);
  FUN_00513080(param_2 + 200,param_1,&LAB_00513100,0,0);
  FUN_00513130(param_2 + 0x120,param_1,&LAB_005131b0,0,0);
  *(undefined1 *)(param_1 + 0x121) = 1;
  return;
}

