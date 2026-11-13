
undefined8 FUN_013da650(long param_1,undefined4 *param_2,undefined2 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined2 local_14 [2];
  
  if (0 < *(int *)(param_1 + 0x78)) {
    uVar5 = 0;
    local_14[0] = param_3;
    do {
      if (uVar5 < *(uint *)(param_1 + 0x58)) {
        lVar1 = *(long *)(*(long *)(param_1 + 0x60) + uVar5 * 8);
      }
      else {
        lVar1 = 0;
      }
      uVar2 = (**(code **)(*(long *)(lVar1 + 0x30) + 0x118))((long *)(lVar1 + 0x30),local_14);
      if ((uVar2 & 1) != 0) {
        uVar4 = (uint)uVar5;
        if (uVar4 < *(uint *)(param_1 + 0x58)) {
          lVar1 = *(long *)(*(long *)(param_1 + 0x60) + uVar5 * 8);
        }
        else {
          lVar1 = 0;
        }
        puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0x90) + 0xf0))();
        param_2[1] = *puVar3;
        if (uVar4 < *(uint *)(param_1 + 0x58)) {
          lVar1 = *(long *)(*(long *)(param_1 + 0x60) + uVar5 * 8);
        }
        else {
          lVar1 = 0;
        }
        puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0x60) + 0xf0))();
        *param_2 = *puVar3;
        if (uVar4 < *(uint *)(param_1 + 0x58)) {
          lVar1 = *(long *)(*(long *)(param_1 + 0x60) + uVar5 * 8);
        }
        else {
          lVar1 = 0;
        }
        puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0xc0) + 0xf0))();
        param_2[2] = *puVar3;
        param_2[3] = puVar3[1];
        param_2[4] = puVar3[2];
        if (uVar4 < *(uint *)(param_1 + 0x58)) {
          lVar1 = *(long *)(*(long *)(param_1 + 0x60) + uVar5 * 8);
        }
        else {
          lVar1 = 0;
        }
        puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0xf8) + 0xf0))();
        param_2[5] = *puVar3;
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x78));
  }
  return 0;
}

