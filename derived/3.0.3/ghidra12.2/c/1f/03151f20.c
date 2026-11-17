
void FUN_03151f20(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *__src;
  byte bVar15;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  int local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  byte local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  
  lVar10 = *(long *)PTR_DAT_04bb7ff8;
  if ((((((lVar10 == 0) || (*(int *)(lVar10 + 0x210) != -1 || *(byte *)(lVar10 + 0x214) < 8)) ||
        (*(int *)(lVar10 + 0x224) != -1 || *(byte *)(lVar10 + 0x228) < 8)) ||
       ((*(int *)(lVar10 + 0x238) != -1 || *(byte *)(lVar10 + 0x23c) < 8 ||
        (*(int *)(lVar10 + 0x24c) != -1)))) || (*(byte *)(lVar10 + 0x250) < 8)) &&
     (*(int *)(param_1 + 0x1b0) != 2)) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x220);
  if (lVar10 == 0) {
    return;
  }
  if (0 < *(int *)(lVar10 + 0x218)) {
    lVar11 = 0;
    puVar14 = *(undefined8 **)(lVar10 + 0x228);
    do {
      puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x220) + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *puVar13 = puVar14;
      *(undefined8 **)(lVar10 + 0x228) = puVar13;
      puVar14 = puVar13;
    } while (lVar11 < *(int *)(lVar10 + 0x218));
  }
  puVar5 = PTR_DAT_04bb32e0;
  *(undefined4 *)(lVar10 + 0x218) = 0;
  *(undefined1 *)(lVar10 + 0x239) = 0;
  puVar4 = PTR_DAT_04bb2bc0;
  local_7d = 0;
  local_bc[0] = 0;
  bVar15 = *puVar5;
  local_c0 = 0x40;
  local_d8 = 0xffffffffffffffff;
  local_78 = 0xff;
  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
  local_74 = 0;
  local_6c = 0xffffffffffffffff;
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  local_70 = 0;
  *(byte *)(lVar10 + 0x238) = bVar15;
  local_e0 = CONCAT44(0xffffffff,DAT_056fa1f8);
  local_c8 = local_bc;
  (**(code **)(DAT_056fa050 + 0x18))(&DAT_056fa050);
  puVar6 = DAT_056fa058;
  if (local_bc != DAT_056fa058) {
    (**(code **)(DAT_056fa050 + 0x18))(&DAT_056fa050);
    lVar11 = 0;
    do {
      if (DAT_056fa058[lVar11] == '\0') goto LAB_031520ec;
      if (DAT_056fa058[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_031520ec;
      }
      if (DAT_056fa058[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_031520ec;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_031520ec:
    iVar7 = (int)lVar11;
    if (local_c0 <= (int)lVar11) {
      iVar7 = local_c0 + -1;
    }
    memcpy(local_bc,puVar6,(long)iVar7);
    local_bc[iVar7] = 0;
  }
  local_78 = *(byte *)(param_1 + 0x1f8);
  if (7 < local_78) {
    local_78 = 0xff;
  }
  FUN_02ee2b00(lVar10,&local_e0,1);
  iVar7 = *(int *)(param_1 + 0x288);
  if (iVar7 == 8) {
    return;
  }
  if (iVar7 != 7) {
    if (iVar7 == 6) {
      local_7d = 0;
      local_d0 = puVar4 + 0x10;
      local_c0 = 0x40;
      local_78 = 0xff;
      local_bc[0] = 0;
      local_74 = 0;
      local_6c = CONCAT44(0xffffffff,DAT_056f9fbc);
      local_70 = 1;
      local_d8 = 0xffffffffffffffff;
      local_e0 = CONCAT44(0xffffffff,DAT_056f9fbc);
      if ((*(char *)(param_1 + 0x230) == '\0') || (*(int *)(param_1 + 0x234) != 3)) {
        local_d8 = 0xffffffff00000005;
      }
      local_c8 = local_bc;
      (**(code **)(DAT_056fa060 + 0x18))(&DAT_056fa060);
      puVar6 = DAT_056fa068;
      if (local_bc != DAT_056fa068) {
        (**(code **)(DAT_056fa060 + 0x18))(&DAT_056fa060);
        lVar11 = 0;
        do {
          if (DAT_056fa068[lVar11] == '\0') goto LAB_03152304;
          if (DAT_056fa068[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_03152304;
          }
          if (DAT_056fa068[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_03152304;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_03152304:
        iVar7 = (int)lVar11;
        if (local_c0 <= (int)lVar11) {
          iVar7 = local_c0 + -1;
        }
        memcpy(local_bc,puVar6,(long)iVar7);
        local_bc[iVar7] = 0;
      }
      local_78 = *(byte *)(param_1 + 0x1f8);
      if (7 < local_78) {
        local_78 = 0xff;
      }
    }
    else {
      if ((*(char *)(param_1 + 0x230) != '\0') && (*(int *)(param_1 + 0x234) == 3))
      goto LAB_03152394;
      local_c0 = 0x40;
      local_7d = 0;
      local_d0 = puVar4 + 0x10;
      local_bc[0] = 0;
      local_78 = 0xff;
      local_74 = 0;
      local_6c = 0xffffffffffffffff;
      local_70 = 0;
      local_d8 = 0xffffffffffffffff;
      local_e0 = 0xffffffff00000005;
      local_c8 = local_bc;
      (**(code **)(DAT_056fa060 + 0x18))(&DAT_056fa060);
      puVar6 = DAT_056fa068;
      if (local_bc != DAT_056fa068) {
        (**(code **)(DAT_056fa060 + 0x18))(&DAT_056fa060);
        lVar11 = 0;
        do {
          if (DAT_056fa068[lVar11] == '\0') goto LAB_0315234c;
          if (DAT_056fa068[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0315234c;
          }
          if (DAT_056fa068[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0315234c;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0315234c:
        iVar7 = (int)lVar11;
        if (local_c0 <= (int)lVar11) {
          iVar7 = local_c0 + -1;
        }
        memcpy(local_bc,puVar6,(long)iVar7);
        local_bc[iVar7] = 0;
      }
      local_78 = *(byte *)(param_1 + 0x1f8);
      if (7 < local_78) {
        local_78 = 0xff;
      }
    }
    FUN_02ee2b00(lVar10,&local_e0,1);
  }
LAB_03152394:
  if ((*(char *)(param_1 + 0x230) != '\0') && ((*(uint *)(param_1 + 0x234) & 0xfffffffe) == 2)) {
    local_c0 = 0x40;
    local_7d = 0;
    local_d0 = puVar4 + 0x10;
    local_bc[0] = 0;
    local_78 = 0xff;
    local_74 = 0;
    local_6c = 0xffffffffffffffff;
    local_70 = 0;
    local_d8 = 0xffffffffffffffff;
    local_e0 = 0xffffffff0000000c;
    local_c8 = local_bc;
    (**(code **)(DAT_056fa070 + 0x18))(&DAT_056fa070);
    puVar6 = DAT_056fa078;
    if (local_bc != DAT_056fa078) {
      (**(code **)(DAT_056fa070 + 0x18))(&DAT_056fa070);
      lVar11 = 0;
      do {
        if (DAT_056fa078[lVar11] == '\0') goto LAB_0315246c;
        if (DAT_056fa078[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0315246c;
        }
        if (DAT_056fa078[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0315246c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0315246c:
      iVar7 = (int)lVar11;
      if (local_c0 <= (int)lVar11) {
        iVar7 = local_c0 + -1;
      }
      memcpy(local_bc,puVar6,(long)iVar7);
      local_bc[iVar7] = 0;
    }
    local_78 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_78) {
      local_78 = 0xff;
    }
    FUN_02ee2b00(lVar10,&local_e0,1);
  }
  if (((*(int *)(param_1 + 0x288) != 6) && (*(char *)(param_1 + 0x230) != '\0')) &&
     (*(int *)(param_1 + 0x234) == 1)) {
    local_c0 = 0x40;
    local_7d = 0;
    local_d0 = puVar4 + 0x10;
    local_bc[0] = 0;
    local_78 = 0xff;
    local_74 = 0;
    local_6c = 0xffffffffffffffff;
    local_70 = 0;
    local_d8 = 0xffffffffffffffff;
    local_e0 = 0xffffffff0000000d;
    local_c8 = local_bc;
    (**(code **)(DAT_056fa080 + 0x18))(&DAT_056fa080);
    puVar6 = DAT_056fa088;
    if (local_bc != DAT_056fa088) {
      (**(code **)(DAT_056fa080 + 0x18))(&DAT_056fa080);
      lVar11 = 0;
      do {
        if (DAT_056fa088[lVar11] == '\0') goto LAB_0315258c;
        if (DAT_056fa088[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0315258c;
        }
        if (DAT_056fa088[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0315258c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0315258c:
      iVar7 = (int)lVar11;
      if (local_c0 <= (int)lVar11) {
        iVar7 = local_c0 + -1;
      }
      memcpy(local_bc,puVar6,(long)iVar7);
      local_bc[iVar7] = 0;
    }
    local_78 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_78) {
      local_78 = 0xff;
    }
    FUN_02ee2b00(lVar10,&local_e0,1);
  }
  puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x210) + 0x578);
  if (((*PTR_DAT_04bc84e8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc84e8), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bc84e0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc84e8);
  }
  if ((((puVar14 != (undefined8 *)0x0) &&
       (uVar8 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bc84e0), (uVar8 & 1) != 0)) &&
      ((lVar11 = *(long *)(puVar14[0x73] + 0xa0), lVar11 != 0 && (*(char *)(lVar11 + 0xbc) != '\0'))
      )) && ((*(long *)PTR_DAT_04bb39b0 == 0 || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)))
     ) {
    cVar3 = *(char *)(*(long *)(param_1 + 0x5e8) + 4);
    if (cVar3 == '\0') {
      *(undefined1 *)(param_1 + 0x5f0) = 0;
    }
    else {
      if (cVar3 == -1) {
        *(undefined1 *)(param_1 + 0x5f0) = 1;
      }
      else if (*(char *)(param_1 + 0x5f0) == '\0') {
        return;
      }
      local_d0 = puVar4 + 0x10;
      local_7d = 0;
      local_c0 = 0x40;
      local_c8 = local_bc;
      local_bc[0] = 0;
      local_74 = 0;
      local_6c = 0xffffffffffffffff;
      local_70 = 0;
      local_78 = 0xff;
      local_d8 = 0xffffffffffffffff;
      local_e0 = CONCAT44(0xffffffff,*(undefined4 *)(lVar11 + 0x14));
      uVar8 = FUN_033fe650();
      if ((uVar8 & 1) == 0) {
        uVar8 = FUN_033fe7c0();
        uVar9 = 4;
        if ((uVar8 & 1) == 0) {
          uVar9 = 5;
        }
      }
      else {
        uVar9 = 6;
      }
      puVar6 = local_c8;
      if (6 < uVar9) {
        uVar9 = 0;
      }
      plVar1 = &DAT_056fa050 + (long)(int)uVar9 * 2;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      __src = (&DAT_056fa058)[(long)(int)uVar9 * 2];
      if (puVar6 != __src) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        lVar12 = (long)(&DAT_056fa058)[(long)(int)uVar9 * 2];
        lVar11 = 0;
        do {
          if (*(char *)(lVar12 + lVar11) == '\0') goto LAB_03152754;
          lVar2 = lVar12 + lVar11;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_03152754;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_03152754;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_03152754:
        iVar7 = (int)lVar11;
        if (local_c0 <= (int)lVar11) {
          iVar7 = local_c0 + -1;
        }
        memcpy(puVar6,__src,(long)iVar7);
        puVar6[iVar7] = 0;
      }
      local_78 = *(byte *)(param_1 + 0x1f8);
      if (7 < local_78) {
        local_78 = 0xff;
      }
      FUN_02ee2b00(lVar10,&local_e0,1);
    }
  }
  return;
}

