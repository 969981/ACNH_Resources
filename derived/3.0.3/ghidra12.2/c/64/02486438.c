
void FUN_02486438(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  float local_4c [3];
  ulong local_40;
  undefined4 local_38;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar4 = FUN_0231eddc(param_1,0);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar4 & 1) == 0))
    {
      local_38 = 0;
      local_40 = CONCAT35(local_40._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_40);
    }
  }
  else {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    FUN_023164ec(param_1,6);
    iVar5 = *(int *)(param_1 + 0x18e5);
    iVar6 = *(int *)(param_1 + 0x18eb);
    lVar2 = FUN_0251e98c(1);
    puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x1380) + 0xf0))(lVar2 + 0x1380);
    local_4c[1] = 0.0;
    puVar1 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_38 = *(undefined4 *)(puVar1 + 0x50);
    local_40 = puVar1[0x4f] & 0xffffffff;
    local_4c[0] = (float)iVar5 * 0.001;
    local_4c[2] = (float)iVar6 * 0.001;
    FUN_03eb4b60(*puVar3,0x41200000,0x3e4ccccc,&local_40,local_4c);
    *(undefined4 *)(puVar1 + 0x4f) = (undefined4)local_40;
    *(undefined4 *)(puVar1 + 0x50) = local_38;
  }
  return;
}

