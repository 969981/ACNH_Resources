
undefined8 * FUN_00217bec(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  puVar3 = (undefined8 *)FUN_00185a6c(0x48);
  FUN_001f98c8();
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined1 *)(puVar3 + 3) = 0;
  plVar4 = puVar3 + 2;
  *plVar4 = (long)puVar1;
  *(undefined1 *)((long)puVar3 + 9) = 0;
  puVar3[5] = puVar3 + 3;
  puVar3[6] = 0x10;
  *puVar3 = &PTR_LAB_0483fe68;
  FUN_0018a58c(plVar4,&DAT_0407ebb1);
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 7) = 4;
  *(undefined1 *)((long)puVar3 + 0x3c) = 2;
  FUN_001fe0b0(puVar3,param_1);
  *(undefined1 *)((long)puVar3 + 9) = *(undefined1 *)(param_1 + 9);
  FUN_00189504(plVar4,param_1 + 0x10);
  *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  *(undefined1 *)((long)puVar3 + 0x3c) = *(undefined1 *)(param_1 + 0x3c);
  *(undefined4 *)(puVar3 + 8) = uVar2;
  return puVar3;
}

