
/* WARNING: Removing unreachable block (ram,0x034afe8c) */

void FUN_034afe50(long param_1)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined *__src;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  uint *local_98;
  int local_90;
  uint local_8c;
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
  local_8c = local_8c & 0xffffff00;
  local_98 = &local_8c;
  local_90 = 0x40;
  uStack_a8 = 0xffffffffffffffff;
  local_a0 = PTR_DAT_04bb2bc0 + 0x10;
  local_3c = 0xffffffffffffffff;
  local_44 = 0;
  local_40 = 0;
  local_48 = *(byte *)(param_1 + 0x1f8);
  if (7 < local_48) {
    local_48 = 0xff;
  }
  if (*(int *)(param_1 + 0x250) == 1) {
    local_b0 = 0xffffffff00000004;
    local_8c = 0x34303539;
    local_88 = 0;
    FUN_02ee2b00(puVar5,&local_b0,1);
    lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0);
    if (lVar4 == 0) {
      return;
    }
    local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar4 + 0x14));
    if (local_98 == (uint *)&DAT_0409df94) goto LAB_034b00e8;
    __src = &DAT_0409df94;
  }
  else {
    if (*(int *)(param_1 + 0x250) != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x1ce8c) == '\0') {
      local_b0._4_4_ = 0xffffffff;
LAB_034b004c:
      puVar1 = local_98;
      local_b0._0_4_ = 7;
      iVar2 = 4;
      if (local_90 < 5) {
        iVar2 = local_90 + -1;
      }
      memcpy(local_98,&DAT_040fb90d,(long)iVar2);
      *(undefined1 *)((long)puVar1 + (long)iVar2) = 0;
    }
    else {
      local_b0 = 0xffffffff00000004;
      local_8c = 0x31303539;
      local_88 = 0;
      FUN_02ee2b00(puVar5,&local_b0,1);
      puVar1 = local_98;
      lVar4 = *(long *)(*(long *)(param_1 + 0x220) + 0xa0);
      if (lVar4 != 0) {
        local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar4 + 0x14));
        if (local_98 != (uint *)&DAT_040b7c27) {
          iVar2 = 4;
          if (local_90 < 5) {
            iVar2 = local_90 + -1;
          }
          memcpy(local_98,&DAT_040b7c27,(long)iVar2);
          *(undefined1 *)((long)puVar1 + (long)iVar2) = 0;
        }
        FUN_02ee2b00(puVar5,&local_b0,1);
      }
      local_b0._0_4_ = 7;
      if (local_98 != (uint *)&DAT_040fb90d) goto LAB_034b004c;
    }
    FUN_02ee2b00(puVar5,&local_b0,1);
    lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0);
    if (lVar4 == 0) {
      return;
    }
    local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar4 + 0x14));
    if (local_98 == (uint *)&DAT_040bcf45) goto LAB_034b00e8;
    __src = &DAT_040bcf45;
  }
  puVar1 = local_98;
  iVar2 = 4;
  if (local_90 < 5) {
    iVar2 = local_90 + -1;
  }
  memcpy(local_98,__src,(long)iVar2);
  *(undefined1 *)((long)puVar1 + (long)iVar2) = 0;
LAB_034b00e8:
  FUN_02ee2b00(puVar5,&local_b0,1);
  return;
}

