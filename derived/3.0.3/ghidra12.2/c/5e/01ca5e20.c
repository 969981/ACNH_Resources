
void FUN_01ca5e20(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    uVar1 = param_1[1];
    if ((int)*param_2 <= (int)param_1[1]) {
      uVar1 = *param_2;
    }
    if (0 < (int)*param_1) {
      lVar2 = 0;
      puVar4 = *(undefined8 **)(param_1 + 4);
      do {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar2 * 8);
        lVar2 = lVar2 + 1;
        *puVar5 = puVar4;
        *(undefined8 **)(param_1 + 4) = puVar5;
        puVar4 = puVar5;
      } while (lVar2 < (int)*param_1);
    }
    *param_1 = 0;
    if ((0 < (int)uVar1) && (0 < (int)param_1[1])) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        if ((int)uVar3 < (int)param_1[1]) {
          puVar5 = *(undefined8 **)(param_1 + 4);
          puVar4 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar2);
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar5;
          }
          *puVar5 = *puVar4;
          uVar3 = *param_1;
          if ((int)uVar3 < (int)param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = puVar5;
            uVar3 = *param_1 + 1;
            *param_1 = uVar3;
          }
        }
        lVar2 = lVar2 + 8;
      } while ((ulong)uVar1 * 8 != lVar2);
    }
    uVar1 = param_1[0x199];
    if ((int)param_2[0x198] <= (int)param_1[0x199]) {
      uVar1 = param_2[0x198];
    }
    if (0 < (int)param_1[0x198]) {
      lVar2 = 0;
      puVar4 = *(undefined8 **)(param_1 + 0x19c);
      do {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x19a) + lVar2 * 8);
        lVar2 = lVar2 + 1;
        *puVar5 = puVar4;
        *(undefined8 **)(param_1 + 0x19c) = puVar5;
        puVar4 = puVar5;
      } while (lVar2 < (int)param_1[0x198]);
    }
    param_1[0x198] = 0;
    if ((0 < (int)uVar1) && (0 < (int)param_1[0x199])) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        if ((int)uVar3 < (int)param_1[0x199]) {
          puVar5 = *(undefined8 **)(param_1 + 0x19c);
          puVar4 = *(undefined8 **)(*(long *)(param_2 + 0x19a) + lVar2);
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x19c) = *puVar5;
          }
          *puVar5 = *puVar4;
          uVar3 = param_1[0x198];
          if ((int)uVar3 < (int)param_1[0x199]) {
            *(undefined8 **)(*(long *)(param_1 + 0x19a) + (long)(int)uVar3 * 8) = puVar5;
            uVar3 = param_1[0x198] + 1;
            param_1[0x198] = uVar3;
          }
        }
        lVar2 = lVar2 + 8;
      } while ((ulong)uVar1 * 8 != lVar2);
    }
  }
  return;
}

