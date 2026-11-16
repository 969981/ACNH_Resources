
void FUN_0293744c(long *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  long *plVar11;
  long lVar12;
  
  lVar6 = (long)(int)param_2;
  if (*(uint *)(param_1 + 1) <= param_2 || param_1[2] == 0) {
    lVar6 = 0;
  }
  bVar4 = *(byte *)(param_1[2] + lVar6 * 0x18 + 10);
  if (7 < bVar4) goto LAB_029375c4;
  lVar6 = *DAT_0537d558;
  bVar5 = *(byte *)(lVar6 + 0x473);
  uVar9 = (ulong)(char)bVar5;
  if (uVar9 != 0xffffffffffffffff) {
    pbVar7 = (byte *)(lVar6 + 0x48) + (uVar9 & 0xffffffff) * 0x80;
    if (7 < bVar5) {
      pbVar7 = (byte *)(lVar6 + 0x48);
    }
    if ((*pbVar7 >> 3 & 1) != 0) {
      lVar8 = DAT_0537d558[2] + 0x108 + (uVar9 & 0xffffffff) * 0xc;
      if (0xb < bVar5) {
        lVar8 = DAT_0537d558[2] + 0x108;
      }
      if (*(char *)(lVar8 + 10) == '\0') goto LAB_029375c4;
    }
  }
  if (DAT_04cd19d8 == 0) {
    bVar10 = DAT_0548e140;
    if (7 < DAT_0548e140) goto LAB_02937558;
LAB_029375a4:
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar10 = *pbVar7;
    if ((*pbVar7 < 8) ||
       (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (bVar10 = *(byte *)(DAT_054f5738 + 0x11a5), bVar10 < 8)))) goto LAB_029375a4;
LAB_02937558:
    pbVar7 = PTR_DAT_04bb5038;
    if (bVar5 != 0xff) {
      puVar2 = (uint *)(lVar6 + 0x48) + (uVar9 & 0xffffffff) * 0x20;
      if (7 < bVar5) {
        puVar2 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar7 = (byte *)(lVar6 + 0x471);
      }
    }
    bVar10 = *pbVar7;
    if (7 < bVar10) {
      bVar10 = *PTR_DAT_04bb5038;
      goto LAB_029375a4;
    }
  }
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  if (bVar4 != bVar10) {
    return;
  }
LAB_029375c4:
  uVar9 = (**(code **)(*param_1 + 0x58))(param_1);
  if ((uVar9 & 1) != 0) {
    lVar6 = param_1[4];
    uVar1 = param_2;
    if (*(uint *)(param_1 + 3) <= param_2) {
      uVar1 = 0;
    }
    if (*(uint *)(param_1 + 1) <= param_2) {
      param_2 = 0;
    }
    lVar8 = lVar6 + (long)(int)uVar1 * 0x30;
    plVar11 = (long *)(param_1[2] + (long)(int)param_2 * 0x18);
    if ((*(long *)(lVar8 + 8) != *plVar11 || *(long *)(lVar8 + 0x10) != plVar11[1]) ||
        *(long *)(lVar8 + 0x18) != plVar11[2]) {
      lVar3 = *plVar11;
      lVar12 = plVar11[2];
      *(long *)(lVar8 + 0x10) = plVar11[1];
      *(long *)(lVar8 + 0x18) = lVar12;
      *(long *)(lVar8 + 8) = lVar3;
      *(undefined1 *)(lVar6 + (long)(int)uVar1 * 0x30 + 0x20) = 1;
    }
  }
  return;
}

