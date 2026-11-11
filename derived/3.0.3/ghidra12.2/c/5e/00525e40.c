
void _INIT_600(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc058;
  if ((*PTR_DAT_04bdc058 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdc080,PTR_DAT_04bdc088);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

