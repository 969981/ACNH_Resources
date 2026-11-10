
undefined8 * FUN_001a0e60(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  plVar6 = (long *)(param_1 + 0x30);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  uVar1 = FUN_0018d4b4();
  puVar7 = (undefined8 *)(param_1 + 0x80);
  puVar4 = (undefined8 *)*puVar7;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar7;
    do {
      puVar3 = puVar4;
      if ((ulong)puVar4[4] < uVar1) {
        puVar3 = puVar5;
        puVar4 = puVar4 + 1;
      }
      puVar4 = (undefined8 *)*puVar4;
      puVar5 = puVar3;
    } while (puVar4 != (undefined8 *)0x0);
    if ((puVar3 != puVar7) && ((ulong)puVar3[4] <= uVar1)) goto LAB_001a1028;
  }
  uVar1 = FUN_0018d4b4();
  puVar5 = *(undefined8 **)(param_1 + 0x80);
  puVar4 = puVar7;
  while (puVar3 = puVar4, puVar5 != (undefined8 *)0x0) {
    while (puVar2 = puVar5, puVar4 = puVar2, (ulong)puVar2[4] <= uVar1) {
      if (uVar1 <= (ulong)puVar2[4]) goto LAB_001a0f74;
      puVar5 = (undefined8 *)puVar2[1];
      if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
        puVar3 = puVar2 + 1;
        goto LAB_001a0f20;
      }
    }
    puVar5 = (undefined8 *)*puVar2;
  }
LAB_001a0f20:
  puVar2 = (undefined8 *)FUN_00187df4(0x40);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = puVar4;
  puVar2[4] = uVar1;
  puVar2[5] = puVar2 + 5;
  puVar2[6] = puVar2 + 5;
  puVar2[7] = 0;
  *puVar3 = puVar2;
  puVar4 = puVar2;
  if (**(long **)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x78) = **(long **)(param_1 + 0x78);
    puVar4 = (undefined8 *)*puVar3;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x80),puVar4);
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
LAB_001a0f74:
  if ((undefined8 *)(param_1 + 0x18) != puVar2 + 5) {
    FUN_001a3750(puVar2 + 5,*(undefined8 *)(param_1 + 0x20),(undefined8 *)(param_1 + 0x18));
  }
  uVar1 = FUN_0018d4b4();
  puVar4 = (undefined8 *)*puVar7;
  while (puVar5 = puVar7, puVar4 != (undefined8 *)0x0) {
    while (puVar3 = puVar4, puVar7 = puVar3, (ulong)puVar3[4] <= uVar1) {
      if (uVar1 <= (ulong)puVar3[4]) goto LAB_001a1028;
      puVar4 = (undefined8 *)puVar3[1];
      if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
        puVar5 = puVar3 + 1;
        goto LAB_001a0fd4;
      }
    }
    puVar4 = (undefined8 *)*puVar3;
  }
LAB_001a0fd4:
  puVar3 = (undefined8 *)FUN_00187df4(0x40);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = puVar7;
  puVar3[4] = uVar1;
  puVar3[5] = puVar3 + 5;
  puVar3[6] = puVar3 + 5;
  puVar3[7] = 0;
  *puVar5 = puVar3;
  puVar4 = puVar3;
  if (**(long **)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x78) = **(long **)(param_1 + 0x78);
    puVar4 = (undefined8 *)*puVar5;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x80),puVar4);
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
LAB_001a1028:
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return puVar3 + 5;
}

