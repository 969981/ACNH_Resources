
void _INIT_3(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  FUN_001dfe34(&DAT_04c5e5d8);
  FUN_001001d0(PTR_FUN_04bcbeb8,&DAT_04c5e5d8,&__DT_FINI_ARRAY);
  puVar1 = PTR_DAT_04bcbfc0;
  *(undefined **)PTR_DAT_04bcbfc0 = PTR_DAT_04bcbfb8 + 0x10;
  FUN_001001d0(PTR_FUN_04bc0ee8,puVar1,&__DT_FINI_ARRAY);
  puVar2 = PTR_DAT_04bcbfc8;
  puVar1 = PTR_DAT_04bcbf20 + 0x10;
  PTR_DAT_04bcbfc8[8] = 0;
  *(undefined **)puVar2 = puVar1;
  *(undefined **)(puVar2 + 0x10) = PTR_DAT_04bc0ec8 + 0x10;
  puVar2[0x18] = 0;
  *(undefined **)(puVar2 + 0x28) = puVar2 + 0x18;
  *(undefined8 *)(puVar2 + 0x30) = 0x10;
  FUN_001001d0(PTR_LAB_04bcbf18,puVar2,&__DT_FINI_ARRAY);
  puVar2 = PTR_PTR_04bcbfe0;
  puVar1 = PTR_DAT_04bcbf10;
  uVar3 = *(undefined8 *)PTR_PTR_04bcbfd8;
  *(undefined8 *)PTR_DAT_04bcbf10 = *(undefined8 *)PTR_PTR_04bcbfd0;
  *(undefined8 *)(puVar1 + 8) = uVar3;
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)puVar2;
  return;
}

