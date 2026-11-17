
/* WARNING: Removing unreachable block (ram,0x02efed3c) */
/* WARNING: Removing unreachable block (ram,0x02efed90) */

void FUN_02efece0(long param_1,byte *param_2)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  long *plVar10;
  uint uVar11;
  undefined *local_50;
  char *pcStack_48;
  byte local_3c [4];
  byte local_38 [4];
  undefined4 local_34;
  
  bVar9 = *param_2;
  *(undefined4 *)(param_1 + 0x58) = 10;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)(param_1 + 0x54) = bVar9;
  puVar3 = PTR_DAT_04bb2230;
  local_50._0_4_ = 10;
  lVar8 = *(long *)PTR_DAT_04bb2230;
  lVar7 = *(long *)(lVar8 + 0x90);
  if (lVar7 != 0) {
    bVar9 = *param_2;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(lVar7 + 0x1f8) = bVar9;
    *(undefined1 *)(lVar7 + 0x165) = 1;
    if ((6 < *(uint *)(lVar7 + 0xa8) || (1 << (ulong)(*(uint *)(lVar7 + 0xa8) & 0x1f) & 0x58U) == 0)
       && (*(long *)(lVar7 + 0x98) != 0)) {
      FUN_0386b090();
      lVar8 = *(long *)puVar3;
    }
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,0xb);
  lVar7 = *(long *)(lVar8 + 0x98);
  if ((lVar7 != 0) && (lVar8 = *(long *)(lVar7 + 0x98), lVar8 != 0)) {
    if (*(uint *)(lVar7 + 0xa8) < 7 && (1 << (ulong)(*(uint *)(lVar7 + 0xa8) & 0x1f) & 0x58U) != 0)
    {
      FUN_0386b2b0(lVar8,lVar7);
    }
    *(undefined4 *)(lVar7 + 0x250) = 0;
    *(undefined8 *)(lVar7 + 0x240) = 1;
    FUN_0386b170(lVar8,lVar7);
  }
  if (*(int *)(param_1 + 0x150) == 3) {
    FUN_03ebb160(param_1 + 0x148,4);
  }
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) goto LAB_02efef1c;
  uVar11 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_02efeeac;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02efeeac:
    uVar11 = 0;
  }
  if (plVar10 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3278);
    if ((uVar11 & uVar5) == 1) {
      local_3c[0] = *(byte *)(param_1 + 0x54);
      if (7 < local_3c[0]) {
        local_3c[0] = 0xff;
      }
      FUN_008fcd20(plVar10,local_3c,0);
    }
  }
LAB_02efef1c:
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      local_38[0] = *(byte *)(param_1 + 0x54);
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "UseSmartphoneFieldCount";
      if (7 < local_38[0]) {
        local_38[0] = 0xff;
      }
      local_34 = FUN_02582fe0(local_38);
      FUN_021294b0(&local_50,1,&local_34);
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 4;
  return;
}

