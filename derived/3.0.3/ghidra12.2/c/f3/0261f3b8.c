
bool FUN_0261f3b8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar6 = FUN_0261eff4(param_2);
  if (((uint)uVar6 & 0xffff) < 0x800) {
    uVar10 = uVar6 >> 3 & 0x1fff;
    uVar3 = 1 << (ulong)((uint)uVar6 & 7);
    if ((uVar3 & *(byte *)(param_1 + uVar10 + 0xe98e0)) != 0) {
      lVar8 = *DAT_0537d558;
      bVar2 = *(byte *)(lVar8 + 0x473);
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        pbVar1 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
        if (7 < bVar2) {
          pbVar1 = (byte *)(lVar8 + 0x48);
        }
        if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar8 + 0x472) != bVar2)) {
          return false;
        }
      }
      if ((DAT_05574040 != 0) && (lVar8 = FUN_026eec4c(DAT_05574040,*param_3), lVar8 != 0)) {
        lVar9 = lVar8 + 0x194b0;
        if (*(long *)(lVar8 + 0x194b8) == 0) {
          lVar9 = *(long *)(DAT_05574040 + 0x20);
        }
        if ((*(long **)(lVar9 + 0x86b0) == (long *)0x0) ||
           (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x86b0), puVar7 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar7)();
          uVar5 = uVar5 ^ 1;
        }
        bVar4 = (uVar3 & *(byte *)(*(long *)(lVar9 + 0x8698) + *(long *)(lVar9 + 0x8690) + uVar10))
                != 0;
        if ((uVar5 & 1) != 0) {
          return bVar4;
        }
        if (*(long *)(lVar9 + 0x86b0) == 0) {
          return bVar4;
        }
        puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x86b0) + 8);
        if (puVar7 == (undefined8 *)0x0) {
          return bVar4;
        }
        (**(code **)*puVar7)();
        return bVar4;
      }
    }
  }
  return false;
}

