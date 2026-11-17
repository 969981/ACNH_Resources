
void FUN_03104170(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  
  lVar8 = *(long *)(param_1 + 0x288);
  if (lVar8 != 0) {
    FUN_031029c0(lVar8);
    local_90 = *(undefined8 *)(*(long *)(lVar8 + 0x2b0) + 0x48);
    uStack_88 = *(undefined8 *)(*(long *)(lVar8 + 0x2b8) + 0x48);
    local_48 = **(short **)(param_2 + 8) == 0;
    local_47 = **(short **)(param_3 + 8) == 0;
    local_46 = **(short **)(param_4 + 8) == 0;
    uStack_58 = *(undefined8 *)(lVar8 + 0x2a0);
    local_70 = 0;
    uStack_68 = 0;
    local_80 = *(undefined8 *)(*(long *)(lVar8 + 0x2c0) + 0x48);
    uStack_78 = 0;
    local_60 = *(undefined8 *)(lVar8 + 0x298);
    local_50 = *(undefined8 *)(lVar8 + 0x2a8);
    FUN_03448970(param_1 + 0x290,&local_90);
    lVar8 = DAT_05355a60;
    if (DAT_05355a60 != 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x2b8);
      uVar10 = *(undefined4 *)(param_1 + 700);
      uVar2 = *(undefined8 *)(param_1 + 0x2c8);
      uVar3 = *(undefined8 *)(param_1 + 0x290);
      uVar4 = *(undefined8 *)(param_1 + 0x298);
      uVar5 = *(undefined8 *)(param_1 + 0x2a0);
      uVar6 = *(undefined8 *)(param_1 + 0x2a8);
      uVar7 = *(undefined8 *)(param_1 + 0x2b0);
      uVar1 = *(undefined1 *)(param_1 + 0x2d0);
      *(undefined8 *)(DAT_05355a60 + 0xf38) = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 *)(lVar8 + 0xf40) = uVar2;
      *(undefined8 *)(lVar8 + 0xf48) = uVar3;
      *(undefined8 *)(lVar8 + 0xf50) = uVar4;
      *(undefined8 *)(lVar8 + 0xf58) = uVar5;
      *(undefined8 *)(lVar8 + 0xf60) = uVar6;
      *(undefined8 *)(lVar8 + 0xf68) = uVar7;
      *(undefined4 *)(lVar8 + 0xf70) = uVar9;
      *(undefined4 *)(lVar8 + 0xf74) = uVar10;
      *(undefined1 *)(lVar8 + 0xf78) = uVar1;
    }
  }
  return;
}

