
bool FUN_02d6ca10(byte *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 local_1748;
  undefined8 local_1740;
  undefined8 local_1738;
  uint local_1730;
  undefined8 local_172c;
  undefined8 local_1724;
  undefined8 local_171c;
  undefined8 local_1714;
  undefined8 local_170c;
  undefined8 local_1704;
  undefined1 auStack_16fa [2];
  undefined1 auStack_16f8 [8];
  undefined8 local_16f0;
  undefined8 uStack_16e8;
  undefined8 local_16e0;
  byte local_34 [2];
  undefined1 auStack_32 [2];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar4 = FUN_02583354(DAT_055021a0,local_34,1);
  if (lVar4 == 0) {
    return false;
  }
  if ((*(long *)(lVar4 + 0x178) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x178) + 0x10), puVar5 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar5)();
    uVar2 = uVar2 ^ 1;
  }
  FUN_007ef010(auStack_16fa,param_2);
  FUN_00805ba8(auStack_16f8,auStack_16fa);
  local_1714 = 0xfffe;
  FUN_0277d4ac(&local_1714);
  local_170c = 0xfffe;
  FUN_0277d4ac(&local_170c);
  local_1704 = 0xfffe;
  FUN_0277d4ac(&local_1704);
  local_172c = 0xfffe;
  FUN_0277d4ac(&local_172c);
  local_1724 = 0xfffe;
  FUN_0277d4ac(&local_1724);
  local_171c = 0xfffe;
  FUN_0277d4ac(&local_171c);
  local_1730 = 0;
  local_1748 = 0xfffe;
  FUN_0277d4ac(&local_1748);
  local_1740 = 0xfffe;
  FUN_0277d4ac(&local_1740);
  local_1738 = 0xfffe;
  FUN_0277d4ac(&local_1738);
  uVar6 = FUN_007ef180(param_2);
  if (((uVar6 & 1) == 0) || (uVar6 = FUN_0344ca60(param_2), (uVar6 & 1) != 0)) {
    if ((*(long *)(lVar4 + 0x178) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar4 + 0x178) + 0x20), plVar7 != (long *)0x0)) {
      local_16f0 = *(undefined8 *)(lVar4 + 0x158);
      uStack_16e8 = *(undefined8 *)(lVar4 + 0x160);
      local_16e0 = 0x1198;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_16f0);
    }
    FUN_0255da20(&local_16f0,*(long *)(lVar4 + 0x160) + *(long *)(lVar4 + 0x158));
    FUN_02668230(&local_16f0,auStack_16f8,0,&local_1714,&local_172c,&local_1730,&local_1748);
  }
  else {
    FUN_007ef010(auStack_32,param_2);
    FUN_007e4920(&local_16f0,auStack_32);
    uVar3 = FUN_007e68d0(&local_16f0);
    if ((0x19 < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x3038000U) == 0)) {
      bVar1 = false;
      goto joined_r0x02d6cc6c;
    }
    if ((*(long *)(lVar4 + 0x178) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar4 + 0x178) + 0x20), plVar7 != (long *)0x0)) {
      local_16f0 = *(undefined8 *)(lVar4 + 0x158);
      uStack_16e8 = *(undefined8 *)(lVar4 + 0x160);
      local_16e0 = 0x1198;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_16f0);
    }
    FUN_02d6de1c(&local_16f0,*(long *)(lVar4 + 0x160) + *(long *)(lVar4 + 0x158));
    FUN_026669f0(&local_16f0,auStack_16f8,0,&local_1714,&local_172c,&local_1730,&local_1748);
  }
  uVar3 = FUN_026731d0(param_1);
  bVar1 = local_1730 <= uVar3;
joined_r0x02d6cc6c:
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x178) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x178) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return bVar1;
}

