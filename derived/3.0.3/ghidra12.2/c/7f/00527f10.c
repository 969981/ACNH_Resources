
void _INIT_705(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdc700;
  if ((*PTR_DAT_04bdc700 & 1) == 0) {
    FUN_00446cb0(PTR_DAT_04bddb10,PTR_DAT_04bddb18);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}

