
bool FUN_0308b8e0(byte *param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 local_176c [24];
  undefined1 local_1754;
  undefined8 local_1750;
  undefined8 local_1748;
  undefined8 local_1740;
  undefined1 auStack_1732 [2];
  undefined1 auStack_1730 [5792];
  int local_90;
  short sStack_8c;
  undefined2 uStack_8a;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int iStack_7c;
  undefined1 local_78;
  int local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  int iStack_60;
  byte local_54 [4];
  
  local_54[0] = *param_1;
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_54,1);
  if (lVar6 == 0) {
    bVar2 = false;
  }
  else {
    if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    lVar1 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
    FUN_007ef010(auStack_1732,param_2);
    FUN_007e4920(auStack_1730,auStack_1732);
    FUN_007e6230(local_176c,auStack_1730);
    local_90 = local_176c._0_4_;
    sStack_8c = local_176c._4_2_;
    uStack_8a = local_176c._6_2_;
    uStack_88 = local_176c._8_4_;
    uStack_84 = local_176c._12_4_;
    local_80 = local_176c._16_4_;
    iStack_7c = local_176c._20_4_;
    local_78 = local_1754;
    local_74 = (int)local_1750;
    uStack_70 = (undefined4)((ulong)local_1750 >> 0x20);
    local_6c = (undefined4)local_1748;
    uStack_68 = (undefined4)((ulong)local_1748 >> 0x20);
    local_64 = (undefined4)local_1740;
    iStack_60 = (int)((ulong)local_1740 >> 0x20);
    if ((*(int *)(lVar1 + 0xc154) == local_74) &&
       ((CONCAT44(local_6c,uStack_70) == *(long *)(lVar1 + 0xc158) &&
        CONCAT44(local_64,uStack_68) == *(long *)(lVar1 + 0xc160)) &&
        iStack_60 == *(int *)(lVar1 + 0xc168))) {
      bVar3 = *(short *)(lVar1 + 0xc13c) == 0;
      bVar4 = *(int *)(lVar1 + 0xc138) == local_90;
      bVar2 = bVar4 && (bVar3 || sStack_8c == 0);
      if ((!bVar3 && sStack_8c != 0) && (bVar4)) {
        bVar2 = (CONCAT44(uStack_88,local_176c._4_4_) == *(long *)(lVar1 + 0xc13c) &&
                CONCAT44(local_80,uStack_84) == *(long *)(lVar1 + 0xc144)) &&
                iStack_7c == *(int *)(lVar1 + 0xc14c);
      }
    }
    else {
      bVar2 = false;
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return bVar2;
}

