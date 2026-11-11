
void _INIT_820(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd68e0;
  if ((*PTR_DAT_04bd68e0 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bd6958,PTR_DAT_04bd6960);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

