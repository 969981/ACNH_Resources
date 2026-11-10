
void FUN_001bae00(long *param_1)

{
  undefined2 *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  puVar2 = PTR_DAT_04bcc5a8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined2 *)FUN_00187df4(0x200);
  puVar1 = (undefined2 *)param_1[2];
  puVar5 = (undefined2 *)param_1[3];
  puVar6 = puVar3;
  puVar7 = puVar3;
  if (puVar5 != puVar1) {
    do {
      puVar7 = puVar6 + -8;
      *puVar7 = 0;
      puVar4 = puVar5 + -8;
      *puVar7 = *puVar4;
      *(undefined8 *)(puVar6 + -4) = *(undefined8 *)(puVar5 + -4);
      puVar5 = puVar4;
      puVar6 = puVar7;
    } while (puVar4 != puVar1);
    puVar5 = (undefined2 *)param_1[2];
  }
  param_1[2] = (long)puVar7;
  param_1[3] = (long)puVar3;
  param_1[4] = (long)(puVar3 + 0x100);
  if (puVar5 == (undefined2 *)0x0) {
    return;
  }
  FUN_00187e4c(puVar5);
  return;
}

