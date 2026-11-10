
void _INIT_29(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04bcee10;
  FUN_003490b4(PTR_DAT_04bcee10);
  FUN_0034f814(puVar2 + 0x120);
  FUN_0034f694(puVar2 + 0x168);
  *(undefined8 *)(puVar2 + 600) = 0;
  *(undefined8 *)(puVar2 + 0x250) = 0;
  *(undefined8 *)(puVar2 + 0x248) = 0;
  *(undefined8 *)(puVar2 + 0x240) = 0;
  puVar1 = PTR_FUN_04bcee00;
  *(undefined8 *)(puVar2 + 0x260) = 0xffffffffffffffff;
  FUN_001001d0(puVar1,puVar2,&__DT_FINI_ARRAY);
  return;
}

