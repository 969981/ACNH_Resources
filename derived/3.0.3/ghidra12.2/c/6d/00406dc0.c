
void FUN_00406dc0(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  lVar9 = (long)puVar5 - (long)puVar8 >> 5;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3b != 0) {
    FUN_00406da8(param_1);
    return;
  }
  uVar6 = param_1[2] - (long)puVar8 >> 4;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7fffffffffffffdf < (ulong)(param_1[2] - (long)puVar8)) {
    uVar6 = 0x7ffffffffffffff;
  }
  if (uVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_00187df4(uVar6 << 5);
    puVar8 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)param_1[1];
  }
  puVar2 = (undefined8 *)(lVar4 + lVar9 * 0x20);
  lVar4 = lVar4 + uVar6 * 0x20;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  puVar2[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((long)puVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *puVar2 = &DAT_04851720;
  if (puVar5 == puVar8) {
    *param_1 = (long)puVar2;
    param_1[1] = (long)(puVar2 + 4);
    param_1[2] = lVar4;
  }
  else {
    lVar9 = 0;
    do {
      lVar7 = lVar9 + -0x20;
      *(undefined1 *)((long)puVar2 + lVar9 + -0x18) = *(undefined1 *)((long)puVar5 + lVar9 + -0x18);
      *(undefined4 *)((long)puVar2 + lVar9 + -0x14) = *(undefined4 *)((long)puVar5 + lVar9 + -0x14);
      *(undefined8 *)((long)puVar2 + lVar9 + -0x10) = *(undefined8 *)((long)puVar5 + lVar9 + -0x10);
      *(undefined4 *)((long)puVar2 + lVar9 + -8) = *(undefined4 *)((long)puVar5 + lVar9 + -8);
      uVar3 = *(undefined4 *)((long)puVar5 + lVar9 + -4);
      *(undefined **)((long)puVar2 + lVar9 + -0x20) = &DAT_04851720;
      *(undefined4 *)((long)puVar2 + lVar9 + -4) = uVar3;
      lVar9 = lVar7;
    } while ((undefined8 *)((long)puVar5 + lVar7) != puVar8);
    param_1[2] = lVar4;
    *param_1 = (long)puVar2 + lVar7;
    param_1[1] = (long)(puVar2 + 4);
    do {
      puVar5 = puVar5 + -4;
      (**(code **)*puVar5)(puVar5);
    } while (puVar5 != puVar8);
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar8);
  return;
}

