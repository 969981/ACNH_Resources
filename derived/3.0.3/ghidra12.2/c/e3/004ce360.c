
void FUN_004ce360(long param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_38;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar3 = uVar5;
  if ((int)uVar5 <= param_2 + 1) {
    uVar3 = param_2 + 1;
  }
  local_38 = param_3;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < (int)uVar3) {
    uVar4 = FUN_00426720(PTR_DAT_048607b8,uVar3,8,*(undefined8 *)(param_1 + 8));
    uVar5 = *(uint *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar4;
  }
  if ((int)uVar5 < (int)uVar3) {
    *(uint *)(param_1 + 0x10) = uVar3;
    memset((void *)(*(long *)(param_1 + 8) + (long)(int)uVar5 * 8),0,(ulong)(uVar3 + ~uVar5) * 8 + 8
          );
    param_3 = local_38;
  }
  else if ((int)uVar3 < (int)uVar5) {
    *(uint *)(param_1 + 0x10) = uVar3;
  }
  *(undefined8 *)(*(long *)(param_1 + 8) + (long)param_2 * 8) = param_3;
  plVar2 = (long *)(param_1 + 0xe8);
  uVar3 = FUN_0047d820(plVar2,&local_38);
  if (*(uint *)(param_1 + 0xf0) == uVar3) {
    if ((*(uint *)(param_1 + 0xf4) & 0x3fffffff) == uVar3) {
      FUN_00426990(PTR_DAT_048607b8,plVar2,0x10);
      uVar3 = *(uint *)(param_1 + 0xf0);
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar3 * 0x10);
    *puVar1 = local_38;
    *(int *)(puVar1 + 1) = param_2;
    *(uint *)(param_1 + 0xf0) = uVar3 + 1;
  }
  else {
    *(int *)(*plVar2 + ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8) = param_2;
  }
  return;
}

