
void _INIT_36(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00186538(&DAT_04c69e20,9999,0xc,0x1f,0x17,0x3b,0x3b);
  puVar1 = PTR_FUN_04bc0ee8;
  FUN_001001d0(PTR_FUN_04bc0ee8,&DAT_04c69e20,&__DT_FINI_ARRAY);
  *(undefined **)PTR_DAT_04bc0ff0 = &DAT_04c69e20;
  FUN_00186538(&DAT_04c69e28,9999,0xc,0x1f,0,0,0);
  FUN_001001d0(puVar1,&DAT_04c69e28,&__DT_FINI_ARRAY);
  *(undefined **)PTR_DAT_04bd2938 = &DAT_04c69e28;
  puVar2 = PTR_DAT_04bd2900;
  FUN_0019d6cc(PTR_DAT_04bd2900);
  *(undefined **)puVar2 = PTR_DAT_04bd28f8 + 0x10;
  FUN_001f6fd8(puVar2 + 0x18,1);
  puVar1 = PTR_DAT_04bd2930 + 0x10;
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
  FUN_001001d0(PTR_FUN_04bd28f0,PTR_DAT_04bd2900,&__DT_FINI_ARRAY);
  return;
}

