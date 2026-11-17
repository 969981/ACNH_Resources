
/* WARNING: Removing unreachable block (ram,0x02f7b074) */

void FUN_02f7b034(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_4d;
  byte local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  
  local_b0 = CONCAT44(local_b0._4_4_,3);
  puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc7278);
  puVar1 = PTR_DAT_04bb27d0;
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((param_2 & 1) != 0) {
    plVar4 = *(long **)PTR_DAT_04bb27d0;
    if (plVar4 == (long *)0x0) {
      if (*(int *)(param_1 + 0x1fc) == 0x40) goto LAB_02f7b170;
    }
    else if (((1 < *(byte *)(*plVar4 + 0x476)) || (*(int *)(param_1 + 0x1fc) == 0x40)) ||
            ((plVar4[5] != 0 && ((int)plVar4[0x10] == 1)))) goto LAB_02f7b170;
    local_4d = 0;
    local_90 = 0x3230363300000040;
    lStack_98 = (long)&local_90 + 4;
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
    FUN_02ee2b00(puVar6,&local_b0,1);
  }
LAB_02f7b170:
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
  if (lVar5 != 0) {
    local_4d = 0;
    uStack_a8 = 0xffffffffffffffff;
    lStack_98 = (long)&local_90 + 4;
    local_3c = 0xffffffffffffffff;
    local_44 = 0;
    local_a0 = PTR_DAT_04bb2bc0 + 0x10;
    local_40 = 0;
    local_48 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_48) {
      local_48 = 0xff;
    }
    local_90 = 0x3130363300000040;
    local_88 = 0;
    local_b0 = CONCAT44(0xffffffff,*(undefined4 *)(lVar5 + 0x14));
    FUN_02ee2b00(puVar6,&local_b0,1);
  }
  if ((((*(int *)(param_1 + 0x1fc) == 0x40) && (*(long **)puVar1 != (long *)0x0)) &&
      (lVar5 = **(long **)puVar1, 1 < *(byte *)(lVar5 + 0x476))) &&
     ((*(int *)(lVar5 + 0x508) == 0 || (*(char *)(lVar5 + 0x55d) == '\0')))) {
    local_4d = 0;
    local_90 = 0x3330363300000040;
    lStack_98 = (long)&local_90 + 4;
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
    local_b0 = 0xffffffff0000000f;
    FUN_02ee2b00(puVar6,&local_b0,1);
  }
  return;
}

