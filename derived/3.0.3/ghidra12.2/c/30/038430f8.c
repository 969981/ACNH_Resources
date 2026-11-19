
void FUN_038430f8(long param_1)

{
  MutexType *pMVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  char cVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  float fVar23;
  undefined2 local_78;
  byte bStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  undefined1 uStack_71;
  undefined8 local_70;
  long local_68;
  
  puVar4 = PTR_DAT_04bb28b0;
  lVar18 = *(long *)PTR_DAT_04bb49b0;
  lVar13 = *(long *)PTR_DAT_04bb2918;
  lVar20 = *(long *)PTR_DAT_04bb28b0;
  pMVar1 = (MutexType *)(lVar20 + 0x40);
  nn::os::LockMutex(pMVar1);
  uVar22 = *(ulong *)(lVar20 + 8);
  cVar19 = (char)(uVar22 >> 0x10);
  uVar17 = (uint)(uVar22 >> 0x18);
  cVar6 = (char)(uVar22 >> 0x18);
  uVar10 = (uint)(uVar22 >> 0x20);
  uVar21 = uVar10 & 0xff;
  uVar10 = uVar10 >> 8;
  nn::os::UnlockMutex(pMVar1);
  lVar20 = *(long *)puVar4;
  pMVar1 = (MutexType *)(lVar20 + 0x40);
  nn::os::LockMutex(pMVar1);
  lVar20 = *(long *)(lVar20 + 0x18);
  nn::os::UnlockMutex(pMVar1);
  if (0x3a < lVar20) {
    lVar20 = 0x3b;
  }
  if (0 < lVar20) {
    uVar10 = (int)lVar20 + (int)(char)(uVar22 >> 0x28);
    if (0x3a < (int)uVar10) {
      uVar10 = 0x3b;
    }
    uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
  }
  bStack_76 = (byte)(uVar22 >> 8);
  local_78 = (undefined2)(uVar22 >> 0x30);
  cVar2 = *(char *)(param_1 + 2);
  cStack_73 = (char)(uVar22 >> 0x20);
  cStack_72 = (char)uVar10;
  if (cVar2 < '\0') {
    *(char *)(param_1 + 2) = cVar6;
    uVar16 = (uint)*(char *)(param_1 + 3);
    uVar11 = uVar17;
    if ((int)uVar16 < 0) goto LAB_0384346c;
LAB_038431e0:
    uVar15 = uVar16 & 0xff;
    uVar16 = (int)*(char *)(param_1 + 4);
    if (*(char *)(param_1 + 4) < '\0') {
LAB_038431ec:
      *(char *)(param_1 + 4) = cStack_72;
      uVar16 = uVar10;
    }
  }
  else {
    uVar16 = (uint)*(char *)(param_1 + 3);
    uVar11 = (int)cVar2;
    if (-1 < *(char *)(param_1 + 3)) goto LAB_038431e0;
LAB_0384346c:
    *(char *)(param_1 + 3) = cStack_73;
    uVar16 = (uint)*(char *)(param_1 + 4);
    uVar15 = uVar21;
    if ((int)uVar16 < 0) goto LAB_038431ec;
  }
  uVar12 = 0;
  if ((uVar10 & 0xff) == 0) {
    uVar12 = (uint)((uVar22 >> 0x20 & 0xff) == 0 && (uVar11 & 0xff) != (uVar17 & 0xff));
  }
  uVar10 = uVar10 & 0xff;
  cVar2 = '<';
  if (uVar10 != 0) {
    cVar2 = cStack_72;
  }
  uVar17 = 0;
  if (uVar10 == 0) {
    uVar17 = (uint)(uVar15 != uVar21);
  }
  bVar5 = (int)cVar2 - (int)(char)uVar16 == 1;
  uVar21 = 0;
  if (bVar5) {
    uVar21 = (uint)(uVar10 != (uVar16 & 0xff));
  }
  uVar10 = 0;
  if (bVar5) {
    uVar10 = uVar12;
  }
  uVar11 = 0;
  if (bVar5) {
    uVar11 = uVar17;
  }
  if (*(char *)(lVar18 + 0x78) != '\0') {
    piVar14 = *(int **)(lVar18 + 0x48);
    if ((((piVar14 != (int *)0x0) && (*(int *)(lVar18 + 0x3c) != 0)) &&
        (*(int *)(**(long **)(lVar18 + 0x40) + 0x60) != 2)) && (*piVar14 != (int)(char)bStack_76)) {
      *piVar14 = (int)(char)bStack_76;
      *(ulong *)(lVar18 + 0x50) = *(ulong *)(lVar18 + 0x50) | 1;
      if (*(char *)(lVar18 + 0x78) == '\0') goto LAB_0384348c;
    }
    lVar20 = *(long *)(lVar18 + 0x48);
    if (((lVar20 != 0) && (1 < *(uint *)(lVar18 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar18 + 0x40) + 8) + 0x60) != 2 &&
        (*(int *)(lVar20 + 4) != (int)cVar19)))) {
      *(int *)(lVar20 + 4) = (int)cVar19;
      *(ulong *)(lVar18 + 0x50) = *(ulong *)(lVar18 + 0x50) | 2;
      if (*(char *)(lVar18 + 0x78) == '\0') goto LAB_0384348c;
    }
    lVar20 = *(long *)(lVar18 + 0x48);
    if (((lVar20 != 0) && (2 < *(uint *)(lVar18 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar18 + 0x40) + 0x10) + 0x60) != 2 &&
        (*(int *)(lVar20 + 8) != (int)cVar6)))) {
      *(int *)(lVar20 + 8) = (int)cVar6;
      *(ulong *)(lVar18 + 0x50) = *(ulong *)(lVar18 + 0x50) | 4;
      if (*(char *)(lVar18 + 0x78) == '\0') goto LAB_0384348c;
    }
    lVar20 = *(long *)(lVar18 + 0x48);
    if ((((lVar20 != 0) && (3 < *(uint *)(lVar18 + 0x3c))) &&
        (*(int *)(*(long *)(*(long *)(lVar18 + 0x40) + 0x18) + 0x60) != 2)) &&
       (*(int *)(lVar20 + 0xc) != (int)cStack_73)) {
      *(int *)(lVar20 + 0xc) = (int)cStack_73;
      *(ulong *)(lVar18 + 0x50) = *(ulong *)(lVar18 + 0x50) | 8;
      if (*(char *)(lVar18 + 0x78) == '\0') goto LAB_0384348c;
    }
    lVar20 = *(long *)(lVar18 + 0x48);
    if (((lVar20 != 0) && (4 < *(uint *)(lVar18 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar18 + 0x40) + 0x20) + 0x60) != 2 &&
        (*(int *)(lVar20 + 0x10) != (int)cStack_72)))) {
      *(int *)(lVar20 + 0x10) = (int)cStack_72;
      *(ulong *)(lVar18 + 0x50) = *(ulong *)(lVar18 + 0x50) | 0x10;
      if (*(char *)(lVar18 + 0x78) == '\0') goto LAB_0384348c;
    }
    lVar20 = *(long *)(lVar18 + 0x48);
    if (((lVar20 != 0) && (5 < *(uint *)(lVar18 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar18 + 0x40) + 0x28) + 0x60) != 2 &&
        (*(uint *)(lVar20 + 0x14) != uVar10)))) {
      *(uint *)(lVar20 + 0x14) = uVar10;
      *(ulong *)(lVar18 + 0x50) = *(ulong *)(lVar18 + 0x50) | 0x20;
      if (*(char *)(lVar18 + 0x78) == '\0') goto LAB_0384348c;
    }
    lVar20 = *(long *)(lVar18 + 0x48);
    if ((((lVar20 != 0) && (6 < *(uint *)(lVar18 + 0x3c))) &&
        (*(int *)(*(long *)(*(long *)(lVar18 + 0x40) + 0x30) + 0x60) != 2)) &&
       (*(uint *)(lVar20 + 0x18) != uVar11)) {
      *(uint *)(lVar20 + 0x18) = uVar11;
      *(ulong *)(lVar18 + 0x50) = *(ulong *)(lVar18 + 0x50) | 0x40;
      if (*(char *)(lVar18 + 0x78) == '\0') goto LAB_0384348c;
    }
    lVar20 = *(long *)(lVar18 + 0x48);
    if (((lVar20 != 0) && (7 < *(uint *)(lVar18 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar18 + 0x40) + 0x38) + 0x60) != 2 &&
        (*(uint *)(lVar20 + 0x1c) != uVar21)))) {
      *(uint *)(lVar20 + 0x1c) = uVar21;
      *(ulong *)(lVar18 + 0x50) = *(ulong *)(lVar18 + 0x50) | 0x80;
    }
  }
LAB_0384348c:
  if (*(char *)(lVar13 + 0x78) != '\0') {
    piVar14 = *(int **)(lVar13 + 0x48);
    if (((piVar14 != (int *)0x0) && (*(int *)(lVar13 + 0x3c) != 0)) &&
       ((*(int *)(**(long **)(lVar13 + 0x40) + 0x60) != 2 && (*piVar14 != (int)(char)bStack_76)))) {
      *piVar14 = (int)(char)bStack_76;
      *(ulong *)(lVar13 + 0x50) = *(ulong *)(lVar13 + 0x50) | 1;
      if (*(char *)(lVar13 + 0x78) == '\0') goto LAB_038435b4;
    }
    lVar20 = *(long *)(lVar13 + 0x48);
    if ((((lVar20 != 0) && (1 < *(uint *)(lVar13 + 0x3c))) &&
        (*(int *)(*(long *)(*(long *)(lVar13 + 0x40) + 8) + 0x60) != 2)) &&
       (*(int *)(lVar20 + 4) != (int)cVar19)) {
      *(int *)(lVar20 + 4) = (int)cVar19;
      *(ulong *)(lVar13 + 0x50) = *(ulong *)(lVar13 + 0x50) | 2;
      if (*(char *)(lVar13 + 0x78) == '\0') goto LAB_038435b4;
    }
    lVar20 = *(long *)(lVar13 + 0x48);
    if (((lVar20 != 0) && (0x18 < *(uint *)(lVar13 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar13 + 0x40) + 0xc0) + 0x60) == 2 &&
        (fVar23 = (float)(int)cStack_73 / 100.0 + (float)(int)cVar6 +
                  (float)(int)cStack_72 / 10000.0, *(float *)(lVar20 + 0x60) != fVar23)))) {
      *(float *)(lVar20 + 0x60) = fVar23;
      *(ulong *)(lVar13 + 0x50) = *(ulong *)(lVar13 + 0x50) | 0x1000000;
    }
  }
LAB_038435b4:
  *(char *)(param_1 + 2) = cVar6;
  puVar4 = PTR_DAT_04bb26a8;
  *(ushort *)(param_1 + 3) = CONCAT11(cStack_72,cStack_73);
  if (*(int *)(FUN_0011e5e0 + *(long *)puVar4) == -1) {
    return;
  }
  if (*(long *)(*(long *)puVar4 + 0x11e610) == 0) {
    return;
  }
  lVar20 = *(long *)PTR_DAT_04bb30a0;
  if (lVar20 == 0) {
    return;
  }
  cStack_75 = cVar19;
  cStack_74 = cVar6;
  iVar7 = FUN_00a8d8a8(lVar20,&local_78);
  local_70 = CONCAT17(uStack_71,
                      CONCAT16(cStack_72,
                               CONCAT15(cStack_73,
                                        CONCAT14(cStack_74,
                                                 CONCAT13(cStack_75,CONCAT12(bStack_76,local_78)))))
                     );
  if (cStack_74 < '\x05') {
    local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_68 = local_68 + -0x15180;
    local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
  }
  uVar8 = local_70 >> 0x10;
  uVar22 = local_70 >> 0x30;
  uVar9 = local_70 >> 0x18;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70 = CONCAT26((short)uVar22,(uint6)local_70) & 0xff00ffffffffffff;
  cVar6 = FUN_00a8ae20(lVar20,uVar8,uVar9,5);
  iVar3 = (int)cVar6;
  uVar10 = *(uint *)(lVar20 + 0x65204);
  if (1 < uVar10) {
    uVar10 = 0;
  }
  local_70 = FUN_00a8c31c(lVar20);
  if ((char)(local_70 >> 0x20) < '\x05') {
    local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_68 = local_68 + -0x15180;
    local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
  }
  uVar22 = local_70;
  uVar8 = local_70 >> 0x10;
  uVar9 = local_70 >> 0x18;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70._7_1_ = SUB81(uVar22,7);
  local_70._0_7_ = (uint7)(uint6)local_70;
  cVar6 = FUN_00a8ae20(lVar20,uVar8,uVar9,4);
  if (*(char *)(lVar18 + 0x78) != '\0') {
    lVar20 = *(long *)(lVar18 + 0x48);
    if (((lVar20 != 0) && (8 < *(uint *)(lVar18 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar18 + 0x40) + 0x40) + 0x60) != 2 &&
        (*(int *)(lVar20 + 0x20) != iVar7)))) {
      *(int *)(lVar20 + 0x20) = iVar7;
      *(ulong *)(lVar18 + 0x50) = *(ulong *)(lVar18 + 0x50) | 0x100;
      if (*(char *)(lVar18 + 0x78) == '\0') goto LAB_038437a4;
    }
    lVar20 = *(long *)(lVar18 + 0x48);
    if ((((lVar20 != 0) && (0xb < *(uint *)(lVar18 + 0x3c))) &&
        (*(int *)(*(long *)(*(long *)(lVar18 + 0x40) + 0x58) + 0x60) != 2)) &&
       (*(int *)(lVar20 + 0x2c) != iVar3)) {
      *(int *)(lVar20 + 0x2c) = iVar3;
      *(ulong *)(lVar18 + 0x50) = *(ulong *)(lVar18 + 0x50) | 0x800;
    }
  }
LAB_038437a4:
  if (*(char *)(lVar13 + 0x78) != '\0') {
    lVar20 = *(long *)(lVar13 + 0x48);
    if (((lVar20 != 0) && (8 < *(uint *)(lVar13 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar13 + 0x40) + 0x40) + 0x60) != 2 &&
        (*(int *)(lVar20 + 0x20) != iVar7)))) {
      *(int *)(lVar20 + 0x20) = iVar7;
      *(ulong *)(lVar13 + 0x50) = *(ulong *)(lVar13 + 0x50) | 0x100;
      if (*(char *)(lVar13 + 0x78) == '\0') goto LAB_03843834;
    }
    lVar20 = *(long *)(lVar13 + 0x48);
    if (((lVar20 != 0) && (0xb < *(uint *)(lVar13 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar13 + 0x40) + 0x58) + 0x60) != 2 &&
        (*(int *)(lVar20 + 0x2c) != iVar3)))) {
      *(int *)(lVar20 + 0x2c) = iVar3;
      *(ulong *)(lVar13 + 0x50) = *(ulong *)(lVar13 + 0x50) | 0x800;
    }
  }
LAB_03843834:
  uVar17 = (uint)(cVar6 == '\x02');
  if (uVar10 == 1) {
    if (bStack_76 - 5 < 2) {
      uVar17 = 1;
    }
  }
  else {
    uVar21 = 0;
    if (uVar10 != 0) goto LAB_0384386c;
    if ('\n' < (char)bStack_76) {
      uVar17 = 1;
    }
  }
  uVar21 = uVar17;
LAB_0384386c:
  if ((((*(char *)(lVar18 + 0x78) != '\0') && (lVar20 = *(long *)(lVar18 + 0x48), lVar20 != 0)) &&
      (0xd < *(uint *)(lVar18 + 0x3c))) &&
     ((*(int *)(*(long *)(*(long *)(lVar18 + 0x40) + 0x68) + 0x60) != 2 &&
      (*(uint *)(lVar20 + 0x34) != uVar21)))) {
    *(uint *)(lVar20 + 0x34) = uVar21;
    *(ulong *)(lVar18 + 0x50) = *(ulong *)(lVar18 + 0x50) | 0x2000;
  }
  if (((*(char *)(lVar13 + 0x78) != '\0') && (lVar20 = *(long *)(lVar13 + 0x48), lVar20 != 0)) &&
     ((0xd < *(uint *)(lVar13 + 0x3c) &&
      ((*(int *)(*(long *)(*(long *)(lVar13 + 0x40) + 0x68) + 0x60) != 2 &&
       (*(uint *)(lVar20 + 0x34) != uVar21)))))) {
    *(uint *)(lVar20 + 0x34) = uVar21;
    *(ulong *)(lVar13 + 0x50) = *(ulong *)(lVar13 + 0x50) | 0x2000;
  }
  *(bool *)(param_1 + 1) = uVar21 == 1;
  return;
}

