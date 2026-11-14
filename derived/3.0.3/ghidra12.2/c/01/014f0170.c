
void FUN_014f0170(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    uVar1 = param_1[1];
    if ((int)*param_2 <= (int)param_1[1]) {
      uVar1 = *param_2;
    }
    if (0 < (int)*param_1) {
      lVar2 = 0;
      puVar3 = *(undefined8 **)(param_1 + 4);
      do {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar2 * 8);
        lVar2 = lVar2 + 1;
        *puVar5 = puVar3;
        *(undefined8 **)(param_1 + 4) = puVar5;
        puVar3 = puVar5;
      } while (lVar2 < (int)*param_1);
    }
    *param_1 = 0;
    if ((0 < (int)uVar1) && (0 < (int)param_1[1])) {
      lVar2 = 0;
      uVar4 = 0;
      do {
        if ((int)uVar4 < (int)param_1[1]) {
          puVar6 = *(undefined2 **)(*(long *)(param_2 + 2) + lVar2);
          puVar3 = *(undefined8 **)(param_1 + 4);
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar3;
          }
          *(undefined2 *)puVar3 = *puVar6;
          *(undefined1 *)((long)puVar3 + 2) = *(undefined1 *)(puVar6 + 1);
          *(undefined1 *)((long)puVar3 + 3) = *(undefined1 *)((long)puVar6 + 3);
          *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(puVar6 + 2);
          uVar7 = *(undefined8 *)(puVar6 + 4);
          *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar6 + 8);
          puVar3[1] = uVar7;
          *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(puVar6 + 10);
          uVar7 = *(undefined8 *)(puVar6 + 0xc);
          *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar6 + 0x10);
          puVar3[3] = uVar7;
          *(undefined4 *)((long)puVar3 + 0x24) = *(undefined4 *)(puVar6 + 0x12);
          uVar4 = *param_1;
          if ((int)uVar4 < (int)param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar4 * 8) = puVar3;
            uVar4 = *param_1 + 1;
            *param_1 = uVar4;
          }
        }
        lVar2 = lVar2 + 8;
      } while ((ulong)uVar1 * 8 != lVar2);
    }
  }
  return;
}

