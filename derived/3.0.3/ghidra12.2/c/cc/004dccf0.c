
void FUN_004dccf0(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x238) + (long)param_2 * 0x20);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar6 = puVar1[2];
  if ((uVar6 & 1) != 0) {
    FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
  }
  uVar5 = *(uint *)(param_1 + 0x3c8);
  uVar4 = *(undefined4 *)(puVar1 + 3);
  if (uVar5 == (*(uint *)(param_1 + 0x3cc) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 0x3c0,0x20);
    uVar5 = *(uint *)(param_1 + 0x3c8);
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x3c0) + (long)(int)uVar5 * 0x20);
  puVar1[2] = uVar6;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined4 *)(puVar1 + 3) = uVar4;
  *(uint *)(param_1 + 0x3c8) = uVar5 + 1;
  *(uint *)(*(long *)(param_1 + 0x2b0) + (long)param_2 * 4) = ~uVar5;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  FUN_004dae00(param_1 + 0x210,param_2,&local_70);
  return;
}

