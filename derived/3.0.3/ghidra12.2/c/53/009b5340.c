
void FUN_009b5340(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint local_18 [2];
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  lVar2 = *(long *)PTR_DAT_04bc95e0;
  if (*(long *)(lVar2 + 0x178) != lVar2 + 0x170) {
    lVar3 = (long)*(int *)(lVar2 + 0x184);
    lVar4 = *(long *)(lVar2 + 0x178) - lVar3;
    do {
      if (*(int *)(lVar4 + 0x18) == 0xd) break;
      lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
    } while (lVar4 != (lVar2 + 0x170) - lVar3);
  }
  if ((*(int *)(param_1 + 0xf5b7c) == 2) &&
     (uVar1 = (*(ushort *)(param_1 + 0xf5b50) & 0x1f) - (*(ushort *)(param_1 + 0xf5b50) >> 1 & 5),
     uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333),
     uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f, uVar1 = uVar1 + (uVar1 >> 8),
     (uVar1 + (uVar1 >> 0x10) & 0x3f) == 2)) {
    local_18[0] = 0;
    param_1 = nn::hid::GetNpadJoyAssignment(local_18);
    if ((int)param_1 == 1) {
      local_18[1] = 1;
      param_1 = nn::hid::GetNpadJoyAssignment(local_18 + 1);
      if ((int)param_1 == 1) {
        param_1 = FUN_009b31e0(param_1,1);
      }
    }
  }
  FUN_009b5440(param_1,0);
  return;
}

