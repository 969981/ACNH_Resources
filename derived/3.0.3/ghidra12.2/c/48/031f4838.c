
/* WARNING: Removing unreachable block (ram,0x031f48dc) */
/* WARNING: Removing unreachable block (ram,0x031f48a0) */
/* WARNING: Removing unreachable block (ram,0x031f4940) */

void FUN_031f4838(undefined4 param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar6 = (ulong)(short)uVar4;
  if (uVar6 == 0xffffffffffffffff) {
LAB_031f4998:
    lVar5 = FUN_033d0598(&DAT_0548e140);
    *(undefined4 *)(lVar5 + 0x848) = param_1;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8);
    if (0xff < uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    puVar2 = PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8;
    if (0xff < uVar4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    puVar3 = PTR_DAT_04bc39f8 + (uVar6 & 0xffffffff) * 8;
    if (0xff < uVar4) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) {
      if ((*(uint *)(puVar2 + 4) >> 2 & 1) == 0) {
        if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_031f4998;
        if (DAT_05739190 == 0) {
          return;
        }
        if (*(long *)(DAT_05739190 + 0x470) == 0) {
          return;
        }
        puVar7 = *(undefined4 **)(*(long *)(DAT_05739190 + 0x470) + 8);
      }
      else {
        if (DAT_05739190 == 0) {
          return;
        }
        if (*(long **)(DAT_05739190 + 0x468) == (long *)0x0) {
          return;
        }
        puVar7 = (undefined4 *)**(long **)(DAT_05739190 + 0x468);
      }
    }
    else {
      if (DAT_05739190 == 0) {
        return;
      }
      if (*(long *)(DAT_05739190 + 0x460) == 0) {
        return;
      }
      puVar7 = *(undefined4 **)(*(long *)(DAT_05739190 + 0x460) + 0x18);
    }
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_1;
    }
  }
  return;
}

