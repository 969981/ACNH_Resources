
/* WARNING: Removing unreachable block (ram,0x02607430) */
/* WARNING: Removing unreachable block (ram,0x026073d0) */
/* WARNING: Removing unreachable block (ram,0x026073b0) */
/* WARNING: Removing unreachable block (ram,0x026073a0) */
/* WARNING: Removing unreachable block (ram,0x02607420) */
/* WARNING: Removing unreachable block (ram,0x02607454) */

void FUN_026072c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  byte local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar3 = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar3 * 8);
      lVar3 = lVar3 + 1;
      *puVar5 = puVar4;
      *(undefined8 **)(param_1 + 0x18) = puVar5;
      puVar4 = puVar5;
    } while (lVar3 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0x100000100;
  *(undefined4 *)(param_1 + 0x94) = 0;
  local_50 = &PTR_LAB_049ffa38;
  local_48 = 1;
  uStack_44 = DAT_0516b10c;
  local_40 = FUN_017baf44();
  local_40 = local_40 & 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  uVar2 = FUN_01a4fa00(&local_50);
  puVar1 = PTR_DAT_04bb27a8;
  local_38 = 1;
  local_34 = 1;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    local_34 = 0;
    lVar3 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xd0);
    if (lVar3 != 0) {
      FUN_012e6150(lVar3,param_1 + 0x28,uVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x90) = 1;
  uVar2 = FUN_01a4fa00(&local_50);
  local_38 = 1;
  if (*(long *)(*(long *)puVar1 + 0x38) != 0) {
    local_34 = 1;
    lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0x38) + 0xe0);
    if (lVar3 != 0) {
      FUN_012e6150(lVar3,param_1 + 0x28,uVar2);
      return;
    }
  }
  return;
}

