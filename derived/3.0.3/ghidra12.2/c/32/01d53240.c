
void FUN_01d53240(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_01d532ac:
    if (*pbVar8 < 8) goto LAB_01d53318;
LAB_01d532b8:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01d53310:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_01d53318;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    uVar7 = (uint)*pbVar8;
    if (7 < *pbVar8) goto LAB_01d53310;
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar5 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01d532ac;
      }
      goto LAB_01d532b8;
    }
LAB_01d53318:
    uVar7 = (uint)*pbVar8;
    if (7 < uVar7) {
      uVar7 = 0xff;
    }
  }
  if (*(int *)(lVar5 + 0x15c) == 0) {
    if (7 < uVar7) {
      uVar7 = 0xff;
    }
    if ((*(byte *)(*(long *)PTR_DAT_04bb38d0 + 0x88) >> (ulong)(uVar7 & 0x1f) & 1) == 0)
    goto LAB_01d53384;
  }
  else {
    bVar3 = *(byte *)(*(long *)PTR_DAT_04bb38d0 + 0x88);
    uVar7 = (uint)bVar3 - (bVar3 >> 1 & 0x55555555);
    uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
    uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
    uVar7 = uVar7 + (uVar7 >> 8);
    if ((uVar7 + (uVar7 >> 0x10) & 0x3f) == 0) {
LAB_01d53384:
      uVar6 = *param_2;
      *(undefined8 *)(param_1 + 0xa30) = uVar6;
      iVar2 = *(int *)(param_2 + 1);
      *(int *)(param_1 + 0xa38) = iVar2;
      *(undefined8 *)(param_1 + 0xa48) = param_2[3];
      *(undefined1 *)(param_1 + 0xa5c) = *(undefined1 *)((long)param_2 + 0x2c);
      *(undefined4 *)(param_1 + 0xa54) = *(undefined4 *)((long)param_2 + 0x24);
      *(undefined1 *)(param_1 + 0xa50) = *(undefined1 *)(param_2 + 4);
      puVar4 = PTR_DAT_04bb4860;
      *(undefined4 *)(param_1 + 0xa58) = *(undefined4 *)(param_2 + 5);
      lVar5 = *(long *)puVar4;
      if (((*(char *)(lVar5 + 0x34) == '\0') || (iVar2 <= *(int *)(lVar5 + 0x10))) &&
         ((*(char *)(lVar5 + 100) == '\0' || (iVar2 < *(int *)(lVar5 + 0x40))))) {
        *(undefined8 *)(lVar5 + 0x38) = uVar6;
        *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(param_1 + 0xa38);
        *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(param_1 + 0xa48);
        *(undefined1 *)(lVar5 + 100) = *(undefined1 *)(param_1 + 0xa5c);
        *(undefined4 *)(lVar5 + 0x5c) = *(undefined4 *)(param_1 + 0xa54);
        *(undefined1 *)(lVar5 + 0x58) = *(undefined1 *)(param_1 + 0xa50);
        *(undefined4 *)(lVar5 + 0x60) = *(undefined4 *)(param_1 + 0xa58);
      }
      return;
    }
  }
  FUN_01d535c0();
  return;
}

