
void _INIT_196(void)

{
  if ((DAT_04c6e790 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c6e770);
    DAT_04c6e780 = &LAB_00432c50;
    DAT_04c6e788 = 0;
    DAT_04c6e770 = &PTR_FUN_04866e08;
    FUN_001001d0(FUN_0043f070,&DAT_04c6e770,&__DT_FINI_ARRAY);
    DAT_04c6e790 = 1;
  }
  return;
}

