
void FUN_00202b20(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined **local_d8;
  undefined1 local_d0;
  undefined1 auStack_c8 [112];
  undefined4 local_58;
  
  if (param_2[2] != 0) {
    lVar4 = *param_2;
    plVar2 = (long *)param_2[1];
    lVar5 = *plVar2;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar4 + 8);
    **(long **)(lVar4 + 8) = lVar5;
    param_2[2] = 0;
    while (plVar2 != param_2) {
      plVar6 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_00187e4c(plVar2);
      plVar2 = plVar6;
    }
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x18);
  if (3 < (ulong)(lVar3 - lVar5)) {
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 0x28) + lVar5);
    uVar7 = (ulong)uVar1;
    *(long *)(param_1 + 0x18) = lVar5 + 4;
    if (uVar7 <= (ulong)(lVar3 - (lVar5 + 4)) && uVar1 >> 0x10 == 0) {
      if (uVar1 == 0) {
        return;
      }
      do {
        local_d8 = &PTR_LAB_0483e8a0;
        local_d0 = 0;
        FUN_001b8014(auStack_c8);
        local_d8 = &PTR_LAB_0483e850;
        FUN_001fff5c(param_1,&local_d8);
        plVar2 = (long *)FUN_00187df4(0x98);
        *plVar2 = 0;
        plVar2[2] = (long)&PTR_LAB_0483e8a0;
        *(undefined1 *)(plVar2 + 3) = local_d0;
        FUN_001b8358(plVar2 + 4,auStack_c8);
        plVar2[1] = (long)param_2;
        plVar2[2] = (long)&PTR_LAB_0483e850;
        *(undefined4 *)(plVar2 + 0x12) = local_58;
        lVar4 = *param_2;
        *plVar2 = lVar4;
        *(long **)(lVar4 + 8) = plVar2;
        *param_2 = (long)plVar2;
        local_d8 = &PTR_LAB_0483e8a0;
        param_2[2] = param_2[2] + 1;
        FUN_001b8504(auStack_c8);
        uVar1 = (int)uVar7 - 1;
        uVar7 = (ulong)uVar1;
      } while (uVar1 != 0);
      return;
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

