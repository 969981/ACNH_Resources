
void FUN_02f46668(undefined4 *param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 local_48;
  undefined8 local_28;
  
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  puVar3 = PTR_DAT_04bb37e0;
  iVar2 = *(int *)(param_2 + 0x382bc);
  puVar8 = (undefined8 *)PTR_DAT_04bb37e0;
  if (iVar2 == 2) {
    if (-1 < (int)param_3) {
      uVar7 = 0xc038;
LAB_02f46708:
      lVar6 = *(long *)(*(long *)PTR_DAT_04bb43c0 + (ulong)(uVar7 | 0x50000));
      if ((int)param_3 < *(int *)(lVar6 + 0x78)) {
        if (param_3 < *(uint *)(lVar6 + 0x58)) {
          lVar6 = *(long *)(*(long *)(lVar6 + 0x60) + (ulong)param_3 * 8);
        }
        else {
          lVar6 = 0;
        }
        puVar4 = (undefined2 *)(**(code **)(*(long *)(lVar6 + 0x30) + 0xf0))();
        local_48._0_2_ = *puVar4;
        local_48._2_2_ = 0;
        local_48._4_4_ = 0;
        FUN_0277d4ac(&local_48);
        puVar8 = &local_48;
      }
    }
  }
  else if (iVar2 == 1) {
    if (-1 < (int)param_3) {
      uVar7 = 0xc030;
      goto LAB_02f46708;
    }
  }
  else {
    if (iVar2 != 0) goto LAB_02f46788;
    if (-1 < (int)param_3) {
      uVar7 = 0xc028;
      goto LAB_02f46708;
    }
  }
  local_28 = *puVar8;
  uVar5 = FUN_0264a1e0(param_2 + 0x1f8,&local_28);
  puVar8 = &local_28;
  if ((uVar5 & 1) == 0) {
    puVar8 = (undefined8 *)puVar3;
  }
LAB_02f46788:
  uVar1 = *(undefined4 *)((long)puVar8 + 4);
  *param_1 = *(undefined4 *)puVar8;
  param_1[1] = uVar1;
  return;
}

