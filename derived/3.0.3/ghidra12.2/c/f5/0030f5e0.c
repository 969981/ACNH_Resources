
void _INIT_26(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04bceb60;
  FUN_0019d6cc(PTR_DAT_04bceb60);
  *(undefined **)puVar2 = PTR_DAT_04bceb58 + 0x10;
  FUN_001f6fd8(puVar2 + 0x18,1);
  puVar1 = PTR_DAT_04bceb80 + 0x10;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  FUN_001f6fd8(puVar2 + 0x38,1);
  *(undefined **)(puVar2 + 0x38) = puVar1;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(puVar2 + 0x48);
  puVar2[0x30] = puVar2[0x50];
  FUN_0019d550(PTR_DAT_04bcc280,puVar2);
  if (1 < *(ulong *)PTR_DAT_04bcc1b8) {
    (**(code **)(*(long *)puVar2 + 0x10))(puVar2);
  }
  FUN_001001d0(PTR_LAB_04bceb50,PTR_DAT_04bceb60,&__DT_FINI_ARRAY);
  return;
}

