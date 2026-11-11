
void FUN_003d032c(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_04bd02b8 + 0x50;
  *param_1 = (long)(PTR_DAT_04bd02b8 + 0x10);
  plVar2 = param_1 + 3;
  *plVar2 = (long)puVar1;
  if (*(char *)((long)param_1 + 0x2c1) == '\0') {
    *(undefined2 *)(param_1 + 0x58) = 0x100;
    FUN_003d0c14(plVar2,0);
    FUN_003d0bfc(plVar2);
    return;
  }
  FUN_003d0bfc(plVar2);
  return;
}

