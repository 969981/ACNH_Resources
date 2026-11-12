
void FUN_00813658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_02582a24(param_2);
  FUN_02582d8c(param_2,1);
  FUN_02582a24(param_3);
  uVar2 = FUN_02582d8c(param_3,1);
  puVar1 = PTR_DAT_04bb46b0;
  if (((uVar2 < 8) &&
      (lVar7 = *(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0, *(char *)(lVar7 + 0x13d4) != '\0')
      ) && (*(int *)(lVar7 + 0x13d0) == 0)) {
    uVar2 = (uint)*(byte *)(lVar7 + 0x13d5);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    lVar7 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*(undefined4 *)(param_1 + 0x30));
    if (lVar7 != 0) {
      lVar8 = lVar7 + 0x194b0;
      if (*(long *)(lVar7 + 0x194b8) == 0) {
        lVar8 = *(long *)(*(long *)puVar1 + 0x20);
      }
      if ((*(long *)(lVar8 + 0x2a6f0) == 0) ||
         (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x2a6f0) + 0x10), puVar4 == (undefined8 *)0x0)
         ) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar4)();
        uVar3 = uVar3 ^ 1;
      }
      plVar5 = DAT_04ccc690;
      plVar12 = *(long **)(param_1 + 0x20);
      if ((char)DAT_04ccc690[1] == '\0') {
        lVar7 = nn::oe::GetProgramTotalActiveTime();
        *plVar5 = lVar7;
        *(undefined1 *)(plVar5 + 1) = 1;
      }
      else {
        lVar7 = *DAT_04ccc690;
      }
      lVar9 = *plVar12;
      lVar10 = *(long *)(param_1 + 0x28);
      if ((*(long *)(lVar8 + 0x2a6f0) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar8 + 0x2a6f0) + 0x20), plVar5 != (long *)0x0)) {
        local_68 = *(long *)(lVar8 + 0x2a6d0);
        local_60 = *(undefined8 *)(lVar8 + 0x2a6d8);
        uStack_58 = 8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
      }
      *(long *)(*(long *)(lVar8 + 0x2a6d8) + *(long *)(lVar8 + 0x2a6d0)) =
           (lVar7 - lVar9) / 1000000000 + lVar10;
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar8 + 0x2a6f0) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x2a6f0) + 0x18), puVar4 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar4)();
      }
    }
    if ((*(long *)puVar1 != 0) && (lVar7 = FUN_026eec4c(*(long *)puVar1,uVar2), lVar7 != 0)) {
      lVar8 = lVar7 + 0x194b0;
      if (*(long *)(lVar7 + 0x194b8) == 0) {
        lVar8 = *(long *)(*(long *)puVar1 + 0x20);
      }
      if ((*(long **)(lVar8 + 0x2a6f0) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x2a6f0), puVar4 == (undefined8 *)0x0)) {
        uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x2a6d8) + *(long *)(lVar8 + 0x2a6d0));
      }
      else {
        uVar6 = (**(code **)*puVar4)();
        uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x2a6d8) + *(long *)(lVar8 + 0x2a6d0));
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x2a6f0) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x2a6f0) + 8), puVar4 != (undefined8 *)0x0))
        {
          (**(code **)*puVar4)();
        }
      }
      goto LAB_00813874;
    }
  }
  uVar11 = 0;
LAB_00813874:
  plVar5 = DAT_04ccc690;
  *(undefined8 *)(param_1 + 0x28) = uVar11;
  plVar12 = *(long **)(param_1 + 0x20);
  if ((char)plVar5[1] == '\0') {
    lVar7 = nn::oe::GetProgramTotalActiveTime();
    *plVar5 = lVar7;
    *(undefined1 *)(plVar5 + 1) = 1;
  }
  else {
    lVar7 = *plVar5;
  }
  *plVar12 = lVar7;
  *(uint *)(param_1 + 0x30) = uVar2;
  return;
}

