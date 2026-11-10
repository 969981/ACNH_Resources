
void _INIT_5(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_DAT_04bcc8d8;
  FUN_0019d6cc(PTR_DAT_04bcc8d8);
  puVar2[0x44] = 0;
  puVar1 = PTR_DAT_04bcc8d0;
  *(undefined4 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x28) = 0;
  puVar3 = PTR_DAT_04bcc948;
  *(undefined **)puVar2 = puVar1 + 0x10;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  puVar2[0x50] = 1;
  puVar2[0x30] = 1;
  *(undefined **)(puVar2 + 0x38) = puVar3 + 0x10;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined **)(puVar2 + 0x18) = puVar3 + 0x10;
  FUN_0019d550(PTR_DAT_04bcc280,puVar2);
  puVar1 = PTR_DAT_04bcc1b8;
  if (1 < *(ulong *)PTR_DAT_04bcc1b8) {
    (**(code **)(*(long *)puVar2 + 0x10))(puVar2);
  }
  FUN_001001d0(PTR_FUN_04bcc8c8,PTR_DAT_04bcc8d8,&__DT_FINI_ARRAY);
  puVar3 = PTR_DAT_04bcc900;
  FUN_0019d6cc(PTR_DAT_04bcc900);
  puVar3[0x50] = 1;
  puVar2 = PTR_DAT_04bcc8f8;
  puVar3[0x30] = 1;
  puVar4 = PTR_DAT_04bcc950;
  puVar3[0x44] = 0;
  *(undefined4 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0;
  *(undefined **)puVar3 = puVar2 + 0x10;
  *(undefined **)(puVar3 + 0x38) = puVar4 + 0x10;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined **)(puVar3 + 0x18) = puVar4 + 0x10;
  *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(puVar3 + 0x40);
  *(undefined8 *)(puVar3 + 0x28) = 0;
  FUN_0019d550(PTR_DAT_04bcc280,puVar3);
  if (1 < *(ulong *)puVar1) {
    (**(code **)(*(long *)puVar3 + 0x10))(puVar3);
  }
  FUN_001001d0(PTR_LAB_04bcc8f0,PTR_DAT_04bcc900,&__DT_FINI_ARRAY);
  puVar2 = PTR_DAT_04bcc8e0;
  FUN_0019d6cc(PTR_DAT_04bcc8e0);
  puVar3 = PTR_DAT_04bcc910;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined **)puVar2 = puVar3 + 0x10;
  FUN_0019d550(PTR_DAT_04bcc280,puVar2);
  if (1 < *(ulong *)puVar1) {
    (**(code **)(*(long *)puVar2 + 0x10))(puVar2);
  }
  FUN_001001d0(PTR_LAB_04bcc908,PTR_DAT_04bcc8e0,&__DT_FINI_ARRAY);
  puVar2 = PTR_DAT_04bcc930;
  FUN_0019d6cc(PTR_DAT_04bcc930);
  *(undefined **)puVar2 = PTR_DAT_04bcc920 + 0x10;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0x6400000064;
  FUN_0019d550(PTR_DAT_04bcc280,puVar2);
  if (1 < *(ulong *)puVar1) {
    (**(code **)(*(long *)puVar2 + 0x10))(puVar2);
  }
  FUN_001001d0(PTR_LAB_04bcc918,PTR_DAT_04bcc930,&__DT_FINI_ARRAY);
  puVar2 = PTR_DAT_04bcc8e8;
  FUN_0019d6cc(PTR_DAT_04bcc8e8);
  puVar3 = PTR_DAT_04bcc940;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined **)puVar2 = puVar3 + 0x10;
  FUN_0019d550(PTR_DAT_04bcc280,puVar2);
  if (1 < *(ulong *)puVar1) {
    (**(code **)(*(long *)puVar2 + 0x10))(puVar2);
  }
  FUN_001001d0(PTR_LAB_04bcc938,PTR_DAT_04bcc8e8,&__DT_FINI_ARRAY);
  return;
}

