
void FUN_0254a360(byte *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  if ((((*param_1 < 8) && (uVar2 = FUN_02582d8c(param_1,1), puVar1 = PTR_DAT_04bb4fb8, uVar2 < 8))
      && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
     (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0' &&
       (uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8)) &&
      (*(char *)(*(long *)puVar1 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')))) {
    *(undefined4 *)(*(long *)puVar1 + (ulong)uVar2 * 0x13f0 + 0x4dc) = *param_2;
  }
  return;
}

