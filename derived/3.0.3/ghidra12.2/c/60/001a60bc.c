
void FUN_001a60bc(undefined8 *param_1)

{
  undefined2 uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  
  FUN_0019d6e8(param_1,0xb);
  *param_1 = &PTR_FUN_0483a480;
  *(undefined2 *)((long)param_1 + 0x19) = 0x100;
  if (DAT_04c58c68 != '\0') {
    puVar2 = (uint *)FUN_03876070(DAT_04c58c60);
    if (*puVar2 != 0) {
      puVar3 = (undefined2 *)(DAT_04c5e500 + (ulong)*puVar2 * 2);
      goto LAB_001a6124;
    }
  }
  puVar3 = &DAT_04c5e508;
LAB_001a6124:
  uVar1 = *puVar3;
  *(undefined2 *)((long)param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined2 *)((long)param_1 + 0x1c) = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

