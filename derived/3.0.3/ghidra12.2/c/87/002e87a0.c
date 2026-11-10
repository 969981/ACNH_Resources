
void FUN_002e87a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = param_1 + 2;
  if (*(undefined4 **)(param_1 + 4) != puVar1) {
    puVar2 = *(undefined4 **)(param_1 + 4);
    do {
      puVar3 = *(undefined4 **)(puVar2 + 2);
      if ((*(short *)((long)puVar2 + 0x22) < 0) && (*(ushort *)(puVar2 + 9) - 7 < 2)) {
        FUN_00223704(puVar1,puVar2);
        FUN_002236e0(param_1 + 8,param_1 + 8,(long)puVar2 + (long)(int)param_1[0xd]);
      }
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
  }
  if (param_1[6] == 0) {
    *param_1 = 0;
    return;
  }
  return;
}

