
undefined8 * FUN_03876070(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  plVar6 = (long *)(param_1 + 0x20);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  uVar2 = FUN_0018d4b4();
  puVar7 = (undefined8 *)(param_1 + 0x70);
  puVar4 = (undefined8 *)*puVar7;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar7;
    do {
      puVar8 = puVar4 + 1;
      if (uVar2 <= (ulong)puVar4[4]) {
        puVar5 = puVar4;
        puVar8 = puVar4;
      }
      puVar4 = (undefined8 *)*puVar8;
    } while (puVar4 != (undefined8 *)0x0);
    if ((puVar5 != puVar7) && ((ulong)puVar5[4] <= uVar2)) goto LAB_03876220;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = FUN_0018d4b4();
  puVar5 = *(undefined8 **)(param_1 + 0x70);
  puVar4 = puVar7;
  while (puVar8 = puVar4, puVar5 != (undefined8 *)0x0) {
    while (puVar3 = puVar5, puVar4 = puVar3, (ulong)puVar3[4] <= uVar2) {
      if (uVar2 <= (ulong)puVar3[4]) goto LAB_03876184;
      puVar5 = (undefined8 *)puVar3[1];
      if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
        puVar8 = puVar3 + 1;
        goto LAB_03876134;
      }
    }
    puVar5 = (undefined8 *)*puVar3;
  }
LAB_03876134:
  puVar3 = (undefined8 *)FUN_00187df4(0x30);
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[2] = puVar4;
  *puVar3 = 0;
  puVar3[1] = 0;
  *puVar8 = puVar3;
  puVar4 = puVar3;
  if (**(long **)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = **(long **)(param_1 + 0x68);
    puVar4 = (undefined8 *)*puVar8;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x70),puVar4);
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
LAB_03876184:
  *(undefined4 *)(puVar3 + 5) = uVar1;
  uVar2 = FUN_0018d4b4();
  puVar4 = (undefined8 *)*puVar7;
  while (puVar8 = puVar7, puVar4 != (undefined8 *)0x0) {
    while (puVar5 = puVar4, puVar7 = puVar5, (ulong)puVar5[4] <= uVar2) {
      if (uVar2 <= (ulong)puVar5[4]) goto LAB_03876220;
      puVar4 = (undefined8 *)puVar5[1];
      if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
        puVar8 = puVar5 + 1;
        goto LAB_038761d0;
      }
    }
    puVar4 = (undefined8 *)*puVar5;
  }
LAB_038761d0:
  puVar5 = (undefined8 *)FUN_00187df4(0x30);
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[2] = puVar7;
  *puVar5 = 0;
  puVar5[1] = 0;
  *puVar8 = puVar5;
  puVar7 = puVar5;
  if (**(long **)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = **(long **)(param_1 + 0x68);
    puVar7 = (undefined8 *)*puVar8;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x70),puVar7);
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
LAB_03876220:
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return puVar5 + 5;
}

