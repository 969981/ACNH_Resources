
void _INIT_15(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_04bcdd68;
  *(undefined **)PTR_DAT_04bcdd68 = PTR_DAT_04bccec0 + 0x10;
  *(undefined8 **)(puVar1 + 8) = &DAT_0407ebb1;
  FUN_001001d0(PTR_LAB_04bccec8,puVar1,&__DT_FINI_ARRAY);
  puVar2 = PTR_DAT_04bcdd78;
  puVar1 = PTR_LAB_04bcdd60;
  *(undefined **)PTR_DAT_04bcdd78 = PTR_DAT_04bcdd70 + 0x10;
  *(undefined **)(puVar2 + 8) = &DAT_0410f64a;
  FUN_001001d0(puVar1,puVar2,&__DT_FINI_ARRAY);
  return;
}

