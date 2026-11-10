
undefined8 FUN_002e9140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  int local_30 [4];
  
  puVar1 = PTR_DAT_04bcb8d8;
  uVar2 = FUN_002bfd00(*(undefined8 *)PTR_DAT_04bcb8d8);
  if ((uVar2 & 1) == 0) {
    return 5;
  }
  FUN_002bfd1c(local_30,*(undefined8 *)puVar1);
  if (local_30[0] == 0) {
    FUN_002c0fb4(*(undefined8 *)puVar1,
                 *(undefined4 *)
                  (*(long *)PTR_DAT_04bcb8b8 +
                   (ulong)*(byte *)(*(long *)PTR_DAT_04bcb8b8 + 0x162) * 4 + 0x180));
    FUN_00229780(param_2,local_30);
    return 0;
  }
  FUN_00229780(param_2,local_30);
  FUN_002c0d80(*(undefined8 *)puVar1);
  FUN_002bfb10(*(undefined8 *)puVar1);
  return 1;
}

