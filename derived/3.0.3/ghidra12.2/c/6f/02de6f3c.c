
/* WARNING: Removing unreachable block (ram,0x02de6f78) */

void FUN_02de6f3c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined *__src;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined *local_98;
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
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278);
  if ((uVar3 & 1) == 0) {
    return;
  }
  local_4d = 0;
  local_90 = 0x3130383900000040;
  local_98 = (undefined *)((long)&local_90 + 4);
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
  lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0);
  if (lVar4 != 0) {
    local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar4 + 0x14));
    if (local_98 != &DAT_04093319) {
      iVar2 = 4;
      if ((int)local_90 < 5) {
        iVar2 = (int)local_90 + -1;
      }
      memcpy(local_98,&DAT_04093319,(long)iVar2);
      puVar1[iVar2] = 0;
    }
    FUN_02ee2b00(puVar5,&local_b0,1);
  }
  puVar1 = local_98;
  lVar4 = *(long *)(*(long *)(param_1 + 0x220) + 0xa0);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xbc) != '\0')) {
    local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar4 + 0x14));
    if (local_98 != &DAT_040f611f) {
      iVar2 = 4;
      if ((int)local_90 < 5) {
        iVar2 = (int)local_90 + -1;
      }
      memcpy(local_98,&DAT_040f611f,(long)iVar2);
      puVar1[iVar2] = 0;
    }
    FUN_02ee2b00(puVar5,&local_b0,1);
  }
  puVar1 = local_98;
  local_b0 = CONCAT44(local_b0._4_4_,6);
  if (*(char *)(param_1 + 0x570f6) == '\0') {
    if (local_98 == &DAT_040acbb8) goto LAB_02de7174;
    __src = &DAT_040acbb8;
  }
  else {
    if (local_98 == &DAT_040a7a79) goto LAB_02de7174;
    __src = &DAT_040a7a79;
  }
  iVar2 = 4;
  if ((int)local_90 < 5) {
    iVar2 = (int)local_90 + -1;
  }
  memcpy(local_98,__src,(long)iVar2);
  puVar1[iVar2] = 0;
LAB_02de7174:
  FUN_02ee2b00(puVar5,&local_b0,1);
  return;
}

