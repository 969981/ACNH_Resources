
void _INIT_346(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_004440c0(&DAT_04c713f8,"base.s11n.xml.read");
  FUN_001001d0(DAT_04bd61c8,&DAT_04c713f8,&__DT_FINI_ARRAY);
  FUN_0043dcf0(&DAT_04c713d8);
  uVar1 = DAT_04bd4f58;
  DAT_04c713d8 = PTR_DAT_04bd5ef0 + 0x10;
  FUN_001001d0(DAT_04bd4f58,&DAT_04c713d8,&__DT_FINI_ARRAY);
  FUN_0043dcf0(&DAT_04c713e8);
  DAT_04c713e8 = PTR_DAT_04bd5ee8 + 0x10;
  FUN_001001d0(uVar1,&DAT_04c713e8,&__DT_FINI_ARRAY);
  puVar3 = PTR_DAT_04bd5f58;
  puVar2 = PTR_DAT_04bd5c38;
  *(char **)(PTR_DAT_04bd5f58 + 8) = "Common::ReadFormatXmlTagfile";
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined **)(puVar3 + 0x18) = puVar2 + 0x10;
  *(undefined1 **)(puVar3 + 0x20) = &LAB_004ab7b0;
  *(undefined2 *)(puVar3 + 0x30) = 0;
  FUN_0049f950();
  return;
}

