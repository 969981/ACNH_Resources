
void _INIT_12(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_04bcdc78;
  puVar3 = PTR_LAB_04bcdc68;
  puVar1 = PTR_DAT_04bcdc78 + 8;
  puVar2 = PTR_DAT_04bcdc70 + 0x10;
  *(undefined4 *)(PTR_DAT_04bcdc78 + 0x18) = 0;
  *(undefined **)puVar4 = puVar2;
  *(undefined **)(puVar4 + 8) = puVar1;
  *(undefined **)(puVar4 + 0x10) = puVar1;
  FUN_001001d0(puVar3,puVar4,&__DT_FINI_ARRAY);
  return;
}

