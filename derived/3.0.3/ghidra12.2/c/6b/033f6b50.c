
/* WARNING: Removing unreachable block (ram,0x033f6b94) */

void FUN_033f6b50(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *__src;
  long lVar4;
  undefined8 *puVar5;
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
  
  local_c0 = CONCAT44(local_c0._4_4_,3);
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278);
  if ((uVar3 & 1) == 0) {
    return;
  }
  local_5d = 0;
  local_a0 = 0x3130393100000040;
  local_a8 = (undefined1 *)((long)&local_a0 + 4);
  local_54 = 0;
  local_4c = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  local_50 = 0;
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  local_c0 = 0xffffffff00000004;
  local_98 = 0;
  local_58 = *(byte *)(param_1 + 0x1f8);
  if (7 < local_58) {
    local_58 = 0xff;
  }
  FUN_02ee2b00(puVar5,&local_c0,1);
  puVar1 = local_a8;
  local_c0._0_4_ = 6;
  if (local_a8 != &DAT_040e5ec7) {
    iVar2 = 4;
    if ((int)local_a0 < 5) {
      iVar2 = (int)local_a0 + -1;
    }
    memcpy(local_a8,&DAT_040e5ec7,(long)iVar2);
    puVar1[iVar2] = 0;
  }
  FUN_02ee2b00(puVar5,&local_c0,1);
  puVar1 = local_a8;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
  if (lVar4 == 0) {
    return;
  }
  local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar4 + 0x14));
  if ((param_2 & 1) == 0) {
    if (local_a8 == &DAT_040637e6) goto LAB_033f6d14;
    __src = &DAT_040637e6;
  }
  else {
    if (local_a8 == &DAT_040f08c9) goto LAB_033f6d14;
    __src = &DAT_040f08c9;
  }
  iVar2 = 4;
  if ((int)local_a0 < 5) {
    iVar2 = (int)local_a0 + -1;
  }
  memcpy(local_a8,__src,(long)iVar2);
  puVar1[iVar2] = 0;
LAB_033f6d14:
  FUN_02ee2b00(puVar5,&local_c0,1);
  return;
}

