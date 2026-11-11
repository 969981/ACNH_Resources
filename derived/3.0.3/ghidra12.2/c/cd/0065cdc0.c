
void _INIT_904(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda700;
  if ((*PTR_DAT_04bda700 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bda740,PTR_DAT_04bda748);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

