
/* WARNING: Removing unreachable block (ram,0x0322e654) */
/* WARNING: Removing unreachable block (ram,0x0322e67c) */
/* WARNING: Removing unreachable block (ram,0x0322e690) */
/* WARNING: Removing unreachable block (ram,0x0322e6ac) */
/* WARNING: Removing unreachable block (ram,0x0322e6bc) */
/* WARNING: Removing unreachable block (ram,0x0322e8c0) */
/* WARNING: Removing unreachable block (ram,0x0322e6c4) */
/* WARNING: Removing unreachable block (ram,0x0322e8c4) */
/* WARNING: Removing unreachable block (ram,0x0322e7ac) */
/* WARNING: Removing unreachable block (ram,0x0322e7d4) */
/* WARNING: Removing unreachable block (ram,0x0322e7e4) */

undefined8 FUN_0322e5c4(long param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  byte bVar10;
  long lVar11;
  byte local_60 [8];
  undefined *local_58;
  char *pcStack_50;
  int local_44;
  
  puVar4 = PTR_DAT_04bb39b0;
  local_60[0] = *(byte *)(param_1 + 0x1f8);
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  if (lVar11 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      bVar10 = local_60[0];
      if (7 < local_60[0]) {
        bVar10 = 0xff;
      }
      uVar6 = (uint)(char)bVar10;
    }
  }
  *(undefined4 *)(param_1 + 0x2e4) = 0xffffffff;
  if (*(int *)(param_1 + 0x31c) == 2) {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 2;
  }
  else {
    if (*(int *)(param_1 + 0x31c) == -1) {
      if (*(char *)(param_1 + 0x30c) != '\0') {
        uVar9 = 0xffffffff;
        goto LAB_0322e920;
      }
      goto LAB_0322e838;
    }
    piVar1 = (int *)(param_1 + 0x2e8) + (ulong)uVar6 * 2;
    if (3 < uVar6) {
      piVar1 = (int *)(param_1 + 0x2e8);
    }
    local_44 = *piVar1;
    if (7 < local_60[0]) {
      local_60[0] = 0xff;
    }
    *(int *)(param_1 + 0x2e4) = local_44;
    iVar3 = piVar1[1];
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    if (local_44 == 0) {
      local_58 = PTR_DAT_04bb2020 + 0x10;
      pcStack_50 = "MainmenuRndDailyQuest";
      iVar5 = FUN_0274bce0(local_60,&local_58);
      if (iVar5 != 0) {
        uVar7 = FUN_027a2170(local_60,iVar3);
joined_r0x0322e82c:
        if ((uVar7 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x30c) = 1;
          uVar9 = *(undefined4 *)(param_1 + 0x2e4);
LAB_0322e920:
          *(undefined4 *)(param_1 + 0x2e0) = uVar9;
          *(undefined1 *)(param_1 + 0x30d) = 1;
          return 1;
        }
      }
    }
    else if (local_44 == 1) {
      local_58 = PTR_DAT_04bb2020 + 0x10;
      pcStack_50 = "MainmenuAchievement";
      iVar5 = FUN_0274bce0(local_60,&local_58);
      if (iVar5 != 0) {
        bVar10 = local_60[0];
        if (7 < local_60[0]) {
          bVar10 = 0xff;
        }
        local_58 = (undefined *)CONCAT71(local_58._1_7_,bVar10);
        lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
        if (lVar11 != 0) {
          if ((*(long **)(lVar11 + 0x18358) == (long *)0x0) ||
             (puVar8 = (undefined8 *)**(long **)(lVar11 + 0x18358), puVar8 == (undefined8 *)0x0)) {
            uVar6 = 1;
          }
          else {
            uVar6 = (**(code **)*puVar8)();
            uVar6 = uVar6 ^ 1;
          }
          uVar7 = FUN_027a2710(*(long *)(lVar11 + 0x18340) + *(long *)(lVar11 + 0x18338),0,iVar3);
          if ((((uVar6 & 1) == 0) && (*(long *)(lVar11 + 0x18358) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x18358) + 8),
             puVar8 != (undefined8 *)0x0)) {
            (**(code **)*puVar8)();
          }
          goto joined_r0x0322e82c;
        }
      }
    }
  }
  lVar11 = *(long *)puVar4;
  *(undefined1 *)(param_1 + 0x30c) = 0;
LAB_0322e838:
  if (lVar11 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      bVar10 = *(byte *)(param_1 + 0x1f8);
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      uVar6 = (uint)(char)bVar10;
    }
  }
  if (*(int *)(param_1 + 0x31c) == 2) {
    puVar2 = (undefined1 *)(param_1 + 0x310) + uVar6;
    if (3 < uVar6) {
      puVar2 = (undefined1 *)(param_1 + 0x310);
    }
    *puVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x31c) != -1) {
    puVar8 = (undefined8 *)(param_1 + 0x2e8) + uVar6;
    if (3 < uVar6) {
      puVar8 = (undefined8 *)(param_1 + 0x2e8);
    }
    *puVar8 = 0xffffffff;
  }
  uVar9 = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(param_1 + 800) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31c) = uVar9;
  return 0;
}

