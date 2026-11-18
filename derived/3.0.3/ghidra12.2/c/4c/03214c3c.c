
/* WARNING: Removing unreachable block (ram,0x03214c80) */

void FUN_03214c3c(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined *__src;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_5d;
  byte local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4c;
  int local_24;
  
  local_c0 = CONCAT44(local_c0._4_4_,3);
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
  if ((uVar3 & 1) == 0) {
    return;
  }
  local_24 = 1;
  if (-1 < param_2) {
    uVar3 = FUN_032152b8(param_1,param_2);
    if ((uVar3 & 1) == 0) {
      if (param_2 < *(int *)(param_1 + 0x1c368)) {
        if (*(int *)(param_1 + 0x1c36c) == param_2) {
          lVar4 = 0;
        }
        else if (*(int *)(param_1 + 0x1c378) == param_2) {
          lVar4 = 1;
        }
        else if (*(int *)(param_1 + 0x1c384) == param_2) {
          lVar4 = 2;
        }
        else if (*(int *)(param_1 + 0x1c390) == param_2) {
          lVar4 = 3;
        }
        else if (*(int *)(param_1 + 0x1c39c) == param_2) {
          lVar4 = 4;
        }
        else if (*(int *)(param_1 + 0x1c3a8) == param_2) {
          lVar4 = 5;
        }
        else if (*(int *)(param_1 + 0x1c3b4) == param_2) {
          lVar4 = 6;
        }
        else if (*(int *)(param_1 + 0x1c3c0) == param_2) {
          lVar4 = 7;
        }
        else if (*(int *)(param_1 + 0x1c3cc) == param_2) {
          lVar4 = 8;
        }
        else {
          if (*(int *)(param_1 + 0x1c3d8) != param_2) goto LAB_03214dd0;
          lVar4 = 9;
        }
        if ((char)((int *)(param_1 + 0x1c36c))[lVar4 * 3 + 2] != '\0') {
          local_24 = 3;
        }
      }
    }
    else {
      local_24 = 2;
    }
  }
LAB_03214dd0:
  if (*(int *)(param_1 + 0x1c4f4) == local_24) {
    return;
  }
  local_5d = 0;
  local_a0 = 0x3130383200000040;
  local_a8 = (undefined *)((long)&local_a0 + 4);
  local_54 = 0;
  local_4c = 0xffffffffffffffff;
  uStack_b8 = 0xffffffffffffffff;
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  local_50 = 0;
  local_98 = 0;
  local_58 = *(byte *)(param_1 + 0x1f8);
  if (7 < local_58) {
    local_58 = 0xff;
  }
  local_c0 = 0xffffffff00000004;
  FUN_02ee2b00(puVar6,&local_c0,1);
  puVar1 = local_a8;
  lVar4 = *(long *)(param_1 + 0x210);
  lVar5 = *(long *)(*(long *)(lVar4 + 0x570) + 0xa0);
  if (lVar5 != 0) {
    local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar5 + 0x14));
    if (local_a8 != &DAT_040f5ed4) {
      iVar2 = 4;
      if ((int)local_a0 < 5) {
        iVar2 = (int)local_a0 + -1;
      }
      memcpy(local_a8,&DAT_040f5ed4,(long)iVar2);
      puVar1[iVar2] = 0;
    }
    FUN_02ee2b00(puVar6,&local_c0,1);
    lVar4 = *(long *)(param_1 + 0x210);
  }
  puVar1 = local_a8;
  lVar4 = *(long *)(*(long *)(lVar4 + 0x578) + 0xa0);
  if (lVar4 != 0) {
    local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar4 + 0x14));
    if (local_a8 != &DAT_040a2a9b) {
      iVar2 = 4;
      if ((int)local_a0 < 5) {
        iVar2 = (int)local_a0 + -1;
      }
      memcpy(local_a8,&DAT_040a2a9b,(long)iVar2);
      puVar1[iVar2] = 0;
    }
    FUN_02ee2b00(puVar6,&local_c0,1);
  }
  puVar1 = local_a8;
  if (((local_24 == 1) ||
      (lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x580) + 0xa0), lVar4 == 0)) ||
     (*(char *)(lVar4 + 0xbc) == '\0')) goto LAB_03214fd4;
  local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar4 + 0x14));
  if (local_24 == 2) {
    if (local_a8 != &DAT_040a2aa0) {
      __src = &DAT_040a2aa0;
      goto LAB_03214f9c;
    }
  }
  else if (local_a8 != &DAT_04073af0) {
    __src = &DAT_04073af0;
LAB_03214f9c:
    iVar2 = 4;
    if ((int)local_a0 < 5) {
      iVar2 = (int)local_a0 + -1;
    }
    memcpy(local_a8,__src,(long)iVar2);
    puVar1[iVar2] = 0;
  }
  FUN_02ee2b00(puVar6,&local_c0,1);
LAB_03214fd4:
  *(int *)(param_1 + 0x1c4f4) = local_24;
  return;
}

