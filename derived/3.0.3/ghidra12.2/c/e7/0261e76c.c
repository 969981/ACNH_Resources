
bool FUN_0261e76c(long param_1,ulong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (((uint)param_2 & 0xffff) < 0x800) {
    uVar9 = param_2 >> 3 & 0x1fff;
    uVar3 = 1 << (ulong)((uint)param_2 & 7);
    if ((uVar3 & *(byte *)(param_1 + uVar9 + 0xe98e0)) != 0) {
      lVar7 = *DAT_0537d558;
      bVar2 = *(byte *)(lVar7 + 0x473);
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
        if (7 < bVar2) {
          pbVar1 = (byte *)(lVar7 + 0x48);
        }
        if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar2)) {
          return false;
        }
      }
      if ((DAT_05574040 != 0) && (lVar7 = FUN_026eec4c(DAT_05574040,*param_3), lVar7 != 0)) {
        lVar8 = lVar7 + 0x194b0;
        if (*(long *)(lVar7 + 0x194b8) == 0) {
          lVar8 = *(long *)(DAT_05574040 + 0x20);
        }
        if ((*(long **)(lVar8 + 0x86b0) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar8 + 0x86b0), puVar6 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar6)();
          uVar5 = uVar5 ^ 1;
        }
        bVar4 = (uVar3 & *(byte *)(*(long *)(lVar8 + 0x8698) + *(long *)(lVar8 + 0x8690) + uVar9))
                != 0;
        if ((uVar5 & 1) != 0) {
          return bVar4;
        }
        if (*(long *)(lVar8 + 0x86b0) == 0) {
          return bVar4;
        }
        puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x86b0) + 8);
        if (puVar6 == (undefined8 *)0x0) {
          return bVar4;
        }
        (**(code **)*puVar6)();
        return bVar4;
      }
    }
  }
  return false;
}

