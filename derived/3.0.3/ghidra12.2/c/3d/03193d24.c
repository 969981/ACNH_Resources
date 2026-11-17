
/* WARNING: Removing unreachable block (ram,0x0319401c) */

void FUN_03193d24(long param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined *local_50;
  undefined4 local_48;
  
  puVar10 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar8 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
  if ((uVar8 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  plVar11 = *(long **)(puVar10[0x45] + (ulong)(2 < *(uint *)(puVar10 + 0x44)) * 0x10);
  plVar9 = *(long **)(*(long *)(param_1 + 0x210) + 0x6d8);
  bVar5 = false;
  if ((*(uint *)(param_1 + 0x1c4fc) < 0xb) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x1c4fc) & 0x1f) & 0x70eU) != 0)) {
    iVar7 = *(int *)(param_1 + 0x1c4f8);
    if ((iVar7 == -1) || (1 < iVar7)) {
      uVar8 = *(ulong *)(param_1 + 0x1c4e8);
      if (iVar7 == -1) {
        iVar7 = 1;
      }
      uVar3 = (int)uVar8 - ((uint)(uVar8 >> 1) & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar4 = (uint)(uVar8 >> 0x20);
      uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      param_2 = iVar7 <= (int)((uVar4 + (uVar4 >> 0x10) & 0x3f) + (uVar3 + (uVar3 >> 0x10) & 0x3f));
      bVar5 = (bool)param_2;
    }
    else {
      bVar5 = false;
    }
  }
  (**(code **)(*plVar9 + 0x140))(plVar9,param_2 & 1,0);
  puVar6 = PTR_DAT_04bc4e68;
  if ((*(uint *)(param_1 + 0x1c4fc) < 0xb) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x1c4fc) & 0x1f) & 0x70eU) != 0)) {
    local_50 = PTR_DAT_04bc4e68 + 0x10;
    local_48 = 6;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_50);
    (**(code **)(plVar11[3] + 0x1b8))(plVar11[1]);
    if ((*(int *)(param_1 + 0x1c4f8) == -1) || (1 < *(int *)(param_1 + 0x1c4f8))) {
      bVar2 = *(byte *)((long)plVar9 + 0x2c2);
      if (bVar5) {
        bVar1 = bVar2 | 1;
        if ((*(byte *)((long)plVar9 + 0x2c3) & 1) != 0) {
          bVar1 = bVar2 & 0xfd;
        }
        *(byte *)((long)plVar9 + 0x2c2) = bVar1;
        FUN_03d5d0e0(plVar9,0,1);
        local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
                    /* WARNING: Could not recover jumptable at 0x03193f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_03193fdc + (ulong)DAT_0418418a * 4))();
        return;
      }
      bVar1 = bVar2 & 0xfe;
      if ((*(byte *)((long)plVar9 + 0x2c3) & 1) != 0) {
        bVar1 = bVar2 | 2;
      }
      *(byte *)((long)plVar9 + 0x2c2) = bVar1;
      FUN_03d5d0e0(plVar9,0,0);
      local_50 = (undefined *)CONCAT44(local_50._4_4_,2);
                    /* WARNING: Could not recover jumptable at 0x03193fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_03193fdc + (ulong)DAT_04184187 * 4))();
      return;
    }
  }
  local_50 = puVar6 + 0x10;
  local_48 = 7;
  (**(code **)(*plVar11 + 0x18))(plVar11,&local_50);
  (**(code **)(plVar11[3] + 0x1c0))(plVar11[1]);
  FUN_03d5d0e0(plVar9,0,0);
  return;
}

