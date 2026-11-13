
void FUN_0126edd0(uint *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined **local_58;
  char *pcStack_50;
  char local_34 [4];
  
  if (((*param_1 & 1) != 0) &&
     ((uVar2 = *(uint *)(*(long *)(param_1 + 0x2a) + 8), ((*param_1 ^ 0xffffffff) & 5) != 0 ||
      ((uVar2 >> 1 & 1) == 0)))) {
    if ((uVar2 & 1) != 0) {
      FUN_01311890();
      uVar2 = *(uint *)(*(long *)(param_1 + 0x2a) + 8);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      uVar2 = *param_1;
      if ((uVar2 >> 1 & 1) == 0) {
        FUN_0125dd30(*(long *)PTR_DAT_04bb27a8 + 0x1518,
                     *(undefined8 *)(*(long *)(param_1 + 0x26) + 0xb8),0xdb5d97b8);
        uVar2 = *param_1 | 2;
        *param_1 = uVar2;
      }
      puVar1 = PTR_DAT_04bb3238;
      if ((uVar2 >> 2 & 1) == 0) {
        local_34[0] = '\x01';
        pcStack_50 = local_34;
        local_58 = &PTR_FUN_04989780;
        uVar2 = 0;
        lVar4 = *(long *)PTR_DAT_04bb27a8;
        iVar3 = *(int *)PTR_DAT_04bb3238;
        do {
          if (*(int *)(lVar4 + 0x1520 + ((long)((ulong)uVar2 << 0x20) >> 0x1e)) != iVar3) {
            (*(code *)*local_58)(&local_58);
            iVar3 = *(int *)puVar1;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != 0x48);
        if (local_34[0] != '\0') {
          *param_1 = *param_1 | 4;
        }
      }
    }
  }
  return;
}

