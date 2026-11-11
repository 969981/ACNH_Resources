
void _INIT_365(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_004440c0(&DAT_04c71d30,"base.ver.compatPatcher");
  FUN_001001d0(DAT_04bd61c8,&DAT_04c71d30,&__DT_FINI_ARRAY);
  puVar2 = PTR_DAT_04bd9c10;
  puVar1 = PTR_DAT_04bd6088;
  *(undefined8 *)(PTR_DAT_04bd9c10 + 0x28) = 0;
  *(char **)(puVar2 + 8) = "Compat::Patcher";
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined2 *)(puVar2 + 0x30) = 0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined1 **)(puVar2 + 0x20) = &LAB_004dcb50;
  FUN_0049f950();
  return;
}

