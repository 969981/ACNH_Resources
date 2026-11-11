
void _INIT_331(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_004440c0(&DAT_04c70c18,"base.ver.patcher");
  FUN_001001d0(DAT_04bd61c8,&DAT_04c70c18,&__DT_FINI_ARRAY);
  puVar2 = PTR_DAT_04bd6080;
  puVar1 = PTR_DAT_04bd5ba0;
  *(undefined8 *)(PTR_DAT_04bd5ba0 + 0x28) = 0;
  *(char **)(puVar1 + 8) = "Common::Patcher";
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined2 *)(puVar1 + 0x30) = 0;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  *(undefined1 **)(puVar1 + 0x20) = &LAB_004862b0;
  FUN_0049f950();
  return;
}

