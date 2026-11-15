
void FUN_01e1bd70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *local_50;
  char *pcStack_48;
  
  lVar1 = param_1 + 8;
  FUN_03ebac90(lVar1,3,0,param_2,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cNone";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,0,&local_50);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  puVar4[2] = &LAB_01e1bf40;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ce80;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01e1bf44;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cSearch";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,1,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(1 < *(uint *)(param_1 + 0x30)) * 0x40)
  ;
  puVar4[2] = &LAB_01e1bf48;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ce80;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01e1bfd0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cKeep";
  local_50 = puVar2;
  FUN_03ebaf40(lVar1,2,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(2 < *(uint *)(param_1 + 0x30)) * 0x80)
  ;
  puVar4[2] = &LAB_01e1c9f8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5ce80;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_01e1ca10;
  puVar4[5] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  uVar3 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x30) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)(int)uVar3 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = &PTR_LAB_04a5cea8;
  puVar5 = *(undefined1 **)(*(long *)PTR_DAT_04bb48f8 + 0x10);
  *puVar5 = 1;
  *(undefined8 **)(puVar5 + 8) = (undefined8 *)(param_1 + 0xa0);
  *(undefined4 *)(puVar5 + 0x10) = 0;
  return;
}

