
/* WARNING: Removing unreachable block (ram,0x02bd69e4) */

void FUN_02bd69a0(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *__src;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
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
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) {
    local_5d = 0;
    local_a0 = 0x40;
    local_4c = 0xffffffffffffffff;
    local_c0 = 0xffffffffffffffff;
    uStack_b8 = 0xffffffffffffffff;
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    local_9c[0] = 0;
    local_54 = 0;
    local_50 = 0;
    local_58 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_58) {
      local_58 = 0xff;
    }
    local_a8 = local_9c;
    if ((param_2 & 1) != 0) {
      local_c0 = 0xffffffff00000004;
      (**(code **)(DAT_056468c8 + 0x18))(&DAT_056468c8);
      puVar1 = DAT_056468d0;
      if (local_9c != DAT_056468d0) {
        (**(code **)(DAT_056468c8 + 0x18))(&DAT_056468c8);
        lVar4 = 0;
        do {
          if (DAT_056468d0[lVar4] == '\0') goto LAB_02bd6afc;
          if (DAT_056468d0[lVar4 + 1] == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_02bd6afc;
          }
          if (DAT_056468d0[lVar4 + 2] == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_02bd6afc;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_02bd6afc:
        iVar2 = (int)lVar4;
        if (local_a0 <= (int)lVar4) {
          iVar2 = local_a0 + -1;
        }
        memcpy(local_9c,puVar1,(long)iVar2);
        local_9c[iVar2] = 0;
      }
      FUN_02ee2b00(puVar5,&local_c0,1);
    }
    puVar1 = local_a8;
    lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0);
    if (lVar4 != 0) {
      local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar4 + 0x14));
      (**(code **)(DAT_056468d8 + 0x18))(&DAT_056468d8);
      __src = DAT_056468e0;
      if (puVar1 != DAT_056468e0) {
        (**(code **)(DAT_056468d8 + 0x18))(&DAT_056468d8);
        lVar4 = 0;
        do {
          if (DAT_056468e0[lVar4] == '\0') goto LAB_02bd6bcc;
          if (DAT_056468e0[lVar4 + 1] == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_02bd6bcc;
          }
          if (DAT_056468e0[lVar4 + 2] == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_02bd6bcc;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_02bd6bcc:
        iVar2 = (int)lVar4;
        if (local_a0 <= (int)lVar4) {
          iVar2 = local_a0 + -1;
        }
        memcpy(puVar1,__src,(long)iVar2);
        puVar1[iVar2] = 0;
      }
      FUN_02ee2b00(puVar5,&local_c0,1);
    }
  }
  return;
}

