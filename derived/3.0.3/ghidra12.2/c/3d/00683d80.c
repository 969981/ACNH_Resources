
void _INIT_1024(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda9f0;
  if ((*PTR_DAT_04bda9f0 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdb0c8,PTR_DAT_04bdb0d0);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

