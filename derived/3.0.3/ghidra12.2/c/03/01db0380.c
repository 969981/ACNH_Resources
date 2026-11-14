
undefined8 FUN_01db0380(long *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  byte local_34 [4];
  
  lVar11 = *param_1;
  if (*(long *)(lVar11 + 0xa0) != 0) goto LAB_01db047c;
  lVar13 = **(long **)PTR_DAT_04bb27d0;
  bVar7 = *(byte *)(lVar13 + 0x473);
  if ((long)(char)bVar7 == 0xffffffffffffffff) {
LAB_01db03e4:
    bVar10 = true;
    if (*(char *)(lVar11 + 0x98) == '\0') goto LAB_01db0430;
LAB_01db0420:
    if (bVar10) {
      if (*(int *)(lVar11 + 0x9c) != 2) goto LAB_01db0430;
    }
    else if (*(int *)(lVar11 + 0x9c) != 1) goto LAB_01db0430;
    *(undefined1 *)(lVar11 + 0x98) = 0;
    *(undefined4 *)(lVar11 + 0xa8) = *(undefined4 *)(lVar11 + 0x94);
    lVar13 = *(long *)(lVar11 + 0x88);
    *(long *)(lVar11 + 0xa0) = lVar13;
    *(undefined4 *)(lVar11 + 0x9c) = 3;
  }
  else {
    pbVar1 = (byte *)(lVar13 + 0x48);
    uVar14 = (long)(char)bVar7 & 0xffffffff;
    pbVar2 = pbVar1 + uVar14 * 0x80;
    if (7 < bVar7) {
      pbVar2 = pbVar1;
    }
    if ((*pbVar2 >> 3 & 1) == 0) goto LAB_01db03e4;
    lVar13 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
    lVar3 = lVar13 + uVar14 * 0xc;
    if (0xb < bVar7) {
      lVar3 = lVar13;
    }
    bVar10 = *(char *)(lVar3 + 10) != '\0';
    if (*(char *)(lVar11 + 0x98) != '\0') goto LAB_01db0420;
LAB_01db0430:
    plVar12 = *(long **)(lVar11 + 0x80);
    if (plVar12 == (long *)0x0) {
      if (*(int *)(lVar11 + 0x60) < 1) {
        return 0;
      }
      iVar5 = *(int *)(lVar11 + 0x58);
      iVar6 = *(int *)(lVar11 + 0x5c);
      iVar4 = 0;
      if (iVar5 <= iVar6) {
        iVar4 = iVar5;
      }
      plVar12 = *(long **)(*(long *)(lVar11 + 0x50) + (long)(iVar6 - iVar4) * 8);
      iVar4 = 0;
      if (iVar6 + 1 < iVar5) {
        iVar4 = iVar6 + 1;
      }
      *(int *)(lVar11 + 0x5c) = iVar4;
      *(int *)(lVar11 + 0x60) = *(int *)(lVar11 + 0x60) + -1;
      *(long **)(lVar11 + 0x80) = plVar12;
      if (plVar12 == (long *)0x0) {
        return 0;
      }
    }
    lVar13 = *plVar12;
    *(long *)(lVar11 + 0xa0) = lVar13;
    *(undefined4 *)(lVar11 + 0xa8) = *(undefined4 *)((long)plVar12 + 0xc);
  }
  if (lVar13 == 0) {
    return 0;
  }
  lVar11 = *param_1;
LAB_01db047c:
  local_34[0] = *param_2;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  uVar14 = FUN_01db1600(lVar11,local_34,param_1[1]);
  puVar9 = PTR_DAT_04bc10a8;
  puVar8 = PTR_DAT_04bb27d0;
  do {
    if ((uVar14 & 1) == 0) {
      return 1;
    }
    FUN_01cab5e0(*(undefined8 *)puVar9,0);
    FUN_01cab5e0(*(undefined8 *)puVar9,1);
    lVar11 = *param_1;
    if (*(long *)(lVar11 + 0xa0) == 0) {
      lVar13 = **(long **)puVar8;
      bVar7 = *(byte *)(lVar13 + 0x473);
      if ((long)(char)bVar7 == 0xffffffffffffffff) {
LAB_01db0554:
        bVar10 = true;
        if (*(char *)(lVar11 + 0x98) == '\0') goto LAB_01db04c0;
LAB_01db058c:
        if (!bVar10) {
          if (*(int *)(lVar11 + 0x9c) == 1) goto LAB_01db05a8;
          goto LAB_01db04c0;
        }
        if (*(int *)(lVar11 + 0x9c) != 2) goto LAB_01db04c0;
LAB_01db05a8:
        lVar13 = *(long *)(lVar11 + 0x88);
        *(undefined4 *)(lVar11 + 0x9c) = 3;
        *(undefined1 *)(lVar11 + 0x98) = 0;
        *(long *)(lVar11 + 0xa0) = lVar13;
        *(undefined4 *)(lVar11 + 0xa8) = *(undefined4 *)(lVar11 + 0x94);
      }
      else {
        pbVar1 = (byte *)(lVar13 + 0x48);
        uVar14 = (long)(char)bVar7 & 0xffffffff;
        pbVar2 = pbVar1 + uVar14 * 0x80;
        if (7 < bVar7) {
          pbVar2 = pbVar1;
        }
        if ((*pbVar2 >> 3 & 1) == 0) goto LAB_01db0554;
        lVar13 = (*(long **)puVar8)[2] + 0x108;
        lVar3 = lVar13 + uVar14 * 0xc;
        if (0xb < bVar7) {
          lVar3 = lVar13;
        }
        bVar10 = *(char *)(lVar3 + 10) != '\0';
        if (*(char *)(lVar11 + 0x98) != '\0') goto LAB_01db058c;
LAB_01db04c0:
        plVar12 = *(long **)(lVar11 + 0x80);
        if (plVar12 == (long *)0x0) {
          if (*(int *)(lVar11 + 0x60) < 1) {
            return 1;
          }
          iVar5 = *(int *)(lVar11 + 0x58);
          iVar6 = *(int *)(lVar11 + 0x5c);
          iVar4 = 0;
          if (iVar5 <= iVar6) {
            iVar4 = iVar5;
          }
          plVar12 = *(long **)(*(long *)(lVar11 + 0x50) + (long)(iVar6 - iVar4) * 8);
          iVar4 = 0;
          if (iVar6 + 1 < iVar5) {
            iVar4 = iVar6 + 1;
          }
          *(int *)(lVar11 + 0x5c) = iVar4;
          *(int *)(lVar11 + 0x60) = *(int *)(lVar11 + 0x60) + -1;
          *(long **)(lVar11 + 0x80) = plVar12;
          if (plVar12 == (long *)0x0) {
            return 1;
          }
        }
        lVar13 = *plVar12;
        *(long *)(lVar11 + 0xa0) = lVar13;
        *(undefined4 *)(lVar11 + 0xa8) = *(undefined4 *)((long)plVar12 + 0xc);
      }
      if (lVar13 == 0) {
        return 1;
      }
      lVar11 = *param_1;
    }
    local_34[0] = *param_2;
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    uVar14 = FUN_01db1600(lVar11,local_34,param_1[1]);
  } while( true );
}

