
/* WARNING: Removing unreachable block (ram,0x031fc71c) */
/* WARNING: Removing unreachable block (ram,0x031fc6e0) */
/* WARNING: Removing unreachable block (ram,0x031fc780) */

void FUN_031fc678(undefined4 param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar5 = (ulong)(short)uVar4;
  if (uVar5 == 0xffffffffffffffff) {
LAB_031fc7d8:
    lVar6 = FUN_033d0598(&DAT_0548e140);
    puVar7 = (undefined4 *)(lVar6 + 0x84c);
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar5 & 0xffffffff) * 8);
    if (0xff < uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    puVar2 = PTR_DAT_04bc39f8 + (uVar5 & 0xffffffff) * 8;
    if (0xff < uVar4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    puVar3 = PTR_DAT_04bc39f8 + (uVar5 & 0xffffffff) * 8;
    if (0xff < uVar4) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) {
      if ((*(uint *)(puVar2 + 4) >> 2 & 1) == 0) {
        if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_031fc7d8;
        if (DAT_05739190 == 0) {
          return;
        }
        if (*(long *)(DAT_05739190 + 0x470) == 0) {
          return;
        }
        lVar6 = *(long *)(*(long *)(DAT_05739190 + 0x470) + 8);
      }
      else {
        if (DAT_05739190 == 0) {
          return;
        }
        if (*(long **)(DAT_05739190 + 0x468) == (long *)0x0) {
          return;
        }
        lVar6 = **(long **)(DAT_05739190 + 0x468);
      }
    }
    else {
      if (DAT_05739190 == 0) {
        return;
      }
      if (*(long *)(DAT_05739190 + 0x460) == 0) {
        return;
      }
      lVar6 = *(long *)(*(long *)(DAT_05739190 + 0x460) + 0x18);
    }
    if (lVar6 == 0) {
      return;
    }
    puVar7 = (undefined4 *)(lVar6 + 4);
  }
  *puVar7 = param_1;
  return;
}

