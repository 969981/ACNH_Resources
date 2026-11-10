
void _INIT_17(void)

{
  undefined *puVar1;
  
  DAT_04c60b10 = PTR_DAT_04bcdc88 + 0x10;
  DAT_04c60b18 = &DAT_04c60b24;
  DAT_04c60b20 = 0x400;
  FUN_0028a8cc(&DAT_04c60b10);
  puVar1 = PTR_DAT_04bcdd90;
  *DAT_04c60b18 = *PTR_DAT_04bcdcc8;
  DAT_04c60b10 = puVar1 + 0x10;
  FUN_00290500(&DAT_04c60ad0);
  FUN_001001d0(PTR_FUN_04bcdd98,&DAT_04c60ad0,&__DT_FINI_ARRAY);
  return;
}

