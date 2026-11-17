
/* WARNING: Removing unreachable block (ram,0x02f73f78) */
/* WARNING: Removing unreachable block (ram,0x02f73fd4) */

void FUN_02f73f30(long param_1,ulong param_2)

{
  undefined1 *__src;
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_5d;
  byte local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4c;
  
  puVar2 = PTR_DAT_04bc7280;
  puVar1 = PTR_DAT_04bb2230;
  local_c0 = CONCAT44(local_c0._4_4_,3);
  puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar7 != (undefined8 *)0x0) &&
     (uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc7278), (uVar5 & 1) != 0)) {
    *(byte *)((long)puVar7 + 0x239) = *(byte *)((long)puVar7 + 0x239) | 1;
  }
  local_c0 = CONCAT44(local_c0._4_4_,3);
  puVar7 = *(undefined8 **)(*(long *)puVar1 + 0x58);
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar4 != 0)) {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar7 != (undefined8 *)0x0) &&
     (uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc7278), (uVar5 & 1) != 0)) {
    local_5d = 0;
    local_a0 = 0x3130323500000040;
    local_a8 = (undefined1 *)((long)&local_a0 + 4);
    local_54 = 0;
    local_4c = 0xffffffffffffffff;
    uStack_b8 = 0xffffffffffffffff;
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    local_50 = 0;
    local_98 = 0;
    local_58 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_58) {
      local_58 = 0xff;
    }
    local_c0 = 0xffffffff00000004;
    FUN_02ee2b00(puVar7,&local_c0,1);
    puVar3 = local_a8;
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
    if (lVar6 != 0) {
      local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar6 + 0x14));
      __src = &DAT_0410048d;
      if ((param_2 & 1) == 0) {
        __src = &DAT_0406e55b;
      }
      if (local_a8 != __src) {
        lVar6 = 0;
        do {
          if (__src[lVar6] == '\0') goto LAB_02f740fc;
          if (__src[lVar6 + 1] == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_02f740fc;
          }
          if (__src[lVar6 + 2] == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_02f740fc;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_02f740fc:
        iVar4 = (int)lVar6;
        if ((int)local_a0 <= (int)lVar6) {
          iVar4 = (int)local_a0 + -1;
        }
        memcpy(local_a8,__src,(long)iVar4);
        puVar3[iVar4] = 0;
      }
      FUN_02ee2b00(puVar7,&local_c0,1);
    }
  }
  return;
}

