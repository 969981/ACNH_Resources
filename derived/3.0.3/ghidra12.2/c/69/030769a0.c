
/* WARNING: Removing unreachable block (ram,0x030769f0) */
/* WARNING: Removing unreachable block (ram,0x030778d0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_030769a0(long param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ushort uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte bVar14;
  byte *pbVar15;
  long *plVar16;
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
  undefined4 local_64;
  
  pbVar15 = PTR_DAT_04bc7280;
  plVar16 = (long *)PTR_DAT_04bb2230;
  local_e8 = CONCAT44(local_e8._4_4_,3);
  puVar11 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  uVar7 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc7278);
  if ((uVar7 & 1) == 0) {
    return;
  }
  local_85 = 0;
  local_e8 = 0xffffffffffffffff;
  uStack_e0 = 0xffffffffffffffff;
  puVar12 = local_c4;
  local_c8 = 0x40;
  local_c4[0] = 0;
  local_d8 = PTR_DAT_04bb2bc0 + 0x10;
  local_74 = 0xffffffffffffffff;
  local_80 = *(byte *)(param_1 + 0x1f8);
  local_7c = 0;
  local_78 = 0;
  if (7 < local_80) {
    local_80 = 0xff;
  }
  local_d0 = puVar12;
  switch(param_2[1]) {
  case 0:
    if ((char)param_2[2] == '\0') {
      local_e8 = 0xffffffff00000004;
      (**(code **)(DAT_056e3868 + 0x18))(&DAT_056e3868);
      puVar13 = DAT_056e3870;
      if (puVar12 != DAT_056e3870) {
        (**(code **)(DAT_056e3868 + 0x18))(&DAT_056e3868);
        lVar9 = 0;
        do {
          if (DAT_056e3870[lVar9] == '\0') goto LAB_03077050;
          if (DAT_056e3870[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_03077050;
          }
          if (DAT_056e3870[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_03077050;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_03077050:
        iVar6 = (int)lVar9;
        if (local_c8 <= (int)lVar9) {
          iVar6 = local_c8 + -1;
        }
        memcpy(puVar12,puVar13,(long)iVar6);
        puVar12[iVar6] = 0;
      }
      uVar10 = 1;
      FUN_02ee2b00(puVar11,&local_e8,1);
      iVar6 = *param_2;
      puVar12 = local_d0;
    }
    else {
      uVar10 = 0;
      iVar6 = *param_2;
    }
    local_d0 = puVar12;
    if (iVar6 == 0) {
      local_e8._4_4_ = (undefined4)((ulong)local_e8 >> 0x20);
      local_e8 = CONCAT44(local_e8._4_4_,7);
      (**(code **)(DAT_056e3898 + 0x18))(&DAT_056e3898);
      puVar13 = DAT_056e38a0;
      if (puVar12 != DAT_056e38a0) {
        (**(code **)(DAT_056e3898 + 0x18))(&DAT_056e3898);
        pbVar15 = PTR_DAT_04bc7280;
        lVar9 = 0;
        do {
          if (DAT_056e38a0[lVar9] == '\0') goto LAB_0307747c;
          if (DAT_056e38a0[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_0307747c;
          }
          if (DAT_056e38a0[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_0307747c;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0307747c:
        iVar6 = (int)lVar9;
        if (local_c8 <= (int)lVar9) {
          iVar6 = local_c8 + -1;
        }
        memcpy(puVar12,puVar13,(long)iVar6);
        puVar12[iVar6] = 0;
      }
      FUN_02ee2b00(puVar11,&local_e8,1);
      uVar10 = uVar10 | 8;
    }
    puVar12 = local_d0;
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x1670) + 0x570) + 0xa0);
    if (lVar9 != 0) {
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar9 + 0x14));
      (**(code **)(DAT_056e3878 + 0x18))(&DAT_056e3878);
      puVar13 = DAT_056e3880;
      if (puVar12 != DAT_056e3880) {
        (**(code **)(DAT_056e3878 + 0x18))(&DAT_056e3878);
        pbVar15 = PTR_DAT_04bc7280;
        lVar9 = 0;
        do {
          if (DAT_056e3880[lVar9] == '\0') goto LAB_0307755c;
          if (DAT_056e3880[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_0307755c;
          }
          if (DAT_056e3880[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_0307755c;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0307755c:
        iVar6 = (int)lVar9;
        if (local_c8 <= (int)lVar9) {
          iVar6 = local_c8 + -1;
        }
        memcpy(puVar12,puVar13,(long)iVar6);
        puVar12[iVar6] = 0;
      }
      FUN_02ee2b00(puVar11,&local_e8,1);
      uVar10 = uVar10 | 2;
    }
    if ((*param_2 == 0) &&
       (lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x1670) + 0x588) + 0xa0), lVar9 != 0)) {
      if (*(int *)(param_1 + 0x1b0) == 2) {
        uVar7 = FUN_03087ee4(param_1);
        if ((uVar7 & 1) != 0) {
LAB_030775dc:
          local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar9 + 0x14));
          FUN_006e43a0(&local_d8,&DAT_056e38b8);
          local_7c = 1;
          FUN_02ee2b00(puVar11,&local_e8,1);
          uVar10 = uVar10 | 0x20;
          cVar1 = *(char *)((long)param_2 + 9);
          goto joined_r0x03076ab8;
        }
      }
      else if (*(char *)(lVar9 + 0xbc) != '\0') goto LAB_030775dc;
    }
    break;
  case 1:
    if ((char)param_2[2] == '\0') {
      local_e8 = 0xffffffff00000004;
      (**(code **)(DAT_056e3868 + 0x18))(&DAT_056e3868);
      puVar13 = DAT_056e3870;
      if (puVar12 != DAT_056e3870) {
        (**(code **)(DAT_056e3868 + 0x18))(&DAT_056e3868);
        lVar9 = 0;
        do {
          if (DAT_056e3870[lVar9] == '\0') goto LAB_03077120;
          if (DAT_056e3870[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_03077120;
          }
          if (DAT_056e3870[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_03077120;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_03077120:
        iVar6 = (int)lVar9;
        if (local_c8 <= (int)lVar9) {
          iVar6 = local_c8 + -1;
        }
        memcpy(puVar12,puVar13,(long)iVar6);
        puVar12[iVar6] = 0;
      }
      uVar10 = 1;
      FUN_02ee2b00(puVar11,&local_e8,1);
    }
    else {
      uVar10 = 0;
    }
    puVar12 = local_d0;
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x1670) + 0x570) + 0xa0);
    if (lVar9 != 0) {
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar9 + 0x14));
      (**(code **)(DAT_056e38a8 + 0x18))(&DAT_056e38a8);
      puVar13 = DAT_056e38b0;
      if (puVar12 != DAT_056e38b0) {
        (**(code **)(DAT_056e38a8 + 0x18))(&DAT_056e38a8);
        lVar9 = 0;
        do {
          if (DAT_056e38b0[lVar9] == '\0') goto LAB_030771f8;
          if (DAT_056e38b0[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_030771f8;
          }
          if (DAT_056e38b0[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_030771f8;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_030771f8:
        iVar6 = (int)lVar9;
        if (local_c8 <= (int)lVar9) {
          iVar6 = local_c8 + -1;
        }
        memcpy(puVar12,puVar13,(long)iVar6);
        puVar12[iVar6] = 0;
      }
      FUN_02ee2b00(puVar11,&local_e8,1);
      uVar10 = uVar10 | 0x10;
      cVar1 = *(char *)((long)param_2 + 9);
      goto joined_r0x03076ab8;
    }
    break;
  case 2:
    local_e8 = 0xffffffff00000004;
    (**(code **)(DAT_056e3868 + 0x18))(&DAT_056e3868);
    puVar13 = DAT_056e3870;
    if (puVar12 != DAT_056e3870) {
      (**(code **)(DAT_056e3868 + 0x18))(&DAT_056e3868);
      lVar9 = 0;
      do {
        if (DAT_056e3870[lVar9] == '\0') goto LAB_03076d68;
        if (DAT_056e3870[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_03076d68;
        }
        if (DAT_056e3870[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_03076d68;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_03076d68:
      iVar6 = (int)lVar9;
      if (local_c8 <= (int)lVar9) {
        iVar6 = local_c8 + -1;
      }
      memcpy(puVar12,puVar13,(long)iVar6);
      puVar12[iVar6] = 0;
    }
    uVar10 = 1;
    FUN_02ee2b00(puVar11,&local_e8,1);
    puVar12 = local_d0;
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x1670) + 0x570) + 0xa0);
    if (lVar9 != 0) {
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar9 + 0x14));
      (**(code **)(DAT_056e3888 + 0x18))(&DAT_056e3888);
      puVar13 = DAT_056e3890;
      if (puVar12 != DAT_056e3890) {
        (**(code **)(DAT_056e3888 + 0x18))(&DAT_056e3888);
        lVar9 = 0;
        do {
          if (DAT_056e3890[lVar9] == '\0') goto LAB_03076f08;
          if (DAT_056e3890[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_03076f08;
          }
          if (DAT_056e3890[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_03076f08;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_03076f08:
        iVar6 = (int)lVar9;
        if (local_c8 <= (int)lVar9) {
          iVar6 = local_c8 + -1;
        }
        memcpy(puVar12,puVar13,(long)iVar6);
        puVar12[iVar6] = 0;
      }
      FUN_02ee2b00(puVar11,&local_e8,1);
      uVar10 = 5;
      cVar1 = *(char *)((long)param_2 + 9);
      goto joined_r0x03076ab8;
    }
    break;
  case 3:
    local_e8 = 0xffffffff00000004;
    (**(code **)(DAT_056e3868 + 0x18))(&DAT_056e3868);
    puVar13 = DAT_056e3870;
    if (puVar12 != DAT_056e3870) {
      (**(code **)(DAT_056e3868 + 0x18))(&DAT_056e3868);
      lVar9 = 0;
      do {
        if (DAT_056e3870[lVar9] == '\0') goto LAB_03076e30;
        if (DAT_056e3870[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_03076e30;
        }
        if (DAT_056e3870[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_03076e30;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_03076e30:
      iVar6 = (int)lVar9;
      if (local_c8 <= (int)lVar9) {
        iVar6 = local_c8 + -1;
      }
      memcpy(puVar12,puVar13,(long)iVar6);
      puVar12[iVar6] = 0;
    }
    uVar10 = 1;
    FUN_02ee2b00(puVar11,&local_e8,1);
    puVar12 = local_d0;
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x1670) + 0x570) + 0xa0);
    if (lVar9 != 0) {
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar9 + 0x14));
      (**(code **)(DAT_056e38a8 + 0x18))(&DAT_056e38a8);
      puVar13 = DAT_056e38b0;
      if (puVar12 != DAT_056e38b0) {
        (**(code **)(DAT_056e38a8 + 0x18))(&DAT_056e38a8);
        lVar9 = 0;
        do {
          if (DAT_056e38b0[lVar9] == '\0') goto LAB_03076f54;
          if (DAT_056e38b0[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_03076f54;
          }
          if (DAT_056e38b0[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_03076f54;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_03076f54:
        iVar6 = (int)lVar9;
        if (local_c8 <= (int)lVar9) {
          iVar6 = local_c8 + -1;
        }
        memcpy(puVar12,puVar13,(long)iVar6);
        puVar12[iVar6] = 0;
      }
      FUN_02ee2b00(puVar11,&local_e8,1);
      uVar10 = 0x11;
    }
    lVar9 = (long)param_2 + 10;
    uVar7 = FUN_0308c8c0(lVar9);
    if (((uVar7 & 1) == 0) &&
       (iVar6 = FUN_0274bce0(param_1 + 0x1f8,&DAT_056e44f0), puVar12 = local_d0, iVar6 != 0)) {
      local_e8 = CONCAT44(local_e8._4_4_,6);
      (**(code **)(DAT_056e38c8 + 0x18))(&DAT_056e38c8);
      puVar13 = DAT_056e38d0;
      if (puVar12 != DAT_056e38d0) {
        (**(code **)(DAT_056e38c8 + 0x18))(&DAT_056e38c8);
        lVar8 = 0;
        do {
          if (DAT_056e38d0[lVar8] == '\0') goto LAB_03077628;
          if (DAT_056e38d0[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_03077628;
          }
          if (DAT_056e38d0[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_03077628;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_03077628:
        iVar6 = (int)lVar8;
        if (local_c8 <= (int)lVar8) {
          iVar6 = local_c8 + -1;
        }
        memcpy(puVar12,puVar13,(long)iVar6);
        puVar12[iVar6] = 0;
      }
      FUN_02ee2b00(puVar11,&local_e8,1);
      uVar10 = uVar10 | 0x40;
    }
    bVar4 = FUN_0308c8c0(lVar9);
    bVar5 = FUN_0308cc20(lVar9);
    puVar12 = local_d0;
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      bVar14 = 0;
      bVar3 = false;
    }
    else {
      bVar2 = *(byte *)(*(long *)PTR_DAT_04bb5ce0 + 0xedc);
      bVar14 = bVar2 >> 4 & 1;
      bVar3 = (char)bVar2 < '\0';
    }
    if (((bVar4 & bVar14) != 0) || ((bVar5 & bVar3) != 0)) {
      local_e8 = CONCAT44(local_e8._4_4_,7);
      (**(code **)(DAT_056e38d8 + 0x18))(&DAT_056e38d8);
      puVar13 = DAT_056e38e0;
      if (puVar12 != DAT_056e38e0) {
        (**(code **)(DAT_056e38d8 + 0x18))(&DAT_056e38d8);
        lVar9 = 0;
        do {
          if (DAT_056e38e0[lVar9] == '\0') goto LAB_03077758;
          if (DAT_056e38e0[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_03077758;
          }
          if (DAT_056e38e0[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_03077758;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_03077758:
        iVar6 = (int)lVar9;
        if (local_c8 <= (int)lVar9) {
          iVar6 = local_c8 + -1;
        }
        memcpy(puVar12,puVar13,(long)iVar6);
        puVar12[iVar6] = 0;
      }
      FUN_02ee2b00(puVar11,&local_e8,1);
      uVar10 = uVar10 | 0x80;
    }
    puVar12 = local_d0;
    if ((bVar14 != 0 || ((bVar4 ^ 1) & 1) != 0) && (bVar3 != false || ((bVar5 ^ 1) & 1) != 0)) {
      cVar1 = *(char *)((long)param_2 + 9);
      plVar16 = (long *)PTR_DAT_04bb2230;
      pbVar15 = PTR_DAT_04bc7280;
      goto joined_r0x03076ab8;
    }
    local_e8 = CONCAT44(local_e8._4_4_,7);
    (**(code **)(DAT_056e38e8 + 0x18))(&DAT_056e38e8);
    puVar13 = DAT_056e38f0;
    pbVar15 = PTR_DAT_04bc7280;
    plVar16 = (long *)PTR_DAT_04bb2230;
    if (puVar12 != DAT_056e38f0) {
      (**(code **)(DAT_056e38e8 + 0x18))(&DAT_056e38e8);
      lVar9 = 0;
      do {
        if (DAT_056e38f0[lVar9] == '\0') goto LAB_03077860;
        if (DAT_056e38f0[lVar9 + 1] == '\0') goto LAB_03077854;
        if (DAT_056e38f0[lVar9 + 2] == '\0') goto LAB_0307785c;
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
LAB_0307784c:
      lVar9 = 0;
      goto LAB_03077860;
    }
    goto LAB_03077888;
  case 4:
    if ((char)param_2[2] == '\0') {
      local_e8 = 0xffffffff00000004;
      (**(code **)(DAT_056e3868 + 0x18))(&DAT_056e3868);
      puVar13 = DAT_056e3870;
      if (puVar12 != DAT_056e3870) {
        (**(code **)(DAT_056e3868 + 0x18))(&DAT_056e3868);
        lVar9 = 0;
        do {
          if (DAT_056e3870[lVar9] == '\0') goto LAB_03077244;
          if (DAT_056e3870[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_03077244;
          }
          if (DAT_056e3870[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_03077244;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_03077244:
        iVar6 = (int)lVar9;
        if (local_c8 <= (int)lVar9) {
          iVar6 = local_c8 + -1;
        }
        memcpy(puVar12,puVar13,(long)iVar6);
        puVar12[iVar6] = 0;
      }
      uVar10 = 1;
      FUN_02ee2b00(puVar11,&local_e8,1);
    }
    else {
      uVar10 = 0;
    }
    puVar12 = local_d0;
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x1670) + 0x570) + 0xa0);
    if (lVar9 != 0) {
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(lVar9 + 0x14));
      (**(code **)(DAT_056e38a8 + 0x18))(&DAT_056e38a8);
      puVar13 = DAT_056e38b0;
      if (puVar12 != DAT_056e38b0) {
        (**(code **)(DAT_056e38a8 + 0x18))(&DAT_056e38a8);
        lVar9 = 0;
        do {
          if (DAT_056e38b0[lVar9] == '\0') goto LAB_0307731c;
          if (DAT_056e38b0[lVar9 + 1] == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_0307731c;
          }
          if (DAT_056e38b0[lVar9 + 2] == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_0307731c;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0307731c:
        iVar6 = (int)lVar9;
        if (local_c8 <= (int)lVar9) {
          iVar6 = local_c8 + -1;
        }
        memcpy(puVar12,puVar13,(long)iVar6);
        puVar12[iVar6] = 0;
      }
      FUN_02ee2b00(puVar11,&local_e8,1);
      uVar10 = uVar10 | 0x10;
    }
    uVar7 = FUN_0308ca70((long)param_2 + 10);
    puVar12 = local_d0;
    if ((uVar7 & 1) != 0) {
      if ((*(long *)PTR_DAT_04bb5ce0 != 0) &&
         (local_e8 = CONCAT44(local_e8._4_4_,7),
         (*(byte *)(*(long *)PTR_DAT_04bb5ce0 + 0xedc) >> 5 & 1) != 0)) {
        (**(code **)(DAT_056e38d8 + 0x18))(&DAT_056e38d8);
        puVar13 = DAT_056e38e0;
        if (puVar12 != DAT_056e38e0) {
          (**(code **)(DAT_056e38d8 + 0x18))(&DAT_056e38d8);
          lVar9 = 0;
          do {
            if (DAT_056e38e0[lVar9] == '\0') goto LAB_03077940;
            if (DAT_056e38e0[lVar9 + 1] == '\0') {
              lVar9 = lVar9 + 1;
              goto LAB_03077940;
            }
            if (DAT_056e38e0[lVar9 + 2] == '\0') {
              lVar9 = lVar9 + 2;
              goto LAB_03077940;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_03077940:
          iVar6 = (int)lVar9;
          if (local_c8 <= (int)lVar9) {
            iVar6 = local_c8 + -1;
          }
          memcpy(puVar12,puVar13,(long)iVar6);
          puVar12[iVar6] = 0;
        }
        FUN_02ee2b00(puVar11,&local_e8,1);
        uVar10 = uVar10 | 0x80;
        cVar1 = *(char *)((long)param_2 + 9);
        goto joined_r0x03076ab8;
      }
      local_e8 = CONCAT44(local_e8._4_4_,7);
      (**(code **)(DAT_056e38e8 + 0x18))(&DAT_056e38e8);
      puVar13 = DAT_056e38f0;
      if (puVar12 != DAT_056e38f0) {
        (**(code **)(DAT_056e38e8 + 0x18))(&DAT_056e38e8);
        lVar9 = 0;
        do {
          if (DAT_056e38f0[lVar9] == '\0') goto LAB_03077860;
          if (DAT_056e38f0[lVar9 + 1] == '\0') goto LAB_03077854;
          if (DAT_056e38f0[lVar9 + 2] == '\0') goto LAB_0307785c;
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        goto LAB_0307784c;
      }
      goto LAB_03077888;
    }
    break;
  default:
    uVar10 = 0;
    cVar1 = *(char *)((long)param_2 + 9);
    goto joined_r0x03076ab8;
  }
  goto LAB_0307789c;
LAB_03077854:
  lVar9 = lVar9 + 1;
  goto LAB_03077860;
LAB_0307785c:
  lVar9 = lVar9 + 2;
LAB_03077860:
  iVar6 = (int)lVar9;
  if (local_c8 <= (int)lVar9) {
    iVar6 = local_c8 + -1;
  }
  memcpy(puVar12,puVar13,(long)iVar6);
  puVar12[iVar6] = 0;
LAB_03077888:
  FUN_02ee2b00(puVar11,&local_e8,1);
  uVar10 = uVar10 | 0x100;
LAB_0307789c:
  cVar1 = *(char *)((long)param_2 + 9);
joined_r0x03076ab8:
  if ((cVar1 != '\0') && (uVar10 != *(ushort *)(param_1 + 0x24f8))) {
    local_64 = 3;
    puVar11 = *(undefined8 **)(*plVar16 + 0x58);
    if (((*pbVar15 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc7280);
    }
    if ((puVar11 != (undefined8 *)0x0) &&
       (uVar7 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc7278), (uVar7 & 1) != 0)) {
      *(byte *)((long)puVar11 + 0x239) = *(byte *)((long)puVar11 + 0x239) | 1;
    }
  }
  *(ushort *)(param_1 + 0x24f8) = uVar10;
  return;
}

