
void _INIT_241(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_004440c0(&DAT_04c6f9e0,"base.reflect.cloner");
  FUN_001001d0(&LAB_00444290,&DAT_04c6f9e0,&__DT_FINI_ARRAY);
  puVar2 = PTR_DAT_04bd4e58;
  puVar1 = PTR_DAT_048607b8;
  FUN_0043eef0(PTR_DAT_04bd4e58);
  *(undefined ***)puVar2 = &PTR_FUN_04861a18;
  *(undefined **)(puVar2 + 8) = puVar1;
  FUN_001001d0(FUN_0043ef10,puVar2,&__DT_FINI_ARRAY);
  return;
}

