
void FUN_01d58b7c(long param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined *local_50;
  long lStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  if (((*(char *)(*(long *)PTR_DAT_04bb21d0 + 0xf78) != '\0') &&
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) == 0)) &&
     (lVar5 = *(long *)PTR_DAT_04bc1160, *(int *)(lVar5 + 0x30) == 1)) {
    local_40 = PTR_LAB_04bd2cd8;
    uStack_38 = 0;
    local_50 = PTR_DAT_04bd2ce0 + 0x10;
    lStack_48 = lVar5;
    FUN_03bf9cc8(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_50,lVar5 + 0x28,0,0,0);
  }
  puVar3 = PTR_DAT_04bb27d0;
  lVar6 = **(long **)PTR_DAT_04bb27d0;
  uVar4 = *(uint *)(param_1 + 0x238);
  lVar5 = lVar6 + 8;
  if (((uVar4 & 1) != 0) && ((*(uint *)(lVar6 + 0x48) >> 1 & 1) != 0)) {
    *(uint *)(lVar6 + 0x48) = *(uint *)(lVar6 + 0x48) | 4;
    FUN_01d3e314(lVar5);
    uVar4 = *(uint *)(param_1 + 0x238);
  }
  if (((uVar4 >> 1 & 1) != 0) && ((*(uint *)(lVar6 + 200) >> 1 & 1) != 0)) {
    *(uint *)(lVar6 + 200) = *(uint *)(lVar6 + 200) | 4;
    FUN_01d3e314(lVar5);
    uVar4 = *(uint *)(param_1 + 0x238);
  }
  if (((uVar4 >> 2 & 1) != 0) && ((*(uint *)(lVar6 + 0x148) >> 1 & 1) != 0)) {
    *(uint *)(lVar6 + 0x148) = *(uint *)(lVar6 + 0x148) | 4;
    FUN_01d3e314(lVar5);
    uVar4 = *(uint *)(param_1 + 0x238);
  }
  if (((uVar4 >> 3 & 1) != 0) && ((*(uint *)(lVar6 + 0x1c8) >> 1 & 1) != 0)) {
    *(uint *)(lVar6 + 0x1c8) = *(uint *)(lVar6 + 0x1c8) | 4;
    FUN_01d3e314(lVar5);
    uVar4 = *(uint *)(param_1 + 0x238);
  }
  if (((uVar4 >> 4 & 1) != 0) && ((*(uint *)(lVar6 + 0x248) >> 1 & 1) != 0)) {
    *(uint *)(lVar6 + 0x248) = *(uint *)(lVar6 + 0x248) | 4;
    FUN_01d3e314(lVar5);
    uVar4 = *(uint *)(param_1 + 0x238);
  }
  if (((uVar4 >> 5 & 1) != 0) && ((*(uint *)(lVar6 + 0x2c8) >> 1 & 1) != 0)) {
    *(uint *)(lVar6 + 0x2c8) = *(uint *)(lVar6 + 0x2c8) | 4;
    FUN_01d3e314(lVar5);
    uVar4 = *(uint *)(param_1 + 0x238);
  }
  if (((uVar4 >> 6 & 1) != 0) && ((*(uint *)(lVar6 + 0x348) >> 1 & 1) != 0)) {
    *(uint *)(lVar6 + 0x348) = *(uint *)(lVar6 + 0x348) | 4;
    FUN_01d3e314(lVar5);
    uVar4 = *(uint *)(param_1 + 0x238);
  }
  if (((uVar4 >> 7 & 1) != 0) && ((*(uint *)(lVar6 + 0x3c8) >> 1 & 1) != 0)) {
    *(uint *)(lVar6 + 0x3c8) = *(uint *)(lVar6 + 0x3c8) | 4;
    FUN_01d3e314(lVar5);
  }
  bVar2 = *(byte *)(**(long **)puVar3 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar6 + 0x48);
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      *puVar1 = *puVar1 | 4;
      FUN_01d3e314(lVar5);
    }
  }
  FUN_01da9290();
  FUN_01d4f530(param_1);
  lVar5 = *(long *)PTR_DAT_04bb27f0;
  if (lVar5 != 0) {
    *(uint *)(lVar5 + 0x43c) = *(uint *)(lVar5 + 0x43c) | 8;
  }
  return;
}

