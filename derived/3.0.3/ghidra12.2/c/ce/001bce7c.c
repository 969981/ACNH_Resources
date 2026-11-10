
void FUN_001bce7c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04bcc5e8;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_001e1500(param_1 + 4);
  lVar2 = FUN_00185a6c(0x60);
  if (lVar2 != 0) {
    FUN_001be084(lVar2);
  }
  param_1[1] = lVar2;
  return;
}

