
void FUN_013d8724(long *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  
  lVar7 = (long)(int)param_2;
  if (*(uint *)(param_1 + 1) <= param_2 || param_1[2] == 0) {
    lVar7 = 0;
  }
  bVar5 = *(byte *)(param_1[2] + lVar7 * 0x10 + 0xc);
  if (7 < bVar5) goto LAB_013d8898;
  lVar7 = *DAT_0537d558;
  bVar6 = *(byte *)(lVar7 + 0x473);
  uVar10 = (ulong)(char)bVar6;
  if (uVar10 != 0xffffffffffffffff) {
    pbVar8 = (byte *)(lVar7 + 0x48) + (uVar10 & 0xffffffff) * 0x80;
    if (7 < bVar6) {
      pbVar8 = (byte *)(lVar7 + 0x48);
    }
    if ((*pbVar8 >> 3 & 1) != 0) {
      lVar9 = DAT_0537d558[2] + 0x108 + (uVar10 & 0xffffffff) * 0xc;
      if (0xb < bVar6) {
        lVar9 = DAT_0537d558[2] + 0x108;
      }
      if (*(char *)(lVar9 + 10) == '\0') goto LAB_013d8898;
    }
  }
  if (DAT_04cd19d8 == 0) {
    bVar11 = DAT_0548e140;
    if (7 < DAT_0548e140) goto LAB_013d882c;
LAB_013d8878:
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar11 = *pbVar8;
    if ((*pbVar8 < 8) ||
       (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (bVar11 = *(byte *)(DAT_054f5738 + 0x11a5), bVar11 < 8)))) goto LAB_013d8878;
LAB_013d882c:
    pbVar8 = PTR_DAT_04bb5038;
    if (bVar6 != 0xff) {
      puVar3 = (uint *)(lVar7 + 0x48) + (uVar10 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar3 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar8 = (byte *)(lVar7 + 0x471);
      }
    }
    bVar11 = *pbVar8;
    if (7 < bVar11) {
      bVar11 = *PTR_DAT_04bb5038;
      goto LAB_013d8878;
    }
  }
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  if (bVar5 != bVar11) {
    return;
  }
LAB_013d8898:
  uVar10 = (**(code **)(*param_1 + 0x58))(param_1);
  if ((uVar10 & 1) != 0) {
    lVar7 = param_1[4];
    uVar2 = param_2;
    if (*(uint *)(param_1 + 3) <= param_2) {
      uVar2 = 0;
    }
    if (*(uint *)(param_1 + 1) <= param_2) {
      param_2 = 0;
    }
    lVar9 = lVar7 + (long)(int)uVar2 * 0x28;
    plVar1 = (long *)(param_1[2] + (long)(int)param_2 * 0x10);
    if (*(long *)(lVar9 + 8) != *plVar1 || *(long *)(lVar9 + 0x10) != plVar1[1]) {
      lVar4 = plVar1[1];
      *(long *)(lVar9 + 8) = *plVar1;
      *(long *)(lVar9 + 0x10) = lVar4;
      *(undefined1 *)(lVar7 + (long)(int)uVar2 * 0x28 + 0x18) = 1;
    }
  }
  return;
}

