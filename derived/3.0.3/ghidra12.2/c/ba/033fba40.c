
/* WARNING: Removing unreachable block (ram,0x033fbaa0) */
/* WARNING: Removing unreachable block (ram,0x033fbafc) */

void FUN_033fba40(byte *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_24 [4];
  
  FUN_033fb710();
  if (*(long *)(*(long *)PTR_DAT_04bb4fb0 + 0x10) != 0) {
    FUN_03365804(*(long *)(*(long *)PTR_DAT_04bb4fb0 + 0x10),param_1);
  }
  puVar1 = PTR_DAT_04bb2230;
  local_58 = CONCAT44(local_58._4_4_,0x17);
  puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x198);
  if (((*PTR_DAT_04bc74a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc74a0), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7498 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc74a0);
  }
  if ((puVar7 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc7498), (uVar3 & 1) != 0)) {
    FUN_02f262f4(puVar7);
  }
  local_58 = CONCAT44(local_58._4_4_,0xd);
  puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc73c0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar8 = (long *)puVar7[0x50];
  if (plVar8 != (long *)0x0) {
    iVar2 = (int)plVar8[0x36];
    if (iVar2 != 2 || (int)plVar8[0x61] < 1) {
      if (plVar8[0x42] != 0) {
        plVar4 = *(long **)(**(long **)(plVar8[0x42] + 0x3f8) + 0x1b0);
        if ((plVar4 == (long *)0x0) || (uVar3 = (**(code **)(*plVar4 + 0x60))(), (uVar3 & 1) == 0))
        goto LAB_033fbba8;
        iVar2 = (int)plVar8[0x36];
      }
      if (iVar2 != 3) goto LAB_033fbba8;
    }
    (**(code **)(*plVar8 + 0xb0))(plVar8);
    bVar6 = *param_1;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(plVar8 + 0x3f) = bVar6;
  }
LAB_033fbba8:
  lVar5 = puVar7[0x51];
  if (lVar5 != 0) {
    bVar6 = *param_1;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(lVar5 + 0x238) = bVar6;
    if ((*(int *)(lVar5 + 0x1f0) != -1 || *(int *)(lVar5 + 500) != -1) ||
        1 < *(uint *)(lVar5 + 0x1b0)) {
      *(undefined4 *)(lVar5 + 0x23c) = 5;
    }
  }
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar5 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
  if (lVar5 == 0) {
    return;
  }
  lVar9 = lVar5 + 0x194b0;
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar9 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    lVar5 = *(long *)(lVar9 + 0x28);
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x194d8);
  }
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      lVar5 = *(long *)(lVar9 + 0x28);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar5 == 0) goto LAB_033fbca4;
    }
    plVar8 = *(long **)(lVar5 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar9 + 8);
      uStack_50 = *(undefined8 *)(lVar9 + 0x10);
      local_48 = 0x3ce60;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
    }
  }
LAB_033fbca4:
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8);
  FUN_02812f50(lVar5,*(undefined8 *)(*(long *)PTR_DAT_04bb43c0 + 0x5c028),param_1);
  FUN_02812f50(lVar5,*(undefined8 *)(*(long *)puVar1 + 0x5c030),param_1);
  FUN_02812f50(lVar5,*(undefined8 *)(*(long *)puVar1 + 0x5c038),param_1);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

