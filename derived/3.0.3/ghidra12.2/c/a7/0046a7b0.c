
void _INIT_308(void)

{
  if ((DAT_04c70560 & 1) == 0) {
    FUN_0043dcf0(&DAT_04c704a0);
    DAT_04c704a0 = &PTR_FUN_048646f8;
    FUN_001001d0(FUN_0043f070,&DAT_04c704a0,&__DT_FINI_ARRAY);
    DAT_04c70560 = 1;
  }
  return;
}

