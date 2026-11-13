
void FUN_00d09120(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint local_24;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  lVar1 = DAT_05abbc58;
  if (DAT_05abbc58 != 0) {
    local_24 = 0;
    FUN_00d08c44(&local_24,param_1 + 0xd8);
    if (((local_24 | 2) != 2) || (uVar2 = FUN_037315f0(lVar1), (uVar2 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
  }
  return;
}

