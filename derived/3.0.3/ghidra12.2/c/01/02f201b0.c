
/* WARNING: Removing unreachable block (ram,0x02f201f0) */

void FUN_02f201b0(long param_1)

{
  undefined1 *puVar1;
  undefined1 *__src;
  int iVar2;
  ulong uVar3;
  long lVar4;
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
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar6 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) {
    local_5d = 0;
    local_a0 = 0x40;
    local_c0 = 0xffffffffffffffff;
    uStack_b8 = 0xffffffffffffffff;
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    local_4c = 0xffffffffffffffff;
    local_58 = *(byte *)(param_1 + 0x1f8);
    local_9c[0] = 0;
    local_54 = 0;
    local_50 = 0;
    if (7 < local_58) {
      local_58 = 0xff;
    }
    lVar4 = *(long *)(param_1 + 0x210);
    lVar5 = *(long *)(*(long *)(lVar4 + 0x578) + 0xa0);
    local_a8 = local_9c;
    if (lVar5 != 0) {
      local_c0 = CONCAT44(0xffffffff,*(undefined4 *)(lVar5 + 0x14));
      (**(code **)(DAT_056bb028 + 0x18))(&DAT_056bb028);
      puVar1 = DAT_056bb030;
      if (local_9c != DAT_056bb030) {
        (**(code **)(DAT_056bb028 + 0x18))(&DAT_056bb028);
        lVar4 = 0;
        do {
          if (DAT_056bb030[lVar4] == '\0') goto LAB_02f20310;
          if (DAT_056bb030[lVar4 + 1] == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_02f20310;
          }
          if (DAT_056bb030[lVar4 + 2] == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_02f20310;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_02f20310:
        iVar2 = (int)lVar4;
        if (local_a0 <= (int)lVar4) {
          iVar2 = local_a0 + -1;
        }
        memcpy(local_9c,puVar1,(long)iVar2);
        local_9c[iVar2] = 0;
      }
      FUN_02ee2b00(puVar6,&local_c0,1);
      lVar4 = *(long *)(param_1 + 0x210);
    }
    puVar1 = local_a8;
    lVar4 = *(long *)(*(long *)(lVar4 + 0x570) + 0xa0);
    if (lVar4 != 0) {
      local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar4 + 0x14));
      (**(code **)(DAT_056bb038 + 0x18))(&DAT_056bb038);
      __src = DAT_056bb040;
      if (puVar1 != DAT_056bb040) {
        (**(code **)(DAT_056bb038 + 0x18))(&DAT_056bb038);
        lVar4 = 0;
        do {
          if (DAT_056bb040[lVar4] == '\0') goto LAB_02f203ec;
          if (DAT_056bb040[lVar4 + 1] == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_02f203ec;
          }
          if (DAT_056bb040[lVar4 + 2] == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_02f203ec;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_02f203ec:
        iVar2 = (int)lVar4;
        if (local_a0 <= (int)lVar4) {
          iVar2 = local_a0 + -1;
        }
        memcpy(puVar1,__src,(long)iVar2);
        puVar1[iVar2] = 0;
      }
      FUN_02ee2b00(puVar6,&local_c0,1);
    }
  }
  return;
}

