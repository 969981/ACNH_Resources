
void FUN_014e2eb0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(uint **)(param_1 + 4) = param_1 + 8;
  lVar4 = 0xb2;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(uint **)(param_1 + 8) = param_1 + 0x12;
  puVar2 = param_1 + 0x12;
  do {
    lVar4 = lVar4 + -2;
    *(uint **)puVar2 = puVar2 + 10;
    *(uint **)(puVar2 + 10) = puVar2 + 0x14;
    puVar2 = puVar2 + 0x14;
  } while (lVar4 != 0);
  *(uint **)(param_1 + 6) = param_1 + 8;
  puVar2 = param_1 + 0x710;
  param_1[0x706] = 0;
  param_1[0x707] = 0;
  if (puVar2 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0xb4;
    *(uint **)(param_1 + 2) = puVar2;
    uVar1 = 0xb4;
  }
  if (param_1 != param_2) {
    uVar3 = *param_2;
    *param_1 = 0;
    if ((int)uVar3 <= (int)uVar1) {
      uVar1 = uVar3;
    }
    if ((0 < (int)uVar1) && (puVar2 != (uint *)0x0)) {
      lVar4 = 0;
      uVar3 = 0;
      do {
        if ((int)uVar3 < (int)param_1[1]) {
          puVar6 = *(undefined8 **)(param_1 + 4);
          puVar5 = *(undefined4 **)(*(long *)(param_2 + 2) + lVar4);
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar6;
          }
          *(undefined4 *)puVar6 = *puVar5;
          *(undefined2 *)((long)puVar6 + 4) = *(undefined2 *)(puVar5 + 1);
          *(undefined1 *)((long)puVar6 + 6) = *(undefined1 *)((long)puVar5 + 6);
          *(undefined1 *)((long)puVar6 + 7) = *(undefined1 *)((long)puVar5 + 7);
          *(undefined4 *)(puVar6 + 1) = puVar5[2];
          uVar7 = *(undefined8 *)(puVar5 + 3);
          uVar8 = *(undefined8 *)(puVar5 + 5);
          *(undefined8 *)((long)puVar6 + 0x1c) = *(undefined8 *)(puVar5 + 7);
          *(undefined8 *)((long)puVar6 + 0x14) = uVar8;
          *(undefined8 *)((long)puVar6 + 0xc) = uVar7;
          uVar3 = *param_1;
          if ((int)uVar3 < (int)param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = puVar6;
            uVar3 = *param_1 + 1;
            *param_1 = uVar3;
          }
        }
        lVar4 = lVar4 + 8;
      } while ((ulong)uVar1 * 8 != lVar4);
    }
  }
  return;
}

