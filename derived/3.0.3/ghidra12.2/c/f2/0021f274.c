
bool FUN_0021f274(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04bccf50;
  if ((char)DAT_04c5f0b8 != '\0') {
    return (char)DAT_04c5f0b8 == '\0';
  }
  *(undefined8 *)PTR_DAT_04bccf50 = param_1;
  *(ulong *)(puVar1 + 8) = param_2 & 0xffffffff;
  FUN_0028a094(puVar1);
  if ((int)DAT_04c60868 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *DAT_04c60870;
  }
  FUN_00290a8c(uVar2);
  thunk_FUN_00290b48(*(undefined8 *)PTR_DAT_04bccf58,uVar2);
  *(undefined4 *)PTR_DAT_04bccf60 = 0x19;
  DAT_04c5f0b8._0_1_ = 1;
  return true;
}

