
/* WARNING: Removing unreachable block (ram,0x0322c564) */
/* WARNING: Removing unreachable block (ram,0x0322c584) */
/* WARNING: Removing unreachable block (ram,0x0322c598) */
/* WARNING: Removing unreachable block (ram,0x0322c5b4) */
/* WARNING: Removing unreachable block (ram,0x0322c5c4) */
/* WARNING: Removing unreachable block (ram,0x0322c724) */
/* WARNING: Removing unreachable block (ram,0x0322c5cc) */
/* WARNING: Removing unreachable block (ram,0x0322c728) */
/* WARNING: Removing unreachable block (ram,0x0322c744) */
/* WARNING: Removing unreachable block (ram,0x0322c74c) */
/* WARNING: Removing unreachable block (ram,0x0322c754) */
/* WARNING: Removing unreachable block (ram,0x0322c760) */
/* WARNING: Removing unreachable block (ram,0x0322c6bc) */
/* WARNING: Removing unreachable block (ram,0x0322c6dc) */
/* WARNING: Removing unreachable block (ram,0x0322c6ec) */

void FUN_0322c488(long param_1,undefined4 *param_2,byte *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  byte bVar9;
  ulong uVar10;
  byte local_84 [4];
  byte local_80;
  int local_7c;
  undefined *local_78;
  char *pcStack_70;
  int local_64;
  
  puVar3 = PTR_DAT_04bb2020;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "PlayerMainUImenuEnable";
  local_7c = param_4;
  iVar4 = FUN_0274bce0(param_1 + 0x1f8,&local_78);
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 0x30c) = 0;
    return;
  }
  if ((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (ulong)*param_3;
    if (3 < *param_3) {
      return;
    }
  }
  iVar4 = *(int *)(param_1 + 0x31c);
  if (local_7c == 2) {
    if (*(char *)(param_1 + 0x310 + uVar10) != '\0') {
      local_80 = *param_3;
      if (7 < local_80) {
        local_80 = 0xff;
      }
      local_64 = 2;
    }
    *(undefined1 *)(param_1 + 0x310 + uVar10) = 1;
    *(undefined4 *)(param_1 + 0x31c + (ulong)(iVar4 != -1) * 4) = 2;
    goto LAB_0322c7d8;
  }
  piVar1 = (int *)(param_1 + 0x2e8 + uVar10 * 8);
  iVar5 = *piVar1;
  if (iVar5 == -1) {
    *piVar1 = local_7c;
    piVar1[1] = param_5;
  }
  else {
    local_84[0] = *param_3;
    iVar2 = piVar1[1];
    if (7 < local_84[0]) {
      local_84[0] = 0xff;
    }
    local_64 = iVar5;
    if (iVar5 == 0) {
      local_78 = puVar3 + 0x10;
      pcStack_70 = "MainmenuRndDailyQuest";
      iVar5 = FUN_0274bce0(local_84,&local_78);
      if (iVar5 != 0) {
        uVar10 = FUN_027a2170(local_84,iVar2);
joined_r0x0322c71c:
        if ((uVar10 & 1) != 0) goto LAB_0322c7d8;
      }
    }
    else if (iVar5 == 1) {
      local_78 = puVar3 + 0x10;
      pcStack_70 = "MainmenuAchievement";
      iVar5 = FUN_0274bce0(local_84,&local_78);
      if (iVar5 != 0) {
        bVar9 = local_84[0];
        if (7 < local_84[0]) {
          bVar9 = 0xff;
        }
        local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar9);
        lVar7 = FUN_025830c0(DAT_055021a0,&local_78,1);
        if (lVar7 != 0) {
          if ((*(long **)(lVar7 + 0x18358) == (long *)0x0) ||
             (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18358), puVar8 == (undefined8 *)0x0)) {
            uVar6 = 1;
          }
          else {
            uVar6 = (**(code **)*puVar8)();
            uVar6 = uVar6 ^ 1;
          }
          uVar10 = FUN_027a2710(*(long *)(lVar7 + 0x18340) + *(long *)(lVar7 + 0x18338),0,iVar2);
          if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x18358) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18358) + 8), puVar8 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar8)();
          }
          goto joined_r0x0322c71c;
        }
      }
    }
    piVar1[1] = param_5;
    *piVar1 = local_7c;
  }
  *(int *)(param_1 + 0x31c + (ulong)(iVar4 != -1) * 4) = local_7c;
LAB_0322c7d8:
  if (*(char *)(param_1 + 0x30c) == '\0') {
    uVar10 = FUN_0322c818(param_1);
    if ((uVar10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2dc) = *param_2;
    }
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  return;
}

