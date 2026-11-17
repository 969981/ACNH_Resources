
void FUN_03109e34(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined *local_40;
  undefined4 local_38;
  
  if (*(short *)(param_1 + 0x280) != DAT_04cb6038) {
    uVar5 = FUN_007ef180(param_1 + 0x280);
    if (((uVar5 & 1) != 0) && (plVar9 = *(long **)(param_1 + 0x278), plVar9 != (long *)0x0)) {
      lVar7 = *(long *)(param_1 + 0x210);
      local_60 = (**(code **)(*plVar9 + 0x40))(plVar9);
      plVar8 = (long *)0x0;
      if (lVar7 != 0) {
        uVar2 = local_60;
        if (0x11 < local_60) {
          uVar2 = 0;
        }
        puVar1 = (undefined8 *)(lVar7 + 0x230);
        puVar3 = puVar1 + (uint)(&DAT_056d3580)[(int)uVar2];
        if (0x25 < (uint)(&DAT_056d3580)[(int)uVar2]) {
          puVar3 = puVar1;
        }
        plVar8 = (long *)*puVar3;
      }
      lVar7 = *(long *)(param_1 + 0x220);
      local_60 = (**(code **)(**(long **)(param_1 + 0x278) + 0x40))();
      if (lVar7 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        uVar2 = local_60;
        if (0x11 < local_60) {
          uVar2 = 0;
        }
        uVar2 = *(uint *)((long)&DAT_056d3610 + (long)(int)uVar2 * 4);
        puVar1 = (undefined8 *)(lVar7 + 0x210);
        puVar3 = puVar1 + uVar2;
        if (0x21 < uVar2) {
          puVar3 = puVar1;
        }
        plVar6 = (long *)*puVar3;
      }
      local_70 = &DAT_3f8000003f800000;
      local_68 = 0;
      (**(code **)(*plVar9 + 0x38))(plVar9,&local_68,&local_70);
      puVar4 = PTR_DAT_04bc0cb8;
      if (plVar8 != (long *)0x0) {
        local_40 = PTR_DAT_04bc0cb8 + 0x10;
        local_38 = 0x50;
        local_60 = (uint)local_68;
        uStack_5c = local_68._4_4_;
        local_58 = (undefined4)local_70;
        uStack_54 = local_68._4_4_;
        local_50 = (uint)local_68;
        uStack_4c = local_70._4_4_;
        local_48 = (undefined4)local_70;
        uStack_44 = local_70._4_4_;
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_40);
        (**(code **)(plVar8[3] + 0x518))(plVar8[1],0,&local_60);
      }
      if (plVar6 != (long *)0x0) {
        local_40 = puVar4 + 0x10;
        local_38 = 0x50;
        local_60 = (uint)local_68;
        uStack_5c = local_68._4_4_;
        local_58 = (undefined4)local_70;
        uStack_54 = local_68._4_4_;
        local_50 = (uint)local_68;
        uStack_4c = local_70._4_4_;
        local_48 = (undefined4)local_70;
        uStack_44 = local_70._4_4_;
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
        (**(code **)(plVar6[3] + 0x518))(plVar6[1],0,&local_60);
      }
    }
  }
  return;
}

