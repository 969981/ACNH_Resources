
void FUN_03277230(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined *local_70;
  undefined4 local_68;
  
  uVar1 = *(uint *)(param_1 + 0x1cda8);
  if (uVar1 < 0x10e) {
    lVar8 = param_1 + 0x228 + (ulong)uVar1 * 0x1a8;
    if (*(int *)(lVar8 + 0x1a0) != 0) {
      lVar9 = param_1 + 0x228 + (ulong)uVar1 * 0x1a8;
      **(undefined1 **)(lVar9 + 0x60) = 0;
      *(undefined1 *)(lVar9 + 0xf0) = 0;
      if (((*(int *)(lVar9 + 0x100) != 1) && ((*(byte *)(lVar9 + 0x18) >> 1 & 1) != 0)) &&
         (*(int *)(lVar9 + 0x140) == -1)) {
        *(undefined4 *)(lVar9 + 0x140) = 1;
      }
      *(undefined4 *)(lVar8 + 0x1a0) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1ce88) = 0;
  *(uint *)(param_1 + 0x1cda8) = 0xffffffff;
  puVar2 = PTR_PTR_04bb2238;
  pvVar10 = *(void **)(param_1 + 0x1cdb8);
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pvVar11 = *(void **)(puVar2 + 8);
  if (pvVar10 != pvVar11) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(puVar2 + 8) + lVar8) == '\0') goto LAB_03277350;
      lVar9 = *(long *)(puVar2 + 8) + lVar8;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_03277350;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_03277350;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_03277350:
    iVar6 = (int)lVar8;
    if (*(int *)(param_1 + 0x1cdc0) <= (int)lVar8) {
      iVar6 = *(int *)(param_1 + 0x1cdc0) + -1;
    }
    memcpy(pvVar10,pvVar11,(long)iVar6);
    *(undefined1 *)((long)pvVar10 + (long)iVar6) = 0;
  }
  puVar5 = PTR_DAT_04bc4e60;
  puVar12 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar4 = PTR_DAT_04bc4e58;
  uVar7 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4e58);
  puVar3 = PTR_DAT_04bc0cb8;
  if ((uVar7 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  plVar13 = *(long **)puVar12[0x41];
  if (plVar13 != (long *)0x0) {
    local_70 = PTR_DAT_04bc0cb8 + 0x10;
    local_68 = 0x1f;
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_70);
    (**(code **)(plVar13[3] + 0x208))(plVar13[1],0,1,param_1 + 0x1ce68);
  }
  uVar1 = *(uint *)(param_1 + 0x1ce90);
  if (uVar1 < 0x10e) {
    lVar8 = param_1 + 0x228 + (ulong)uVar1 * 0x1a8;
    if (*(int *)(lVar8 + 0x1a0) != 0) {
      lVar9 = param_1 + 0x228 + (ulong)uVar1 * 0x1a8;
      **(undefined1 **)(lVar9 + 0x60) = 0;
      *(undefined1 *)(lVar9 + 0xf0) = 0;
      if (((*(int *)(lVar9 + 0x100) != 1) && ((*(byte *)(lVar9 + 0x18) >> 1 & 1) != 0)) &&
         (*(int *)(lVar9 + 0x140) == -1)) {
        *(undefined4 *)(lVar9 + 0x140) = 1;
      }
      *(undefined4 *)(lVar8 + 0x1a0) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1ce90) = 0xffffffff;
  pvVar10 = *(void **)(param_1 + 0x1cea0);
  *(undefined4 *)(param_1 + 0x1cf70) = 0;
  (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
  pvVar11 = *(void **)(puVar2 + 8);
  if (pvVar10 != pvVar11) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(puVar2 + 8) + lVar8) == '\0') goto LAB_032774fc;
      lVar9 = *(long *)(puVar2 + 8) + lVar8;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_032774fc;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_032774fc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_032774fc:
    iVar6 = (int)lVar8;
    if (*(int *)(param_1 + 0x1cea8) <= (int)lVar8) {
      iVar6 = *(int *)(param_1 + 0x1cea8) + -1;
    }
    memcpy(pvVar10,pvVar11,(long)iVar6);
    *(undefined1 *)((long)pvVar10 + (long)iVar6) = 0;
  }
  puVar12 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
    *(undefined **)puVar4 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar7 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4e58);
  if ((uVar7 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  plVar13 = *(long **)(puVar12[0x41] + (ulong)(1 < *(uint *)(puVar12 + 0x40)) * 8);
  if (plVar13 != (long *)0x0) {
    local_70 = puVar3 + 0x10;
    local_68 = 0x1f;
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_70);
    (**(code **)(plVar13[3] + 0x208))(plVar13[1],0,0,param_1 + 0x1cf50);
  }
  return;
}

