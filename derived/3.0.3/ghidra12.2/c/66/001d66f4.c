
void FUN_001d66f4(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04bcc770;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar2 = (undefined8 *)FUN_00185a6c(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[6] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    *puVar2 = 0;
    puVar2[1] = puVar2 + 2;
    puVar2[3] = 0;
    puVar2[4] = puVar2 + 5;
  }
  param_1[2] = (long)puVar2;
  lVar3 = FUN_00185a6c(0xd0);
  if (lVar3 != 0) {
    FUN_001d6bac(lVar3);
  }
  param_1[3] = lVar3;
  return;
}

