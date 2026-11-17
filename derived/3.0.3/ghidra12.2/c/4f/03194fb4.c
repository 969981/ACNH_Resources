
/* WARNING: Removing unreachable block (ram,0x03195000) */
/* WARNING: Removing unreachable block (ram,0x031952ac) */

void FUN_03194fb4(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  int iVar5;
  ulong uVar6;
  uint *__src;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  uint *local_b8;
  int local_b0;
  uint local_ac;
  undefined1 local_a8;
  undefined1 local_6d;
  byte local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_5c;
  
  puVar3 = PTR_DAT_04bc7280;
  puVar1 = PTR_DAT_04bb2230;
  local_d0._0_4_ = 3;
  puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  puVar2 = PTR_DAT_04bc7278;
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc7278);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (param_2 == 2) {
    local_d0 = CONCAT44(local_d0._4_4_,3);
    *(byte *)((long)puVar8 + 0x239) = *(byte *)((long)puVar8 + 0x239) | 4;
    lVar7 = *(long *)puVar1;
    goto LAB_031952a0;
  }
  local_6d = 0;
  local_ac = local_ac & 0xffffff00;
  local_b0 = 0x40;
  local_b8 = &local_ac;
  local_64 = 0;
  local_d0 = 0xffffffffffffffff;
  uStack_c8 = 0xffffffffffffffff;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  local_5c = 0xffffffffffffffff;
  local_60 = 0;
  local_68 = *(byte *)(param_1 + 0x1f8);
  if (7 < local_68) {
    local_68 = 0xff;
  }
  if (param_2 != 3) {
    if (param_2 != 1) {
      if (*(char *)(param_1 + 0x1c51e) == '\0') {
        local_d0 = 0xffffffff00000004;
        local_ac = 0x31303131;
        local_a8 = 0;
        FUN_02ee2b00(puVar8,&local_d0,1);
      }
      if ((*(char *)(param_1 + 0x1c51d) != '\0') &&
         (lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0), lVar7 != 0)) {
        local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(lVar7 + 0x14));
        __src = (uint *)&DAT_040aae7f;
        if (*(int *)(param_1 + 0x1c4fc) != 0) {
          __src = (uint *)&DAT_040637e1;
        }
        if (local_b8 != __src) {
          lVar7 = 0;
          do {
            if (*(char *)((long)__src + lVar7) == '\0') goto LAB_0319525c;
            if (*(char *)((long)__src + lVar7 + 1) == '\0') goto LAB_03195250;
            if (*(char *)((long)__src + lVar7 + 2) == '\0') goto LAB_03195258;
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          goto LAB_03195248;
        }
        goto LAB_03195280;
      }
      goto LAB_03195290;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
    if (lVar7 == 0) goto LAB_03195290;
    local_ac = 0x36303131;
    local_a8 = 0;
    local_d0 = CONCAT44(0xffffffff,*(undefined4 *)(lVar7 + 0x14));
    goto LAB_03195280;
  }
  if (*(char *)(param_1 + 0x1c51e) == '\0') {
    local_d0 = 0xffffffff00000004;
    local_ac = 0x31303131;
    local_a8 = 0;
    FUN_02ee2b00(puVar8,&local_d0,1);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
  if (lVar7 != 0) {
    local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(lVar7 + 0x14));
    __src = (uint *)&DAT_040aae7f;
    if (*(int *)(param_1 + 0x1c4fc) != 0) {
      __src = (uint *)&DAT_040637e1;
    }
    if (local_b8 != __src) {
      lVar7 = 0;
      do {
        if (*(char *)((long)__src + lVar7) == '\0') goto LAB_0319525c;
        if (*(char *)((long)__src + lVar7 + 1) == '\0') goto LAB_03195250;
        if (*(char *)((long)__src + lVar7 + 2) == '\0') goto LAB_03195258;
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
LAB_03195248:
      lVar7 = 0;
      goto LAB_0319525c;
    }
    goto LAB_03195280;
  }
  goto LAB_03195290;
LAB_03195250:
  lVar7 = lVar7 + 1;
  goto LAB_0319525c;
LAB_03195258:
  lVar7 = lVar7 + 2;
LAB_0319525c:
  puVar4 = local_b8;
  iVar5 = (int)lVar7;
  if (local_b0 <= (int)lVar7) {
    iVar5 = local_b0 + -1;
  }
  memcpy(local_b8,__src,(long)iVar5);
  *(undefined1 *)((long)puVar4 + (long)iVar5) = 0;
LAB_03195280:
  FUN_02ee2b00(puVar8,&local_d0,1);
LAB_03195290:
  lVar7 = *(long *)puVar1;
LAB_031952a0:
  puVar8 = *(undefined8 **)(lVar7 + 0x58);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar5 != 0)) {
    *(undefined **)puVar2 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar8 != (undefined8 *)0x0) &&
     (uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc7278), (uVar6 & 1) != 0)) {
    *(byte *)((long)puVar8 + 0x239) = *(byte *)((long)puVar8 + 0x239) | 1;
  }
  return;
}

