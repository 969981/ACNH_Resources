
/* WARNING: Removing unreachable block (ram,0x0125f65c) */
/* WARNING: Removing unreachable block (ram,0x0125f614) */
/* WARNING: Removing unreachable block (ram,0x0125f638) */
/* WARNING: Removing unreachable block (ram,0x0125f680) */

undefined8 FUN_0125f5d4(long param_1,undefined4 *param_2,short param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  uint local_24;
  
  lVar3 = FUN_01260194(0xe7);
  local_24 = 0;
  if (((((DAT_05618008 == param_3) || (local_24 = 1, DAT_05618028 == param_3)) ||
       (local_24 = 2, DAT_05618048 == param_3)) || (local_24 = 3, DAT_05618068 == param_3)) &&
     ((local_24 < *(uint *)(lVar3 + 0x420) &&
      (lVar3 = *(long *)(*(long *)(lVar3 + 0x428) + (long)(int)local_24 * 8), lVar3 != 0)))) {
    plVar7 = (long *)(lVar3 + 0x68);
    puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
    uVar1 = *puVar4;
    lVar5 = (**(code **)(*plVar7 + 0xf0))(plVar7);
    uVar2 = *(undefined4 *)(lVar5 + 4);
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    puVar4 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0xa0) + 0xf0))((long *)(lVar3 + 0xa0));
    uVar6 = 1;
    *param_2 = *puVar4;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

