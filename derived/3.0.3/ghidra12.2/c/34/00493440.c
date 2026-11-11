
void _INIT_339(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_004440c0(&DAT_04c70f28,"base.s11n.tagfile.read");
  FUN_001001d0(DAT_04bd61c8,&DAT_04c70f28,&__DT_FINI_ARRAY);
  FUN_0043dcf0(&DAT_04c70f08);
  uVar1 = DAT_04bd4f58;
  DAT_04c70f08 = PTR_DAT_04bd5ef0 + 0x10;
  FUN_001001d0(DAT_04bd4f58,&DAT_04c70f08,&__DT_FINI_ARRAY);
  FUN_0043dcf0(&DAT_04c70f18);
  DAT_04c70f18 = PTR_DAT_04bd5ee8 + 0x10;
  FUN_001001d0(uVar1,&DAT_04c70f18,&__DT_FINI_ARRAY);
  puVar3 = PTR_DAT_04bd5d80;
  puVar2 = PTR_DAT_04bd5c40;
  *(char **)(PTR_DAT_04bd5d80 + 8) = "Common::ReadFormatBinaryTagfile";
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined **)(puVar3 + 0x18) = puVar2 + 0x10;
  *(undefined1 **)(puVar3 + 0x20) = &LAB_00490190;
  *(undefined2 *)(puVar3 + 0x30) = 0;
  FUN_0049f950();
  return;
}

