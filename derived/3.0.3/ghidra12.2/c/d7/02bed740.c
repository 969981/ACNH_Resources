
/* WARNING: Removing unreachable block (ram,0x02bed788) */

void FUN_02bed740(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined1 *puStack_c8;
  int local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  byte local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  
  local_e0 = CONCAT44(local_e0._4_4_,3);
  puVar12 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  uVar6 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc7278);
  puVar1 = PTR_DAT_04bb2bc0;
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x210);
  if ((*(long *)(lVar7 + 0x598) != 0) && (0 < *(int *)(*(long *)(lVar7 + 0x598) + 0x3cc))) {
    local_c0 = 0x40;
    local_7d = 0;
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    local_bc[0] = 0;
    local_78 = 0xff;
    local_74 = 0;
    local_6c = 0xffffffffffffffff;
    local_70 = 0;
    uStack_d8 = 0xffffffffffffffff;
    local_e0 = 0xffffffff00000004;
    puStack_c8 = local_bc;
    (**(code **)(DAT_056484e8 + 0x18))(&DAT_056484e8);
    puVar2 = DAT_056484f0;
    if (local_bc != DAT_056484f0) {
      (**(code **)(DAT_056484e8 + 0x18))(&DAT_056484e8);
      lVar7 = 0;
      do {
        if (DAT_056484f0[lVar7] == '\0') goto LAB_02bed8ac;
        if (DAT_056484f0[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_02bed8ac;
        }
        if (DAT_056484f0[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_02bed8ac;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_02bed8ac:
      iVar5 = (int)lVar7;
      if (local_c0 <= (int)lVar7) {
        iVar5 = local_c0 + -1;
      }
      memcpy(local_bc,puVar2,(long)iVar5);
      local_bc[iVar5] = 0;
    }
    local_78 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_78) {
      local_78 = 0xff;
    }
    FUN_02ee2b00(puVar12,&local_e0,1);
    lVar7 = *(long *)(param_1 + 0x210);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0x570) + 0xa0);
  if (lVar7 != 0) {
    local_7d = 0;
    local_c0 = 0x40;
    local_bc[0] = 0;
    local_d0 = puVar1 + 0x10;
    local_78 = 0xff;
    local_74 = 0;
    local_6c = 0xffffffffffffffff;
    local_70 = 0;
    uStack_d8 = 0xffffffffffffffff;
    local_e0 = CONCAT44(0xffffffff,*(undefined4 *)(lVar7 + 0x14));
    puStack_c8 = local_bc;
    (**(code **)(DAT_056484f8 + 0x18))(&DAT_056484f8);
    puVar2 = DAT_05648500;
    if (local_bc != DAT_05648500) {
      (**(code **)(DAT_056484f8 + 0x18))(&DAT_056484f8);
      lVar7 = 0;
      do {
        if (DAT_05648500[lVar7] == '\0') goto LAB_02bed9d0;
        if (DAT_05648500[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_02bed9d0;
        }
        if (DAT_05648500[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_02bed9d0;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_02bed9d0:
      iVar5 = (int)lVar7;
      if (local_c0 <= (int)lVar7) {
        iVar5 = local_c0 + -1;
      }
      memcpy(local_bc,puVar2,(long)iVar5);
      local_bc[iVar5] = 0;
    }
    local_78 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_78) {
      local_78 = 0xff;
    }
    FUN_02ee2b00(puVar12,&local_e0,1);
  }
  local_e0 = CONCAT44(local_e0._4_4_,*(int *)(param_1 + 0x1d254));
  iVar5 = *(int *)(param_1 + 0x1d258);
  if (*(int *)(param_1 + 0x1d254) == 0) {
    bVar4 = FUN_03401c30();
    bVar3 = *(int *)(param_1 + 0x1d270) != iVar5;
    if ((bVar4 & 1) == 0 && !bVar3) goto LAB_02bedb18;
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x578) + 0xa0);
    if (lVar7 == 0) {
      bVar4 = 1;
    }
    else {
      bVar4 = bVar4 & 1 | bVar3;
      local_7d = 0;
      local_d0 = puVar1 + 0x10;
      local_bc[0] = 0;
      local_c0 = 0x40;
      local_78 = 0xff;
      local_74 = 0;
      local_6c = 0xffffffffffffffff;
      local_70 = 0;
      uStack_d8 = 0xffffffffffffffff;
      local_e0 = CONCAT44(0xffffffff,*(undefined4 *)(lVar7 + 0x14));
      puStack_c8 = local_bc;
      (**(code **)(DAT_05648508 + 0x18))(&DAT_05648508);
      puVar2 = DAT_05648510;
      if (local_bc != DAT_05648510) {
        (**(code **)(DAT_05648508 + 0x18))(&DAT_05648508);
        lVar7 = 0;
        do {
          if (DAT_05648510[lVar7] == '\0') goto LAB_02bedcec;
          if (DAT_05648510[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_02bedcec;
          }
          if (DAT_05648510[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_02bedcec;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_02bedcec:
        iVar5 = (int)lVar7;
        if (local_c0 <= (int)lVar7) {
          iVar5 = local_c0 + -1;
        }
        memcpy(local_bc,puVar2,(long)iVar5);
        local_bc[iVar5] = 0;
      }
      local_78 = *(byte *)(param_1 + 0x1f8);
      if (7 < local_78) {
        local_78 = 0xff;
      }
      FUN_02ee2b00(puVar12,&local_e0,1);
    }
  }
  else {
LAB_02bedb18:
    bVar4 = 0;
  }
  *(byte *)(param_1 + 0x1d268) = bVar4;
  if (*(int *)(param_1 + 0x1c1c8) != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x1c1d0);
    uVar11 = (long)*(int *)(param_1 + 0x1c1c8) - 1U & 0x1fffffffffffffff;
    uVar6 = uVar11 + 1;
    uVar10 = 0;
    if (uVar11 != 0) {
      uVar10 = 0;
      uVar11 = uVar6 & 0x3ffffffffffffffe;
      puVar9 = puVar8;
      do {
        puVar8 = puVar9 + 2;
        if (*(short *)*puVar9 != -2) {
          uVar10 = uVar10 + 1;
        }
        if (*(short *)puVar9[1] != -2) {
          uVar10 = uVar10 + 1;
        }
        uVar11 = uVar11 - 2;
        puVar9 = puVar8;
      } while (uVar11 != 0);
    }
    if (((uVar6 & 1) != 0) && (*(short *)*puVar8 != -2)) {
      uVar10 = uVar10 + 1;
    }
    bVar3 = 2 < uVar10;
    if (2 < uVar10) {
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x580) + 0xa0);
      if (lVar7 == 0) {
        bVar3 = true;
      }
      else {
        local_c0 = 0x40;
        local_7d = 0;
        local_d0 = puVar1 + 0x10;
        local_bc[0] = 0;
        local_78 = 0xff;
        local_74 = 0;
        local_6c = 0xffffffffffffffff;
        local_70 = 0;
        uStack_d8 = 0xffffffffffffffff;
        local_e0 = CONCAT44(0xffffffff,*(undefined4 *)(lVar7 + 0x14));
        puStack_c8 = local_bc;
        (**(code **)(DAT_05648518 + 0x18))(&DAT_05648518);
        puVar2 = DAT_05648520;
        if (local_bc != DAT_05648520) {
          (**(code **)(DAT_05648518 + 0x18))(&DAT_05648518);
          lVar7 = 0;
          do {
            if (DAT_05648520[lVar7] == '\0') goto LAB_02bedc74;
            if (DAT_05648520[lVar7 + 1] == '\0') {
              lVar7 = lVar7 + 1;
              goto LAB_02bedc74;
            }
            if (DAT_05648520[lVar7 + 2] == '\0') {
              lVar7 = lVar7 + 2;
              goto LAB_02bedc74;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          lVar7 = 0;
LAB_02bedc74:
          iVar5 = (int)lVar7;
          if (local_c0 <= (int)lVar7) {
            iVar5 = local_c0 + -1;
          }
          memcpy(local_bc,puVar2,(long)iVar5);
          local_bc[iVar5] = 0;
        }
        local_78 = *(byte *)(param_1 + 0x1f8);
        if (7 < local_78) {
          local_78 = 0xff;
        }
        FUN_02ee2b00(puVar12,&local_e0,1);
      }
      goto LAB_02bedcbc;
    }
  }
  bVar3 = false;
LAB_02bedcbc:
  *(bool *)(param_1 + 0x1d269) = bVar3;
  return;
}

