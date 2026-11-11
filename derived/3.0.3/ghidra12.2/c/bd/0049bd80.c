
void _INIT_341(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  FUN_004440c0(&DAT_04c70ff0,"base.s11n.tagfile.write");
  uVar3 = DAT_04bd61c8;
  FUN_001001d0(DAT_04bd61c8,&DAT_04c70ff0,&__DT_FINI_ARRAY);
  FUN_004440c0(&DAT_04c71058,"base.s11n.tagfile.write.compendium");
  FUN_001001d0(uVar3,&DAT_04c71058,&__DT_FINI_ARRAY);
  puVar2 = PTR_DAT_04bd5f10;
  puVar1 = PTR_DAT_04bd5c88;
  *(undefined8 *)(PTR_DAT_04bd5f10 + 0x28) = 0;
  *(char **)(puVar2 + 8) = "Common::WriteFormatBinaryTagfile";
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined2 *)(puVar2 + 0x30) = 0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined1 **)(puVar2 + 0x20) = &LAB_0049a640;
  FUN_0049f950();
  return;
}

