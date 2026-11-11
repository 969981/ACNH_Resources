
void _INIT_1004(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bda8c0;
  if ((*PTR_DAT_04bda8c0 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bdae68,PTR_DAT_04bdae70);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

