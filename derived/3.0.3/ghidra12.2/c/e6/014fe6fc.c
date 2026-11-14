
bool FUN_014fe6fc(long param_1,uint param_2)

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
      return false;
    }
    if (uVar5 != 0) {
      plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar3 = plVar1 + uVar5;
      if (0x38 < uVar5) {
        plVar3 = plVar1;
      }
      lVar7 = *plVar3;
      goto joined_r0x014fe768;
    }
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
joined_r0x014fe768:
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 0x60) + param_2;
    if (7 < param_2) {
      plVar1 = (long *)(lVar7 + 0x60);
    }
    if (*plVar1 != 0) {
      lVar4 = lVar7 + 200 + (ulong)param_2 * 0x10;
      if (7 < param_2) {
        lVar4 = lVar7 + 200;
      }
      lVar7 = *(long *)(lVar4 + 8);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 + 0x1d8);
        uVar6 = (**(code **)(*(long *)(lVar7 + 0x1d8) + 0x10))(puVar2);
        if ((uVar6 & 1) != 0) {
          lVar7 = (**(code **)*puVar2)(puVar2);
          return lVar7 != 0;
        }
      }
    }
  }
  return false;
}

