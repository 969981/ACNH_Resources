
void FUN_003927b4(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long local_60;
  long lStack_58;
  
  local_60 = 0;
  lStack_58 = 0;
  lVar5 = *(long *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_00347d1c(*(long *)(*(long *)(param_2 + 200) + 8) +
               (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_60);
  local_60 = local_60 + lVar5;
  FUN_0034836c(param_4,0,&local_60,8,(long)iVar3 << 3);
  lVar5 = *(long *)(param_6 + 0x10);
  if (-1 < *(int *)(param_3 + 0x5c)) {
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_58 = plVar1[1];
    local_60 = *plVar1 + param_5;
    FUN_00348cdc(param_4,*(int *)(param_3 + 0x5c),0,&local_60,0x40);
  }
  if (-1 < *(int *)(param_3 + 0x60)) {
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_58 = plVar1[1];
    local_60 = *plVar1 + lVar5;
    FUN_00348cdc(param_4,*(int *)(param_3 + 0x60),4,&local_60,0x10);
  }
  FUN_00348134(param_4,*(long *)(param_2 + 0xb8) + 0x360);
  uVar4 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),1);
  FUN_00348090(param_4,uVar4);
  lVar5 = *(long *)(param_1 + 0x38);
  local_60 = 0;
  lStack_58 = 0;
  iVar3 = *(int *)(param_6 + 4);
  uVar2 = *(undefined4 *)(param_6 + 8);
  FUN_00347d1c(*(long *)(*(long *)(param_2 + 200) + 8) +
               (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x48,&local_60);
  local_60 = lVar5 + (long)iVar3 * 4 + local_60;
  FUN_00347e74(param_4,3,2,&local_60,uVar2,0);
  if (*(long *)(param_2 + 0x158) != 0) {
    FUN_00348134(param_4);
  }
  return;
}

