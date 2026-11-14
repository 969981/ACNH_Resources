
ulong FUN_014feae8(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar5 = *(uint *)(param_1 + 8);
  if (uVar5 != 0) {
    if (uVar5 == 0) {
      return 0;
    }
    if (uVar5 != 0) {
      plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar3 = plVar1 + uVar5;
      if (0x38 < uVar5) {
        plVar3 = plVar1;
      }
      lVar7 = *plVar3;
      goto joined_r0x014feb68;
    }
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
joined_r0x014feb68:
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 0x60) + param_3;
    if (7 < param_3) {
      plVar1 = (long *)(lVar7 + 0x60);
    }
    if (*plVar1 != 0) {
      lVar4 = lVar7 + 200 + (ulong)param_3 * 0x10;
      if (7 < param_3) {
        lVar4 = lVar7 + 200;
      }
      lVar7 = *(long *)(lVar4 + 8);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 + 0x1d8);
        uVar6 = (**(code **)(*(long *)(lVar7 + 0x1d8) + 0x10))(puVar2);
        if ((uVar6 & 1) != 0) {
          lVar7 = (**(code **)*puVar2)(puVar2);
          if (lVar7 == 0) {
            return 0;
          }
          uVar6 = FUN_014fe934(param_1,param_2,param_3);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          return (ulong)((int)uVar6 - 0xfU < 0xe);
        }
      }
    }
  }
  return 0;
}

