
void FUN_0313bfdc(long param_1,uint param_2,uint param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined **local_30;
  undefined4 local_28;
  
  if (((int)param_2 < 0x31) && (*(long *)(param_1 + 0x210) != 0)) {
    plVar5 = (long *)(*(long *)(param_1 + 0x210) + 0x300);
    plVar1 = plVar5 + param_2;
    if (0x30 < param_2) {
      plVar1 = plVar5;
    }
    lVar3 = *plVar1;
    if (((lVar3 != 0) &&
        (plVar5 = *(long **)(*(long *)(lVar3 + 0x2f0) + (ulong)(1 < *(uint *)(lVar3 + 0x2e8)) * 8),
        plVar5 != (long *)0x0)) && (plVar5[1] != 0)) {
      if ((param_4 & 1) == 0) {
        if ((param_3 & 1) == 0) {
          local_30 = &PTR_LAB_04aa7fe0;
          local_28 = 0xb;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
          uVar2 = (**(code **)(plVar5[3] + 0xd0))(plVar5[1]);
          if ((uVar2 & 1) != 0) {
            return;
          }
          local_30 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
          local_28 = 1;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
          lVar3 = plVar5[3];
          uVar6 = 0xbf800000;
        }
        else {
          local_30 = &PTR_LAB_04aa7fe0;
          local_28 = 0xc;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
          uVar2 = (**(code **)(plVar5[3] + 0xe0))(plVar5[1]);
          if ((uVar2 & 1) != 0) {
            return;
          }
          local_30 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
          local_28 = 1;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
          lVar3 = plVar5[3];
          uVar6 = 0x3f800000;
        }
        (**(code **)(lVar3 + 400))(uVar6,plVar5[1]);
      }
      else {
        if ((param_3 & 1) == 0) {
          local_30 = &PTR_FUN_04aa77b8;
          local_28 = 6;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
          lVar3 = plVar5[1];
          pcVar4 = *(code **)(plVar5[3] + 0x1b8);
        }
        else {
          local_30 = &PTR_FUN_04aa77b8;
          local_28 = 7;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
          lVar3 = plVar5[1];
          pcVar4 = *(code **)(plVar5[3] + 0x1c0);
        }
        (*pcVar4)(lVar3);
      }
    }
  }
  return;
}

