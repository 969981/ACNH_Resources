
void FUN_0267f3a0(byte *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  if ((*param_1 < 8) && (uVar2 = FUN_02582d8c(param_1,1), puVar1 = PTR_DAT_04bb4fb8, uVar2 < 8)) {
    if ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0') &&
       (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0' &&
         (uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8)) &&
        (*(char *)(*(long *)puVar1 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')))) {
      lVar3 = *(long *)puVar1 + (ulong)uVar2 * 0x13f0;
      FUN_028036dc(lVar3 + 0xff8);
      FUN_028036dc(lVar3 + 0x109c);
      return;
    }
  }
  return;
}

