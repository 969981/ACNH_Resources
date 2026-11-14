
void FUN_01b67280(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  char local_28 [4];
  uint local_24;
  
  if (param_1 == 0) {
    return;
  }
  lVar7 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar7 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar8 = *(long *)(lVar7 + 0x2c638);
  local_24 = param_2;
  if (lVar8 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar7 + 0x2c638) == 0) goto LAB_01b6733c;
      plVar5 = *(long **)(*(long *)(lVar7 + 0x2c638) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_58 = *(long *)(lVar7 + 0x2c618);
      local_50 = *(undefined8 *)(lVar7 + 0x2c620);
      uStack_48 = 0x2580;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
    }
  }
LAB_01b6733c:
  lVar8 = *(long *)(lVar7 + 0x2c618);
  lVar2 = *(long *)(lVar7 + 0x2c620);
  local_58 = *(long *)(DAT_04da6480 + 0x20) / 1000000000 + *(long *)(DAT_04da6480 + 8) +
             (((*(long *)(DAT_04da6480 + 0x10) + (long)*(int *)(DAT_04da6480 + 0x38)) -
              *(long *)(DAT_04da6480 + 8)) * 1000000000) / 1000000000;
  local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
  lVar8 = FUN_02811460(lVar2 + lVar8,&local_58,local_28);
  if (local_28[0] != '\0') {
    FUN_01b67140(lVar8,param_1);
  }
  if (local_24 < 0xf) {
    lVar8 = lVar8 + (ulong)local_24 * 4;
    uVar3 = *(uint *)(lVar8 + 4);
    iVar1 = uVar3 + param_3;
    if (CARRY4(uVar3,param_3)) {
      iVar1 = -1;
    }
    *(int *)(lVar8 + 4) = iVar1;
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x2c638) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x2c638) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

