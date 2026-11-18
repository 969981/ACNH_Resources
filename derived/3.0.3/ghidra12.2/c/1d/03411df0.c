
uint FUN_03411df0(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x328) != '\0') {
    return 1;
  }
  lVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x310) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(lVar4 + 8);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(lVar4 + 0x10);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(lVar4 + 0x18);
  lVar4 = DAT_057514a0;
  bVar1 = *(int *)(DAT_057514a0 + 0x10) != 2;
  if ((int)param_2[1] == 0) {
    if (bVar1) {
      uVar3 = 1;
      iVar5 = *(int *)(DAT_057514a0 + 8);
      if (0 < iVar5) goto LAB_03411ed4;
      if ((*(uint *)(*(long *)(DAT_05231900 + 0x148) + 0xf8) >> 1 & 1) == 0) {
        uVar2 = FUN_01585be0();
        goto joined_r0x03411f34;
      }
    }
  }
  else if (bVar1) {
    uVar3 = 1;
    iVar5 = *(int *)(DAT_057514a0 + 8);
    if (iVar5 < 1) {
      if ((*(uint *)(*(long *)(DAT_05231900 + 0x148) + 0xf8) >> 1 & 1) != 0) goto LAB_03411eb8;
      uVar2 = FUN_01585c50();
joined_r0x03411f34:
      if ((uVar2 & 1) == 0) {
        uVar3 = 0xffffffff;
        goto LAB_03411edc;
      }
      if (*(int *)(lVar4 + 0x10) == 0) {
        *(undefined4 *)(lVar4 + 0x10) = 1;
      }
      iVar5 = *(int *)(lVar4 + 8);
      uVar3 = 0;
    }
LAB_03411ed4:
    *(int *)(lVar4 + 8) = iVar5 + 1;
    goto LAB_03411edc;
  }
LAB_03411eb8:
  uVar3 = 0xfffffffd;
LAB_03411edc:
  if (-1 < (int)uVar3) {
    *(undefined1 *)(param_1 + 0x328) = 1;
  }
  return ~uVar3 >> 0x1f;
}

