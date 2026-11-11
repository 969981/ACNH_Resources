
void _INIT_315(void)

{
  FUN_004440c0(&DAT_04c70918,"base.ver.patchRegistry");
  FUN_001001d0(&LAB_00444290,&DAT_04c70918,&__DT_FINI_ARRAY);
  DAT_04c70980 = 0;
  FUN_001001d0(&LAB_00476fb0,&DAT_04c70980,&__DT_FINI_ARRAY);
  FUN_00442840(&DAT_04c70988,"$hkReflect::Version::PatchRegistry",&LAB_00476fc0,&LAB_00477010,
               &DAT_04c70980,1);
  return;
}

