
/* WARNING: Removing unreachable block (ram,0x02c6f6dc) */
/* WARNING: Removing unreachable block (ram,0x02c701c0) */

void FUN_02c6f690(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
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
  puVar10 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc7278);
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar7 = 5;
  if (*(char *)((long)param_2 + 6) != '\0') {
    uVar7 = 2;
  }
  if (*param_2 == -1) {
    local_7d = 0;
    local_bc[0] = 0;
    uStack_d8 = 0xffffffffffffffff;
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    local_c0 = 0x40;
    local_78 = 0xff;
    local_74 = 0;
    local_6c = 0xffffffffffffffff;
    local_70 = 0;
    local_e0._0_4_ = 4;
    local_e0._4_4_ = 0xffffffff;
    puStack_c8 = local_bc;
    (**(code **)(DAT_0565ff60 + 0x18))(&DAT_0565ff60);
    puVar11 = DAT_0565ff68;
    if (local_bc != DAT_0565ff68) {
      (**(code **)(DAT_0565ff60 + 0x18))(&DAT_0565ff60);
      lVar8 = 0;
      do {
        if (DAT_0565ff68[lVar8] == '\0') goto LAB_02c6f8ec;
        if (DAT_0565ff68[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_02c6f8ec;
        }
        if (DAT_0565ff68[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_02c6f8ec;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_02c6f8ec:
      iVar5 = (int)lVar8;
      if (local_c0 <= (int)lVar8) {
        iVar5 = local_c0 + -1;
      }
      memcpy(local_bc,puVar11,(long)iVar5);
      local_bc[iVar5] = 0;
    }
    local_78 = *(byte *)(param_1 + 0x1f8);
    uVar12 = 1;
    if (7 < local_78) {
      local_78 = 0xff;
    }
    FUN_02ee2b00(puVar10,&local_e0,1);
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0xbc) != '\0')) {
      local_7d = 0;
      plVar1 = &DAT_0565ff60 + (ulong)uVar7 * 2;
      local_c0 = 0x40;
      local_bc[0] = 0;
      local_78 = 0xff;
      local_74 = 0;
      local_d0 = PTR_DAT_04bb2bc0 + 0x10;
      local_6c = 0xffffffffffffffff;
      local_70 = 0;
      uStack_d8 = 0xffffffffffffffff;
      local_e0._0_4_ = *(undefined4 *)(lVar8 + 0x14);
      local_e0._4_4_ = 0xffffffff;
      puStack_c8 = local_bc;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puVar11 = (&DAT_0565ff68)[(ulong)uVar7 * 2];
      if (local_bc != puVar11) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        lVar9 = (long)(&DAT_0565ff68)[(ulong)uVar7 * 2];
        lVar8 = 0;
        do {
          if (*(char *)(lVar9 + lVar8) == '\0') goto LAB_02c6fe68;
          lVar2 = lVar9 + lVar8;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_02c6fe68;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_02c6fe68;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_02c6fe68:
        iVar5 = (int)lVar8;
        if (local_c0 <= (int)lVar8) {
          iVar5 = local_c0 + -1;
        }
        memcpy(local_bc,puVar11,(long)iVar5);
        local_bc[iVar5] = 0;
      }
      local_78 = *(byte *)(param_1 + 0x1f8);
      if (7 < local_78) {
        local_78 = 0xff;
      }
      FUN_02ee2b00(puVar10,&local_e0,1);
      uVar12 = 1 << (ulong)uVar7 | 1;
    }
    goto LAB_02c70188;
  }
  if ((char)param_2[1] == '\0') {
    local_7d = 0;
    local_c0 = 0x40;
    uStack_d8 = 0xffffffffffffffff;
    local_6c = 0xffffffffffffffff;
    local_e0 = 0xffffffff00000004;
    local_bc[0] = 0;
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    local_78 = 0xff;
    local_74 = 0;
    local_70 = 0;
    puStack_c8 = local_bc;
    (**(code **)(DAT_0565ff70 + 0x18))(&DAT_0565ff70);
    puVar11 = DAT_0565ff78;
    if (local_bc != DAT_0565ff78) {
      (**(code **)(DAT_0565ff70 + 0x18))(&DAT_0565ff70);
      lVar8 = 0;
      do {
        if (DAT_0565ff78[lVar8] == '\0') goto LAB_02c6fa24;
        if (DAT_0565ff78[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_02c6fa24;
        }
        if (DAT_0565ff78[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_02c6fa24;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_02c6fa24:
      iVar5 = (int)lVar8;
      if (local_c0 <= (int)lVar8) {
        iVar5 = local_c0 + -1;
      }
      memcpy(local_bc,puVar11,(long)iVar5);
      local_bc[iVar5] = 0;
    }
    local_78 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_78) {
      local_78 = 0xff;
    }
    FUN_02ee2b00(puVar10,&local_e0,1);
    uVar12 = 2;
  }
  else {
    uVar12 = 0;
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0xbc) != '\0')) {
    local_c0 = 0x40;
    local_7d = 0;
    local_bc[0] = 0;
    if (*(char *)((long)param_2 + 5) != '\0') {
      uVar7 = 3;
    }
    uStack_d8 = 0xffffffffffffffff;
    local_74 = 0;
    local_6c = 0xffffffffffffffff;
    local_70 = 0;
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    local_78 = 0xff;
    local_e0 = CONCAT44(0xffffffff,*(undefined4 *)(lVar8 + 0x14));
    plVar1 = &DAT_0565ff60 + (ulong)uVar7 * 2;
    puStack_c8 = local_bc;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    puVar11 = (&DAT_0565ff68)[(ulong)uVar7 * 2];
    if (local_bc != puVar11) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      lVar9 = (long)(&DAT_0565ff68)[(ulong)uVar7 * 2];
      lVar8 = 0;
      do {
        if (*(char *)(lVar9 + lVar8) == '\0') goto LAB_02c6fb7c;
        lVar2 = lVar9 + lVar8;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_02c6fb7c;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_02c6fb7c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_02c6fb7c:
      iVar5 = (int)lVar8;
      if (local_c0 <= (int)lVar8) {
        iVar5 = local_c0 + -1;
      }
      memcpy(local_bc,puVar11,(long)iVar5);
      local_bc[iVar5] = 0;
    }
    local_78 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_78) {
      local_78 = 0xff;
    }
    FUN_02ee2b00(puVar10,&local_e0,1);
    uVar12 = uVar12 | 1 << (ulong)uVar7;
  }
  iVar4 = *(int *)(param_1 + 0x1c764);
  iVar5 = iVar4;
  if (*param_2 != -1) {
    iVar5 = *param_2;
  }
  switch(iVar5) {
  case 0:
    lVar8 = param_1 + 0x1c1c8;
    break;
  case 1:
    lVar8 = param_1 + 0x1c2e0;
    break;
  case 2:
    lVar8 = param_1 + 0x1c3f8;
    break;
  case 3:
    lVar8 = param_1 + 0x1c510;
    break;
  default:
    goto code_r0x02c6fcc8;
  }
  uVar7 = *(uint *)(lVar8 + 0x30);
  if (((int)uVar7 < 0) || (*(int *)(lVar8 + 0x18) <= (int)uVar7)) {
code_r0x02c6fcc8:
    switch(iVar4) {
    case 0:
      lVar8 = param_1 + 0x1c1c8;
      break;
    case 1:
      lVar8 = param_1 + 0x1c2e0;
      break;
    case 2:
      lVar8 = param_1 + 0x1c3f8;
      break;
    case 3:
      lVar8 = param_1 + 0x1c510;
      break;
    default:
      goto switchD_02c6fcdc_default;
    }
    uVar7 = *(uint *)(lVar8 + 0x30);
    if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(lVar8 + 0x18))) {
      lVar9 = lVar8 + 8;
      uVar3 = uVar7 + 1 & 3;
      if (2 < uVar7) {
        uVar7 = uVar7 + 1 & 0xfffffffc;
        do {
          uVar7 = uVar7 - 4;
          lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 8) + 8);
        } while (uVar7 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        lVar9 = *(long *)(lVar9 + 8);
      }
      if ((lVar9 != 0) && (lVar9 = lVar9 - *(int *)(lVar8 + 0x1c), lVar9 != 0)) {
        iVar5 = *(int *)(lVar9 + 0x270);
        goto LAB_02c6fd80;
      }
    }
  }
  else {
    lVar9 = lVar8 + 8;
    uVar3 = uVar7 + 1 & 3;
    if (2 < uVar7) {
      uVar7 = uVar7 + 1 & 0xfffffffc;
      do {
        uVar7 = uVar7 - 4;
        lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 8) + 8);
      } while (uVar7 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      lVar9 = *(long *)(lVar9 + 8);
    }
    if (((lVar9 == 0) || (lVar9 = lVar9 - *(int *)(lVar8 + 0x1c), lVar9 == 0)) ||
       (iVar5 = *(int *)(lVar9 + 0x270), iVar5 == -1)) goto code_r0x02c6fcc8;
LAB_02c6fd80:
    if (iVar5 == 0x73) {
      lVar9 = *(long *)(param_1 + 0x210);
      lVar8 = *(long *)(*(long *)(lVar9 + 0x578) + 0xa0);
      if (lVar8 != 0) {
        local_7d = 0;
        local_c0 = 0x40;
        uStack_d8 = 0xffffffffffffffff;
        local_bc[0] = 0;
        local_78 = 0xff;
        local_d0 = PTR_DAT_04bb2bc0 + 0x10;
        local_74 = 0;
        local_6c = 0xffffffffffffffff;
        local_70 = 0;
        local_e0._0_4_ = *(undefined4 *)(lVar8 + 0x14);
        local_e0._4_4_ = 0xffffffff;
        puStack_c8 = local_bc;
        (**(code **)(DAT_0565ffc0 + 0x18))(&DAT_0565ffc0);
        puVar11 = DAT_0565ffc8;
        if (local_bc != DAT_0565ffc8) {
          (**(code **)(DAT_0565ffc0 + 0x18))(&DAT_0565ffc0);
          lVar8 = 0;
          do {
            if (DAT_0565ffc8[lVar8] == '\0') goto LAB_02c6fed0;
            if (DAT_0565ffc8[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_02c6fed0;
            }
            if (DAT_0565ffc8[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_02c6fed0;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_02c6fed0:
          iVar5 = (int)lVar8;
          if (local_c0 <= (int)lVar8) {
            iVar5 = local_c0 + -1;
          }
          memcpy(local_bc,puVar11,(long)iVar5);
          local_bc[iVar5] = 0;
        }
        local_78 = *(byte *)(param_1 + 0x1f8);
        if (7 < local_78) {
          local_78 = 0xff;
        }
        FUN_02ee2b00(puVar10,&local_e0,1);
        lVar9 = *(long *)(param_1 + 0x210);
        uVar12 = uVar12 | 0x40;
      }
      lVar8 = *(long *)(*(long *)(lVar9 + 0x580) + 0xa0);
      if (lVar8 != 0) {
        local_7d = 0;
        local_c0 = 0x40;
        uStack_d8 = 0xffffffffffffffff;
        local_bc[0] = 0;
        local_78 = 0xff;
        local_d0 = PTR_DAT_04bb2bc0 + 0x10;
        local_74 = 0;
        local_6c = 0xffffffffffffffff;
        local_70 = 0;
        local_e0._0_4_ = *(undefined4 *)(lVar8 + 0x14);
        local_e0._4_4_ = 0xffffffff;
        puStack_c8 = local_bc;
        (**(code **)(DAT_0565ffd0 + 0x18))(&DAT_0565ffd0);
        puVar11 = DAT_0565ffd8;
        if (local_bc != DAT_0565ffd8) {
          (**(code **)(DAT_0565ffd0 + 0x18))(&DAT_0565ffd0);
          lVar8 = 0;
          do {
            if (DAT_0565ffd8[lVar8] == '\0') goto LAB_02c6fff8;
            if (DAT_0565ffd8[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_02c6fff8;
            }
            if (DAT_0565ffd8[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_02c6fff8;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_02c6fff8:
          iVar5 = (int)lVar8;
          if (local_c0 <= (int)lVar8) {
            iVar5 = local_c0 + -1;
          }
          memcpy(local_bc,puVar11,(long)iVar5);
          local_bc[iVar5] = 0;
        }
        local_78 = *(byte *)(param_1 + 0x1f8);
        if (7 < local_78) {
          local_78 = 0xff;
        }
        FUN_02ee2b00(puVar10,&local_e0,1);
        uVar12 = uVar12 | 0x80;
      }
    }
  }
switchD_02c6fcdc_default:
  if ((*(int *)(param_1 + 0x1c764) - 1U < 4) &&
     (lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x580) + 0xa0), lVar8 != 0)) {
    local_7d = 0;
    local_c0 = 0x40;
    uStack_d8 = 0xffffffffffffffff;
    local_bc[0] = 0;
    local_78 = 0xff;
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    local_74 = 0;
    local_6c = 0xffffffffffffffff;
    local_70 = 0;
    local_e0._0_4_ = *(undefined4 *)(lVar8 + 0x14);
    local_e0._4_4_ = 0xffffffff;
    puStack_c8 = local_bc;
    (**(code **)(DAT_0565ffe0 + 0x18))(&DAT_0565ffe0);
    puVar11 = DAT_0565ffe8;
    if (local_bc != DAT_0565ffe8) {
      (**(code **)(DAT_0565ffe0 + 0x18))(&DAT_0565ffe0);
      lVar8 = 0;
      do {
        if (DAT_0565ffe8[lVar8] == '\0') goto LAB_02c7013c;
        if (DAT_0565ffe8[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_02c7013c;
        }
        if (DAT_0565ffe8[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_02c7013c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_02c7013c:
      iVar5 = (int)lVar8;
      if (local_c0 <= (int)lVar8) {
        iVar5 = local_c0 + -1;
      }
      memcpy(local_bc,puVar11,(long)iVar5);
      local_bc[iVar5] = 0;
    }
    local_78 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_78) {
      local_78 = 0xff;
    }
    FUN_02ee2b00(puVar10,&local_e0,1);
    uVar12 = uVar12 | 0x100;
  }
LAB_02c70188:
  if ((*(char *)((long)param_2 + 7) != '\0') && (uVar12 != *(ushort *)(param_1 + 0x97d00))) {
    local_e0 = CONCAT44(local_e0._4_4_,3);
    puVar10 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
    if (((*PTR_DAT_04bc7280 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc7280);
    }
    if ((puVar10 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc7278), (uVar6 & 1) != 0)) {
      *(byte *)((long)puVar10 + 0x239) = *(byte *)((long)puVar10 + 0x239) | 1;
    }
  }
  *(ushort *)(param_1 + 0x97d00) = (ushort)uVar12;
  return;
}

