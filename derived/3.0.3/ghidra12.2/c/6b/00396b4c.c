
void FUN_00396b4c(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long local_70;
  long lStack_68;
  
  if (0 < *(int *)(param_1 + 0xe8) && 0 < *(int *)(param_1 + 0xec)) {
    uVar2 = *(uint *)(param_3 + 0xd0) & ((int)*(uint *)(param_3 + 0xd0) >> 0x1f ^ 0xffffffffU);
    FUN_00348134(param_4,*(long *)(param_2 + 0xb8) + 0x398);
    local_70 = 0;
    lStack_68 = 0;
    lVar6 = *(long *)(param_1 + 0xf0);
    iVar4 = *(int *)(param_1 + 0xe8);
    FUN_00347d1c(*(long *)(*(long *)(param_2 + 200) + 8) +
                 (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_70);
    local_70 = local_70 + lVar6;
    FUN_0034836c(param_4,0,&local_70,8,(long)iVar4 << 3);
    lVar6 = *(long *)(param_6 + 0x10);
    iVar4 = *(int *)(param_3 + (ulong)uVar2 * 0x18 + 0x5c);
    if (-1 < iVar4) {
      plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                       (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
      lStack_68 = plVar1[1];
      local_70 = *plVar1 + param_5;
      FUN_00348cdc(param_4,iVar4,0,&local_70,0x40);
    }
    iVar4 = *(int *)(param_3 + (ulong)uVar2 * 0x18 + 0x60);
    if (-1 < iVar4) {
      plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                       (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
      lStack_68 = plVar1[1];
      local_70 = *plVar1 + lVar6;
      FUN_00348cdc(param_4,iVar4,4,&local_70,0x10);
    }
    uVar5 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),0);
    FUN_00348090(param_4,uVar5);
    lVar6 = *(long *)(param_1 + 0xf8);
    local_70 = 0;
    lStack_68 = 0;
    iVar4 = *(int *)(param_6 + 4);
    uVar3 = *(undefined4 *)(param_6 + 8);
    FUN_00347d1c(*(long *)(*(long *)(param_2 + 200) + 8) +
                 (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_70);
    local_70 = lVar6 + (long)iVar4 * 4 + local_70;
    FUN_00347e74(param_4,4,2,&local_70,uVar3,0);
  }
  return;
}

