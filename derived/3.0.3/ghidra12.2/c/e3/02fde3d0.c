
/* WARNING: Removing unreachable block (ram,0x02fde5cc) */
/* WARNING: Removing unreachable block (ram,0x02fde41c) */
/* WARNING: Removing unreachable block (ram,0x02fde4d0) */
/* WARNING: Removing unreachable block (ram,0x02fde6c0) */

void FUN_02fde3d0(long param_1,byte *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
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
  
  local_e0 = CONCAT44(local_e0._4_4_,3);
  puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar8 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc7278), (uVar4 & 1) != 0)) {
    local_7d = 0;
    local_c0 = 0x40;
    local_e0 = 0xffffffffffffffff;
    uStack_d8 = 0xffffffffffffffff;
    local_6c = 0xffffffffffffffff;
    local_78 = *(byte *)(param_1 + 0x1f8);
    local_d0 = PTR_DAT_04bb2bc0 + 0x10;
    local_bc[0] = 0;
    local_74 = 0;
    local_70 = 0;
    if (7 < local_78) {
      local_78 = 0xff;
    }
    bVar5 = *param_2;
    local_c8 = local_bc;
    if ((bVar5 & 1) != 0) {
      local_e0 = 0xffffffff00000004;
      (**(code **)(DAT_056d2980 + 0x18))(&DAT_056d2980);
      puVar1 = DAT_056d2988;
      if (local_bc != DAT_056d2988) {
        (**(code **)(DAT_056d2980 + 0x18))(&DAT_056d2980);
        lVar7 = 0;
        do {
          if (DAT_056d2988[lVar7] == '\0') goto LAB_02fde55c;
          if (DAT_056d2988[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_02fde55c;
          }
          if (DAT_056d2988[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_02fde55c;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_02fde55c:
        iVar3 = (int)lVar7;
        if (local_c0 <= (int)lVar7) {
          iVar3 = local_c0 + -1;
        }
        memcpy(local_bc,puVar1,(long)iVar3);
        local_bc[iVar3] = 0;
      }
      FUN_02ee2b00(puVar8,&local_e0,1);
      bVar5 = *param_2;
    }
    puVar1 = local_c8;
    uVar6 = (uint)bVar5;
    lVar7 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0);
    if ((lVar7 != 0) && ((bVar5 >> 1 & 1) != 0)) {
      local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar7 + 0x14));
      (**(code **)(DAT_056d2990 + 0x18))(&DAT_056d2990);
      puVar2 = DAT_056d2998;
      if (puVar1 != DAT_056d2998) {
        (**(code **)(DAT_056d2990 + 0x18))(&DAT_056d2990);
        lVar7 = 0;
        do {
          if (DAT_056d2998[lVar7] == '\0') goto LAB_02fde650;
          if (DAT_056d2998[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_02fde650;
          }
          if (DAT_056d2998[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_02fde650;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_02fde650:
        iVar3 = (int)lVar7;
        if (local_c0 <= (int)lVar7) {
          iVar3 = local_c0 + -1;
        }
        memcpy(puVar1,puVar2,(long)iVar3);
        puVar1[iVar3] = 0;
      }
      FUN_02ee2b00(puVar8,&local_e0,1);
      uVar6 = (uint)*param_2;
    }
    puVar1 = local_c8;
    bVar5 = (byte)uVar6;
    lVar7 = *(long *)(*(long *)(param_1 + 0x218) + 0xa0);
    if ((lVar7 != 0) && ((uVar6 >> 2 & 1) != 0)) {
      local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar7 + 0x14));
      (**(code **)(DAT_056d29a0 + 0x18))(&DAT_056d29a0);
      puVar2 = DAT_056d29a8;
      if (puVar1 != DAT_056d29a8) {
        (**(code **)(DAT_056d29a0 + 0x18))(&DAT_056d29a0);
        lVar7 = 0;
        do {
          if (DAT_056d29a8[lVar7] == '\0') goto LAB_02fde74c;
          if (DAT_056d29a8[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_02fde74c;
          }
          if (DAT_056d29a8[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_02fde74c;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_02fde74c:
        iVar3 = (int)lVar7;
        if (local_c0 <= (int)lVar7) {
          iVar3 = local_c0 + -1;
        }
        memcpy(puVar1,puVar2,(long)iVar3);
        puVar1[iVar3] = 0;
      }
      FUN_02ee2b00(puVar8,&local_e0,1);
      bVar5 = *param_2;
    }
    *(byte *)(param_1 + 0x1d244) = bVar5;
  }
  return;
}

