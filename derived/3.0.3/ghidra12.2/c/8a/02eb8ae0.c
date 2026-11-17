
/* WARNING: Removing unreachable block (ram,0x02eb8b20) */

void FUN_02eb8ae0(long param_1,ulong param_2)

{
  undefined1 *__src;
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_4d;
  byte local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  
  local_b0 = CONCAT44(local_b0._4_4_,3);
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) {
    local_4d = 0;
    local_90 = 0x3130343600000040;
    local_98 = (undefined1 *)((long)&local_90 + 4);
    local_44 = 0;
    local_3c = 0xffffffffffffffff;
    uStack_a8 = 0xffffffffffffffff;
    local_a0 = PTR_DAT_04bb2bc0 + 0x10;
    local_40 = 0;
    local_88 = 0;
    local_48 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_48) {
      local_48 = 0xff;
    }
    local_b0 = 0xffffffff00000004;
    FUN_02ee2b00(puVar5,&local_b0,1);
    puVar1 = local_98;
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x12d8) + 0x570) + 0xa0);
    if (lVar4 != 0) {
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar4 + 0x14));
      __src = &DAT_040e60da;
      if ((param_2 & 1) == 0) {
        __src = &DAT_0407db07;
      }
      if (local_98 != __src) {
        lVar4 = 0;
        do {
          if (__src[lVar4] == '\0') goto LAB_02eb8c4c;
          if (__src[lVar4 + 1] == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_02eb8c4c;
          }
          if (__src[lVar4 + 2] == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_02eb8c4c;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_02eb8c4c:
        iVar2 = (int)lVar4;
        if ((int)local_90 <= (int)lVar4) {
          iVar2 = (int)local_90 + -1;
        }
        memcpy(local_98,__src,(long)iVar2);
        puVar1[iVar2] = 0;
      }
      FUN_02ee2b00(puVar5,&local_b0,1);
    }
  }
  return;
}

