
void _INIT_13(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_DAT_04bcdd30;
  FUN_0028a064(PTR_DAT_04bcdd30);
  FUN_001001d0(PTR_FUN_04bcdd20,puVar1,&__DT_FINI_ARRAY);
  puVar3 = PTR_DAT_04bcdd40;
  puVar2 = PTR_DAT_04bccf20;
  puVar1 = PTR_DAT_04bccf20 + 0x10;
  *(undefined8 *)PTR_DAT_04bcdd40 = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)puVar2 = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  FUN_0028a55c(puVar2,4,puVar1);
  puVar2 = PTR_DAT_04bcdd38;
  puVar1 = PTR_DAT_04bcdd38 + 0x10;
  *(undefined8 *)PTR_DAT_04bcdd38 = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  FUN_0028a55c(puVar2,4,puVar1);
  puVar1 = PTR_DAT_04bcdd10;
  FUN_00290394(PTR_DAT_04bcdd10);
  FUN_001001d0(PTR_FUN_04bcdd08,puVar1,&__DT_FINI_ARRAY);
  *(undefined4 *)PTR_DAT_04bcdd00 = 0;
  return;
}

