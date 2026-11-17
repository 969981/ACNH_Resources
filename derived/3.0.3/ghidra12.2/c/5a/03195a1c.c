
void FUN_03195a1c(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  undefined **local_50;
  char *local_48;
  
  lVar6 = *(long *)(param_1 + 0x210);
  lVar8 = *(long *)(lVar6 + 0x6e8);
  plVar7 = (long *)(lVar6 + 0x6e0);
  if (param_2 < 0x2a) {
    plVar7 = (long *)(lVar6 + 0x6d8);
  }
  if (param_2 == 0x28) {
    plVar7 = (long *)(lVar6 + 0x6d0);
  }
  lVar4 = *(long *)(lVar8 + 0x2b8);
  if (param_2 < 0x28) {
    plVar7 = (long *)(lVar6 + (ulong)(param_2 - 0x14) * 8 + 0x630);
  }
  plVar1 = (long *)(lVar6 + 0x590) + param_2;
  if (0x13 < param_2) {
    plVar1 = (long *)(lVar6 + 0x590);
  }
  if ((int)param_2 < 0x14) {
    plVar7 = plVar1;
  }
  lVar6 = *(long *)(*plVar7 + 0x300);
  if (lVar4 != 0 && lVar6 != 0) {
    *(undefined8 *)(lVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar6 + 8);
    *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar6 + 0x10);
    *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar6 + 0x18);
  }
  FUN_03421d30(**(undefined8 **)(lVar8 + 0x298),
               *(undefined8 *)(*(long *)(lVar8 + 0x2a8) + (ulong)(1 < *(uint *)(lVar8 + 0x2a0)) * 8)
              );
  puVar5 = *(undefined8 **)(lVar8 + 0x2a8);
  plVar7 = (long *)*puVar5;
  if (plVar7 != (long *)0x0) {
    uVar9 = 0;
    if ((int)*(char *)(param_1 + 0x1c516) != param_2 ||
        (int)*(char *)(param_1 + 0x1c516) == 0xffffffff) {
      uVar9 = 0x3f800000;
    }
    local_50 = &PTR_LAB_04aa7fe0;
    local_48 = (char *)CONCAT44(local_48._4_4_,0x14);
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
    (**(code **)(plVar7[3] + 0x158))(uVar9,plVar7[1]);
    puVar5 = *(undefined8 **)(lVar8 + 0x2a8);
  }
  lVar6 = 0x28;
  if (*(uint *)(lVar8 + 0x2a0) < 6) {
    lVar6 = 0;
  }
  plVar7 = *(long **)((long)puVar5 + lVar6);
  if (plVar7 == (long *)0x0) {
    return;
  }
  local_50 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_48 = "ItemRingEnable";
  iVar3 = FUN_0274bce0(param_1 + 0x1f8,&local_50);
  if (iVar3 != 0) {
    if (0x27 < param_2) {
      param_2 = 0xffffffff;
    }
    cVar2 = FUN_02678270(param_1 + 0x1f8,param_2);
    if (cVar2 != -1) {
      local_50 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_48 = (char *)CONCAT44(local_48._4_4_,6);
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
      puVar5 = (undefined8 *)(plVar7[3] + 0x1b8);
      goto LAB_03195c24;
    }
  }
  local_50 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
  local_48 = (char *)CONCAT44(local_48._4_4_,7);
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
  puVar5 = (undefined8 *)(plVar7[3] + 0x1c0);
LAB_03195c24:
  (*(code *)*puVar5)(plVar7[1]);
  return;
}

