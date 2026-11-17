
void FUN_02ce6318(long param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  
  puVar4 = PTR_DAT_04bb37e0;
  if (param_2 == 0xffffffff) {
    return;
  }
  puVar1 = (undefined2 *)(param_1 + 0x762c0);
  puVar2 = puVar1 + (ulong)param_2 * 8;
  if (9 < param_2) {
    puVar2 = puVar1;
  }
  if (*(int *)(puVar2 + 4) == 3) {
    uVar3 = *(undefined4 *)(param_1 + 0xef8);
    uVar5 = 0;
    if (param_2 != 0) {
      if (param_2 == 3) {
        uVar5 = 2;
      }
      else {
        if (param_2 != 4) goto LAB_02ce63e0;
        uVar5 = 1;
      }
    }
    *(byte *)(param_1 + 0x762b0) = *(byte *)(param_1 + 0x762b0) | (byte)(1 << (ulong)uVar5);
    puVar2 = (undefined2 *)(param_1 + 0x76298) + (ulong)uVar5 * 4;
    if (2 < uVar5) {
      puVar2 = (undefined2 *)(param_1 + 0x76298);
    }
    *puVar2 = *(undefined2 *)puVar4;
    *(undefined *)(puVar2 + 1) = puVar4[2];
    *(undefined *)((long)puVar2 + 3) = puVar4[3];
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar4 + 4);
    FUN_02ce119c(param_1 + 0x76250,uVar3);
  }
LAB_02ce63e0:
  puVar2 = puVar1 + (ulong)param_2 * 8;
  if (9 < param_2) {
    puVar2 = puVar1;
  }
  *(undefined1 **)(puVar2 + 4) = &DAT_ffffffff00000006;
  *puVar2 = *(undefined2 *)puVar4;
  *(undefined *)(puVar2 + 1) = puVar4[2];
  *(undefined *)((long)puVar2 + 3) = puVar4[3];
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar4 + 4);
  return;
}

