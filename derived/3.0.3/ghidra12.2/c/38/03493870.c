
void FUN_03493870(long param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  undefined8 uVar21;
  undefined *local_90;
  int local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined8 local_7a;
  undefined4 local_70;
  undefined8 local_6c;
  byte local_64;
  
  psVar1 = (short *)(param_1 + 0x1ce12);
  plVar16 = *(long **)(param_1 + 0x1ce20);
  sVar4 = *psVar1;
  *(undefined4 *)(plVar16 + 1) = 0;
  iVar10 = (**(code **)(*plVar16 + 0x50))(plVar16);
  if (0 < iVar10) {
    iVar10 = 0;
    do {
      plVar12 = (long *)(**(code **)(*plVar16 + 0x48))(plVar16,iVar10);
      if ((((sVar4 != -1) && (plVar12 != (long *)0x0)) &&
          (sVar9 = (**(code **)(*plVar12 + 0x78))(plVar12), sVar4 == sVar9)) &&
         ((int)plVar16[1] < *(int *)((long)plVar16 + 0xc))) {
        *(long **)(plVar16[2] + (long)(int)plVar16[1] * 8) = plVar12;
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      }
      iVar10 = iVar10 + 1;
      iVar11 = (**(code **)(*plVar16 + 0x50))(plVar16);
    } while (iVar10 < iVar11);
  }
  puVar8 = PTR_DAT_04bc4e60;
  iVar10 = *(int *)(*(long *)(param_1 + 0x1ce20) + 8);
  puVar17 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (((puVar17 != (undefined8 *)0x0) &&
      (uVar13 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc4e58), (uVar13 & 1) != 0)) &&
     (plVar16 = *(long **)puVar17[0x45], plVar16 != (long *)0x0)) {
    if (*(int *)(*(long *)(param_1 + 0x1ce20) + 8) < 1) {
      local_90 = PTR_DAT_04bc4e68 + 0x10;
      local_88 = 7;
      (**(code **)(*plVar16 + 0x18))(plVar16,&local_90);
      puVar17 = (undefined8 *)(plVar16[3] + 0x1c0);
    }
    else {
      local_90 = PTR_DAT_04bc4e68 + 0x10;
      local_88 = 6;
      (**(code **)(*plVar16 + 0x18))(plVar16,&local_90);
      puVar17 = (undefined8 *)(plVar16[3] + 0x1b8);
    }
    (*(code *)*puVar17)(plVar16[1]);
  }
  sVar4 = *psVar1;
  puVar17 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar7 = PTR_DAT_04bc4e58;
  uVar13 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc4e58);
  if ((uVar13 & 1) == 0) {
    puVar17 = (undefined8 *)0x0;
  }
  plVar16 = *(long **)(puVar17[0x45] + (ulong)(2 < *(uint *)(puVar17 + 0x44)) * 0x10);
  if (plVar16 != (long *)0x0) {
    uVar21 = 0x3f800000;
    if (sVar4 != 99) {
      uVar21 = 0;
    }
    local_90 = PTR_DAT_04bc4f00 + 0x10;
    local_88 = 0x14;
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_90);
    (**(code **)(plVar16[3] + 0x158))(uVar21,plVar16[1]);
  }
  puVar17 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)puVar7 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar7 = PTR_DAT_04bc4e58;
  uVar13 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc4e58);
  if ((uVar13 & 1) == 0) {
    puVar17 = (undefined8 *)0x0;
  }
  lVar18 = *(long *)(puVar17[0x43] + (ulong)(2 < *(uint *)(puVar17 + 0x42)) * 0x10);
  puVar17 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)puVar7 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar7 = PTR_DAT_04bc4e58;
  uVar13 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc4e58);
  if ((uVar13 & 1) == 0) {
    puVar17 = (undefined8 *)0x0;
  }
  lVar19 = *(long *)(puVar17[0x43] + (ulong)(1 < *(uint *)(puVar17 + 0x42)) * 8);
  puVar17 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)puVar7 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar13 = (**(code **)*puVar17)(puVar17,PTR_DAT_04bc4e58);
  if ((uVar13 & 1) == 0) {
    puVar17 = (undefined8 *)0x0;
  }
  if (((lVar18 != 0) && (lVar19 != 0)) && (*(long *)puVar17[0x43] != 0)) {
    FUN_03515b00(param_1 + 0x1d078,*psVar1,lVar18,lVar19,*(long *)puVar17[0x43],0);
  }
  lVar18 = *(long *)(*(long *)(param_1 + 0x228) + 0x570);
  if (lVar18 != 0) {
    local_70 = 0;
    local_7a = 0x1000001;
    local_64 = *(byte *)(param_1 + 0x1f8);
    local_6c = 0x60000000c;
    local_84 = 0;
    local_90 = PTR_DAT_04bc9c78 + 0x10;
    local_7c = 0;
    if (7 < local_64) {
      local_64 = 0xff;
    }
    iVar11 = 0;
    if (*(int *)(param_1 + 0x1ce1c) != -1) {
      iVar11 = *(int *)(param_1 + 0x1ce1c);
    }
    if (0 < iVar10) {
      iVar3 = *(int *)(lVar18 + 0x2e8);
      uVar5 = 0;
      if (iVar3 != 0) {
        uVar5 = *(int *)(lVar18 + 0x2f4) / iVar3;
      }
      iVar14 = iVar11;
      if (uVar5 != 1) {
        iVar14 = 0;
        if (iVar3 != 0) {
          iVar14 = iVar11 / iVar3;
        }
        fVar20 = (float)(int)uVar5 * 0.5;
        uVar15 = 0;
        if (fVar20 != (float)(int)fVar20) {
          uVar15 = (uint)(0.0 <= fVar20);
        }
        iVar6 = uVar15 + (int)fVar20;
        if ((uVar5 & 1) != 0) {
          iVar6 = uVar5 - (uVar15 + (int)fVar20);
        }
        iVar6 = iVar14 - iVar6;
        iVar2 = iVar6;
        if (iVar10 <= iVar6 * iVar3) {
          iVar2 = iVar14;
        }
        iVar14 = 0;
        if (-1 < iVar6) {
          iVar14 = iVar2;
        }
        iVar14 = iVar14 * iVar3;
      }
      local_84 = CONCAT44(iVar11,iVar14);
    }
    local_88 = iVar10;
    FUN_03864290(lVar18,&local_90);
  }
  return;
}

