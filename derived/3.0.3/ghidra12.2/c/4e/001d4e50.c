
undefined8 FUN_001d4e50(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (0x28 < param_4) {
    return 0;
  }
  uVar8 = *(ulong *)(param_2 + 0x18);
  uVar1 = uVar8 + param_4;
  if (*(ulong *)(*(long *)(param_2 + 0x10) + 0x18) < uVar1) {
    uVar7 = 0;
  }
  else {
    if (uVar1 <= uVar8) {
      return 1;
    }
    do {
      lVar10 = *(long *)(param_2 + 0x10);
      uVar9 = *(ulong *)(lVar10 + 0x18);
      if (uVar9 == uVar8) {
LAB_001d5008:
        *(undefined1 *)(param_2 + 8) = 1;
        return 0;
      }
      lVar10 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 0x28);
      uVar2 = uVar8 + 1;
      bVar5 = *(byte *)(lVar10 + uVar8);
      *(ulong *)(param_2 + 0x18) = uVar2;
      if (uVar9 == uVar2) goto LAB_001d5008;
      bVar6 = *(byte *)(lVar10 + uVar2);
      uVar2 = uVar8 + 2;
      *(ulong *)(param_2 + 0x18) = uVar2;
      uVar3 = uVar2 + bVar6;
      if (uVar1 < uVar3) {
        return 0;
      }
      if (bVar5 < 5) {
        if (bVar5 == 0) {
          if (bVar6 != 4) {
            return 0;
          }
          if (uVar9 - uVar2 < 4) goto LAB_001d5008;
          uVar4 = *(undefined4 *)(lVar10 + uVar2);
          *(ulong *)(param_2 + 0x18) = uVar8 + 6;
          *(undefined4 *)(param_3 + 0xd0) = uVar4;
        }
        else {
          if (bVar5 != 1) goto LAB_001d4f70;
          if (bVar6 != 0x10) {
            return 0;
          }
          uVar8 = FUN_00197494(param_2,param_3 + 0x88,0x10);
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          *(undefined8 *)(param_3 + 0x98) = 0x10;
        }
      }
      else if (bVar5 == 5) {
        if (bVar6 != 1) {
          return 0;
        }
        if (uVar9 == uVar2) goto LAB_001d5008;
        bVar5 = *(byte *)(lVar10 + uVar2);
        *(ulong *)(param_2 + 0x18) = uVar8 + 3;
        *(uint *)(param_3 + 0xa8) = (uint)bVar5;
      }
      else if (bVar5 == 0x80) {
        if (bVar6 != 0x10) {
          return 0;
        }
        uVar8 = FUN_00197494(param_2,param_3 + 0x48,0x10);
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        *(undefined8 *)(param_3 + 0x58) = 0x10;
      }
      else {
LAB_001d4f70:
        if (uVar9 < uVar3) {
          return 0;
        }
        *(ulong *)(param_2 + 0x18) = uVar3;
      }
      uVar8 = *(ulong *)(param_2 + 0x18);
      uVar7 = 1;
    } while (uVar8 < uVar1);
  }
  return uVar7;
}

