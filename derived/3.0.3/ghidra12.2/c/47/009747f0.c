
void FUN_009747f0(undefined4 param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar1 = *(int *)(param_3 + 0x24) + 1;
  uVar4 = *(uint *)(param_3 + 0x14);
  if (uVar1 != uVar4) {
    uVar2 = *(uint *)(param_3 + 0x10);
    uVar6 = uVar2;
    uVar5 = uVar2;
    do {
      if ((((-1 < (int)uVar5) && (-1 < (int)uVar4)) && (uVar5 < *(uint *)(param_2 + 0x38))) &&
         (((uVar4 < *(uint *)(param_2 + 0x3c) &&
           (uVar3 = uVar5 + *(uint *)(param_2 + 0x38) * uVar4, uVar3 < *(uint *)(param_2 + 0x48)))
          && (*(long *)(param_2 + 0x50) != 0)))) {
        puVar7 = (undefined4 *)(*(long *)(param_2 + 0x50) + (long)(int)uVar3 * 0x34);
        *puVar7 = param_1;
        puVar7[1] = param_1;
        puVar7[2] = param_1;
        puVar7[3] = param_1;
        puVar7[4] = param_1;
        puVar7[5] = param_1;
        puVar7[6] = param_1;
        puVar7[7] = param_1;
        puVar7[8] = param_1;
        puVar7[9] = param_1;
        puVar7[10] = param_1;
        puVar7[0xb] = param_1;
        uVar6 = *(uint *)(param_3 + 0x10);
      }
      if ((int)uVar5 < *(int *)(param_3 + 0x20)) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar4 = uVar4 + 1;
        uVar5 = uVar6;
      }
    } while (uVar2 != uVar5 || uVar1 != uVar4);
  }
  return;
}

