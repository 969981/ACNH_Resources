
void FUN_02cc959c(long *param_1,byte param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined **local_70;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined4 local_50;
  undefined8 local_4c;
  byte local_44;
  
  lVar4 = (**(code **)(*param_1 + 0x278))();
  if (lVar4 != 0) {
    uVar5 = *(uint *)(param_1 + 0x48);
    if (((int)uVar5 < 0) || ((int)param_1[0x3884] <= (int)uVar5)) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      puVar1 = (uint *)(param_1[0x3885] + (ulong)uVar5 * 8);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
    }
    local_68 = (**(code **)(*param_1 + 0x3c8))(param_1);
    local_50 = 0;
    local_4c = 0x60000000c;
    local_70 = &PTR_LAB_04b2b020;
    if ((int)uVar5 < 0) {
      local_64 = 0;
      local_60 = 0;
    }
    else {
      local_64 = uVar5;
      local_60 = uVar5;
      if (-1 < (int)uVar6) {
        iVar2 = *(int *)(lVar4 + 0x2e8);
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = (int)uVar5 / iVar2;
        }
        local_64 = iVar3 * iVar2 - iVar2 * uVar6;
        local_64 = local_64 & ((int)local_64 >> 0x1f ^ 0xffffffffU);
      }
    }
    local_44 = *(byte *)(param_1 + 0x3f);
    local_5a = (ulong)CONCAT14(param_2 & 1,0x1000001);
    if (7 < local_44) {
      local_44 = 0xff;
    }
    local_5c = 0x101;
    FUN_03864290(lVar4,&local_70);
  }
  return;
}

