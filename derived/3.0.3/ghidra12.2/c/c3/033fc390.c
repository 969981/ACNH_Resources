
bool FUN_033fc390(byte *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint local_24;
  
  if (7 < *param_1) {
    return false;
  }
  uVar1 = FUN_02582d8c(param_1,1);
  if ((uVar1 < 8) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')
     ) {
    uVar1 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d8);
    uVar5 = (ulong)uVar1;
    if (-1 < (int)uVar1) {
      lVar4 = (long)*(int *)(DAT_05ae7798 + 0x184);
      lVar3 = *(long *)(DAT_05ae7798 + 0x178) - lVar4;
      if (*(int *)(lVar3 + 0x18) != 0xd) {
        do {
          lVar3 = *(long *)(lVar3 + lVar4 + 8) - lVar4;
        } while (*(int *)(lVar3 + 0x18) != 0xd);
      }
      if (*(int *)(lVar3 + 0x2c) == 1) {
        lVar3 = *(long *)PTR_DAT_04bb3960;
        local_24 = uVar1;
        iVar2 = nn::hid::GetNpadJoyAssignment(&local_24);
        if (iVar2 == 1) {
          if (3 < uVar1) {
            uVar5 = 0;
          }
          return *(int *)(lVar3 + uVar5 * 4 + 0xf5b40) - 3U < 2;
        }
      }
    }
  }
  return false;
}

