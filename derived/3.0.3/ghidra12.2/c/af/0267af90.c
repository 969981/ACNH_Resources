
void FUN_0267af90(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  byte local_24 [4];
  
  if ((*param_1 < 8) &&
     ((((uVar1 = FUN_02582d8c(param_1,1), uVar1 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar1 = FUN_02582d8c(param_1,1), uVar1 < 8)) &&
       ((lVar2 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d0) == 1)))))))))) {
    local_24[0] = *param_1;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    lVar2 = FUN_02583354(DAT_055021a0,local_24,1);
    if (lVar2 != 0) {
      FUN_0267b0b0(lVar2,param_2);
    }
  }
  return;
}

