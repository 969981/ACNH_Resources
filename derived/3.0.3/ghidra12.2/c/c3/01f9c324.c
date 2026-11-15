
void FUN_01f9c324(long param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 0xaf90) = 0;
  *(undefined1 *)(param_1 + 0xaf98) = 0;
  *(undefined1 *)(param_1 + 0xaf9c) = 0;
  *(undefined4 *)(param_1 + 0xafa4) = 0;
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined2 *)(param_1 + 0xafa8) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)(param_1 + 0xafaa) = puVar1[2];
  *(undefined *)(param_1 + 0xafab) = puVar1[3];
  *(undefined4 *)(param_1 + 0xafac) = *(undefined4 *)(puVar1 + 4);
  if ((*(uint *)(param_1 + 0xafb0) >> 0xd & 1) != 0) {
    *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) & 0xffffdfff;
  }
  return;
}

