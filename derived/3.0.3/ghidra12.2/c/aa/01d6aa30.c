
void FUN_01d6aa30(long param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  long *plVar7;
  short *psVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  byte *pbVar12;
  byte abStack_14 [4];
  
  plVar7 = *(long **)PTR_DAT_04bb27d0;
  bVar3 = *(byte *)(*plVar7 + 0x473);
  if (bVar3 == 0xff) {
    psVar8 = &DAT_04c487d4;
  }
  else {
    if (7 < bVar3) {
      uVar11 = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      goto LAB_01d6ab28;
    }
    psVar8 = (short *)(param_1 + (ulong)bVar3 * 0xc + 0x108);
  }
  sVar4 = *psVar8;
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (sVar4 != -1) {
    lVar10 = *plVar7;
    uVar11 = 0;
    uVar9 = 0;
    do {
      uVar6 = (uint)uVar9;
      if ((*(short *)(param_1 + 0x108 + (long)(int)uVar6 * 0xc) == sVar4) &&
         (uVar1 = uVar6 & 0xff, uVar1 != 0xff)) {
        puVar2 = (uint *)(lVar10 + 0x48 + (-(uVar9 >> 7 & 1) & 0x7fffff8000 | (uVar9 & 0xff) << 7));
        if (7 < uVar1) {
          puVar2 = (uint *)(lVar10 + 0x48);
        }
        if ((((*puVar2 >> 1 & 1) != 0) && (uVar1 < 8)) && ((*puVar2 >> 3 & 1) != 0)) {
          uVar11 = 1 << (ulong)(uVar6 & 0x1f) | uVar11;
          *(uint *)(param_1 + 0x100) = uVar11;
        }
      }
      uVar9 = (ulong)(uVar6 + 1);
    } while (uVar6 + 1 != 0xc);
  }
LAB_01d6ab28:
  bVar3 = *(byte *)(*plVar7 + 0x473);
  if (bVar3 == 0xff) {
    pbVar12 = &DAT_0537bdbc;
  }
  else {
    if (bVar3 < 8) {
      uVar5 = *(undefined2 *)(param_1 + (ulong)bVar3 * 0xc + 0x108);
    }
    else {
      uVar5 = 0xffff;
    }
    pbVar12 = abStack_14;
    FUN_01d6915c(abStack_14,param_1,uVar5);
  }
  uVar6 = 0xffffffff;
  if (*pbVar12 < 8) {
    uVar6 = ~(1 << (ulong)(*pbVar12 & 0x1f));
  }
  *(uint *)(param_1 + 0x104) = uVar11 & uVar6;
  return;
}

