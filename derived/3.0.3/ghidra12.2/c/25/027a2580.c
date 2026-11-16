
bool FUN_027a2580(byte *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined *local_50;
  char *pcStack_48;
  byte local_24 [4];
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "MainmenuAchievement";
  iVar3 = FUN_0274bce0(param_1,&local_50);
  if (iVar3 != 0) {
    local_24[0] = *param_1;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    lVar5 = FUN_025830c0(DAT_055021a0,local_24,1);
    if (lVar5 != 0) {
      if ((*(long **)(lVar5 + 0x18358) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x18358), puVar6 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 ^ 1;
      }
      uVar10 = *(uint *)(DAT_04da8a30 + 0x1d40);
      if (((int)uVar10 < 1) &&
         (((*(long *)(DAT_04da8a30 + 0x1c30) == 0 ||
           (puVar9 = *(uint **)(*(long *)(DAT_04da8a30 + 0x1c30) + 8), puVar9 == (uint *)0x0)) ||
          (uVar10 = *puVar9, uVar10 == 0)))) {
        bVar2 = false;
      }
      else {
        uVar7 = FUN_027a2710(*(long *)(lVar5 + 0x18340) + *(long *)(lVar5 + 0x18338),param_2 & 1,0);
        if ((uVar7 & 1) == 0) {
          uVar1 = 1;
          do {
            uVar8 = uVar1;
            if (uVar10 == uVar8) break;
            uVar7 = FUN_027a2710(*(long *)(lVar5 + 0x18340) + *(long *)(lVar5 + 0x18338),param_2 & 1
                                 ,uVar8);
            uVar1 = uVar8 + 1;
          } while ((uVar7 & 1) == 0);
          bVar2 = uVar8 < uVar10;
        }
        else {
          bVar2 = true;
        }
      }
      if ((uVar4 & 1) != 0) {
        return bVar2;
      }
      if (*(long *)(lVar5 + 0x18358) == 0) {
        return bVar2;
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x18358) + 8);
      if (puVar6 == (undefined8 *)0x0) {
        return bVar2;
      }
      (**(code **)*puVar6)();
      return bVar2;
    }
  }
  return false;
}

