
void FUN_03d4ad70(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar5) {
    uVar3 = 0;
    do {
      uVar1 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
      }
      uVar3 = uVar3 + 1;
      puVar6 = (undefined8 *)(param_1[2] + (ulong)uVar1 * 0x48);
      *(undefined1 *)((long)puVar6 + 0x44) = 0;
      *(undefined8 *)((long)puVar6 + 0x3c) = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined8 *)((long)puVar6 + 0x1e) = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      *(undefined1 *)(puVar6 + 7) = 0;
      uVar5 = *(uint *)(param_1 + 1);
    } while ((int)uVar3 < (int)uVar5);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  uVar5 = *(uint *)(param_1 + 1);
  uVar4 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    if (uVar5 == 1) {
      uVar8 = 0;
      uVar3 = 0;
    }
    else {
      uVar8 = 0;
      uVar3 = 0;
      pcVar9 = (char *)(param_1[2] + 0x80);
      do {
        uVar7 = (uint)uVar8;
        uVar8 = uVar8 + 2;
        uVar1 = 0;
        if (pcVar9[-0x48] != '\0') {
          uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        }
        uVar2 = 0;
        if (*pcVar9 != '\0') {
          uVar2 = 1 << (ulong)(uVar7 + 1 & 0x1f);
        }
        uVar3 = uVar2 | uVar1 | uVar3;
        pcVar9 = pcVar9 + 0x90;
      } while (uVar8 != (uVar4 & 0xfffffffe));
    }
    if ((uVar5 & 1) != 0) {
      uVar5 = 0;
      if (*(char *)(param_1[2] + uVar8 * 0x48 + 0x38) != '\0') {
        uVar5 = 1 << (ulong)((uint)uVar8 & 0x1f);
      }
      uVar3 = uVar5 | uVar3;
    }
    uVar5 = 0;
    do {
      if ((uVar3 >> (ulong)(uVar5 & 0x1f) & 1) != 0) {
        uVar1 = uVar5;
        if ((uint)uVar4 <= uVar5) {
          uVar1 = 0;
        }
        *(undefined4 *)(param_1[2] + (ulong)uVar1 * 0x48 + 0x3c) = 0xffffffff;
        uVar1 = uVar5;
        if (*(uint *)(param_1 + 1) <= uVar5) {
          uVar1 = 0;
        }
        *(undefined4 *)(param_1[2] + (ulong)uVar1 * 0x48 + 0x40) = 0xffffffff;
        uVar1 = uVar5;
        if (*(uint *)(param_1 + 1) <= uVar5) {
          uVar1 = 0;
        }
        *(undefined1 *)(param_1[2] + (ulong)uVar1 * 0x48 + 0x44) = 1;
        uVar4 = (ulong)*(uint *)(param_1 + 1);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar4);
  }
  return;
}

