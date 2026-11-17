
void FUN_02ff5cb0(long param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_16f0 [5792];
  undefined1 auStack_32 [2];
  
  FUN_007ef010(auStack_32);
  FUN_007e4920(auStack_16f0,auStack_32);
  uVar5 = *(uint *)(param_1 + 0x14);
  if ((0 < (int)uVar5) && (uVar6 = *(uint *)(param_1 + 0x10), 0 < (int)uVar6)) {
    uVar9 = 0;
    do {
      uVar10 = 0;
      do {
        uVar8 = FUN_007e6e10(auStack_16f0,uVar10 + *(int *)(param_1 + 0x40),
                             *(int *)(param_1 + 0x44) + uVar9);
        uVar4 = *(uint *)(param_1 + 0x10);
        uVar7 = *(uint *)(param_1 + 0x14) - 1;
        uVar2 = uVar10;
        if ((int)(uVar4 - 1) <= (int)uVar10) {
          uVar2 = uVar4 - 1;
        }
        uVar10 = uVar10 + 1;
        uVar3 = uVar9;
        if ((int)uVar7 <= (int)uVar9) {
          uVar3 = uVar7;
        }
        puVar1 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)(int)(uVar2 + uVar3 * uVar4) * 4);
        if (*(uint *)(param_1 + 0x14) <= uVar3 || uVar4 <= uVar2) {
          puVar1 = (undefined4 *)0x0;
        }
        *puVar1 = uVar8;
      } while (uVar6 != uVar10);
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar5);
  }
  *(undefined2 *)(param_1 + 0x3c) = *param_2;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}

