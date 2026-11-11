
void _INIT_358(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_004440c0(&DAT_04c71838,"base.s11n.tagfile.oldRead");
  FUN_001001d0(DAT_04bd61c8,&DAT_04c71838,&__DT_FINI_ARRAY);
  puVar3 = PTR_DAT_04bd5cc0;
  puVar1 = PTR_DAT_04bd5c68;
  *(char **)(PTR_DAT_04bd5cc0 + 8) = "Common::ReadFormatBinaryTagfile2014";
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar2 = PTR_LAB_04bd5cb8;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined **)(puVar3 + 0x18) = puVar1 + 0x10;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  *(undefined2 *)(puVar3 + 0x30) = 0;
  FUN_0049f950();
  return;
}

