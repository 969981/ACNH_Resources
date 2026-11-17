
void FUN_031042a0(long param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  
  local_88 = CONCAT62(local_88._2_6_,param_2);
  local_90 = PTR_DAT_04bc06f8 + 0x10;
  FUN_03448808(param_1 + 0x290,&local_90);
  lVar3 = *(long *)(param_1 + 0x288);
  if (lVar3 != 0) {
    local_60 = *(undefined8 *)(lVar3 + 0x298);
    uStack_58 = *(undefined8 *)(lVar3 + 0x2a0);
    local_70 = 0;
    uStack_68 = 0;
    local_50 = *(undefined8 *)(lVar3 + 0x2a8);
    local_90 = *(undefined **)(*(long *)(lVar3 + 0x2b0) + 0x48);
    local_80 = *(undefined8 *)(*(long *)(lVar3 + 0x2c0) + 0x48);
    local_88 = *(undefined8 *)(*(long *)(lVar3 + 0x2b8) + 0x48);
    uStack_78 = 0;
    local_48 = 0x101;
    local_46 = 1;
    FUN_03448970(param_1 + 0x290,&local_90);
    lVar3 = DAT_05355a60;
    if (DAT_05355a60 != 0) {
      uVar13 = *(undefined4 *)(param_1 + 0x2b8);
      uVar14 = *(undefined4 *)(param_1 + 700);
      uVar4 = *(undefined8 *)(param_1 + 0x2c8);
      uVar5 = *(undefined8 *)(param_1 + 0x290);
      uVar6 = *(undefined8 *)(param_1 + 0x298);
      uVar7 = *(undefined8 *)(param_1 + 0x2a0);
      uVar8 = *(undefined8 *)(param_1 + 0x2a8);
      uVar9 = *(undefined8 *)(param_1 + 0x2b0);
      uVar1 = *(undefined1 *)(param_1 + 0x2d0);
      *(undefined8 *)(DAT_05355a60 + 0xf38) = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 *)(lVar3 + 0xf40) = uVar4;
      *(undefined8 *)(lVar3 + 0xf48) = uVar5;
      *(undefined8 *)(lVar3 + 0xf50) = uVar6;
      *(undefined8 *)(lVar3 + 0xf58) = uVar7;
      *(undefined8 *)(lVar3 + 0xf60) = uVar8;
      *(undefined8 *)(lVar3 + 0xf68) = uVar9;
      *(undefined4 *)(lVar3 + 0xf70) = uVar13;
      *(undefined4 *)(lVar3 + 0xf74) = uVar14;
      *(undefined1 *)(lVar3 + 0xf78) = uVar1;
    }
    puVar2 = PTR_DAT_04bc0cb8;
    lVar3 = *(long *)(param_1 + 0x288);
    if (lVar3 != 0) {
      plVar12 = *(long **)(lVar3 + 0x298);
      plVar11 = *(long **)(lVar3 + 0x2a0);
      plVar10 = *(long **)(lVar3 + 0x2a8);
      if (plVar12 != (long *)0x0) {
        local_90 = PTR_DAT_04bc0cb8 + 0x10;
        local_88 = CONCAT44(local_88._4_4_,7);
        (**(code **)(*plVar12 + 0x18))(plVar12,&local_90);
        (**(code **)(plVar12[3] + 0x88))(plVar12[1],0);
      }
      if (plVar11 != (long *)0x0) {
        local_90 = puVar2 + 0x10;
        local_88 = CONCAT44(local_88._4_4_,7);
        (**(code **)(*plVar11 + 0x18))(plVar11,&local_90);
        (**(code **)(plVar11[3] + 0x88))(plVar11[1],0);
      }
      if (plVar10 != (long *)0x0) {
        local_90 = puVar2 + 0x10;
        local_88 = CONCAT44(local_88._4_4_,7);
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_90);
        (**(code **)(plVar10[3] + 0x88))(plVar10[1],0);
      }
      if (*(long *)(param_1 + 0x288) != 0) {
        plVar10 = *(long **)(*(long *)(param_1 + 0x288) + 0x2c8);
        local_90 = PTR_DAT_04bc4f00 + 0x10;
        local_88 = CONCAT44(local_88._4_4_,0x14);
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_90);
        (**(code **)(plVar10[3] + 0x158))(0x40400000,plVar10[1]);
      }
    }
  }
  return;
}

