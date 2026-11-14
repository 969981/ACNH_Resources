
void FUN_01d432b0(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  long lVar17;
  undefined1 uVar18;
  long lVar19;
  int iVar20;
  undefined1 auStack_70 [28];
  byte local_54 [4];
  
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_01d43328:
    if (7 < *pbVar11) {
LAB_01d43334:
      plVar12 = *(long **)PTR_DAT_04bb27d0;
      if (plVar12 != (long *)0x0) {
        lVar14 = *plVar12;
        bVar7 = *(byte *)(lVar14 + 0x473);
        pbVar11 = PTR_DAT_04bb5038;
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
          if (7 < bVar7) {
            puVar3 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar11 = (byte *)(lVar14 + 0x471);
          }
        }
        local_54[0] = *pbVar11;
        if (local_54[0] < 8) goto LAB_01d433b0;
      }
      pbVar11 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01d43328;
      }
      goto LAB_01d43334;
    }
  }
  local_54[0] = *pbVar11;
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
  plVar12 = *(long **)PTR_DAT_04bb27d0;
LAB_01d433b0:
  bVar7 = *param_2;
  uVar9 = (ulong)(char)bVar7;
  pbVar11 = PTR_DAT_04bb32e0;
  if (uVar9 != 0xffffffffffffffff) {
    pbVar4 = (byte *)(*plVar12 + 0x48) + (uVar9 & 0xffffffff) * 0x80;
    if (7 < bVar7) {
      pbVar4 = (byte *)(*plVar12 + 0x48);
    }
    if ((*pbVar4 & 1) != 0) {
      pbVar11 = pbVar4 + 0x78;
    }
  }
  bVar6 = *pbVar11;
  bVar15 = local_54[0];
  if (7 < local_54[0]) {
    bVar15 = 0xff;
  }
  bVar16 = bVar6;
  if (7 < bVar6) {
    bVar16 = 0xff;
  }
  if (bVar15 != bVar16) {
    lVar17 = plVar12[2];
    lVar14 = *(long *)PTR_DAT_04bbaed0 + 0xd8 + (uVar9 & 0xffffffff) * 0x30;
    if (7 < bVar7) {
      lVar14 = *(long *)PTR_DAT_04bbaed0 + 0xd8;
    }
    lVar19 = *(long *)(lVar14 + 8);
    uVar18 = 0;
    if (lVar19 != 0) {
      lVar13 = *(long *)PTR_DAT_04bb49f8;
      uVar5 = *(uint *)(lVar13 + 0x28);
      if (uVar5 != 0xffffffff) {
        if (*(uint *)(lVar13 + 8) <= uVar5) {
          uVar5 = 0;
        }
        lVar13 = *(long *)(lVar13 + 0x10) + (long)(int)uVar5 * 0x40;
        if ((*(char *)(lVar13 + 0x39) != '\0') && (0 < (int)*(uint *)(lVar13 + 0x20))) {
          uVar10 = 0;
          uVar9 = (ulong)*(uint *)(lVar13 + 0x20);
          do {
            if (*(uint *)(lVar13 + 0x10) <= (uint)uVar10 || *(long *)(lVar13 + 0x18) == 0) break;
            lVar8 = nn::friends::Friend::GetAccountId();
            if (lVar8 == lVar19) {
              uVar18 = 1;
              goto LAB_01d434d8;
            }
            uVar1 = (uVar9 & 0xffffffff00000000) + 0x100000000;
            uVar10 = uVar1 >> 0x20;
            iVar20 = (int)uVar9;
            uVar9 = uVar1 | uVar9 & 0xffffffff;
          } while ((int)(uVar1 >> 0x20) < iVar20);
        }
      }
      uVar18 = 0;
    }
LAB_01d434d8:
    FUN_02645730(auStack_70,local_54);
    bVar7 = FUN_026472d0(auStack_70,lVar14);
    if (bVar6 < 8) {
      puVar2 = (undefined1 *)(lVar17 + 0x8e8 + (ulong)bVar6 * 2);
      *puVar2 = uVar18;
      puVar2[1] = bVar7 & 1;
    }
  }
  return;
}

