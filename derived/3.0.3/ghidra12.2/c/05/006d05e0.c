
void FUN_006d05e0(undefined8 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_3 & 1) != 0) {
    uVar3 = (ulong)*(uint *)(param_2 + 0x10);
    if (1 < *(uint *)(param_2 + 0x10)) {
      uVar3 = 0;
    }
    puVar5 = *(uint **)(param_2 + uVar3 * 8);
    puVar4 = (uint *)*param_1;
    uVar7 = puVar5[4];
    if (0 < (int)uVar7) {
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        if (*puVar5 <= uVar6) {
          uVar7 = 0;
        }
        uVar1 = uVar6;
        if (*puVar4 <= uVar6) {
          uVar1 = 0;
        }
        uVar6 = uVar6 + 1;
        *(undefined8 *)(*(long *)(puVar4 + 2) + (ulong)uVar1 * 8) =
             *(undefined8 *)(*(long *)(puVar5 + 2) + (ulong)uVar7 * 8);
        uVar7 = puVar5[4];
      } while ((int)uVar6 < (int)uVar7);
    }
    puVar4[4] = uVar7;
  }
  if (((param_3 & 0xffff) >> 1 & 1) != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x20) + *(uint *)(param_2 + 0x30);
    if (1 < *(uint *)(param_2 + 0x30)) {
      puVar2 = (undefined8 *)(param_2 + 0x20);
    }
    FUN_006d0260(param_1[1],*puVar2);
  }
  if (((param_3 & 0xffff) >> 2 & 1) == 0) {
    return;
  }
  puVar2 = (undefined8 *)(param_2 + 0x40) + *(uint *)(param_2 + 0x50);
  if (1 < *(uint *)(param_2 + 0x50)) {
    puVar2 = (undefined8 *)(param_2 + 0x40);
  }
  FUN_006d0260(param_1[2],*puVar2);
  return;
}

