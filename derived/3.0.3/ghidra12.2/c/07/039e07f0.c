
void FUN_039e07f0(long param_1)

{
  ushort *puVar1;
  byte bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  
  puVar1 = (ushort *)(param_1 + 0x2a70);
  uVar4 = *puVar1;
  uVar6 = uVar4 >> 3 & 1;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    iVar5 = 0;
    do {
      bVar2 = *(byte *)(*(long *)(param_1 + 0x1d8) + (long)iVar5 * 0x910 + 0x308);
      if ((bVar2 >> 2 & 1) != 0) {
        bVar3 = false;
        uVar6 = 1;
        goto joined_r0x039e0864;
      }
      if ((bVar2 >> 3 & 1) != 0) {
        bVar3 = true;
        goto joined_r0x039e0864;
      }
      iVar5 = iVar5 + 1;
    } while (*(int *)(param_1 + 0x1d0) != iVar5);
  }
  bVar3 = false;
joined_r0x039e0864:
  if ((uVar4 >> 5 & 1) == 0) {
    if (uVar6 != 0) goto LAB_039e0878;
LAB_039e08ac:
    if (!bVar3) goto LAB_039e08bc;
  }
  else {
    FUN_039e08e0(param_1,*(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 8));
    uVar4 = *puVar1 & 0xffdf;
    *puVar1 = uVar4;
    if (uVar6 == 0) goto LAB_039e08ac;
LAB_039e0878:
    FUN_039e0c70(param_1);
  }
  FUN_039e1200(param_1);
  uVar4 = *puVar1;
LAB_039e08bc:
  *puVar1 = uVar4 & 0xfff7;
  return;
}

