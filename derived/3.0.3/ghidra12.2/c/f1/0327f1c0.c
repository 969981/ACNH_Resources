
void FUN_0327f1c0(undefined8 *param_1,long param_2,int param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 local_d4 [2];
  uint local_d0;
  
  FUN_038e4cec(local_d4);
  local_d4[0] = 0;
  local_d0 = local_d0 & 0xfffffffe;
  FUN_038e4d90(local_d4,*(undefined8 *)(param_2 + 0x50));
  if (0 < param_4) {
    FUN_0327e450(param_1[3],param_1[2],0);
    puVar5 = (undefined8 *)param_1[3];
    (**(code **)(*(long *)*puVar5 + 0x38))((long *)*puVar5,*(undefined8 *)(param_2 + 0x50));
    FUN_038e77e4(puVar5[3],*(undefined8 *)(param_2 + 0x50),*puVar5);
    uVar2 = param_3 * 4;
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    uVar7 = *param_1;
    uVar8 = *(undefined8 *)(param_1[3] + 0x18);
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
    if (param_3 < 0) {
      lVar4 = *(long *)(lVar4 + 0x18);
    }
    else {
      uVar3 = uVar2 | 1;
      if (*(uint *)(lVar4 + 0x20) <= uVar3) {
        uVar3 = 0;
      }
      lVar4 = *(long *)(lVar4 + 0x28) + (ulong)uVar3 * 0x150;
    }
    FUN_03907810(lVar4,uVar6);
    FUN_03949e90(uVar6,lVar4,uVar7,uVar8,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
    FUN_0327e550(param_1[3],param_2);
    FUN_0327e450(param_1[3],param_1[1],0);
    puVar5 = (undefined8 *)param_1[3];
    (**(code **)(*(long *)*puVar5 + 0x38))((long *)*puVar5,*(undefined8 *)(param_2 + 0x50));
    FUN_038e77e4(puVar5[3],*(undefined8 *)(param_2 + 0x50),*puVar5);
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    uVar8 = *(undefined8 *)(param_1[2] + 0x28);
    uVar7 = *(undefined8 *)(param_1[3] + 0x18);
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
    if (param_3 < 1) {
      lVar4 = *(long *)(lVar4 + 0x18);
    }
    else {
      uVar3 = uVar2 - 1;
      if (*(uint *)(lVar4 + 0x20) <= uVar3) {
        uVar3 = 0;
      }
      lVar4 = *(long *)(lVar4 + 0x28) + (ulong)uVar3 * 0x150;
    }
    FUN_03907810(lVar4,uVar6);
    FUN_03949e90(uVar6,lVar4,uVar8,uVar7,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
    FUN_0327e550(param_1[3],param_2);
    param_4 = param_4 + -1;
    if (param_4 != 0) {
      do {
        FUN_0327e450(param_1[3],param_1[2],0);
        puVar5 = (undefined8 *)param_1[3];
        (**(code **)(*(long *)*puVar5 + 0x38))((long *)*puVar5,*(undefined8 *)(param_2 + 0x50));
        FUN_038e77e4(puVar5[3],*(undefined8 *)(param_2 + 0x50),*puVar5);
        lVar4 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
        if (param_3 < 0) {
          lVar4 = *(long *)(lVar4 + 0x18);
        }
        else {
          uVar3 = uVar2 | 1;
          if (*(uint *)(lVar4 + 0x20) <= (uVar2 | 1)) {
            uVar3 = 0;
          }
          lVar4 = *(long *)(lVar4 + 0x28) + (ulong)uVar3 * 0x150;
        }
        uVar6 = *(undefined8 *)(param_2 + 0x50);
        uVar7 = *(undefined8 *)(param_1[1] + 0x28);
        uVar8 = *(undefined8 *)(param_1[3] + 0x18);
        FUN_03907810(lVar4,uVar6);
        FUN_03949e90(uVar6,lVar4,uVar7,uVar8,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
        FUN_0327e550(param_1[3],param_2);
        FUN_0327e450(param_1[3],param_1[1],0);
        puVar5 = (undefined8 *)param_1[3];
        (**(code **)(*(long *)*puVar5 + 0x38))((long *)*puVar5,*(undefined8 *)(param_2 + 0x50));
        FUN_038e77e4(puVar5[3],*(undefined8 *)(param_2 + 0x50),*puVar5);
        uVar6 = *(undefined8 *)(param_2 + 0x50);
        uVar8 = *(undefined8 *)(param_1[2] + 0x28);
        uVar7 = *(undefined8 *)(param_1[3] + 0x18);
        lVar4 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
        if (param_3 < 1) {
          lVar4 = *(long *)(lVar4 + 0x18);
        }
        else {
          uVar3 = uVar2 - 1;
          if (*(uint *)(lVar4 + 0x20) <= uVar2 - 1) {
            uVar3 = 0;
          }
          lVar4 = *(long *)(lVar4 + 0x28) + (ulong)uVar3 * 0x150;
        }
        FUN_03907810(lVar4,uVar6);
        FUN_03949e90(uVar6,lVar4,uVar8,uVar7,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
        FUN_0327e550(param_1[3],param_2);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    plVar1 = *(long **)(param_2 + 0x10);
    if (*(long **)(param_2 + 0x18) != (long *)0x0) {
      plVar1 = *(long **)(param_2 + 0x18);
    }
    (**(code **)(*plVar1 + 0x38))(plVar1,uVar6);
    lVar4 = *(long *)(param_2 + 0x10);
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar4 = *(long *)(param_2 + 0x18);
    }
    FUN_038e77e4(*(undefined8 *)(param_2 + 0x40),uVar6,lVar4);
  }
  return;
}

