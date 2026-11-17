
/* WARNING: Removing unreachable block (ram,0x030af69c) */

undefined4 FUN_030af5e4(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  if ((int)param_1[2] < 1) {
    return 0xffffffff;
  }
  iVar3 = (int)param_1[1];
  iVar4 = *(int *)((long)param_1 + 0xc);
  iVar1 = 0;
  if (iVar3 <= iVar4) {
    iVar1 = iVar3;
  }
  iVar2 = 0;
  if (iVar4 + 1 < iVar3) {
    iVar2 = iVar4 + 1;
  }
  plVar19 = (long *)(*param_1 + (long)(iVar4 - iVar1) * 0x60);
  lVar7 = plVar19[10];
  lVar8 = plVar19[2];
  uVar21 = *(undefined4 *)((long)plVar19 + 0x14);
  uVar6 = *(undefined4 *)((long)plVar19 + 0x54);
  lVar9 = plVar19[3];
  uVar22 = *(undefined4 *)((long)plVar19 + 0x1c);
  lVar10 = plVar19[4];
  uVar23 = *(undefined4 *)((long)plVar19 + 0x24);
  lVar11 = plVar19[5];
  uVar24 = *(undefined4 *)((long)plVar19 + 0x2c);
  lVar12 = plVar19[6];
  uVar25 = *(undefined4 *)((long)plVar19 + 0x34);
  lVar13 = plVar19[7];
  uVar26 = *(undefined4 *)((long)plVar19 + 0x3c);
  lVar14 = plVar19[8];
  uVar27 = *(undefined4 *)((long)plVar19 + 0x44);
  lVar15 = plVar19[9];
  uVar28 = *(undefined4 *)((long)plVar19 + 0x4c);
  lVar18 = *plVar19;
  lVar5 = plVar19[1];
  *(int *)((long)param_1 + 0xc) = iVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  if (lVar18 == 0) {
    return uVar6;
  }
  if (lVar5 == 0) {
    return uVar6;
  }
  plVar19 = (long *)param_1[3];
  plVar19[1] = lVar18;
  *(char *)(plVar19 + 2) = (char)lVar7;
  plVar19[3] = lVar5;
  puVar16 = PTR_DAT_04bb2200;
  plVar20 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) + 0x130);
  if (plVar20 == (long *)0x0) {
    return uVar6;
  }
  *(int *)((long)plVar20 + 0x904) = (int)lVar8;
  *(undefined4 *)(plVar20 + 0x121) = uVar21;
  *(int *)((long)plVar20 + 0x90c) = (int)lVar9;
  *(undefined4 *)(plVar20 + 0x122) = uVar22;
  *(int *)((long)plVar20 + 0x914) = (int)lVar10;
  *(undefined4 *)(plVar20 + 0x123) = uVar23;
  *(int *)((long)plVar20 + 0x91c) = (int)lVar11;
  *(undefined4 *)(plVar20 + 0x124) = uVar24;
  *(int *)((long)plVar20 + 0x924) = (int)lVar12;
  *(undefined4 *)(plVar20 + 0x125) = uVar25;
  *(int *)((long)plVar20 + 0x92c) = (int)lVar13;
  *(undefined4 *)(plVar20 + 0x126) = uVar26;
  *(int *)((long)plVar20 + 0x934) = (int)lVar14;
  *(undefined4 *)(plVar20 + 0x127) = uVar27;
  *(int *)((long)plVar20 + 0x93c) = (int)lVar15;
  *(undefined4 *)(plVar20 + 0x128) = uVar28;
  if ((int)plVar20[0x120] != 0) {
    return uVar6;
  }
  if ((char)plVar20[7] != '\0') {
    uVar17 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar17 & 1) != 0) {
      return uVar6;
    }
    if ((char)plVar20[7] != '\0') goto LAB_030af730;
  }
  *(undefined1 *)(plVar20 + 7) = 1;
  (**(code **)(*plVar20 + 0xb8))(plVar20,1);
LAB_030af730:
  lVar18 = *(long *)puVar16;
  plVar20[0x11f] = (long)plVar19;
  (**(code **)(*plVar19 + 0x20))(plVar19,*(undefined8 *)(*(long *)(lVar18 + 0xf0) + 0x38));
  *(undefined4 *)(plVar20 + 0x120) = 1;
  return uVar6;
}

