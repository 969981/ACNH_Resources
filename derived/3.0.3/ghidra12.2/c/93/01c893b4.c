
undefined8 FUN_01c893b4(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_30 [4];
  
  puVar1 = PTR_DAT_04bcb8b8;
  if (*(long *)PTR_DAT_04bcb8b8 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_00223668(local_30,*(undefined8 *)PTR_DAT_04bcb8c0);
    if ((local_30[0] == 0) && (iVar2 = FUN_0029b330(*(undefined8 *)puVar1), iVar2 == 3)) {
      uVar3 = FUN_0029becc(*(undefined8 *)puVar1);
    }
    else {
      uVar3 = *(undefined4 *)
               (*(long *)puVar1 + (ulong)*(byte *)(*(long *)puVar1 + 0x162) * 4 + 0x180);
    }
  }
  if ((param_2 & 1) != 0) {
    nn::oe::SetFocusHandlingMode(1);
    FUN_0338b3f0(*(long *)PTR_DAT_04bb2230 + 0x3a8);
    puVar1 = PTR_DAT_04bb27d0;
    *(undefined1 *)(*(long *)PTR_DAT_04bb4910 + 0x88) = 1;
    if (**(long **)puVar1 != 0) {
      *(undefined4 *)(**(long **)puVar1 + 0x548) = uVar3;
    }
  }
  return 1;
}

