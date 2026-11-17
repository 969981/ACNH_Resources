
/* WARNING: Removing unreachable block (ram,0x03065ea0) */
/* WARNING: Removing unreachable block (ram,0x03066680) */

void FUN_03065e30(long param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  int local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  byte local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  
  pbVar1 = (byte *)(param_1 + 0x1c3e8);
  bVar2 = *pbVar1;
  *pbVar1 = 0;
  if ((char)param_2[1] == '\0') {
    if (*param_2 == 3) {
      *pbVar1 = 9;
      if (((param_2[2] != -1) && (lVar13 = *(long *)PTR_DAT_04bb5ce0, lVar13 != 0)) &&
         (*(int *)(lVar13 + 0xfa8) == param_2[2])) {
        bVar11 = 0x49;
        if ((*(byte *)(lVar13 + 0xedc) & 0x20) != 0) {
          bVar11 = 0x29;
        }
        goto LAB_03065e74;
      }
    }
    else {
      if (*param_2 != 2) {
        bVar11 = 3;
        goto LAB_03065e74;
      }
      *pbVar1 = 9;
      puVar3 = PTR_DAT_04bb5ce0;
      iVar9 = param_2[2];
      if (iVar9 == -1) {
LAB_03066054:
        iVar9 = FUN_0274bce0(param_1 + 0x1f8,&DAT_056e44f0);
        if (iVar9 != 0) {
          *pbVar1 = *pbVar1 | 0x10;
        }
      }
      else if (*(long *)PTR_DAT_04bb5ce0 == 0) {
        if (iVar9 != -1) goto LAB_03066054;
      }
      else if (*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf90) != iVar9) goto LAB_03066054;
      iVar9 = param_2[2];
      uVar10 = *(ulong *)puVar3;
      if (iVar9 == -1) {
        bVar8 = false;
        uVar12 = 0;
        if (uVar10 == 0) goto LAB_030660a8;
LAB_030660c4:
        bVar11 = *(byte *)(uVar10 + 0xedc) >> 4 & 1;
        uVar10 = (ulong)((char)*(byte *)(uVar10 + 0xedc) < '\0');
      }
      else {
        if (uVar10 == 0) {
          bVar8 = false;
          iVar14 = -1;
        }
        else {
          bVar8 = *(int *)(uVar10 + 0xf90) == iVar9;
          iVar14 = *(int *)(uVar10 + 0xf9c);
        }
        uVar12 = (uint)(iVar14 == iVar9);
        if (uVar10 != 0) goto LAB_030660c4;
LAB_030660a8:
        bVar11 = 0;
      }
      if (((bVar8 & bVar11) != 0) || ((uVar12 & (uint)uVar10) != 0)) {
        *pbVar1 = *pbVar1 | 0x20;
      }
      if (((byte)(bVar11 | bVar8 ^ 1U) != 1) || ((uVar10 & 1) == 0 && uVar12 == 1)) {
        bVar11 = *pbVar1 | 0x40;
        goto LAB_03065e74;
      }
    }
  }
  else {
    bVar11 = 5;
LAB_03065e74:
    *pbVar1 = bVar11;
  }
  puVar5 = PTR_DAT_04bc7280;
  puVar3 = PTR_DAT_04bb2230;
  local_e0 = CONCAT44(local_e0._4_4_,3);
  puVar15 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar15 == (undefined8 *)0x0) {
    return;
  }
  uVar10 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc7278);
  if ((uVar10 & 1) == 0) {
    return;
  }
  local_7d = 0;
  local_bc[0] = 0;
  local_c0 = 0x40;
  local_e0 = 0xffffffffffffffff;
  uStack_d8 = 0xffffffffffffffff;
  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
  local_6c = 0xffffffffffffffff;
  local_74 = 0;
  local_70 = 0;
  local_78 = *(byte *)(param_1 + 0x1f8);
  if (7 < local_78) {
    local_78 = 0xff;
  }
  bVar11 = *pbVar1;
  local_c8 = local_bc;
  if ((bVar11 & 1) != 0) {
    local_e0 = 0xffffffff00000004;
    (**(code **)(DAT_056df600 + 0x18))(&DAT_056df600);
    puVar6 = DAT_056df608;
    if (local_bc != DAT_056df608) {
      (**(code **)(DAT_056df600 + 0x18))(&DAT_056df600);
      lVar13 = 0;
      do {
        if (DAT_056df608[lVar13] == '\0') goto LAB_03066128;
        if (DAT_056df608[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_03066128;
        }
        if (DAT_056df608[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_03066128;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_03066128:
      iVar9 = (int)lVar13;
      if (local_c0 <= (int)lVar13) {
        iVar9 = local_c0 + -1;
      }
      memcpy(local_bc,puVar6,(long)iVar9);
      local_bc[iVar9] = 0;
    }
    FUN_02ee2b00(puVar15,&local_e0,1);
    bVar11 = *pbVar1;
  }
  puVar6 = local_c8;
  uVar12 = (uint)bVar11;
  if (((bVar11 >> 1 & 1) != 0) &&
     (lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0), lVar13 != 0)) {
    local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar13 + 0x14));
    (**(code **)(DAT_056df610 + 0x18))(&DAT_056df610);
    puVar7 = DAT_056df618;
    if (puVar6 != DAT_056df618) {
      (**(code **)(DAT_056df610 + 0x18))(&DAT_056df610);
      lVar13 = 0;
      do {
        if (DAT_056df618[lVar13] == '\0') goto LAB_030661fc;
        if (DAT_056df618[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_030661fc;
        }
        if (DAT_056df618[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_030661fc;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_030661fc:
      iVar9 = (int)lVar13;
      if (local_c0 <= (int)lVar13) {
        iVar9 = local_c0 + -1;
      }
      memcpy(puVar6,puVar7,(long)iVar9);
      puVar6[iVar9] = 0;
    }
    FUN_02ee2b00(puVar15,&local_e0,1);
    uVar12 = (uint)*pbVar1;
  }
  puVar6 = local_c8;
  if (((uVar12 >> 2 & 1) != 0) &&
     (lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0), lVar13 != 0)) {
    local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar13 + 0x14));
    (**(code **)(DAT_056df620 + 0x18))(&DAT_056df620);
    puVar7 = DAT_056df628;
    if (puVar6 != DAT_056df628) {
      (**(code **)(DAT_056df620 + 0x18))(&DAT_056df620);
      lVar13 = 0;
      do {
        if (DAT_056df628[lVar13] == '\0') goto LAB_030662d0;
        if (DAT_056df628[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_030662d0;
        }
        if (DAT_056df628[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_030662d0;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_030662d0:
      iVar9 = (int)lVar13;
      if (local_c0 <= (int)lVar13) {
        iVar9 = local_c0 + -1;
      }
      memcpy(puVar6,puVar7,(long)iVar9);
      puVar6[iVar9] = 0;
    }
    FUN_02ee2b00(puVar15,&local_e0,1);
    uVar12 = (uint)*pbVar1;
  }
  puVar6 = local_c8;
  if (((uVar12 >> 3 & 1) != 0) &&
     (lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0), lVar13 != 0)) {
    local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar13 + 0x14));
    (**(code **)(DAT_056df630 + 0x18))(&DAT_056df630);
    puVar7 = DAT_056df638;
    if (puVar6 != DAT_056df638) {
      (**(code **)(DAT_056df630 + 0x18))(&DAT_056df630);
      lVar13 = 0;
      do {
        if (DAT_056df638[lVar13] == '\0') goto LAB_030663ac;
        if (DAT_056df638[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_030663ac;
        }
        if (DAT_056df638[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_030663ac;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_030663ac:
      iVar9 = (int)lVar13;
      if (local_c0 <= (int)lVar13) {
        iVar9 = local_c0 + -1;
      }
      memcpy(puVar6,puVar7,(long)iVar9);
      puVar6[iVar9] = 0;
    }
    FUN_02ee2b00(puVar15,&local_e0,1);
    uVar12 = (uint)*pbVar1;
  }
  puVar6 = local_c8;
  if ((uVar12 >> 4 & 1) == 0) {
    if ((uVar12 >> 5 & 1) == 0) goto LAB_030663f0;
LAB_030664bc:
    puVar7 = local_c8;
    local_e0 = CONCAT44(local_e0._4_4_,7);
    (**(code **)(DAT_056df650 + 0x18))(&DAT_056df650);
    puVar6 = DAT_056df658;
    if (puVar7 != DAT_056df658) {
      (**(code **)(DAT_056df650 + 0x18))(&DAT_056df650);
      lVar13 = 0;
      do {
        if (DAT_056df658[lVar13] == '\0') goto LAB_03066540;
        if (DAT_056df658[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_03066540;
        }
        if (DAT_056df658[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_03066540;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_03066540:
      iVar9 = (int)lVar13;
      if (local_c0 <= (int)lVar13) {
        iVar9 = local_c0 + -1;
      }
      memcpy(puVar7,puVar6,(long)iVar9);
      puVar7[iVar9] = 0;
    }
    FUN_02ee2b00(puVar15,&local_e0,1);
    uVar12 = (uint)*pbVar1;
    if ((*pbVar1 >> 6 & 1) == 0) goto LAB_03066648;
  }
  else {
    local_e0 = CONCAT44(local_e0._4_4_,6);
    (**(code **)(DAT_056df640 + 0x18))(&DAT_056df640);
    puVar7 = DAT_056df648;
    if (puVar6 != DAT_056df648) {
      (**(code **)(DAT_056df640 + 0x18))(&DAT_056df640);
      lVar13 = 0;
      do {
        if (DAT_056df648[lVar13] == '\0') goto LAB_0306647c;
        if (DAT_056df648[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_0306647c;
        }
        if (DAT_056df648[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_0306647c;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_0306647c:
      iVar9 = (int)lVar13;
      if (local_c0 <= (int)lVar13) {
        iVar9 = local_c0 + -1;
      }
      memcpy(puVar6,puVar7,(long)iVar9);
      puVar6[iVar9] = 0;
    }
    FUN_02ee2b00(puVar15,&local_e0,1);
    uVar12 = (uint)*pbVar1;
    if ((*pbVar1 >> 5 & 1) != 0) goto LAB_030664bc;
LAB_030663f0:
    if ((uVar12 >> 6 & 1) == 0) goto LAB_03066648;
  }
  puVar7 = local_c8;
  local_e0 = CONCAT44(local_e0._4_4_,7);
  (**(code **)(DAT_056df660 + 0x18))(&DAT_056df660);
  puVar6 = DAT_056df668;
  if (puVar7 != DAT_056df668) {
    (**(code **)(DAT_056df660 + 0x18))(&DAT_056df660);
    lVar13 = 0;
    do {
      if (DAT_056df668[lVar13] == '\0') goto LAB_0306660c;
      if (DAT_056df668[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_0306660c;
      }
      if (DAT_056df668[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_0306660c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_0306660c:
    iVar9 = (int)lVar13;
    if (local_c0 <= (int)lVar13) {
      iVar9 = local_c0 + -1;
    }
    memcpy(puVar7,puVar6,(long)iVar9);
    puVar7[iVar9] = 0;
  }
  FUN_02ee2b00(puVar15,&local_e0,1);
  uVar12 = (uint)*pbVar1;
LAB_03066648:
  puVar4 = PTR_DAT_04bc7278;
  if ((*(char *)((long)param_2 + 5) != '\0') && (bVar2 != uVar12)) {
    local_e0 = CONCAT44(local_e0._4_4_,3);
    puVar15 = *(undefined8 **)(*(long *)puVar3 + 0x58);
    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar9 != 0)) {
      *(undefined **)puVar4 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc7280);
    }
    if ((puVar15 != (undefined8 *)0x0) &&
       (uVar10 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc7278), (uVar10 & 1) != 0)) {
      *(byte *)((long)puVar15 + 0x239) = *(byte *)((long)puVar15 + 0x239) | 1;
    }
  }
  return;
}

