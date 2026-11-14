
void FUN_0150cfe0(long param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined *local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar3 = param_1;
  if ((param_2 != 0) && (lVar6 == 0)) {
    lVar3 = FUN_038c6d48(0x100000,&DAT_0520eff8,param_2,8,1,0);
    *(long *)(param_1 + 8) = lVar3;
    lVar6 = lVar3;
  }
  lVar1 = param_1 + 0x24e0;
  uVar7 = 0;
  do {
    local_168 = (undefined *)CONCAT44(local_168._4_4_,uVar7);
    uVar4 = (ulong)uVar7;
    if (10 < uVar7) {
      uVar4 = 0;
    }
    *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
    if (uVar7 != 0) {
      uVar4 = (ulong)uVar7;
      if (10 < uVar7) {
        uVar4 = 0;
      }
      if (*(long *)(lVar1 + uVar4 * 8) == 0) {
        puVar2 = &DAT_052163b8 + uVar7;
        if (10 < uVar7) {
          puVar2 = &DAT_052163b8;
        }
        lVar3 = FUN_015481a4(lVar3,lVar6,*puVar2);
        uVar4 = (ulong)local_168 & 0xffffffff;
        if (10 < (uint)local_168) {
          uVar4 = 0;
        }
        *(long *)(lVar1 + uVar4 * 8) = lVar3;
      }
    }
    uVar8 = 0xb;
    if ((int)uVar7 < 0xb) {
      uVar8 = uVar7 + 1;
    }
    uVar7 = uVar8;
  } while (uVar8 != 0xb);
  FUN_015527e0(param_1 + 0x2540,*(undefined8 *)(param_1 + 8));
  FUN_014b38b0(param_1 + 0x2868,*(undefined8 *)(param_1 + 8));
  lVar3 = DAT_05295dc8;
  if (DAT_05295dc8 != 0) {
    *(code **)(DAT_05295dc8 + 0x18) = FUN_0150d198;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined ***)(lVar3 + 8) = &PTR_LAB_049a7268;
    *(long *)(lVar3 + 0x10) = param_1;
  }
  FUN_01441b60(param_2);
  local_158 = 0x100;
  local_55 = 0;
  plVar5 = *(long **)PTR_DAT_04bbccb0;
  local_154[0] = 0;
  puStack_160 = local_154;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  uVar4 = (**(code **)(*plVar5 + 0xf0))(plVar5,&local_168,1);
  if ((uVar4 & 1) != 0) {
    FUN_03c27e60(plVar5,&local_168,param_2);
  }
  return;
}

