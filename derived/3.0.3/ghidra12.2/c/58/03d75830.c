
void FUN_03d75830(float param_1,long param_2,ulong param_3)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  plVar2 = *(long **)(param_2 + 0x280);
  *(undefined2 *)(plVar2 + 4) = 1;
  *(undefined4 *)((long)plVar2 + 0x24) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  *(undefined4 *)(plVar2 + 8) = 0;
  *(undefined4 *)((long)plVar2 + 0x2c) = 0x80000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,0);
  if ((long *)plVar2[10] != plVar2 + 9) {
    lVar4 = (long)*(int *)((long)plVar2 + 0x5c);
    puVar3 = (undefined8 *)(plVar2[10] - lVar4);
    do {
      (**(code **)*puVar3)(puVar3,*(undefined4 *)((long)plVar2 + 0x24));
      puVar3 = (undefined8 *)(*(long *)((long)puVar3 + lVar4 + 8) - lVar4);
    } while (puVar3 != (undefined8 *)((long)(plVar2 + 9) - lVar4));
  }
  lVar4 = *(long *)(param_2 + 0x280);
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(lVar4 + 0x2c) = 3;
    do {
      if (*(char *)(lVar4 + 0x20) == '\0') {
        FUN_03c83a50(lVar4,1);
      }
      FUN_03c835a0(lVar4);
    } while (*(int *)(lVar4 + 0x2c) != -0x80000000);
    bVar1 = *(byte *)(param_2 + 0x2fb) & 0xfe;
  }
  else {
    *(undefined4 *)(lVar4 + 0x2c) = 4;
    do {
      if (*(char *)(lVar4 + 0x20) == '\0') {
        FUN_03c83a50(lVar4,1);
      }
      FUN_03c835a0(lVar4);
    } while (*(int *)(lVar4 + 0x2c) != -0x80000000);
    bVar1 = *(byte *)(param_2 + 0x2fb) | 1;
  }
  *(byte *)(param_2 + 0x2fb) = bVar1;
  fVar5 = 1.0;
  if (param_1 <= 1.0) {
    fVar5 = param_1;
  }
  fVar6 = 0.0;
  if (0.0 <= param_1) {
    fVar6 = fVar5;
  }
  *(float *)(param_2 + 0x2e0) = fVar6;
  FUN_03d759c4(param_2);
  *(float *)(param_2 + 0x2e0) = fVar6;
  FUN_03d759c4(param_2);
  *(undefined1 *)(param_2 + 0x318) = 0;
  return;
}

