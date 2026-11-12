
/* WARNING: Removing unreachable block (ram,0x006fad64) */
/* WARNING: Removing unreachable block (ram,0x006fad04) */
/* WARNING: Removing unreachable block (ram,0x006fad34) */
/* WARNING: Removing unreachable block (ram,0x006fad90) */

void FUN_006fab60(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined **local_4c0;
  undefined1 *local_4b8;
  int local_4b0;
  undefined1 local_4ac [1023];
  undefined1 local_ad;
  undefined *local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined1 local_94 [63];
  undefined1 local_55;
  
  local_4b8 = local_4ac;
  local_ad = 0;
  local_4b0 = 0x400;
  local_4ac[0] = 0;
  local_4c0 = &PTR_LAB_048fcfa0;
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar8 = (long)*(int *)(param_1 + 0xbc);
    plVar7 = (long *)(*(long *)(param_1 + 0xb0) - lVar8);
    do {
      if ((*(byte *)(plVar7 + 0x2f) >> 3 & 1) != 0) {
        (**(code **)(*plVar7 + 0xd8))(plVar7,&local_4c0);
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)((param_1 + 0xa8) - lVar8));
  }
  puVar3 = local_4b8;
  local_55 = 0;
  local_98 = 0x40;
  puStack_a0 = local_94;
  local_94[0] = 0;
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  (*(code *)local_4c0[3])(&local_4c0);
  lVar8 = 0;
  do {
    if (local_4b8[lVar8] == '\0') goto LAB_006fac8c;
    if (local_4b8[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_006fac8c;
    }
    if (local_4b8[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_006fac8c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_006fac8c:
  uVar1 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
  uVar2 = 3;
  if ((int)(local_4b0 - uVar1) < 4) {
    uVar2 = local_4b0 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    memcpy(puVar3 + uVar1,&DAT_04066cae,(ulong)uVar2);
    puVar3[(ulong)uVar2 + (ulong)uVar1] = 0;
  }
  FUN_038d13f0(&local_4c0,"%s[%d]",PTR_s_Clear_048fcf58,*(undefined4 *)(param_1 + 0xd8));
  FUN_038d13f0(&local_4c0,"%s[%d]",PTR_DAT_048fcf60,*(undefined4 *)(param_1 + 0xf8));
  FUN_038d13f0(&local_4c0,"%s[%d]",PTR_DAT_048fcf68,*(undefined4 *)(param_1 + 0x118));
  FUN_038d13f0(&local_4c0,"%s[%d]",PTR_DAT_048fcf70,*(undefined4 *)(param_1 + 0x138));
  puVar3 = local_4b8;
  (*(code *)local_4c0[3])(&local_4c0);
  lVar8 = 0;
  do {
    if (local_4b8[lVar8] == '\0') goto LAB_006fadf0;
    if (local_4b8[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_006fadf0;
    }
    if (local_4b8[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_006fadf0;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_006fadf0:
  uVar2 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
  uVar1 = local_4b0 + ~uVar2;
  if (1 < (int)(local_4b0 - uVar2)) {
    uVar1 = 1;
  }
  if (0 < (int)uVar1) {
    memcpy(puVar3 + uVar2,&DAT_040c2970,(ulong)uVar1);
    puVar3[(ulong)uVar1 + (ulong)uVar2] = 0;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (*(code *)local_4c0[3])(&local_4c0);
    uVar5 = 0;
    do {
      if (local_4b8[uVar5] == '\0') {
LAB_006fae80:
        iVar4 = (int)uVar5;
joined_r0x006fae84:
        if (iVar4 < 1) {
          return;
        }
        if (uVar5 == 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          do {
            if (local_4b8[uVar6] == '\n') {
              local_4b8[uVar6] = 10;
            }
            if (local_4b8[uVar6 + 1] == '\n') {
              local_4b8[uVar6 + 1] = 10;
            }
            uVar6 = uVar6 + 2;
          } while ((uVar5 & 0xfffffffffffffffe) != uVar6);
        }
        if ((uVar5 & 1) == 0) {
          return;
        }
        if (local_4b8[uVar6] == '\n') {
          local_4b8[uVar6] = 10;
          return;
        }
        return;
      }
      if (local_4b8[uVar5 + 1] == '\0') {
        uVar5 = uVar5 + 1;
        goto LAB_006fae80;
      }
      if (local_4b8[uVar5 + 2] == '\0') {
        uVar5 = uVar5 + 2;
        iVar4 = (int)uVar5;
        goto joined_r0x006fae84;
      }
      uVar5 = uVar5 + 3;
    } while (uVar5 != 0x80001);
  }
  return;
}

