
/* WARNING: Removing unreachable block (ram,0x02d21bb0) */

void FUN_02d21b70(long param_1)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  char *__src;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined2 local_98;
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
  local_54 = 0;
  local_a0 = 0x3035313100000040;
  local_a8 = (char *)((long)&local_a0 + 4);
  uStack_b8 = 0xffffffffffffffff;
  local_4c = 0xffffffffffffffff;
  local_50 = 0;
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  local_58 = *(byte *)(param_1 + 0x1f8);
  if (7 < local_58) {
    local_58 = 0xff;
  }
  local_c0 = 0xffffffff00000004;
  local_98 = 0x31;
  FUN_02ee2b00(puVar5,&local_c0,1);
  pcVar1 = local_a8;
  if (((4 < *(int *)(param_1 + 0x56f1c)) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0x220) + 0xa0), lVar4 != 0)) &&
     (*(char *)(lVar4 + 0xbc) != '\0')) {
    local_c0 = CONCAT44(local_c0._4_4_,7);
    if (local_a8 != "11503") {
      iVar2 = 5;
      if ((int)local_a0 < 6) {
        iVar2 = (int)local_a0 + -1;
      }
      memcpy(local_a8,"11503",(long)iVar2);
      pcVar1[iVar2] = '\0';
    }
    FUN_02ee2b00(puVar5,&local_c0,1);
  }
  pcVar1 = local_a8;
  local_c0._0_4_ = 6;
  if (*(char *)(param_1 + 0x56f17) == '\0') {
    if (*(int *)(param_1 + 0x56f1c) < 5) goto LAB_02d21d78;
    if (local_a8 != "11504") {
      __src = "11504";
      goto LAB_02d21d40;
    }
  }
  else if (local_a8 != "11505") {
    __src = "11505";
LAB_02d21d40:
    iVar2 = 5;
    if ((int)local_a0 < 6) {
      iVar2 = (int)local_a0 + -1;
    }
    memcpy(local_a8,__src,(long)iVar2);
    pcVar1[iVar2] = '\0';
  }
  FUN_02ee2b00(puVar5,&local_c0,1);
LAB_02d21d78:
  pcVar1 = local_a8;
  lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xbc) != '\0')) {
    local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar4 + 0x14));
    if (local_a8 != "11502") {
      iVar2 = 5;
      if ((int)local_a0 < 6) {
        iVar2 = (int)local_a0 + -1;
      }
      memcpy(local_a8,"11502",(long)iVar2);
      pcVar1[iVar2] = '\0';
    }
    FUN_02ee2b00(puVar5,&local_c0,1);
  }
  return;
}

