
undefined8 FUN_02a8a930(long param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if (lVar10 == 0) {
    pbVar9 = &DAT_0548e140;
LAB_02a8a9a4:
    if (7 < *pbVar9) {
LAB_02a8a9b0:
      if (DAT_0537d558 != (long *)0x0) {
        lVar10 = *DAT_0537d558;
        bVar4 = *(byte *)(lVar10 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar1 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar9 = (byte *)(lVar10 + 0x471);
          }
        }
        uVar8 = (uint)*pbVar9;
        if (*pbVar9 < 8) goto LAB_02a8aa20;
      }
      pbVar9 = &DAT_0548e168;
    }
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02a8a9a4;
      }
      goto LAB_02a8a9b0;
    }
  }
  uVar8 = (uint)*pbVar9;
  if (7 < uVar8) {
    uVar8 = 0xff;
  }
LAB_02a8aa20:
  uVar2 = uVar8;
  if (7 < uVar8) {
    uVar2 = 0xffffffff;
  }
  uVar3 = (undefined1)uVar8;
  if (param_3 == 0) {
    *(uint *)(param_1 + 0x1b4) = uVar2;
    if (uVar8 < 8) {
      *(undefined1 *)(param_1 + 0x1b8) = uVar3;
      *(undefined1 *)(param_1 + 0x200) = uVar3;
    }
    else {
      uVar8 = 0xffffffff;
    }
    *(uint *)(param_1 + 0x1fc) = uVar8;
    *(undefined1 *)(param_1 + 0x1b9) = 1;
    *(undefined1 *)(param_1 + 0x201) = 1;
    bVar4 = FUN_023025c0(param_1 + 0x1a8);
    bVar5 = FUN_02302ac0(param_1 + 0x1f0);
    if (((bVar4 & 1) == 0) || ((bVar5 & 1) == 0)) {
      uVar7 = 0;
      *(byte *)(param_1 + 0x4d) = bVar4 & (bVar5 ^ 0xff) & 1;
    }
    else {
      uVar7 = 1;
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
  }
  else {
    *(uint *)(param_1 + 0x244) = uVar2;
    if (uVar8 < 8) {
      *(undefined1 *)(param_1 + 0x248) = uVar3;
    }
    *(undefined1 *)(param_1 + 0x249) = 1;
    uVar6 = FUN_02303ae4(param_1 + 0x238);
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
      *(undefined4 *)(param_1 + 0x48) = 2;
    }
  }
  return uVar7;
}

