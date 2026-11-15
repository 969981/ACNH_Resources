
void FUN_02009c8c(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined2 *puVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_3 + 5);
  iVar8 = *(int *)((long)param_3 + 0x2c);
  iVar3 = *(int *)(param_3 + 3);
  iVar5 = *(int *)((long)param_3 + 0x1c);
  lVar1 = (**(code **)(*param_1 + 0x28))();
  lVar1 = *(long *)(*(long *)(lVar1 + 8) + 0x68);
  fVar4 = *(float *)(lVar1 + 0x278) - ((float)iVar3 * 5.0 + (float)iVar7 * 5.0 + 5.0) * 0.5;
  fVar6 = *(float *)(lVar1 + 0x280) - ((float)iVar5 * 5.0 + (float)iVar8 * 5.0 + 5.0) * 0.5;
  fVar4 = fVar6 * fVar6 + fVar4 * fVar4;
  if ((*(float *)(param_2 + 0x34) < 0.0) || (fVar4 < *(float *)(param_2 + 0x34))) {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)((long)param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 5);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)((long)param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 6);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)((long)param_3 + 0x34);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 7);
    *(float *)(param_2 + 0x34) = fVar4;
    puVar2 = (undefined2 *)*param_3;
    if (puVar2 != (undefined2 *)0x0) {
      *(undefined2 *)(param_2 + 0x38) = *puVar2;
      *(undefined1 *)(param_2 + 0x3a) = *(undefined1 *)(puVar2 + 1);
      *(undefined1 *)(param_2 + 0x3b) = *(undefined1 *)((long)puVar2 + 3);
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(puVar2 + 2);
    }
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)((long)param_3 + 0x3c);
    *(undefined1 *)(param_2 + 0x44) = *(undefined1 *)((long)param_3 + 0x4c);
  }
  return;
}

