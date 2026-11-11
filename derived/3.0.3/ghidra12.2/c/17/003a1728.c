
void FUN_003a1728(long param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if ((uVar3 >> 3 & 1) == 0) {
    puVar2 = &DAT_041353b0;
    if (param_3 != 0) {
      puVar2 = (undefined8 *)(param_3 + 0x38);
    }
    uVar6 = *puVar2;
    param_2[3] = *(uint *)(puVar2 + 1);
    *(undefined8 *)(param_2 + 1) = uVar6;
  }
  else {
    uVar6 = *puVar5;
    puVar1 = (uint *)(puVar5 + 1);
    puVar5 = (undefined8 *)((long)puVar5 + 0xc);
    param_2[3] = *puVar1;
    *(undefined8 *)(param_2 + 1) = uVar6;
  }
  if ((uVar3 >> 4 & 1) == 0) {
    puVar2 = &DAT_04102210;
    if (param_3 != 0) {
      puVar2 = (undefined8 *)(param_3 + 0x44);
    }
    uVar6 = puVar2[1];
    *(undefined8 *)(param_2 + 8) = *puVar2;
    *(undefined8 *)(param_2 + 10) = uVar6;
  }
  else {
    uVar6 = puVar5[1];
    *(undefined8 *)(param_2 + 8) = *puVar5;
    *(undefined8 *)(param_2 + 10) = uVar6;
    puVar5 = puVar5 + 2;
  }
  puVar2 = &DAT_04102210;
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_3 + 0x54);
  }
  if ((uVar3 & 0x20) != 0) {
    puVar2 = puVar5;
  }
  uVar6 = *puVar2;
  uVar4 = *(uint *)(puVar2 + 1);
  *param_2 = uVar3 & 0xf800000;
  param_2[6] = uVar4;
  *(undefined8 *)(param_2 + 4) = uVar6;
  if (param_3 != 0) {
    *param_2 = *(uint *)(param_3 + 0x34) & 0x7000 | uVar3 & 0xf800000;
  }
  return;
}

