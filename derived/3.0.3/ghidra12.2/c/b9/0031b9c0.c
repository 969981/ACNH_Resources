
void _INIT_28(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_DAT_04bcecf8;
  FUN_00319f98(PTR_DAT_04bcecf8);
  FUN_001001d0(PTR_LAB_04bced88,puVar2,&__DT_FINI_ARRAY);
  puVar3 = PTR_DAT_04bcecf0;
  FUN_00186460(PTR_DAT_04bcecf0,0x20000000,1);
  puVar2 = PTR_FUN_04bcbca0;
  FUN_001001d0(PTR_FUN_04bcbca0,puVar3,&__DT_FINI_ARRAY);
  FUN_00186460(&DAT_04c61710,0x20000000,1);
  FUN_001001d0(puVar2,&DAT_04c61710,&__DT_FINI_ARRAY);
  puVar2 = PTR_DAT_04bced70;
  FUN_0019d6cc(PTR_DAT_04bced70);
  *(undefined **)puVar2 = PTR_DAT_04bced68 + 0x10;
  FUN_001f6fd8(puVar2 + 0x18,1);
  lVar1 = DAT_04bced90 + 0x10;
  *(long *)(puVar2 + 0x18) = lVar1;
  FUN_001f6fd8(puVar2 + 0x38,1);
  *(long *)(puVar2 + 0x38) = lVar1;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(puVar2 + 0x48);
  puVar2[0x30] = puVar2[0x50];
  FUN_0019d550(PTR_DAT_04bcc280,puVar2);
  if (1 < *(ulong *)PTR_DAT_04bcc1b8) {
    (**(code **)(*(long *)puVar2 + 0x10))(puVar2);
  }
  FUN_001001d0(PTR_LAB_04bced60,PTR_DAT_04bced70,&__DT_FINI_ARRAY);
  return;
}

