
/* WARNING: Removing unreachable block (ram,0x0359048c) */
/* WARNING: Removing unreachable block (ram,0x035905f8) */

void FUN_03590424(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  uint *local_b0;
  int local_a8;
  uint local_a4;
  undefined1 local_a0;
  undefined1 local_65;
  byte local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_54;
  int local_44;
  
  puVar3 = PTR_DAT_04bc7280;
  puVar1 = PTR_DAT_04bb2230;
  iVar6 = 0;
  if (*(int *)(param_1 + 0x248) != 1 || param_2 != 2) {
    iVar6 = param_2;
  }
  if (*(int *)(param_1 + 0x199c) != iVar6) {
    local_c8._0_4_ = 3;
    puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
    local_44 = iVar6;
    if (((*PTR_DAT_04bc7280 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc7280);
    }
    puVar2 = PTR_DAT_04bc7278;
    if ((puVar9 != (undefined8 *)0x0) &&
       (uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc7278), (uVar7 & 1) != 0)) {
      *(int *)(param_1 + 0x199c) = iVar6;
      if (iVar6 == 0) {
        local_c8 = CONCAT44(local_c8._4_4_,3);
        puVar9 = *(undefined8 **)(*(long *)puVar1 + 0x58);
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar6 != 0)) {
          *(undefined **)puVar2 = PTR_DAT_04bb7c30 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc7280);
        }
        if ((puVar9 != (undefined8 *)0x0) &&
           (uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc7278), (uVar7 & 1) != 0)) {
          *(byte *)((long)puVar9 + 0x239) = *(byte *)((long)puVar9 + 0x239) | 4;
        }
      }
      else {
        local_65 = 0;
        local_a4 = local_a4 & 0xffffff00;
        local_b0 = &local_a4;
        local_a8 = 0x40;
        local_c8 = 0xffffffffffffffff;
        uStack_c0 = 0xffffffffffffffff;
        local_b8 = PTR_DAT_04bb2bc0 + 0x10;
        local_54 = 0xffffffffffffffff;
        local_5c = 0;
        local_58 = 0;
        local_60 = *(byte *)(param_1 + 0x1f8);
        if (7 < local_60) {
          local_60 = 0xff;
        }
        if ((local_44 == 1) &&
           (*(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0) != 0)) {
          local_c8 = 0xffffffff00000004;
          local_a4 = 0x31303332;
          local_a0 = 0;
          FUN_02ee2b00(puVar9,&local_c8,1);
        }
        puVar4 = local_b0;
        if ((*(int *)(param_1 + 0x248) != 1) &&
           (lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0), lVar8 != 0)) {
          local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar8 + 0x14));
          if (local_b0 != (uint *)&DAT_040b7762) {
            iVar6 = 4;
            if (local_a8 < 5) {
              iVar6 = local_a8 + -1;
            }
            memcpy(local_b0,&DAT_040b7762,(long)iVar6);
            *(undefined1 *)((long)puVar4 + (long)iVar6) = 0;
          }
          FUN_02ee2b00(puVar9,&local_c8,1);
        }
      }
    }
  }
  return;
}

