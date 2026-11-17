
/* WARNING: Removing unreachable block (ram,0x02ef46d4) */
/* WARNING: Removing unreachable block (ram,0x02ef46cc) */
/* WARNING: Removing unreachable block (ram,0x02ef4464) */
/* WARNING: Removing unreachable block (ram,0x02ef4500) */
/* WARNING: Removing unreachable block (ram,0x02ef46a0) */
/* WARNING: Removing unreachable block (ram,0x02ef46a8) */
/* WARNING: Removing unreachable block (ram,0x02ef46b0) */
/* WARNING: Removing unreachable block (ram,0x02ef471c) */
/* WARNING: Removing unreachable block (ram,0x02ef4724) */
/* WARNING: Removing unreachable block (ram,0x02ef4734) */
/* WARNING: Removing unreachable block (ram,0x02ef473c) */

undefined8 FUN_02ef43c8(long param_1,byte *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined *local_b8 [4];
  undefined *local_98 [4];
  undefined *local_78 [4];
  byte local_54 [4];
  byte local_38 [4];
  int local_34;
  
  puVar1 = PTR_DAT_04bb2230;
  local_38[0] = *param_2;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  local_34 = param_3;
  lVar3 = FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),param_3,local_38);
  if (((lVar3 == 0) && (local_34 == 0x92)) && (*(long *)(*(long *)puVar1 + 0x188) != 0)) {
    local_54[0] = *param_2;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
    local_34 = param_3;
    puVar4 = (undefined8 *)FUN_0339be20(*(undefined8 *)(*(long *)puVar1 + 0x10),param_3,local_54);
    if (((*PTR_DAT_04bb7c40 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb7c40), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb7c38 = PTR_DAT_04bb7c48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7c40);
    }
    if (((puVar4 != (undefined8 *)0x0) &&
        (uVar5 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb7c38), (uVar5 & 1) != 0)) ||
       ((local_34 == 0x92 &&
        (puVar4 = *(undefined8 **)(*(long *)puVar1 + 0x188), puVar4 != (undefined8 *)0x0)))) {
      bVar7 = *param_2;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      *(byte *)(puVar4 + 0x3f) = bVar7;
      FUN_0386b090(puVar4[0x13],puVar4);
    }
  }
  else {
    local_b8[0] = PTR_DAT_04bc9988 + 0x10;
    local_98[0] = PTR_DAT_04bc9990 + 0x10;
    local_78[0] = PTR_DAT_04bc9998 + 0x10;
    bVar7 = *param_2;
    lVar3 = *(long *)(*(long *)puVar1 + 0x10);
    if (*(int *)(lVar3 + 0x90) != 0) {
      return 0;
    }
    *(undefined4 *)(lVar3 + 0xd8) = 0xffffffff;
    *(int *)(lVar3 + 0xd0) = param_3;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(lVar3 + 0xd4) = bVar7;
    *(undefined2 *)(lVar3 + 0xdc) = 0x100;
    *(undefined1 *)(lVar3 + 0xde) = 0;
    FUN_033b600c(local_b8,lVar3 + 0xe0);
    (**(code **)(local_98[0] + 0x10))(local_98,lVar3 + 0x100);
    (**(code **)(local_78[0] + 0x10))(local_78,lVar3 + 0x120);
    FUN_03ebb160(lVar3 + 0x88,1);
  }
  bVar7 = *param_2;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)(param_1 + 0x54) = bVar7;
  *(int *)(param_1 + 0x58) = param_3;
  local_34 = 1;
  if (param_3 == 0x92) {
                    /* WARNING: Could not recover jumptable at 0x02ef4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)(&UNK_02ef4694 + (ulong)DAT_04180f90 * 4))();
    return uVar6;
  }
  *(undefined4 *)(param_1 + 0x50) = 1;
  return 1;
}

