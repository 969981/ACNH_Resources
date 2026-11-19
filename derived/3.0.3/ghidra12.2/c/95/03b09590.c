
void FUN_03b09590(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  
  *(undefined2 *)(param_1 + 0x194c) = 0;
  *(undefined8 *)(param_1 + 0x1940) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1948) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x194e) = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x18f8) = 0;
  *(undefined8 *)(param_1 + 0x1910) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x1900);
  *(undefined8 *)(param_1 + 0x1900) = 0;
  *(undefined8 *)(param_1 + 0x1918) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x1908);
  *(undefined8 *)(param_1 + 0x1908) = 0;
  *(undefined8 *)(param_1 + 0x1920) = uVar8;
  puVar4 = PTR_DAT_04bb3508;
  if (*(int *)(param_1 + 0x398) != 2) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar6 == 0) {
      iVar5 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar5 = (int)lVar6 + -1;
    }
    if (*(char *)(param_1 + iVar5 + 0x194c) == '\0') {
      *(undefined4 *)(param_1 + (long)iVar5 * 4 + 0x1940) = 0;
      uVar8 = nn::os::GetSystemTick();
      *(undefined8 *)(param_1 + (long)iVar5 * 8 + 0x1928) = uVar8;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (lVar6 == 0) {
      iVar5 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar5 = (int)lVar6 + -1;
    }
    uVar12 = 0;
    lVar6 = 0x400;
    do {
      uVar9 = uVar12 >> 5 & 0x7ffffff;
      uVar3 = 1 << (ulong)((uint)uVar12 & 0x1f);
      if ((uVar3 & *(uint *)(param_1 + 0x3e4 + uVar9 * 4)) != 0) {
        if (((*(uint *)(param_1 + 0x3dc + uVar9 * 4) & uVar3) == 0) ||
           ((*(int *)(param_1 + 0x398) == 1 &&
            ((*(uint *)(param_1 + 0x3ec + uVar9 * 4) & uVar3) != 0)))) {
          lVar7 = *(long *)(param_1 + 0x18);
          if (uVar12 == 0x3f) {
            if (*(long *)(lVar7 + 0x1b30) == 0) goto LAB_03b09780;
            if (*(char *)(lVar7 + 0x2be8) != '\0') goto LAB_03b09740;
            uVar13 = 0;
LAB_03b09770:
            uVar9 = 0x3f;
            goto LAB_03b09778;
          }
          uVar9 = uVar12 & 0xffffffff;
LAB_03b0975c:
          uVar13 = 0;
          uVar8 = 0;
LAB_03b0977c:
          FUN_0033de30(uVar13,lVar7,0,uVar9,uVar8);
        }
        else {
          uVar13 = *(undefined4 *)(param_1 + 0x3f4 + uVar12 * 4);
          lVar7 = *(long *)(param_1 + 0x18);
          if (uVar12 != 0x3f) {
            uVar9 = uVar12 & 0xffffffff;
LAB_03b09778:
            uVar8 = 1;
            goto LAB_03b0977c;
          }
          if (*(long *)(lVar7 + 0x1b30) != 0) {
            if (*(char *)(lVar7 + 0x2be8) == '\0') goto LAB_03b09770;
LAB_03b09740:
            uVar9 = 0x3f;
            goto LAB_03b0975c;
          }
        }
LAB_03b09780:
        lVar7 = param_1 + uVar12 * 0x50;
        lVar10 = *(long *)(param_1 + 0x18);
        *(undefined2 *)(lVar7 + 0x540) = 0;
        *(undefined4 *)(lVar7 + 0x53c) = 0;
        uVar9 = (ulong)*(uint *)(lVar10 + 0x1b0);
        if (0 < (int)*(uint *)(lVar10 + 0x1b0)) {
          if ((*(uint *)(*(long *)(lVar10 + 0x1b8) + uVar12 * 4 + 0x100) & 0xc00) == 0) {
            uVar11 = 0;
            lVar7 = *(long *)(lVar10 + 0x1b8) + lVar6;
            do {
              if (uVar9 - 1 == uVar11) goto LAB_03b097d0;
              pbVar1 = (byte *)(lVar7 + 1);
              lVar7 = lVar7 + 0x300;
              uVar11 = uVar11 + 1;
            } while ((*pbVar1 & 0xc) == 0);
            if (uVar11 < uVar9) goto LAB_03b097b0;
          }
          else {
LAB_03b097b0:
            lVar7 = param_1 + uVar12 * 0x50 + (long)iVar5 * 2;
            *(ushort *)(lVar7 + 0x53c) = *(ushort *)(lVar7 + 0x53c) | 2;
            lVar10 = *(long *)(param_1 + 0x18);
            uVar9 = (ulong)*(uint *)(lVar10 + 0x1b0);
          }
LAB_03b097d0:
          if (0 < (int)uVar9) {
            lVar7 = *(long *)(lVar10 + 0x1b8);
            if ((*(uint *)(lVar7 + uVar12 * 4 + 0x100) & 0xfffff3ff) == 0) {
              uVar11 = 0;
              do {
                if (uVar9 - 1 == uVar11) goto LAB_03b096b0;
                puVar2 = (uint *)(lVar7 + lVar6);
                lVar7 = lVar7 + 0x300;
                uVar11 = uVar11 + 1;
              } while ((*puVar2 & 0xfffff3ff) == 0);
              if (uVar9 <= uVar11) goto LAB_03b096b0;
            }
            lVar7 = param_1 + uVar12 * 0x50 + (long)iVar5 * 2;
            *(ushort *)(lVar7 + 0x53c) = *(ushort *)(lVar7 + 0x53c) | 1;
          }
        }
      }
LAB_03b096b0:
      uVar12 = uVar12 + 1;
      lVar6 = lVar6 + 4;
    } while (uVar12 != 0x40);
    lVar6 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar6 == 0) {
      iVar5 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar5 = (int)lVar6 + -1;
    }
    if (*(char *)(param_1 + iVar5 + 0x194c) == '\0') {
      lVar7 = nn::os::GetSystemTick();
      lVar6 = param_1 + (long)*(int *)(param_1 + 0x1940 + (long)iVar5 * 4) * 8;
      *(long *)(lVar6 + 0x18f8) =
           (lVar7 - *(long *)(param_1 + (long)iVar5 * 8 + 0x1928)) + *(long *)(lVar6 + 0x18f8);
      *(undefined4 *)(param_1 + 0x1940 + (long)iVar5 * 4) = 0xffffffff;
    }
  }
  return;
}

