
void _INIT_351(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_004440c0(&DAT_04c715b0,"base.s11n.xml.write");
  FUN_001001d0(DAT_04bd61c8,&DAT_04c715b0,&__DT_FINI_ARRAY);
  puVar3 = PTR_DAT_04bd5fa0;
  puVar2 = PTR_LAB_04bd5f98;
  puVar1 = PTR_DAT_04bd5c60;
  *(undefined8 *)(PTR_DAT_04bd5fa0 + 0x28) = 0;
  *(char **)(puVar3 + 8) = "Common::WriteFormatXmlTagfile";
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined2 *)(puVar3 + 0x30) = 0;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  FUN_0049f950();
  return;
}

