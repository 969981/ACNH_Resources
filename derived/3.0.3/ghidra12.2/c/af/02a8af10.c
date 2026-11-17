
undefined8 FUN_02a8af10(long param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if (lVar9 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_02a8af80:
    if (7 < *pbVar8) {
LAB_02a8af8c:
      if (DAT_0537d558 != (long *)0x0) {
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
        uVar6 = (uint)*pbVar8;
        if (*pbVar8 < 8) goto LAB_02a8affc;
      }
      pbVar8 = &DAT_0548e168;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02a8af80;
      }
      goto LAB_02a8af8c;
    }
  }
  uVar6 = (uint)*pbVar8;
  if (7 < uVar6) {
    uVar6 = 0xff;
  }
LAB_02a8affc:
  uVar2 = uVar6;
  if (7 < uVar6) {
    uVar2 = 0xffffffff;
  }
  uVar4 = (undefined1)uVar6;
  if (param_3 == 0) {
    *(uint *)(param_1 + 0x1b4) = uVar2;
    if (uVar6 < 8) {
      *(undefined1 *)(param_1 + 0x1b8) = uVar4;
      *(undefined1 *)(param_1 + 0x248) = uVar4;
    }
    else {
      uVar6 = 0xffffffff;
    }
    *(uint *)(param_1 + 0x244) = uVar6;
    *(undefined1 *)(param_1 + 0x1b9) = 1;
    *(undefined1 *)(param_1 + 0x249) = 1;
    uVar5 = FUN_023033cc(param_1 + 0x1a8);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar7 = 4;
  }
  else {
    *(uint *)(param_1 + 0x244) = uVar2;
    if (uVar6 < 8) {
      *(undefined1 *)(param_1 + 0x248) = uVar4;
    }
    *(undefined1 *)(param_1 + 0x249) = 1;
    uVar5 = FUN_02303ae4(param_1 + 0x238);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar7 = 5;
  }
  *(undefined4 *)(param_1 + 0x48) = uVar7;
  return 1;
}

