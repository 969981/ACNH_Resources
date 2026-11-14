
void FUN_016b8158(undefined8 param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 local_48;
  byte local_24 [4];
  
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = &DAT_0548e140;
  if (lVar13 == 0) {
LAB_016b81c8:
    if (*pbVar12 < 8) goto LAB_016b8240;
LAB_016b81d4:
    if (DAT_0537d558 == (long *)0x0) {
LAB_016b8238:
      pbVar12 = &DAT_0548e168;
      goto LAB_016b8240;
    }
    lVar13 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar13 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar3 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar12 = (byte *)(lVar13 + 0x471);
      }
    }
    local_24[0] = *pbVar12;
    if (7 < local_24[0]) goto LAB_016b8238;
  }
  else {
    pbVar12 = &DAT_0548e140;
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar12 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_016b81c8;
      }
      goto LAB_016b81d4;
    }
LAB_016b8240:
    local_24[0] = *pbVar12;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
  }
  uVar8 = FUN_033ff8d0(local_24);
  if ((uVar8 & 1) == 0) {
    return;
  }
  iVar11 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar11 = 0;
    }
    else {
      puVar9 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar9,0);
      iVar11 = 0;
      if ((iVar5 == 0x758f7eaf) && (iVar11 = 0, DAT_05aed670 != 0)) {
        iVar11 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar11 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  if (DAT_05292434 != iVar11) {
    return;
  }
  local_48 = param_1;
  lVar13 = FUN_016b8544(&local_48,1);
  piVar2 = (int *)(lVar13 + 0x77b0);
  uVar6 = FUN_01f09424();
  lVar10 = FUN_016b8544(&local_48,2);
  if (lVar10 == 0) {
    iVar11 = *(int *)(lVar13 + 0x77f4);
    if ((iVar11 == 0x41) || (iVar11 == 0x39)) {
      bVar1 = false;
    }
    else {
      iVar5 = *piVar2;
      bVar1 = false;
      if ((iVar5 != 0x39) && (iVar5 != 0x41)) {
        bVar1 = iVar11 != 0x44 && iVar5 != 0x44;
      }
    }
    if ((uVar6 & 1) == 0) {
      if (bVar1) {
        lVar10 = *(long *)(*(long *)(lVar13 + 8) + 0x68);
        if (lVar10 != 0) {
          *(undefined4 *)(lVar13 + 0xb010) = *(undefined4 *)(lVar10 + 0x278);
          *(undefined4 *)(lVar13 + 0xb014) = *(undefined4 *)(lVar10 + 0x27c);
          *(undefined4 *)(lVar13 + 0xb018) = *(undefined4 *)(lVar10 + 0x280);
          *(undefined4 *)(lVar13 + 0xb01c) = *(undefined4 *)(lVar10 + 0x2b4);
        }
        FUN_01ea5580(lVar13,0x42,0,0);
        return;
      }
      return;
    }
    if (!bVar1) {
      return;
    }
  }
  else {
    uVar7 = FUN_01f09424();
    if ((uVar6 & uVar7 & 1) == 0) {
      if (((uVar6 | uVar7) & 1) == 0) {
        iVar11 = *(int *)(lVar13 + 0x77f4);
        if ((((iVar11 != 0x41) && (iVar11 != 0x39)) && (iVar5 = *piVar2, iVar5 != 0x39)) &&
           (((iVar5 != 0x41 && (iVar11 != 0x44)) && (iVar5 != 0x44)))) {
          FUN_01f118a4(lVar13);
        }
        iVar11 = *(int *)(lVar10 + 0x77f4);
        if (iVar11 == 0x41) {
          return;
        }
        if (iVar11 == 0x39) {
          return;
        }
        iVar5 = *(int *)(lVar10 + 0x77b0);
        if (iVar5 == 0x39) {
          return;
        }
        if (iVar5 == 0x41) {
          return;
        }
        if (iVar11 == 0x44) {
          return;
        }
        if (iVar5 == 0x44) {
          return;
        }
        FUN_01f118a4(lVar10);
        return;
      }
      if (((uVar7 | uVar6 ^ 1) & 1) == 0) {
        iVar11 = *(int *)(lVar13 + 0x77f4);
        if (iVar11 == 0x41) {
          return;
        }
        if (iVar11 == 0x39) {
          return;
        }
        iVar5 = *piVar2;
        if (iVar5 == 0x39) {
          return;
        }
        if (iVar5 == 0x41) {
          return;
        }
        if (iVar11 == 0x44) {
          return;
        }
        if (iVar5 == 0x44) {
          return;
        }
        goto LAB_016b8394;
      }
    }
    else {
      iVar11 = *(int *)(lVar13 + 0x77f4);
      if (((iVar11 != 0x41) && (iVar11 != 0x39)) &&
         ((iVar5 = *piVar2, iVar5 != 0x39 &&
          (((iVar5 != 0x41 && (iVar11 != 0x44)) && (iVar5 != 0x44)))))) {
        FUN_01f10428(lVar13);
      }
    }
    iVar11 = *(int *)(lVar10 + 0x77f4);
    if (iVar11 == 0x41) {
      return;
    }
    if (iVar11 == 0x39) {
      return;
    }
    iVar5 = *(int *)(lVar10 + 0x77b0);
    if (iVar5 == 0x39) {
      return;
    }
    if (iVar5 == 0x41) {
      return;
    }
    if (iVar11 == 0x44) {
      return;
    }
    if (iVar5 == 0x44) {
      return;
    }
    lVar13 = lVar10;
  }
LAB_016b8394:
  FUN_01f10428(lVar13);
  return;
}

