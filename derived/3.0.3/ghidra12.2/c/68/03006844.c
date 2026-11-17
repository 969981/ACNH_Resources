
void FUN_03006844(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *local_88;
  char *pcStack_80;
  long local_78;
  undefined8 *local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  puVar5 = PTR_DAT_04bc4e60;
  local_64 = 0;
  uStack_60 = 0;
  local_68 = 1;
  local_5c = 0;
  uStack_58 = 0;
  local_54 = 0;
  local_70 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)**(undefined8 **)(param_2 + 0x3f8);
  local_78 = param_2;
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
    if ((uVar7 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
  }
  puVar4 = PTR_DAT_04bc4d30;
  puVar2 = PTR_DAT_04bb2020;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "/L_ColorPalette_00";
  if (((*PTR_DAT_04bc4d30 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4d30), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d28 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d30);
  }
  puVar3 = PTR_DAT_04bc4d28;
  puVar9 = (undefined8 *)FUN_03c5e080(puVar9 + 7,PTR_DAT_04bc4d28,&local_88);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4d30), iVar6 != 0)) {
      *(undefined **)puVar3 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d30);
    }
    uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4d28);
    if ((uVar7 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
  }
  puVar10 = (undefined8 *)**(long **)(param_2 + 0x3f8);
  local_70 = puVar9;
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar4 = PTR_DAT_04bc4e58;
  uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
  if ((uVar7 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  lVar1 = 0x30;
  if (*(uint *)(puVar10 + 0x42) < 7) {
    lVar1 = 0;
  }
  uStack_60 = (undefined4)*(undefined8 *)(puVar10[0x43] + lVar1);
  local_5c = (undefined4)((ulong)*(undefined8 *)(puVar10[0x43] + lVar1) >> 0x20);
  puVar9 = (undefined8 *)**(long **)(param_2 + 0x3f8);
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
    *(undefined **)puVar4 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar4 = PTR_DAT_04bc4e58;
  uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
  if ((uVar7 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  lVar1 = 0x28;
  if (*(uint *)(puVar9 + 0x42) < 6) {
    lVar1 = 0;
  }
  uStack_58 = (undefined4)*(undefined8 *)(puVar9[0x43] + lVar1);
  local_54 = (undefined4)((ulong)*(undefined8 *)(puVar9[0x43] + lVar1) >> 0x20);
  FUN_031358c0(param_1,&local_78);
  uVar7 = (**(code **)(*(long *)(param_1 + 0x70) + 0x10))();
  if ((uVar7 & 1) == 0) {
    *(undefined1 **)(param_1 + 0x80) = &LAB_03006bc4;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined ***)(param_1 + 0x70) = &PTR_LAB_04af1848;
    *(long *)(param_1 + 0x78) = param_1;
  }
  puVar9 = (undefined8 *)**(undefined8 **)(param_2 + 0x3f8);
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
    *(undefined **)puVar4 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
    if ((uVar7 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
  }
  local_88 = puVar2 + 0x10;
  pcStack_80 = "/L_ColorPalette_00";
  uVar8 = FUN_02bb2508(puVar9 + 7,&local_88);
  *(undefined8 *)(param_1 + 0x120) = uVar8;
  return;
}

