
void FUN_02f9c0d0(long param_1)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined **local_80;
  int local_78;
  uint local_74;
  uint local_70;
  undefined2 local_6c;
  undefined8 local_6a;
  undefined4 local_60;
  undefined8 local_5c;
  byte local_54;
  undefined **local_50;
  int local_48;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if (lVar10 != 0) {
    local_6a = 0x1000001;
    local_54 = *(byte *)(param_1 + 0x1f8);
    local_5c = 0x60000000c;
    if (7 < local_54) {
      local_54 = 0xff;
    }
    uVar8 = 0xffffffff;
    local_60 = 0;
    local_6c = 0;
    uVar6 = *(uint *)(param_1 + 0x298);
    local_80 = &PTR_LAB_04b2b020;
    local_78 = *(int *)(param_1 + 0x8a350);
    if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x280))) {
      lVar7 = param_1 + 0x270;
      uVar8 = uVar6 + 1 & 3;
      if (2 < uVar6) {
        uVar6 = uVar6 + 1 & 0xfffffffc;
        do {
          uVar6 = uVar6 - 4;
          lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
        } while (uVar6 != 0);
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        lVar7 = *(long *)(lVar7 + 8);
      }
      uVar8 = 0xffffffff;
      if ((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(param_1 + 0x284), lVar7 != 0)) {
        uVar8 = *(uint *)(lVar7 + 0x270);
      }
    }
    lVar7 = FUN_033d0598(&DAT_0548e140);
    psVar1 = (short *)(lVar7 + 0x10);
    local_50 = &PTR_LAB_04b26318;
    local_48 = 2;
    if ((uVar8 & 0xff) != 0x19) {
      local_48 = (int)(char)uVar8;
    }
    uVar6 = FUN_033d3bf4(psVar1,&local_50);
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    iVar4 = *(int *)(param_1 + 0x8a350);
    psVar3 = psVar1 + (ulong)uVar6 * 6;
    if (0xf < uVar6) {
      psVar3 = psVar1;
    }
    if (iVar4 != 0) {
      local_70 = 0;
      lVar7 = (long)iVar4 << 3;
      puVar9 = *(undefined8 **)(param_1 + 0x8a358);
      do {
        sVar2 = 0x4c7b;
        if (((short *)*puVar9)[4] != -2) {
          sVar2 = *(short *)*puVar9;
        }
        if (*psVar3 == sVar2) goto LAB_02f9c260;
        local_70 = local_70 + 1;
        puVar9 = puVar9 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    local_70 = 0;
LAB_02f9c260:
    local_70 = local_70 & 0xffff;
    local_74 = local_70;
    if (-1 < *(int *)(psVar3 + 2)) {
      iVar4 = *(int *)(lVar10 + 0x2e8);
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = (int)local_70 / iVar4;
      }
      local_74 = iVar5 * iVar4 - iVar4 * *(int *)(psVar3 + 2);
      local_74 = local_74 & ((int)local_74 >> 0x1f ^ 0xffffffffU);
    }
    local_5c = CONCAT44(4,(undefined4)local_5c);
    FUN_03864290(lVar10,&local_80);
  }
  return;
}

