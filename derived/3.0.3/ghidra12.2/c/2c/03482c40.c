
/* WARNING: Removing unreachable block (ram,0x03482c80) */

void FUN_03482c40(long param_1)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined *__src;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  uint *local_b8;
  int local_b0;
  uint local_ac;
  undefined1 local_a8;
  undefined1 local_6d;
  byte local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_5c;
  undefined *local_50;
  char *pcStack_48;
  
  local_d0 = CONCAT44(local_d0._4_4_,3);
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
  local_6d = 0;
  local_d0 = 0xffffffffffffffff;
  uStack_c8 = 0xffffffffffffffff;
  local_b8 = &local_ac;
  local_b0 = 0x40;
  local_5c = 0xffffffffffffffff;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  local_ac = local_ac & 0xffffff00;
  local_64 = 0;
  local_60 = 0;
  local_68 = *(byte *)(param_1 + 0x1f8);
  if (7 < local_68) {
    local_68 = 0xff;
  }
  if (0 < *(int *)(*(long *)(param_1 + 0x230) + 8)) {
    local_d0 = 0xffffffff00000004;
    local_ac = 0x31303636;
    local_a8 = 0;
    FUN_02ee2b00(puVar6,&local_d0,1);
  }
  puVar1 = local_b8;
  lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0);
  if (lVar4 == 0) goto LAB_03482dd8;
  local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(lVar4 + 0x14));
  if (*(char *)(param_1 + 0x1d000) == '\0') {
    if (local_b8 != (uint *)&DAT_040a2d6e) {
      __src = &DAT_040a2d6e;
      goto LAB_03482da4;
    }
  }
  else if (local_b8 != (uint *)&DAT_040e669b) {
    __src = &DAT_040e669b;
LAB_03482da4:
    iVar2 = 4;
    if (local_b0 < 5) {
      iVar2 = local_b0 + -1;
    }
    memcpy(local_b8,__src,(long)iVar2);
    *(undefined1 *)((long)puVar1 + (long)iVar2) = 0;
  }
  FUN_02ee2b00(puVar6,&local_d0,1);
LAB_03482dd8:
  puVar1 = local_b8;
  lVar4 = *(long *)(*(long *)(param_1 + 0x218) + 0xa0);
  if (lVar4 != 0) {
    local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(lVar4 + 0x14));
    if (local_b8 != (uint *)&DAT_040a2d73) {
      iVar2 = 4;
      if (local_b0 < 5) {
        iVar2 = local_b0 + -1;
      }
      memcpy(local_b8,&DAT_040a2d73,(long)iVar2);
      *(undefined1 *)((long)puVar1 + (long)iVar2) = 0;
    }
    FUN_02ee2b00(puVar6,&local_d0,1);
  }
  if (*(long *)(param_1 + 0x260) == param_1 + 600) {
    iVar2 = -1;
  }
  else {
    lVar5 = (long)*(int *)(param_1 + 0x26c);
    iVar2 = 0;
    lVar4 = *(long *)(param_1 + 0x260) - lVar5;
    do {
      if (*(int *)(lVar4 + 0x270) == 0x74) goto LAB_03482eac;
      iVar2 = iVar2 + 1;
      lVar4 = *(long *)(lVar4 + lVar5 + 8) - lVar5;
    } while (lVar4 != (param_1 + 600) - lVar5);
    iVar2 = -1;
  }
LAB_03482eac:
  if (iVar2 == *(int *)(param_1 + 0x1cfb8)) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "/L_SortWin_00";
    lVar4 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x228) + 0x3f8) + 0x38,&local_50);
    puVar1 = local_b8;
    if (lVar4 != 0) {
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(lVar4 + 0x2cc));
      if (local_b8 != (uint *)&DAT_0408e6a5) {
        iVar2 = 4;
        if (local_b0 < 5) {
          iVar2 = local_b0 + -1;
        }
        memcpy(local_b8,&DAT_0408e6a5,(long)iVar2);
        *(undefined1 *)((long)puVar1 + (long)iVar2) = 0;
      }
      FUN_02ee2b00(puVar6,&local_d0,1);
    }
  }
  return;
}

