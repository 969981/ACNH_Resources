
undefined8 FUN_02658940(void)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  long lVar11;
  byte local_8 [4];
  byte local_4 [4];
  
  plVar5 = DAT_0537d558;
  if (DAT_04cd19d8 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_026589b4:
    if (7 < *pbVar10) {
LAB_026589c0:
      if (DAT_0537d558 != (long *)0x0) {
        lVar11 = *DAT_0537d558;
        bVar9 = *(byte *)(lVar11 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar9 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
          if (7 < bVar9) {
            puVar1 = (uint *)(lVar11 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar10 = (byte *)(lVar11 + 0x471);
          }
        }
        local_4[0] = *pbVar10;
        if (local_4[0] < 8) goto LAB_02658a48;
      }
      pbVar10 = &DAT_0548e168;
    }
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_026589b4;
      }
      goto LAB_026589c0;
    }
  }
  local_4[0] = *pbVar10;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
  lVar11 = *DAT_0537d558;
  bVar9 = *(byte *)(lVar11 + 0x473);
LAB_02658a48:
  if (bVar9 != 0xff) {
    pbVar10 = (byte *)(lVar11 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x80;
    if (7 < bVar9) {
      pbVar10 = (byte *)(lVar11 + 0x48);
    }
    if ((*pbVar10 >> 3 & 1) != 0) {
      pcVar7 = (char *)FUN_02582a24(local_4,1);
      lVar11 = *plVar5;
      cVar4 = *pcVar7;
      uVar8 = (uint)cVar4;
      bVar9 = *(byte *)(lVar11 + 0x473);
      if ((long)(char)bVar9 == 0xffffffffffffffff) {
        if (DAT_0537bdbc != cVar4) {
          return 0;
        }
      }
      else {
        puVar1 = (uint *)(lVar11 + 0x48);
        puVar2 = puVar1 + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
        if (7 < bVar9) {
          puVar2 = puVar1;
        }
        pcVar7 = PTR_DAT_04bc1220;
        if ((*puVar2 & 8) != 0) {
          pcVar7 = (char *)(lVar11 + 0x473);
        }
        if (*pcVar7 != cVar4) {
          if ((*puVar2 >> 3 & 1) == 0) {
            return 0;
          }
          if (uVar8 == 0xffffffff) {
            return 0;
          }
          puVar2 = puVar1 + (ulong)uVar8 * 0x20;
          if (7 < uVar8) {
            puVar2 = puVar1;
          }
          if (((byte)*puVar2 >> 3 & 1) == 0) {
            return 0;
          }
        }
      }
      puVar3 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + (ulong)uVar8 * 6;
      if (7 < uVar8) {
        puVar3 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
      }
      return *puVar3;
    }
  }
  local_8[0] = local_4[0];
  if (7 < local_4[0]) {
    local_8[0] = 0xff;
  }
  FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_8,1);
  uVar6 = FUN_026586c8();
  return uVar6;
}

