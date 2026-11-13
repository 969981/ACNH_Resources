
/* WARNING: Removing unreachable block (ram,0x00ed7ec4) */
/* WARNING: Removing unreachable block (ram,0x00ed7ed4) */
/* WARNING: Removing unreachable block (ram,0x00ed7ef0) */
/* WARNING: Removing unreachable block (ram,0x00ed7ef4) */
/* WARNING: Removing unreachable block (ram,0x00ed7f04) */
/* WARNING: Removing unreachable block (ram,0x00ed7f4c) */
/* WARNING: Removing unreachable block (ram,0x00ed7f44) */
/* WARNING: Removing unreachable block (ram,0x00ed7f3c) */
/* WARNING: Removing unreachable block (ram,0x00ed7f34) */
/* WARNING: Removing unreachable block (ram,0x00ed7f2c) */
/* WARNING: Removing unreachable block (ram,0x00ed7f1c) */
/* WARNING: Removing unreachable block (ram,0x00ed7f50) */
/* WARNING: Removing unreachable block (ram,0x00ed7f88) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 switchD_00ede320::caseD_0(long param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  uint local_78 [3];
  uint local_6c;
  byte local_48 [4];
  undefined4 local_44;
  
  lVar17 = *(long *)(param_1 + 8);
  if (lVar17 == 0) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = *(long **)(lVar17 + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if (plVar16 == (long *)0x0) {
    return 1;
  }
  uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb37d0);
  if ((uVar10 & 1) == 0) {
    plVar16 = (long *)0x0;
  }
  if (lVar17 == 0) {
    return 1;
  }
  if ((uVar10 & 1) == 0) {
    return 1;
  }
  if (*(int *)((long)plVar16 + 0x15c) != 10) {
    return 1;
  }
  if ((int)plVar16[0xa0] != 0) {
    return 1;
  }
  lVar11 = FUN_0265c2a0((int)plVar16[0xa1]);
  local_48[0] = *(byte *)(lVar17 + 0x2a8);
  if (7 < local_48[0]) {
    local_48[0] = 0xff;
  }
  lVar17 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_48,1);
  if (lVar11 == 0) {
    return 1;
  }
  if (lVar17 == 0) {
    return 1;
  }
  plVar16 = (long *)(lVar17 + 0x17b90);
  if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar12 == (undefined8 *)0x0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)*puVar12)();
    uVar10 = uVar10 & 0xffffffff;
  }
  lVar3 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
  lVar1 = lVar3 + 0x125ec;
  if ((*(long **)(lVar17 + 0x17bb0) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar17 + 0x17bb0), puVar12 == (undefined8 *)0x0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = (**(code **)*puVar12)();
    uVar13 = uVar13 & 0xffffffff;
  }
  puVar7 = PTR_DAT_04bb43c0;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(lVar1);
  if (*(long *)puVar7 == 0) {
LAB_00ed7c4c:
    uVar8 = 0;
  }
  else {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((*(uint *)(lVar19 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_00ed7c4c;
    FUN_007b0de0(local_78,lVar1);
    local_44 = 0xe;
    iVar9 = FUN_007b0ea4(local_78,&local_44);
    if (iVar9 != 4) {
      bVar6 = false;
      uVar18 = 1;
      goto LAB_00ed7dc0;
    }
    FUN_01ad5d04(local_78,lVar1);
    iVar9 = FUN_01ad9fd0(local_78);
    if (iVar9 == 0xac) {
      lVar19 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + 76000;
      lVar4 = *(long *)(lVar17 + 0x17b98) + *plVar16;
      uVar14 = FUN_00ed8024(lVar19,lVar4);
      if ((uVar14 & 1) == 0) {
        uVar14 = FUN_00ed80bc(lVar19,lVar4);
        uVar8 = 0x20;
        if ((uVar14 & 1) == 0) {
          uVar8 = 0x40;
        }
      }
      else {
        uVar8 = 0x10;
      }
      FUN_01ae0c40(local_78);
    }
    else {
      piVar2 = (int *)(lVar3 + 0x125f4);
      if ((((*piVar2 == 0) || (*(char *)(lVar3 + 0x12614) == '\0')) ||
          (uVar14 = FUN_026b38f0(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8),lVar1,piVar2),
          (uVar14 & 1) != 0)) || (*(int *)(lVar3 + 0x12610) == 5)) {
        uVar8 = 0;
      }
      else {
        lVar19 = *(long *)(lVar17 + 0x17b98) + *plVar16;
        if ((*piVar2 == *(int *)(lVar19 + 0x1c)) &&
           ((*(long *)(lVar19 + 0x20) == *(long *)(lVar3 + 0x125f8) &&
            *(long *)(lVar19 + 0x28) == *(long *)(lVar3 + 0x12600)) &&
            *(int *)(lVar19 + 0x30) == *(int *)(lVar3 + 0x12608))) {
          uVar8 = 1;
        }
        else {
          uVar8 = 2;
        }
      }
      FUN_01ae0c40(local_78);
    }
  }
  uVar14 = FUN_0277d9a8(lVar3 + 0x12618);
  if ((((uVar14 & 1) != 0) && (*(int *)(lVar3 + 0x12620) != 0)) &&
     ((*(char *)(lVar3 + 0x12640) != '\0' &&
      (uVar14 = FUN_026b38f0(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8),lVar1,lVar3 + 0x125f4)
      , (uVar14 & 1) == 0)))) {
    lVar1 = *(long *)(lVar17 + 0x17b98) + *plVar16;
    if ((*(int *)(lVar3 + 0x12620) == *(int *)(lVar1 + 0x1c)) &&
       ((*(long *)(lVar1 + 0x20) == *(long *)(lVar3 + 0x12624) &&
        *(long *)(lVar1 + 0x28) == *(long *)(lVar3 + 0x1262c)) &&
        *(int *)(lVar1 + 0x30) == *(int *)(lVar3 + 0x12634))) {
      uVar8 = uVar8 | 4;
    }
    else {
      uVar8 = uVar8 | 8;
    }
  }
  uVar15 = uVar8 - (uVar8 >> 1 & 0x55555555);
  uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
  uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
  uVar15 = uVar15 + (uVar15 >> 8);
  uVar15 = uVar15 + (uVar15 >> 0x10);
  uVar5 = uVar15 & 0x3f;
  if ((uVar15 & 0x3f) == 0) {
    uVar18 = 0;
    bVar6 = true;
  }
  else {
    FUN_038e7ea0(local_78);
    local_78[0] = local_78[0] ^ local_78[0] << 0xb;
    uVar15 = (uint)((ulong)(local_78[0] >> 8 ^ local_6c >> 0x13 ^ local_78[0] ^ local_6c) *
                    (ulong)uVar5 >> 0x20);
    if (uVar15 < uVar5) {
      uVar8 = FUN_038cd8b0(uVar8,uVar15 + 1);
      if ((int)uVar8 < 4) {
        DAT_05454098 = uVar8 + 1;
      }
      else if (uVar8 < 7) {
        DAT_05454098 = uVar8 + 7;
      }
      else {
        DAT_05454098 = 0xc9;
        if (uVar8 != 0xd) {
          DAT_05454098 = uVar8 + 0x5e;
        }
      }
    }
    else {
      DAT_05454098 = 0;
    }
    bVar6 = false;
    uVar18 = 0;
  }
LAB_00ed7dc0:
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar17 + 0x17bb0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x17bb0) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if (!bVar6) {
    return uVar18;
  }
  return 1;
}

