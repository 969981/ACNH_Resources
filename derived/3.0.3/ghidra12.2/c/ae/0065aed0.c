
void _INIT_902(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04bda6f0;
  puVar2 = PTR_DAT_04bda6c0;
  uVar5 = *(undefined8 *)PTR_DAT_04bda6c0;
  *(undefined **)PTR_DAT_04bda6f0 = PTR_DAT_04bda6b0 + 0x10;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined **)puVar2 = puVar1;
  puVar3 = PTR_LAB_04bda6c8;
  FUN_001001d0(PTR_LAB_04bda6c8,puVar1,&__DT_FINI_ARRAY);
  puVar4 = PTR_DAT_04bda6e8;
  uVar5 = *(undefined8 *)puVar2;
  puVar1 = PTR_DAT_04bda698 + 0x10;
  *(undefined **)puVar2 = PTR_DAT_04bda6e8;
  *(undefined **)puVar4 = puVar1;
  *(undefined8 *)(puVar4 + 8) = uVar5;
  FUN_001001d0(puVar3,puVar4,&__DT_FINI_ARRAY);
  puVar4 = PTR_DAT_04bda6e0;
  uVar5 = *(undefined8 *)puVar2;
  puVar1 = PTR_DAT_04bda6d0 + 0x10;
  *(undefined **)puVar2 = PTR_DAT_04bda6e0;
  *(undefined **)puVar4 = puVar1;
  *(undefined8 *)(puVar4 + 8) = uVar5;
  FUN_001001d0(puVar3,puVar4,&__DT_FINI_ARRAY);
  puVar4 = PTR_DAT_04bda6d8;
  uVar5 = *(undefined8 *)puVar2;
  puVar1 = PTR_DAT_04bda6b8 + 0x10;
  *(undefined **)puVar2 = PTR_DAT_04bda6d8;
  *(undefined **)puVar4 = puVar1;
  *(undefined8 *)(puVar4 + 8) = uVar5;
  FUN_001001d0(puVar3,puVar4,&__DT_FINI_ARRAY);
  return;
}

