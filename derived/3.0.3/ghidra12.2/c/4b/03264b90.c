
int FUN_03264b90(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  byte local_4 [4];
  
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_03264c00:
    if (7 < *pbVar5) {
LAB_03264c0c:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        local_4[0] = *pbVar5;
        if (local_4[0] < 8) goto LAB_03264c8c;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_03264c00;
      }
      goto LAB_03264c0c;
    }
  }
  local_4[0] = *pbVar5;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_03264c8c:
  iVar3 = FUN_0267c230(local_4);
  if (*param_1 == 0) {
    iVar4 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 2);
    iVar4 = 0;
    lVar6 = (long)*param_1 << 3;
    do {
      piVar8 = (int *)*puVar7;
      if (*piVar8 - 5U < 3) {
        if (piVar8[3] != -1) {
          iVar4 = iVar4 + 1;
        }
      }
      else if (*piVar8 == 3) {
        iVar4 = iVar4 - (uint)(piVar8[3] == -1);
      }
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  return iVar4 + iVar3;
}

