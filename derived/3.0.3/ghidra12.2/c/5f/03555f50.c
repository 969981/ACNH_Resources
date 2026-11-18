
/* WARNING: Removing unreachable block (ram,0x03555fa8) */

void FUN_03555f50(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_65;
  byte local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_54;
  int local_44;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(int *)(param_1 + 0x57390) != param_2) {
    local_c8 = CONCAT44(local_c8._4_4_,3);
    puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
    local_44 = param_2;
    if (((*PTR_DAT_04bc7280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc7280);
    }
    if ((puVar5 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) {
      *(int *)(param_1 + 0x57390) = param_2;
      FUN_03459d70();
      local_65 = 0;
      local_a8 = 0x3130393600000040;
      local_b0 = (undefined *)((long)&local_a8 + 4);
      local_5c = 0;
      local_54 = 0xffffffffffffffff;
      uStack_c0 = 0xffffffffffffffff;
      local_b8 = PTR_DAT_04bb2bc0 + 0x10;
      local_58 = 0;
      local_a0 = 0;
      local_60 = *(byte *)(param_1 + 0x1f8);
      if (7 < local_60) {
        local_60 = 0xff;
      }
      local_c8 = 0xffffffff00000004;
      FUN_02ee2b00(puVar5,&local_c8,1);
      puVar1 = local_b0;
      lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0xa0);
      if (lVar4 != 0) {
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar4 + 0x14));
        if (local_b0 != &DAT_04073db4) {
          iVar2 = 4;
          if ((int)local_a8 < 5) {
            iVar2 = (int)local_a8 + -1;
          }
          memcpy(local_b0,&DAT_04073db4,(long)iVar2);
          puVar1[iVar2] = 0;
        }
        FUN_02ee2b00(puVar5,&local_c8,1);
      }
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "/L_SortWin_00";
      lVar4 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x228) + 0x3f8) + 0x38,&local_40);
      puVar1 = local_b0;
      if (lVar4 != 0) {
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar4 + 0x2cc));
        if (local_b0 != &DAT_04073db9) {
          iVar2 = 4;
          if ((int)local_a8 < 5) {
            iVar2 = (int)local_a8 + -1;
          }
          memcpy(local_b0,&DAT_04073db9,(long)iVar2);
          puVar1[iVar2] = 0;
        }
        FUN_02ee2b00(puVar5,&local_c8,1);
      }
      puVar1 = local_b0;
      if ((local_44 == 2) && (lVar4 = *(long *)(*(long *)(param_1 + 0x218) + 0xa0), lVar4 != 0)) {
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar4 + 0x14));
        if (local_b0 != &DAT_0406ec7a) {
          iVar2 = 4;
          if ((int)local_a8 < 5) {
            iVar2 = (int)local_a8 + -1;
          }
          memcpy(local_b0,&DAT_0406ec7a,(long)iVar2);
          puVar1[iVar2] = 0;
        }
        FUN_02ee2b00(puVar5,&local_c8,1);
      }
    }
  }
  return;
}

