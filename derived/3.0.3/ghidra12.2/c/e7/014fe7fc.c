
bool FUN_014fe7fc(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  
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
      lVar8 = *plVar3;
      goto joined_r0x014fe87c;
    }
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
joined_r0x014fe87c:
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 0x60) + param_3;
    if (7 < param_3) {
      plVar1 = (long *)(lVar8 + 0x60);
    }
    if (*plVar1 != 0) {
      lVar4 = lVar8 + 200 + (ulong)param_3 * 0x10;
      if (7 < param_3) {
        lVar4 = lVar8 + 200;
      }
      lVar8 = *(long *)(lVar4 + 8);
      if (lVar8 != 0) {
        puVar2 = (undefined8 *)(lVar8 + 0x1d8);
        uVar7 = (**(code **)(*(long *)(lVar8 + 0x1d8) + 0x10))(puVar2);
        if ((uVar7 & 1) != 0) {
          lVar8 = (**(code **)*puVar2)(puVar2);
          if (lVar8 == 0) {
            return false;
          }
          iVar6 = FUN_014fe934(param_1,param_2,param_3);
          return iVar6 != 0;
        }
      }
    }
  }
  return false;
}

