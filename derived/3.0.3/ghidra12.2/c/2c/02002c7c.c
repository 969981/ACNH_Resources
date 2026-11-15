
void FUN_02002c7c(long param_1,long param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38b0) + 8) + 0x68);
  fVar3 = *(float *)(lVar2 + 0x278) -
          ((float)*(int *)(param_3 + 3) * 5.0 + (float)*(int *)(param_3 + 5) * 5.0 + 5.0) * 0.5;
  fVar4 = *(float *)(lVar2 + 0x280) -
          ((float)*(int *)((long)param_3 + 0x1c) * 5.0 +
          (float)*(int *)((long)param_3 + 0x2c) * 5.0 + 5.0) * 0.5;
  fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
  if ((0.0 <= *(float *)(param_2 + 0x34)) && (*(float *)(param_2 + 0x34) <= fVar3)) {
    return;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_3 + 3);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)((long)param_3 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)((long)param_3 + 0x2c);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)((long)param_3 + 0x34);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 7);
  *(float *)(param_2 + 0x34) = fVar3;
  puVar1 = (undefined2 *)*param_3;
  if (puVar1 != (undefined2 *)0x0) {
    *(undefined2 *)(param_2 + 0x38) = *puVar1;
    *(undefined1 *)(param_2 + 0x3a) = *(undefined1 *)(puVar1 + 1);
    *(undefined1 *)(param_2 + 0x3b) = *(undefined1 *)((long)puVar1 + 3);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(puVar1 + 2);
  }
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)((long)param_3 + 0x3c);
  *(undefined1 *)(param_2 + 0x44) = *(undefined1 *)((long)param_3 + 0x4c);
  return;
}

