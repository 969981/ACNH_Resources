
void _INIT_231(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_004440c0(&DAT_04c6f7d8,"base.reflect.attributes");
  FUN_001001d0(&LAB_00444290,&DAT_04c6f7d8,&__DT_FINI_ARRAY);
  FUN_0043dcf0(&DAT_04c6f840);
  DAT_04c6f840 = &PTR_FUN_048617a8;
  FUN_001001d0(FUN_0043f070,&DAT_04c6f840,&__DT_FINI_ARRAY);
  puVar2 = PTR_DAT_04bd4df0;
  puVar1 = PTR_DAT_048607b8;
  FUN_0043eef0(PTR_DAT_04bd4df0);
  *(undefined ***)puVar2 = &PTR_FUN_04861750;
  *(undefined **)(puVar2 + 8) = puVar1;
  FUN_001001d0(FUN_0043ef10,puVar2,&__DT_FINI_ARRAY);
  return;
}

