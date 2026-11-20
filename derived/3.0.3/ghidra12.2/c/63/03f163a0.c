
undefined8 * FUN_03f163a0(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint in_w11;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x1e4);
    if (uVar2 == 0) {
      lVar7 = *(long *)(param_1 + 0x1d8);
    }
    else {
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = param_2 / uVar2;
      }
      lVar7 = *(long *)(param_1 + 0x1d8);
      in_w11 = param_2 - uVar5 * uVar2;
      uVar5 = in_w11;
      do {
        uVar3 = *(uint *)(lVar7 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3)
                         );
        if (uVar3 == param_2) {
          uVar5 = *(uint *)(lVar7 + (long)(int)uVar5 * 8 + 4);
          if ((uVar5 < *(uint *)(param_1 + 0x1b8)) &&
             (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x1c0) + (long)(int)uVar5 * 8),
             puVar6 != (undefined8 *)0x0)) {
            return puVar6;
          }
          break;
        }
        if (uVar3 == 0) break;
        uVar3 = 0;
        if ((int)(uVar5 + 1) < (int)uVar2) {
          uVar3 = uVar5 + 1;
        }
        uVar5 = uVar3;
      } while (uVar3 != in_w11);
    }
    uVar5 = *(uint *)(param_1 + 0x1b8);
    uVar3 = in_w11;
    do {
      uVar4 = *(uint *)(lVar7 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3));
      if (uVar4 == 0) {
        puVar1 = (uint *)(lVar7 + (long)(int)uVar3 * 8);
        *puVar1 = param_2;
        puVar1[1] = uVar5;
        *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
        break;
      }
      if (uVar4 == param_2) break;
      uVar4 = 0;
      if ((int)(uVar3 + 1) < (int)uVar2) {
        uVar4 = uVar3 + 1;
      }
      uVar3 = uVar4;
    } while (uVar4 != in_w11);
  }
  if (*(int *)(param_1 + 0x1bc) <= *(int *)(param_1 + 0x1b8)) {
    return (undefined8 *)0x0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x1c8);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x1c8) = *puVar6;
  }
  *puVar6 = puVar6;
  puVar6[1] = puVar6;
  puVar6[2] = 0xffffffff00000000;
  puVar6[3] = 0;
  if (*(int *)(param_1 + 0x1b8) < *(int *)(param_1 + 0x1bc)) {
    *(undefined8 **)(*(long *)(param_1 + 0x1c0) + (long)*(int *)(param_1 + 0x1b8) * 8) = puVar6;
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
  }
  *(undefined4 *)((long)puVar6 + 0x14) = 0x28;
  return puVar6;
}

