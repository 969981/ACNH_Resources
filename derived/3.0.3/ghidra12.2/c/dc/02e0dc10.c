
/* WARNING: Removing unreachable block (ram,0x02e0dc50) */

void FUN_02e0dc10(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  byte local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4c;
  
  local_c0 = CONCAT44(local_c0._4_4_,3);
  puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar6 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc7278), (uVar4 & 1) != 0)) {
    local_5d = 0;
    local_9c[0] = 0;
    local_a0 = 0x40;
    local_c0 = 0xffffffffffffffff;
    uStack_b8 = 0xffffffffffffffff;
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    local_4c = 0xffffffffffffffff;
    local_54 = 0;
    local_50 = 0;
    local_58 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_58) {
      local_58 = 0xff;
    }
    local_a8 = local_9c;
    if (*(int *)(param_1 + 0x1c1b8) != 0) {
      local_c0 = 0xffffffff00000004;
      (**(code **)(DAT_056922f0 + 0x18))(&DAT_056922f0);
      puVar1 = DAT_056922f8;
      if (local_9c != DAT_056922f8) {
        (**(code **)(DAT_056922f0 + 0x18))(&DAT_056922f0);
        lVar5 = 0;
        do {
          if (DAT_056922f8[lVar5] == '\0') goto LAB_02e0dd70;
          if (DAT_056922f8[lVar5 + 1] == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_02e0dd70;
          }
          if (DAT_056922f8[lVar5 + 2] == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_02e0dd70;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_02e0dd70:
        iVar3 = (int)lVar5;
        if (local_a0 <= (int)lVar5) {
          iVar3 = local_a0 + -1;
        }
        memcpy(local_9c,puVar1,(long)iVar3);
        local_9c[iVar3] = 0;
      }
      FUN_02ee2b00(puVar6,&local_c0,1);
      puVar1 = local_a8;
      lVar5 = *(long *)(*(long *)(param_1 + 0x218) + 0xa0);
      if (lVar5 != 0) {
        local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar5 + 0x14));
        (**(code **)(DAT_05692310 + 0x18))(&DAT_05692310);
        puVar2 = DAT_05692318;
        if (puVar1 != DAT_05692318) {
          (**(code **)(DAT_05692310 + 0x18))(&DAT_05692310);
          lVar5 = 0;
          do {
            if (DAT_05692318[lVar5] == '\0') goto LAB_02e0de3c;
            if (DAT_05692318[lVar5 + 1] == '\0') {
              lVar5 = lVar5 + 1;
              goto LAB_02e0de3c;
            }
            if (DAT_05692318[lVar5 + 2] == '\0') {
              lVar5 = lVar5 + 2;
              goto LAB_02e0de3c;
            }
            lVar5 = lVar5 + 3;
          } while (lVar5 != 0x80001);
          lVar5 = 0;
LAB_02e0de3c:
          iVar3 = (int)lVar5;
          if (local_a0 <= (int)lVar5) {
            iVar3 = local_a0 + -1;
          }
          memcpy(puVar1,puVar2,(long)iVar3);
          puVar1[iVar3] = 0;
        }
        FUN_02ee2b00(puVar6,&local_c0,1);
      }
      puVar2 = local_a8;
      local_c0 = CONCAT44(local_c0._4_4_,DAT_0569168c);
      (**(code **)(DAT_05692320 + 0x18))(&DAT_05692320);
      puVar1 = DAT_05692328;
      if (puVar2 != DAT_05692328) {
        (**(code **)(DAT_05692320 + 0x18))(&DAT_05692320);
        lVar5 = 0;
        do {
          if (DAT_05692328[lVar5] == '\0') goto LAB_02e0defc;
          if (DAT_05692328[lVar5 + 1] == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_02e0defc;
          }
          if (DAT_05692328[lVar5 + 2] == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_02e0defc;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_02e0defc:
        iVar3 = (int)lVar5;
        if (local_a0 <= (int)lVar5) {
          iVar3 = local_a0 + -1;
        }
        memcpy(puVar2,puVar1,(long)iVar3);
        puVar2[iVar3] = 0;
      }
      FUN_02ee2b00(puVar6,&local_c0,1);
    }
    puVar1 = local_a8;
    lVar5 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0);
    if (lVar5 != 0) {
      local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar5 + 0x14));
      (**(code **)(DAT_05692300 + 0x18))(&DAT_05692300);
      puVar2 = DAT_05692308;
      if (puVar1 != DAT_05692308) {
        (**(code **)(DAT_05692300 + 0x18))(&DAT_05692300);
        lVar5 = 0;
        do {
          if (DAT_05692308[lVar5] == '\0') goto LAB_02e0dfcc;
          if (DAT_05692308[lVar5 + 1] == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_02e0dfcc;
          }
          if (DAT_05692308[lVar5 + 2] == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_02e0dfcc;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_02e0dfcc:
        iVar3 = (int)lVar5;
        if (local_a0 <= (int)lVar5) {
          iVar3 = local_a0 + -1;
        }
        memcpy(puVar1,puVar2,(long)iVar3);
        puVar1[iVar3] = 0;
      }
      FUN_02ee2b00(puVar6,&local_c0,1);
    }
  }
  return;
}

