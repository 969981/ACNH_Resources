
bool FUN_016d1770(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined **local_c8;
  undefined1 *local_c0;
  int local_b8;
  undefined1 local_b4 [7];
  undefined1 local_ad;
  undefined **local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [7];
  undefined1 local_8d;
  undefined **local_88;
  undefined1 *local_80;
  int local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  undefined1 auStack_68 [8];
  
  uVar5 = FUN_016d0eb0(auStack_68,param_1,param_2);
  if ((uVar5 & 1) != 0) {
    return true;
  }
  local_6d = 0;
  local_74[0] = 0;
  local_78 = 8;
  local_88 = &PTR_LAB_04908da0;
  local_80 = local_74;
  if ((param_2 & 1) == 0) {
    FUN_021d7aa0(&local_88,param_1);
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1);
    puVar9 = (undefined1 *)param_1[1];
    if (local_74 != puVar9) {
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar7 = 0;
      do {
        if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_016d188c;
        lVar1 = param_1[1] + lVar7;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_016d188c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_016d188c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_016d188c:
      iVar2 = (int)lVar7;
      if (local_78 <= (int)lVar7) {
        iVar2 = local_78 + -1;
      }
      memcpy(local_74,puVar9,(long)iVar2);
      local_74[iVar2] = 0;
    }
  }
  uVar5 = 0;
  bVar3 = true;
  do {
    local_8d = 0;
    local_98 = 8;
    local_a8 = &PTR_LAB_04908da0;
    lVar7 = *(long *)PTR_DAT_04bb46b0;
    local_94[0] = 0;
    local_a0 = local_94;
    if (lVar7 != 0) {
      puVar8 = *(undefined8 **)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
        lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
        if (lVar7 != 0) {
          lVar7 = lVar7 + 0x70;
LAB_016d1960:
          lVar7 = lVar7 + uVar5 * 0xc40;
          if ((*(long **)(lVar7 + 0x20c0d8) == (long *)0x0) ||
             (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x20c0d8), puVar8 == (undefined8 *)0x0)) {
            FUN_02775100(*(long *)(lVar7 + 0x20c0c0) + *(long *)(lVar7 + 0x20c0b8),&local_a8);
          }
          else {
            uVar6 = (**(code **)*puVar8)();
            FUN_02775100(*(long *)(lVar7 + 0x20c0c0) + *(long *)(lVar7 + 0x20c0b8),&local_a8);
            if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x20c0d8) != 0)) &&
               (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x20c0d8) + 8),
               puVar8 != (undefined8 *)0x0)) {
              (**(code **)*puVar8)();
            }
          }
        }
      }
      else if (((puVar8 != (undefined8 *)0x0) && ((long *)puVar8[0x26] != (long *)0x0)) &&
              (lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar7 != 0))
      goto LAB_016d1960;
    }
    local_ad = 0;
    local_b4[0] = 0;
    local_b8 = 8;
    local_c8 = &PTR_LAB_04908da0;
    local_c0 = local_b4;
    if ((param_2 & 1) == 0) {
      FUN_021d7aa0(&local_c8,&local_a8);
    }
    else {
      (*(code *)local_a8[3])(&local_a8);
      puVar9 = local_a0;
      if (local_b4 != local_a0) {
        (*(code *)local_a8[3])(&local_a8);
        lVar7 = 0;
        do {
          if (local_a0[lVar7] == '\0') goto LAB_016d1a8c;
          if (local_a0[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_016d1a8c;
          }
          if (local_a0[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_016d1a8c;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_016d1a8c:
        iVar2 = (int)lVar7;
        if (local_b8 <= (int)lVar7) {
          iVar2 = local_b8 + -1;
        }
        memcpy(local_b4,puVar9,(long)iVar2);
        local_b4[iVar2] = 0;
      }
    }
    (*(code *)local_c8[3])(&local_c8);
    (*(code *)local_c8[3])(&local_c8);
    puVar9 = local_c0;
    (*(code *)local_88[3])(&local_88);
    if (puVar9 == local_80) {
      return bVar3;
    }
    uVar6 = 0;
    bVar4 = true;
    do {
      if (local_c0[uVar6] != local_80[uVar6]) break;
      if (local_c0[uVar6] == '\0') {
        if (bVar4) {
          return bVar3;
        }
        break;
      }
      if (local_c0[uVar6 + 1] != local_80[uVar6 + 1]) break;
      if (local_c0[uVar6 + 1] == '\0') {
        return bVar3;
      }
      if (local_c0[uVar6 + 2] != local_80[uVar6 + 2]) break;
      if (local_c0[uVar6 + 2] == '\0') {
        return bVar3;
      }
      bVar4 = uVar6 < 0x7fffe;
      uVar6 = uVar6 + 3;
    } while (uVar6 != 0x80001);
    bVar3 = uVar5 < 7;
    uVar5 = uVar5 + 1;
    if (uVar5 == 8) {
      return bVar3;
    }
  } while( true );
}

