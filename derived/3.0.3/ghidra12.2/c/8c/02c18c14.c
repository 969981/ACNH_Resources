
/* WARNING: Removing unreachable block (ram,0x02c18ca8) */

void FUN_02c18c14(int *param_1,long param_2,byte *param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
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
  
  iVar2 = *param_1;
  if (iVar2 == 2) {
    if ((param_4 & 1) != 0) {
LAB_02c18c7c:
      if (param_2 == 0) {
        return;
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      goto LAB_02c18c84;
    }
    iVar2 = 1;
  }
  else if (iVar2 == 1) {
    if ((param_4 & 1) == 0) goto LAB_02c18c7c;
    iVar2 = 2;
  }
  else {
    if (iVar2 != 0) {
      return;
    }
    iVar2 = 1;
    if ((param_4 & 1) != 0) {
      iVar2 = 2;
    }
  }
  *param_1 = iVar2;
  if (param_2 == 0) {
    return;
  }
LAB_02c18c84:
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
    local_90 = 0x40;
    local_98 = &local_8c;
    local_3c = 0xffffffffffffffff;
    local_b0 = 0xffffffffffffffff;
    uStack_a8 = 0xffffffffffffffff;
    local_a0 = PTR_DAT_04bb2bc0 + 0x10;
    local_8c = local_8c & 0xffffff00;
    local_44 = 0;
    local_40 = 0;
    local_48 = *param_3;
    if (7 < local_48) {
      local_48 = 0xff;
    }
    if (((param_4 & 1) != 0) && (lVar4 = *(long *)(*(long *)(param_2 + 0x590) + 0xa0), lVar4 != 0))
    {
      local_8c = 0x31313232;
      local_88 = 0;
      local_b0 = CONCAT44(0xffffffff,*(undefined4 *)(lVar4 + 0x14));
      FUN_02ee2b00(puVar5,&local_b0,1);
    }
    puVar1 = local_98;
    lVar4 = *(long *)(*(long *)(param_2 + 0x570) + 0xa0);
    if (lVar4 != 0) {
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar4 + 0x14));
      if (local_98 != (uint *)&DAT_0406e118) {
        iVar2 = 4;
        if (local_90 < 5) {
          iVar2 = local_90 + -1;
        }
        memcpy(local_98,&DAT_0406e118,(long)iVar2);
        *(undefined1 *)((long)puVar1 + (long)iVar2) = 0;
      }
      FUN_02ee2b00(puVar5,&local_b0,1);
    }
  }
  return;
}

