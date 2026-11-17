
/* WARNING: Removing unreachable block (ram,0x02eff088) */
/* WARNING: Removing unreachable block (ram,0x02eff0dc) */
/* WARNING: Removing unreachable block (ram,0x02eff264) */

void FUN_02eff01c(long param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  byte local_64 [4];
  undefined *local_60;
  undefined4 local_58;
  
  bVar10 = *param_2;
  *(undefined4 *)(param_1 + 0x58) = 10;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  *(byte *)(param_1 + 0x54) = bVar10;
  puVar2 = PTR_DAT_04bb2230;
  local_60._0_4_ = 10;
  lVar9 = *(long *)PTR_DAT_04bb2230;
  lVar8 = *(long *)(lVar9 + 0x90);
  if (lVar8 != 0) {
    bVar10 = *param_2;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    *(byte *)(lVar8 + 0x1f8) = bVar10;
    *(undefined1 *)(lVar8 + 0x165) = 1;
    if ((6 < *(uint *)(lVar8 + 0xa8) || (1 << (ulong)(*(uint *)(lVar8 + 0xa8) & 0x1f) & 0x58U) == 0)
       && (*(long *)(lVar8 + 0x98) != 0)) {
      FUN_0386b090();
      lVar9 = *(long *)puVar2;
    }
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,0xb);
  lVar8 = *(long *)(lVar9 + 0x98);
  if ((lVar8 != 0) && (lVar9 = *(long *)(lVar8 + 0x98), lVar9 != 0)) {
    if (*(uint *)(lVar8 + 0xa8) < 7 && (1 << (ulong)(*(uint *)(lVar8 + 0xa8) & 0x1f) & 0x58U) != 0)
    {
      FUN_0386b2b0(lVar9,lVar8);
    }
    *(undefined4 *)(lVar8 + 0x250) = 0;
    *(undefined8 *)(lVar8 + 0x240) = 1;
    FUN_0386b170(lVar9,lVar8);
  }
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) goto LAB_02eff24c;
  uVar13 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar13 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_02eff1dc;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02eff1dc:
    uVar13 = 0;
  }
  if (plVar12 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar5 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3278);
    if ((uVar13 & uVar5) == 1) {
      local_64[0] = *(byte *)(param_1 + 0x54);
      if (7 < local_64[0]) {
        local_64[0] = 0xff;
      }
      FUN_008fcd20(plVar12,local_64,param_3 & 1);
    }
  }
LAB_02eff24c:
  uVar1 = DAT_041812a8;
  lVar8 = *(long *)(*(long *)puVar2 + 0x98);
  if (lVar8 != 0) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,2);
    puVar11 = (undefined8 *)**(long **)(*(long *)(lVar8 + 0x210) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar7 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc4e58);
    if ((uVar7 & 1) == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    plVar12 = *(long **)puVar11[0x45];
    if (plVar12 != (long *)0x0) {
      local_60 = PTR_DAT_04bc4f00 + 0x10;
      local_58 = 0x14;
      (**(code **)(*plVar12 + 0x18))(plVar12,&local_60);
      (**(code **)(plVar12[3] + 0x158))(uVar1,plVar12[1]);
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 0x11;
  *(undefined4 *)(param_1 + 0x50) = 1;
  return;
}

