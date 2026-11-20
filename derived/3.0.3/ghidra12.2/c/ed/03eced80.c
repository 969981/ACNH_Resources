
void FUN_03eced80(uint *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  uVar4 = *(uint *)(param_2 + 0x18);
  param_1[4] = uVar4;
  if (0 < (int)uVar4) {
    uVar4 = 0;
    do {
      uVar1 = uVar4;
      if (*(uint *)(param_2 + 8) <= uVar4) {
        uVar1 = 0;
      }
      puVar5 = (undefined4 *)(*(long *)(param_2 + 0x10) + (ulong)uVar1 * 0x30);
      uVar1 = uVar4;
      if (*param_1 <= uVar4) {
        uVar1 = 0;
      }
      uVar4 = uVar4 + 1;
      puVar7 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x20);
      uVar8 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = *(undefined2 *)((long)puVar5 + 0x26);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(puVar5 + 4) + 0x70) + 0x10);
      *puVar7 = *puVar5;
      puVar7[1] = uVar8;
      puVar7[2] = uVar2;
      *(undefined2 *)(puVar7 + 6) = uVar3;
      *(undefined8 *)(puVar7 + 4) = uVar6;
    } while ((int)uVar4 < (int)param_1[4]);
  }
  uVar4 = *(uint *)(param_2 + 0x30);
  param_1[10] = uVar4;
  if (0 < (int)uVar4) {
    uVar4 = 0;
    do {
      uVar1 = uVar4;
      if (*(uint *)(param_2 + 0x20) <= uVar4) {
        uVar1 = 0;
      }
      puVar5 = (undefined4 *)(*(long *)(param_2 + 0x28) + (ulong)uVar1 * 0x28);
      uVar1 = uVar4;
      if (param_1[6] <= uVar4) {
        uVar1 = 0;
      }
      uVar4 = uVar4 + 1;
      puVar7 = (undefined4 *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0x18);
      uVar2 = puVar5[2];
      uVar8 = puVar5[1];
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(puVar5 + 4) + 0x70) + 0x10);
      *puVar7 = *puVar5;
      puVar7[1] = uVar8;
      puVar7[2] = uVar2;
      *(undefined8 *)(puVar7 + 4) = uVar6;
    } while ((int)uVar4 < (int)param_1[10]);
  }
  uVar4 = *(uint *)(param_2 + 0x48);
  param_1[0x10] = uVar4;
  if (0 < (int)uVar4) {
    uVar4 = 0;
    do {
      uVar1 = uVar4;
      if (*(uint *)(param_2 + 0x38) <= uVar4) {
        uVar1 = 0;
      }
      puVar5 = (undefined4 *)(*(long *)(param_2 + 0x40) + (ulong)uVar1 * 0x28);
      uVar1 = uVar4;
      if (param_1[0xc] <= uVar4) {
        uVar1 = 0;
      }
      uVar4 = uVar4 + 1;
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0xe) + (ulong)uVar1 * 0x18);
      uVar2 = puVar5[2];
      uVar8 = puVar5[1];
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(puVar5 + 4) + 0x70) + 0x10);
      *puVar7 = *puVar5;
      puVar7[1] = uVar8;
      puVar7[2] = uVar2;
      *(undefined8 *)(puVar7 + 4) = uVar6;
    } while ((int)uVar4 < (int)param_1[0x10]);
  }
  return;
}

