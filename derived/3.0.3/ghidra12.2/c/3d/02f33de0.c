
/* WARNING: Removing unreachable block (ram,0x02f33e1c) */

void FUN_02f33de0(long param_1)

{
  undefined1 *__src;
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined1 *puStack_98;
  int local_90;
  undefined1 local_8c [63];
  undefined1 local_4d;
  byte local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  
  local_b0 = CONCAT44(local_b0._4_4_,3);
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc7278), (uVar2 & 1) != 0)) {
    local_4d = 0;
    local_90 = 0x40;
    uStack_a8 = 0xffffffffffffffff;
    local_3c = 0xffffffffffffffff;
    local_48 = *(byte *)(param_1 + 0x1f8);
    local_8c[0] = 0;
    local_a0 = PTR_DAT_04bb2bc0 + 0x10;
    local_44 = 0;
    local_40 = 0;
    if (7 < local_48) {
      local_48 = 0xff;
    }
    local_b0 = 0xffffffff00000004;
    puStack_98 = local_8c;
    (**(code **)(DAT_056c1058 + 0x18))(&DAT_056c1058);
    __src = DAT_056c1060;
    if (local_8c != DAT_056c1060) {
      (**(code **)(DAT_056c1058 + 0x18))(&DAT_056c1058);
      lVar3 = 0;
      do {
        if (DAT_056c1060[lVar3] == '\0') goto LAB_02f33f2c;
        if (DAT_056c1060[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_02f33f2c;
        }
        if (DAT_056c1060[lVar3 + 2] == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_02f33f2c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02f33f2c:
      iVar1 = (int)lVar3;
      if (local_90 <= (int)lVar3) {
        iVar1 = local_90 + -1;
      }
      memcpy(local_8c,__src,(long)iVar1);
      local_8c[iVar1] = 0;
    }
    FUN_02ee2b00(puVar4,&local_b0,1);
  }
  return;
}

