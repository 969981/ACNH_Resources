
void FUN_02cc9040(long *param_1,long param_2,uint param_3,uint param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined **local_50;
  undefined4 local_48;
  
  if (param_2 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x2f0))();
    if ((uVar6 & 1) != 0) {
      bVar4 = (param_3 & 1) == 0;
      lVar2 = 0x2c0;
      if (bVar4) {
        lVar2 = 0x2b8;
      }
      lVar3 = 0x2b8;
      if (bVar4) {
        lVar3 = 0x2c0;
      }
      uVar5 = (**(code **)(*param_1 + lVar2))(param_1);
      if (*(uint *)(param_2 + 0x2e8) <= uVar5) {
        uVar5 = 0;
      }
      plVar8 = *(long **)(*(long *)(param_2 + 0x2f0) + (long)(int)uVar5 * 8);
      uVar5 = (**(code **)(*param_1 + lVar3))(param_1);
      if (*(uint *)(param_2 + 0x2e8) <= uVar5) {
        uVar5 = 0;
      }
      plVar7 = *(long **)(*(long *)(param_2 + 0x2f0) + (long)(int)uVar5 * 8);
      if (plVar7 != (long *)0x0) {
        if ((param_4 & 1) == 0) {
          if (plVar8 != (long *)0x0) {
            ppuVar1 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
            local_48 = 3;
            local_50 = ppuVar1;
            (**(code **)(*plVar8 + 0x20))(plVar8,&local_50);
            uVar6 = (**(code **)(plVar8[3] + 0x50))(plVar8[1]);
            if ((uVar6 & 1) != 0) {
              local_50 = &PTR_FUN_04aa77b8;
              local_48 = 5;
              (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
              (**(code **)(plVar8[3] + 0x1b0))(plVar8[1]);
              local_48 = 2;
              local_50 = ppuVar1;
              (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
              (**(code **)(plVar8[3] + 0x38))(plVar8[1],0);
            }
          }
          local_50 = &PTR_FUN_04aa77b8;
          local_48 = 7;
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
          (**(code **)(plVar7[3] + 0x1c0))(plVar7[1]);
        }
        else {
          if (plVar8 != (long *)0x0) {
            ppuVar1 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
            local_48 = 3;
            local_50 = ppuVar1;
            (**(code **)(*plVar8 + 0x20))(plVar8,&local_50);
            uVar6 = (**(code **)(plVar8[3] + 0x50))(plVar8[1]);
            if ((uVar6 & 1) != 0) {
              local_50 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
              local_48 = 5;
              (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
              (**(code **)(plVar8[3] + 0x1b0))(plVar8[1]);
              local_48 = 2;
              local_50 = ppuVar1;
              (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
              (**(code **)(plVar8[3] + 0x38))(plVar8[1],0);
            }
          }
          local_50 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
          local_48 = 3;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_50);
          uVar6 = (**(code **)(plVar7[3] + 0x50))(plVar7[1]);
          if ((uVar6 & 1) == 0) {
            local_50 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
            local_48 = 1;
            (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
            (**(code **)(plVar7[3] + 400))(0x3f800000,plVar7[1]);
          }
        }
      }
    }
  }
  return;
}

