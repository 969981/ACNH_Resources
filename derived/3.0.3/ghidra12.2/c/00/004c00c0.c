
void _INIT_353(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_004440c0(&DAT_04c71650,"base.ver.bundle");
  FUN_001001d0(DAT_04bd61c8,&DAT_04c71650,&__DT_FINI_ARRAY);
  puVar3 = PTR_DAT_04bd6078;
  puVar2 = PTR_DAT_04bd5fe0;
  puVar1 = PTR_LAB_04bd5fd8;
  *(undefined8 *)(PTR_DAT_04bd5fe0 + 0x28) = 0;
  *(char **)(puVar2 + 8) = "Common::VersionBundle";
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined2 *)(puVar2 + 0x30) = 0;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  FUN_0049f950();
  return;
}

