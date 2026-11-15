
/* WARNING: Removing unreachable block (ram,0x022e9888) */
/* WARNING: Removing unreachable block (ram,0x022e98d4) */

uint FUN_022e9850(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = (uint)*param_1 - (uint)*(ushort *)(DAT_0519d040 + 0x408);
  if (uVar2 < *(uint *)(DAT_0519d040 + 1000)) {
    lVar8 = *(long *)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar2 * 8);
  }
  else {
    lVar8 = 0;
  }
  uVar2 = (uint)param_1[3] - (uint)*(ushort *)(DAT_0519d040 + 0x408);
  if (uVar2 < *(uint *)(DAT_0519d040 + 1000)) {
    lVar7 = *(long *)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar2 * 8);
  }
  else {
    lVar7 = 0;
  }
  uVar1 = param_1[5];
  if (lVar8 == 0) {
    uVar3 = 4;
    uVar2 = 4;
  }
  else {
    uVar3 = (uint)(byte)param_1[2];
    if ((3 < uVar3) ||
       (uVar6 = (ulong)*(uint *)((&PTR_DAT_04a7edb8)[(int)uVar3] + 0x14),
       0xf < *(uint *)((&PTR_DAT_04a7edb8)[(int)uVar3] + 0x14))) {
      uVar6 = 0;
    }
    uVar2 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar6 * 2])(lVar8);
    if ((3 < uVar3) ||
       (uVar6 = (ulong)*(uint *)((&PTR_DAT_04a7edb8)[(int)uVar3] + 0x14),
       0xf < *(uint *)((&PTR_DAT_04a7edb8)[(int)uVar3] + 0x14))) {
      uVar6 = 0;
    }
    uVar3 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar6 * 2])(lVar8);
  }
  if (lVar7 == 0) {
    uVar5 = 4;
    uVar4 = 4;
  }
  else {
    uVar5 = (uint)(byte)uVar1;
    if ((3 < uVar5) ||
       (uVar6 = (ulong)*(uint *)((&PTR_DAT_04a7edb8)[(int)uVar5] + 0x14),
       0xf < *(uint *)((&PTR_DAT_04a7edb8)[(int)uVar5] + 0x14))) {
      uVar6 = 0;
    }
    uVar4 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar6 * 2])(lVar7);
    if ((3 < uVar5) ||
       (uVar6 = (ulong)*(uint *)((&PTR_DAT_04a7edb8)[(int)uVar5] + 0x14),
       0xf < *(uint *)((&PTR_DAT_04a7edb8)[(int)uVar5] + 0x14))) {
      uVar6 = 0;
    }
    uVar5 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar6 * 2])(lVar7);
  }
  return 1 << (ulong)(uVar3 & 0x1f) | 1 << (ulong)(uVar2 & 0x1f) |
         1 << (ulong)(uVar4 & 0x1f) | 1 << (ulong)(uVar5 & 0x1f);
}

