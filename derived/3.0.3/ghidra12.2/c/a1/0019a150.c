
void FUN_0019a150(long param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)FUN_00187df4(0x28);
  *(uint *)((long)puVar2 + 0x1c) = param_2;
  *(undefined4 *)(puVar2 + 4) = param_3;
  puVar3 = (undefined8 *)(param_1 + 0x68);
  puVar1 = (undefined8 *)*puVar3;
  if ((undefined8 *)*puVar3 == (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = puVar3;
    *puVar3 = puVar2;
    lVar4 = **(long **)(param_1 + 0x60);
  }
  else {
    do {
      while (puVar3 = puVar1, param_2 < *(uint *)((long)puVar3 + 0x1c)) {
        puVar1 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = puVar3;
          *puVar3 = puVar2;
          lVar4 = **(long **)(param_1 + 0x60);
          goto joined_r0x0019a21c;
        }
      }
      puVar1 = (undefined8 *)puVar3[1];
    } while ((undefined8 *)puVar3[1] != (undefined8 *)0x0);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = puVar3;
    puVar3[1] = puVar2;
    lVar4 = **(long **)(param_1 + 0x60);
    puVar3 = puVar3 + 1;
  }
joined_r0x0019a21c:
  if (lVar4 != 0) {
    *(long *)(param_1 + 0x60) = lVar4;
    puVar2 = (undefined8 *)*puVar3;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x68),puVar2);
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
  return;
}

