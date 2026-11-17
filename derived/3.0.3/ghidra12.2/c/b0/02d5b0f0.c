
/* WARNING: Removing unreachable block (ram,0x02d5b140) */
/* WARNING: Removing unreachable block (ram,0x02d5c0e4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02d5b0f0(long param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ushort uVar14;
  undefined8 *puVar15;
  ushort *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  byte bVar19;
  long *plVar20;
  byte *pbVar21;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined1 *local_d0;
  int local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  byte local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined8 local_74;
  ushort local_68 [2];
  uint local_64;
  
  pbVar21 = PTR_DAT_04bc7280;
  plVar20 = (long *)PTR_DAT_04bb2230;
  local_e8 = CONCAT44(local_e8._4_4_,3);
  puVar15 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar15 == (undefined8 *)0x0) {
    return;
  }
  uVar12 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc7278);
  if ((uVar12 & 1) == 0) {
    return;
  }
  local_85 = 0;
  puVar17 = local_c4;
  local_c8 = 0x40;
  local_e8 = 0xffffffffffffffff;
  uStack_e0 = 0xffffffffffffffff;
  local_c4[0] = 0;
  local_d8 = PTR_DAT_04bb2bc0 + 0x10;
  local_74 = 0xffffffffffffffff;
  local_80 = *(byte *)(param_1 + 0x1f8);
  local_7c = 0;
  local_78 = 0;
  if (7 < local_80) {
    local_80 = 0xff;
  }
  local_d0 = puVar17;
  switch(param_2[1]) {
  case 0:
    if ((char)param_2[2] == '\0') {
      local_e8 = 0xffffffff00000004;
      (**(code **)(DAT_056834e8 + 0x18))(&DAT_056834e8);
      puVar18 = DAT_056834f0;
      if (puVar17 != DAT_056834f0) {
        (**(code **)(DAT_056834e8 + 0x18))(&DAT_056834e8);
        lVar13 = 0;
        do {
          if (DAT_056834f0[lVar13] == '\0') goto LAB_02d5bad8;
          if (DAT_056834f0[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_02d5bad8;
          }
          if (DAT_056834f0[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_02d5bad8;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_02d5bad8:
        iVar11 = (int)lVar13;
        if (local_c8 <= (int)lVar13) {
          iVar11 = local_c8 + -1;
        }
        memcpy(puVar17,puVar18,(long)iVar11);
        puVar17[iVar11] = 0;
      }
      uVar14 = 1;
      FUN_02ee2b00(puVar15,&local_e8,1);
      uVar10 = *param_2;
      puVar17 = local_d0;
    }
    else {
      uVar14 = 0;
      uVar10 = *param_2;
    }
    local_d0 = puVar17;
    if (uVar10 == 0) {
      local_e8._4_4_ = (undefined4)((ulong)local_e8 >> 0x20);
      local_e8 = CONCAT44(local_e8._4_4_,7);
      (**(code **)(DAT_05683518 + 0x18))(&DAT_05683518);
      puVar18 = DAT_05683520;
      if (puVar17 != DAT_05683520) {
        (**(code **)(DAT_05683518 + 0x18))(&DAT_05683518);
        lVar13 = 0;
        do {
          if (DAT_05683520[lVar13] == '\0') goto LAB_02d5bf98;
          if (DAT_05683520[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_02d5bf98;
          }
          if (DAT_05683520[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_02d5bf98;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_02d5bf98:
        iVar11 = (int)lVar13;
        if (local_c8 <= (int)lVar13) {
          iVar11 = local_c8 + -1;
        }
        memcpy(puVar17,puVar18,(long)iVar11);
        puVar17[iVar11] = 0;
      }
      FUN_02ee2b00(puVar15,&local_e8,1);
      uVar14 = uVar14 | 8;
    }
    puVar17 = local_d0;
    lVar13 = *(long *)(*(long *)(param_1 + 0x1670) + 0xa0);
    if (lVar13 != 0) {
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar13 + 0x14));
      (**(code **)(DAT_056834f8 + 0x18))(&DAT_056834f8);
      puVar18 = DAT_05683500;
      if (puVar17 != DAT_05683500) {
        (**(code **)(DAT_056834f8 + 0x18))(&DAT_056834f8);
        lVar13 = 0;
        do {
          if (DAT_05683500[lVar13] == '\0') goto LAB_02d5c064;
          if (DAT_05683500[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_02d5c064;
          }
          if (DAT_05683500[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_02d5c064;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_02d5c064:
        iVar11 = (int)lVar13;
        if (local_c8 <= (int)lVar13) {
          iVar11 = local_c8 + -1;
        }
        memcpy(puVar17,puVar18,(long)iVar11);
        puVar17[iVar11] = 0;
      }
      FUN_02ee2b00(puVar15,&local_e8,1);
      uVar14 = uVar14 | 2;
    }
    puVar17 = local_d0;
    local_64 = *param_2;
    if (local_64 == 0) {
      local_e8 = CONCAT44(local_e8._4_4_,DAT_05683658);
      (**(code **)(DAT_05683568 + 0x18))(&DAT_05683568);
      puVar18 = DAT_05683570;
      if (puVar17 != DAT_05683570) {
        (**(code **)(DAT_05683568 + 0x18))(&DAT_05683568);
        lVar13 = 0;
        do {
          if (DAT_05683570[lVar13] == '\0') goto LAB_02d5c1d0;
          if (DAT_05683570[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_02d5c1d0;
          }
          if (DAT_05683570[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_02d5c1d0;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_02d5c1d0:
        iVar11 = (int)lVar13;
        if (local_c8 <= (int)lVar13) {
          iVar11 = local_c8 + -1;
        }
        memcpy(puVar17,puVar18,(long)iVar11);
        puVar17[iVar11] = 0;
      }
      FUN_02ee2b00(puVar15,&local_e8,1);
      uVar14 = uVar14 | 0x100;
      cVar3 = *(char *)((long)param_2 + 9);
      goto joined_r0x02d5ba28;
    }
    break;
  case 1:
    if ((char)param_2[2] == '\0') {
      local_e8 = 0xffffffff00000004;
      (**(code **)(DAT_056834e8 + 0x18))(&DAT_056834e8);
      puVar18 = DAT_056834f0;
      if (puVar17 != DAT_056834f0) {
        (**(code **)(DAT_056834e8 + 0x18))(&DAT_056834e8);
        lVar13 = 0;
        do {
          if (DAT_056834f0[lVar13] == '\0') goto LAB_02d5bba0;
          if (DAT_056834f0[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_02d5bba0;
          }
          if (DAT_056834f0[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_02d5bba0;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_02d5bba0:
        iVar11 = (int)lVar13;
        if (local_c8 <= (int)lVar13) {
          iVar11 = local_c8 + -1;
        }
        memcpy(puVar17,puVar18,(long)iVar11);
        puVar17[iVar11] = 0;
      }
      uVar14 = 1;
      FUN_02ee2b00(puVar15,&local_e8,1);
    }
    else {
      uVar14 = 0;
    }
    puVar17 = local_d0;
    lVar13 = *(long *)(*(long *)(param_1 + 0x1670) + 0xa0);
    if (lVar13 != 0) {
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar13 + 0x14));
      (**(code **)(DAT_05683528 + 0x18))(&DAT_05683528);
      puVar18 = DAT_05683530;
      if (puVar17 != DAT_05683530) {
        (**(code **)(DAT_05683528 + 0x18))(&DAT_05683528);
        lVar13 = 0;
        do {
          if (DAT_05683530[lVar13] == '\0') goto LAB_02d5bc74;
          if (DAT_05683530[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_02d5bc74;
          }
          if (DAT_05683530[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_02d5bc74;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_02d5bc74:
        iVar11 = (int)lVar13;
        if (local_c8 <= (int)lVar13) {
          iVar11 = local_c8 + -1;
        }
        memcpy(puVar17,puVar18,(long)iVar11);
        puVar17[iVar11] = 0;
      }
      FUN_02ee2b00(puVar15,&local_e8,1);
      uVar14 = uVar14 | 0x10;
      cVar3 = *(char *)((long)param_2 + 9);
      goto joined_r0x02d5ba28;
    }
    break;
  case 2:
    local_e8 = 0xffffffff00000004;
    (**(code **)(DAT_056834e8 + 0x18))(&DAT_056834e8);
    puVar18 = DAT_056834f0;
    if (puVar17 != DAT_056834f0) {
      (**(code **)(DAT_056834e8 + 0x18))(&DAT_056834e8);
      lVar13 = 0;
      do {
        if (DAT_056834f0[lVar13] == '\0') goto LAB_02d5b4b0;
        if (DAT_056834f0[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_02d5b4b0;
        }
        if (DAT_056834f0[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_02d5b4b0;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_02d5b4b0:
      iVar11 = (int)lVar13;
      if (local_c8 <= (int)lVar13) {
        iVar11 = local_c8 + -1;
      }
      memcpy(puVar17,puVar18,(long)iVar11);
      puVar17[iVar11] = 0;
    }
    uVar14 = 1;
    FUN_02ee2b00(puVar15,&local_e8,1);
    puVar17 = local_d0;
    lVar13 = *(long *)(*(long *)(param_1 + 0x1670) + 0xa0);
    if (lVar13 != 0) {
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar13 + 0x14));
      (**(code **)(DAT_05683508 + 0x18))(&DAT_05683508);
      puVar18 = DAT_05683510;
      if (puVar17 != DAT_05683510) {
        (**(code **)(DAT_05683508 + 0x18))(&DAT_05683508);
        lVar13 = 0;
        do {
          if (DAT_05683510[lVar13] == '\0') goto LAB_02d5b650;
          if (DAT_05683510[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_02d5b650;
          }
          if (DAT_05683510[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_02d5b650;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_02d5b650:
        iVar11 = (int)lVar13;
        if (local_c8 <= (int)lVar13) {
          iVar11 = local_c8 + -1;
        }
        memcpy(puVar17,puVar18,(long)iVar11);
        puVar17[iVar11] = 0;
      }
      FUN_02ee2b00(puVar15,&local_e8,1);
      uVar14 = 5;
      cVar3 = *(char *)((long)param_2 + 9);
      goto joined_r0x02d5ba28;
    }
    break;
  case 3:
    local_e8 = 0xffffffff00000004;
    (**(code **)(DAT_056834e8 + 0x18))(&DAT_056834e8);
    puVar18 = DAT_056834f0;
    if (puVar17 != DAT_056834f0) {
      (**(code **)(DAT_056834e8 + 0x18))(&DAT_056834e8);
      lVar13 = 0;
      do {
        if (DAT_056834f0[lVar13] == '\0') goto LAB_02d5b574;
        if (DAT_056834f0[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_02d5b574;
        }
        if (DAT_056834f0[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_02d5b574;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_02d5b574:
      iVar11 = (int)lVar13;
      if (local_c8 <= (int)lVar13) {
        iVar11 = local_c8 + -1;
      }
      memcpy(puVar17,puVar18,(long)iVar11);
      puVar17[iVar11] = 0;
    }
    uVar14 = 1;
    FUN_02ee2b00(puVar15,&local_e8,1);
    puVar17 = local_d0;
    lVar13 = *(long *)(*(long *)(param_1 + 0x1670) + 0xa0);
    if (lVar13 != 0) {
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar13 + 0x14));
      (**(code **)(DAT_05683528 + 0x18))(&DAT_05683528);
      puVar18 = DAT_05683530;
      if (puVar17 != DAT_05683530) {
        (**(code **)(DAT_05683528 + 0x18))(&DAT_05683528);
        lVar13 = 0;
        do {
          if (DAT_05683530[lVar13] == '\0') goto LAB_02d5b69c;
          if (DAT_05683530[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_02d5b69c;
          }
          if (DAT_05683530[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_02d5b69c;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_02d5b69c:
        iVar11 = (int)lVar13;
        if (local_c8 <= (int)lVar13) {
          iVar11 = local_c8 + -1;
        }
        memcpy(puVar17,puVar18,(long)iVar11);
        puVar17[iVar11] = 0;
      }
      FUN_02ee2b00(puVar15,&local_e8,1);
      uVar14 = 0x11;
    }
    puVar2 = PTR_DAT_04bb3170;
    puVar16 = (ushort *)((long)param_2 + 10);
    uVar5 = *puVar16;
    if (uVar5 == *(ushort *)PTR_DAT_04bb3170) {
LAB_02d5b744:
      iVar11 = FUN_0274bce0(param_1 + 0x1f8,&DAT_056e44f0);
      puVar17 = local_d0;
      if (iVar11 != 0) {
        local_e8 = CONCAT44(local_e8._4_4_,6);
        (**(code **)(DAT_05683538 + 0x18))(&DAT_05683538);
        puVar18 = DAT_05683540;
        if (puVar17 != DAT_05683540) {
          (**(code **)(DAT_05683538 + 0x18))(&DAT_05683538);
          lVar13 = 0;
          do {
            if (DAT_05683540[lVar13] == '\0') goto LAB_02d5b7e4;
            if (DAT_05683540[lVar13 + 1] == '\0') {
              lVar13 = lVar13 + 1;
              goto LAB_02d5b7e4;
            }
            if (DAT_05683540[lVar13 + 2] == '\0') {
              lVar13 = lVar13 + 2;
              goto LAB_02d5b7e4;
            }
            lVar13 = lVar13 + 3;
          } while (lVar13 != 0x80001);
          lVar13 = 0;
LAB_02d5b7e4:
          iVar11 = (int)lVar13;
          if (local_c8 <= (int)lVar13) {
            iVar11 = local_c8 + -1;
          }
          memcpy(puVar17,puVar18,(long)iVar11);
          puVar17[iVar11] = 0;
        }
        FUN_02ee2b00(puVar15,&local_e8,1);
        uVar14 = uVar14 | 0x20;
      }
    }
    else {
      local_64 = CONCAT22(local_64._2_2_,*(ushort *)PTR_DAT_04bb3170);
      uVar10 = FUN_007ef180(puVar16);
      FUN_0344d0c0(&local_64,uVar5 & 0x7f,uVar10 & 1);
      puVar1 = puVar2;
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        puVar1 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe78);
      }
      FUN_007ef010(local_68,puVar1);
      if ((local_64 & 0xffff) != (uint)local_68[0]) goto LAB_02d5b744;
    }
    uVar5 = *puVar16;
    if (uVar5 == *(ushort *)puVar2) {
      bVar8 = false;
      bVar9 = false;
    }
    else {
      local_64 = CONCAT22(local_64._2_2_,*(ushort *)puVar2);
      uVar10 = FUN_007ef180(puVar16);
      FUN_0344d0c0(&local_64,uVar5 & 0x7f,uVar10 & 1);
      puVar6 = PTR_DAT_04bb5ce0;
      puVar1 = puVar2;
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        puVar1 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe78);
      }
      FUN_007ef010(local_68,puVar1);
      bVar8 = (local_64 & 0xffff) == (uint)local_68[0];
      uVar5 = *puVar16;
      if (uVar5 == *(ushort *)puVar2) {
        bVar9 = false;
      }
      else {
        local_64 = CONCAT22(local_64._2_2_,*(ushort *)puVar2);
        uVar10 = FUN_007ef180(puVar16);
        FUN_0344d0c0(&local_64,uVar5 & 0x7f,uVar10 & 1);
        if (*(long *)puVar6 != 0) {
          puVar2 = (undefined *)(*(long *)puVar6 + 0xe9c);
        }
        FUN_007ef010(local_68,puVar2);
        bVar9 = (local_64 & 0xffff) == (uint)local_68[0];
      }
    }
    puVar17 = local_d0;
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      bVar19 = 0;
      bVar7 = false;
    }
    else {
      bVar4 = *(byte *)(*(long *)PTR_DAT_04bb5ce0 + 0xedc);
      bVar19 = bVar4 >> 4 & 1;
      bVar7 = (char)bVar4 < '\0';
    }
    if (((bVar8 & bVar19) != 0) || ((bool)(bVar9 & bVar7))) {
      local_e8 = CONCAT44(local_e8._4_4_,7);
      (**(code **)(DAT_05683548 + 0x18))(&DAT_05683548);
      puVar18 = DAT_05683550;
      if (puVar17 != DAT_05683550) {
        (**(code **)(DAT_05683548 + 0x18))(&DAT_05683548);
        lVar13 = 0;
        do {
          if (DAT_05683550[lVar13] == '\0') goto LAB_02d5b9c0;
          if (DAT_05683550[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_02d5b9c0;
          }
          if (DAT_05683550[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_02d5b9c0;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_02d5b9c0:
        iVar11 = (int)lVar13;
        if (local_c8 <= (int)lVar13) {
          iVar11 = local_c8 + -1;
        }
        memcpy(puVar17,puVar18,(long)iVar11);
        puVar17[iVar11] = 0;
      }
      FUN_02ee2b00(puVar15,&local_e8,1);
      uVar14 = uVar14 | 0x40;
    }
    puVar17 = local_d0;
    if (((byte)(bVar19 | bVar8 ^ 1U) == 1) && (bVar7 || !bVar9)) {
      cVar3 = *(char *)((long)param_2 + 9);
      plVar20 = (long *)PTR_DAT_04bb2230;
      pbVar21 = PTR_DAT_04bc7280;
      goto joined_r0x02d5ba28;
    }
    local_e8 = CONCAT44(local_e8._4_4_,7);
    (**(code **)(DAT_05683558 + 0x18))(&DAT_05683558);
    puVar18 = DAT_05683560;
    pbVar21 = PTR_DAT_04bc7280;
    plVar20 = (long *)PTR_DAT_04bb2230;
    if (puVar17 != DAT_05683560) {
      (**(code **)(DAT_05683558 + 0x18))(&DAT_05683558);
      lVar13 = 0;
      do {
        if (DAT_05683560[lVar13] == '\0') goto LAB_02d5bf54;
        if (DAT_05683560[lVar13 + 1] == '\0') goto LAB_02d5bf48;
        if (DAT_05683560[lVar13 + 2] == '\0') goto LAB_02d5bf50;
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
LAB_02d5bf40:
      lVar13 = 0;
      goto LAB_02d5bf54;
    }
    goto LAB_02d5bf7c;
  case 4:
    if ((char)param_2[2] == '\0') {
      local_e8 = 0xffffffff00000004;
      (**(code **)(DAT_056834e8 + 0x18))(&DAT_056834e8);
      puVar18 = DAT_056834f0;
      if (puVar17 != DAT_056834f0) {
        (**(code **)(DAT_056834e8 + 0x18))(&DAT_056834e8);
        lVar13 = 0;
        do {
          if (DAT_056834f0[lVar13] == '\0') goto LAB_02d5bcc0;
          if (DAT_056834f0[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_02d5bcc0;
          }
          if (DAT_056834f0[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_02d5bcc0;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_02d5bcc0:
        iVar11 = (int)lVar13;
        if (local_c8 <= (int)lVar13) {
          iVar11 = local_c8 + -1;
        }
        memcpy(puVar17,puVar18,(long)iVar11);
        puVar17[iVar11] = 0;
      }
      uVar14 = 1;
      FUN_02ee2b00(puVar15,&local_e8,1);
    }
    else {
      uVar14 = 0;
    }
    puVar17 = local_d0;
    lVar13 = *(long *)(*(long *)(param_1 + 0x1670) + 0xa0);
    if (lVar13 != 0) {
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar13 + 0x14));
      (**(code **)(DAT_05683528 + 0x18))(&DAT_05683528);
      puVar18 = DAT_05683530;
      if (puVar17 != DAT_05683530) {
        (**(code **)(DAT_05683528 + 0x18))(&DAT_05683528);
        lVar13 = 0;
        do {
          if (DAT_05683530[lVar13] == '\0') goto LAB_02d5bd94;
          if (DAT_05683530[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_02d5bd94;
          }
          if (DAT_05683530[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_02d5bd94;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_02d5bd94:
        iVar11 = (int)lVar13;
        if (local_c8 <= (int)lVar13) {
          iVar11 = local_c8 + -1;
        }
        memcpy(puVar17,puVar18,(long)iVar11);
        puVar17[iVar11] = 0;
      }
      FUN_02ee2b00(puVar15,&local_e8,1);
      uVar14 = uVar14 | 0x10;
    }
    puVar2 = PTR_DAT_04bb3170;
    uVar5 = *(ushort *)((long)param_2 + 10);
    if (uVar5 != *(ushort *)PTR_DAT_04bb3170) {
      local_64 = CONCAT22(local_64._2_2_,*(ushort *)PTR_DAT_04bb3170);
      uVar10 = FUN_007ef180();
      FUN_0344d0c0(&local_64,uVar5 & 0x7f,uVar10 & 1);
      puVar1 = PTR_DAT_04bb5ce0;
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        puVar2 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe5c);
      }
      FUN_007ef010(local_68,puVar2);
      puVar17 = local_d0;
      if ((local_64 & 0xffff) == (uint)local_68[0]) {
        if ((*(long *)puVar1 != 0) &&
           (local_e8 = CONCAT44(local_e8._4_4_,7),
           (*(byte *)(*(long *)puVar1 + 0xedc) >> 5 & 1) != 0)) {
          (**(code **)(DAT_05683548 + 0x18))(&DAT_05683548);
          puVar18 = DAT_05683550;
          if (puVar17 != DAT_05683550) {
            (**(code **)(DAT_05683548 + 0x18))(&DAT_05683548);
            lVar13 = 0;
            do {
              if (DAT_05683550[lVar13] == '\0') goto LAB_02d5c224;
              if (DAT_05683550[lVar13 + 1] == '\0') {
                lVar13 = lVar13 + 1;
                goto LAB_02d5c224;
              }
              if (DAT_05683550[lVar13 + 2] == '\0') {
                lVar13 = lVar13 + 2;
                goto LAB_02d5c224;
              }
              lVar13 = lVar13 + 3;
            } while (lVar13 != 0x80001);
            lVar13 = 0;
LAB_02d5c224:
            iVar11 = (int)lVar13;
            if (local_c8 <= (int)lVar13) {
              iVar11 = local_c8 + -1;
            }
            memcpy(puVar17,puVar18,(long)iVar11);
            puVar17[iVar11] = 0;
          }
          FUN_02ee2b00(puVar15,&local_e8,1);
          uVar14 = uVar14 | 0x40;
          cVar3 = *(char *)((long)param_2 + 9);
          goto joined_r0x02d5ba28;
        }
        local_e8 = CONCAT44(local_e8._4_4_,7);
        (**(code **)(DAT_05683558 + 0x18))(&DAT_05683558);
        puVar18 = DAT_05683560;
        if (puVar17 != DAT_05683560) {
          (**(code **)(DAT_05683558 + 0x18))(&DAT_05683558);
          lVar13 = 0;
          do {
            if (DAT_05683560[lVar13] == '\0') goto LAB_02d5bf54;
            if (DAT_05683560[lVar13 + 1] == '\0') goto LAB_02d5bf48;
            if (DAT_05683560[lVar13 + 2] == '\0') goto LAB_02d5bf50;
            lVar13 = lVar13 + 3;
          } while (lVar13 != 0x80001);
          goto LAB_02d5bf40;
        }
        goto LAB_02d5bf7c;
      }
    }
    break;
  default:
    uVar14 = 0;
    cVar3 = *(char *)((long)param_2 + 9);
    goto joined_r0x02d5ba28;
  }
  goto LAB_02d5c0b0;
LAB_02d5bf48:
  lVar13 = lVar13 + 1;
  goto LAB_02d5bf54;
LAB_02d5bf50:
  lVar13 = lVar13 + 2;
LAB_02d5bf54:
  iVar11 = (int)lVar13;
  if (local_c8 <= (int)lVar13) {
    iVar11 = local_c8 + -1;
  }
  memcpy(puVar17,puVar18,(long)iVar11);
  puVar17[iVar11] = 0;
LAB_02d5bf7c:
  FUN_02ee2b00(puVar15,&local_e8,1);
  uVar14 = uVar14 | 0x80;
LAB_02d5c0b0:
  cVar3 = *(char *)((long)param_2 + 9);
joined_r0x02d5ba28:
  if ((cVar3 != '\0') && (uVar14 != *(ushort *)(param_1 + 0x24a2))) {
    local_64 = 3;
    puVar15 = *(undefined8 **)(*plVar20 + 0x58);
    if (((*pbVar21 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar11 != 0)) {
      *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc7280);
    }
    if ((puVar15 != (undefined8 *)0x0) &&
       (uVar12 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc7278), (uVar12 & 1) != 0)) {
      *(byte *)((long)puVar15 + 0x239) = *(byte *)((long)puVar15 + 0x239) | 1;
    }
  }
  *(ushort *)(param_1 + 0x24a2) = uVar14;
  return;
}

