
void _INIT_9(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04bccf50;
  puVar1 = PTR_LAB_04bccf40;
  *(undefined8 *)PTR_DAT_04bccf50 = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  FUN_001001d0(puVar1,puVar2,&__DT_FINI_ARRAY);
  return;
}

