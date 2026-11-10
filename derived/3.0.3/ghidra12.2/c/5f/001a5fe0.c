
short FUN_001a5fe0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)(param_1 + 0x30);
  puVar2 = (undefined8 *)*puVar4;
  if ((undefined8 *)*puVar4 == (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  else {
    do {
      while (puVar1 = puVar2, puVar4 = puVar1, *(uint *)((long)puVar1 + 0x1c) <= param_2) {
        if (param_2 <= *(uint *)((long)puVar1 + 0x1c)) goto LAB_001a608c;
        puVar2 = (undefined8 *)puVar1[1];
        if ((undefined8 *)puVar1[1] == (undefined8 *)0x0) {
          puVar5 = puVar1 + 1;
          goto LAB_001a603c;
        }
      }
      puVar2 = (undefined8 *)*puVar1;
      puVar5 = puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
  }
LAB_001a603c:
  puVar1 = (undefined8 *)FUN_00187df4(0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = puVar4;
  *puVar5 = puVar1;
  lVar3 = **(long **)(param_1 + 0x28);
  *(uint *)((long)puVar1 + 0x1c) = param_2;
  *(undefined2 *)(puVar1 + 4) = 0;
  puVar2 = puVar1;
  if (lVar3 != 0) {
    *(long *)(param_1 + 0x28) = lVar3;
    puVar2 = (undefined8 *)*puVar5;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x30),puVar2);
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
LAB_001a608c:
  if (*(short *)(puVar1 + 4) == 0) {
    return *(short *)(*(long *)(param_1 + 0x18) + 0x128);
  }
  return *(short *)(puVar1 + 4);
}

