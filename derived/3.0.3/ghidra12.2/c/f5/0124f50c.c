
int FUN_0124f50c(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined *local_30;
  char *pcStack_28;
  
  lVar1 = param_1 + 8;
  iVar2 = FUN_0277d6c4(lVar1);
  if ((((iVar2 == 0xeb7e) || (iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xeb7c)) ||
      (iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xeb7d)) ||
     ((iVar2 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10)), iVar2 == 0x2b ||
      (iVar2 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10)), 8 < iVar2 - 0x23U)))) {
    iVar2 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xc) >> 8 & 0x1f;
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "RegulationType1";
    uVar4 = FUN_0273f0a0(&local_30);
    if (((uVar4 & 1) != 0) && (uVar3 = FUN_0122b928(), 0x1e < uVar3)) {
      uVar5 = uVar5 + 1;
    }
    iVar2 = 5;
    if (3 < uVar5) {
      iVar2 = uVar5 * 5 + -10;
    }
    uVar5 = *(uint *)(param_1 + 0xc);
    uVar5 = (uVar5 >> 0xe & 1) + (uVar5 >> 0xd & 1) + (uVar5 >> 0xf & 1) + (uVar5 >> 0x10 & 1) +
            (uVar5 >> 0x11 & 1) + (uVar5 >> 0x12 & 1) + (uVar5 >> 0x13 & 1) +
            (uVar5 >> 0x14 & 1) + (uVar5 >> 0x15 & 1) + (uVar5 >> 0x16 & 1);
    if (uVar5 < 5) {
      if (uVar5 == 1) {
        iVar2 = iVar2 + 0x14;
      }
      else {
        iVar2 = iVar2 + uVar5 * 0xf;
      }
    }
    else {
      iVar2 = iVar2 + 0x4b;
    }
  }
  return iVar2;
}

