
undefined4 FUN_03d1b9e0(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(char *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x400) + 0x10) + 0x3d) == '\0') {
    uVar1 = FUN_03d4e610(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x400),param_1,
                         *(undefined8 *)(param_1 + 0xd8),*(undefined2 *)(param_1 + 0x112),0xffffffff
                        );
    uVar2 = 1;
    if ((uVar1 & 1) != 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}

