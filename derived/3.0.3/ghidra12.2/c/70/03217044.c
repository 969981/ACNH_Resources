
void FUN_03217044(long param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined **local_40;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  undefined2 local_2c;
  undefined8 local_2a;
  undefined4 local_20;
  undefined8 local_1c;
  byte local_14;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x590);
  if (lVar4 != 0) {
    uVar5 = *(uint *)(param_1 + 600);
    if (((int)uVar5 < 0) || (*(int *)(param_1 + 0x1c320) <= (int)uVar5)) {
      local_30 = 0;
      uVar5 = 0;
    }
    else {
      puVar1 = (uint *)(*(long *)(param_1 + 0x1c328) + (ulong)uVar5 * 8);
      local_30 = *puVar1;
      uVar5 = puVar1[1];
    }
    local_20 = 0;
    local_2a = 0x1000001;
    local_38 = *(undefined4 *)(param_1 + 0x1c368);
    local_1c = 0x60000000c;
    local_40 = &PTR_LAB_04b2b020;
    if ((int)local_30 < 0) {
      local_34 = 0;
      local_30 = 0;
    }
    else {
      local_34 = local_30;
      if (-1 < (int)uVar5) {
        iVar2 = *(int *)(lVar4 + 0x2e8);
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = (int)local_30 / iVar2;
        }
        local_34 = iVar3 * iVar2 - iVar2 * uVar5;
        local_34 = local_34 & ((int)local_34 >> 0x1f ^ 0xffffffffU);
      }
    }
    local_14 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_14) {
      local_14 = 0xff;
    }
    local_2c = 0x101;
    FUN_03864290(lVar4,&local_40);
  }
  return;
}

