
undefined8 FUN_00143274(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_strdup_04bcb8e0;
  puVar3 = PTR_DAT_04bcb718;
  puVar2 = PTR_realloc_04bb1e90;
  puVar1 = PTR_free_04bb1e80;
  *(undefined **)PTR_DAT_04bcb718 = PTR_malloc_04bb1e88;
  *(undefined **)(puVar3 + 8) = puVar1;
  puVar1 = PTR_calloc_04bb1e78;
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined **)(puVar3 + 0x18) = puVar4;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  return 1;
}

