
uint FUN_0291de60(undefined8 param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  byte local_14 [4];
  
  lVar9 = *(long *)PTR_DAT_04bb2808;
  if ((lVar9 == 0) || (lVar5 = *(long *)(lVar9 + 8), lVar5 == 0)) {
LAB_0291deec:
    if (DAT_055c11c0 != '\0') {
LAB_0291def8:
      uVar4 = 0;
      goto LAB_0291e000;
    }
  }
  else {
    iVar2 = *(int *)(lVar5 + 0x1b0);
    if (iVar2 == 2 || iVar2 == 4) goto LAB_0291def8;
    iVar7 = *(int *)(lVar5 + 0x324);
    if (iVar2 == 3 && iVar7 == 0xf) {
      uVar6 = FUN_02e29f0c();
      if ((uVar6 & 1) == 0) goto LAB_0291def8;
      iVar7 = *(int *)(*(long *)(lVar9 + 8) + 0x324);
    }
    if ((iVar2 != 3) || (iVar7 != 0x20)) goto LAB_0291deec;
    uVar6 = FUN_02e29f0c();
    uVar4 = 0;
    if (((uVar6 & 1) == 0) || (DAT_055c11c0 != '\0')) goto LAB_0291e000;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_0291df60:
    if (*pbVar8 < 8) goto LAB_0291dfd8;
LAB_0291df6c:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0291dfd0:
      pbVar8 = &DAT_0548e168;
      goto LAB_0291dfd8;
    }
    lVar9 = *DAT_0537d558;
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
    local_14[0] = *pbVar8;
    if (7 < local_14[0]) goto LAB_0291dfd0;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0291df60;
      }
      goto LAB_0291df6c;
    }
LAB_0291dfd8:
    local_14[0] = *pbVar8;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
  }
  uVar4 = FUN_02917d90(param_1,local_14,PTR_DAT_04bb7ab0);
LAB_0291e000:
  DAT_055c11c4 = 1;
  return uVar4 & 1;
}

