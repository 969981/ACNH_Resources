
long FUN_03be1390(long param_1,long param_2)

{
  long *plVar1;
  short sVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined *local_50;
  long lStack_48;
  
  lVar14 = *(long *)(param_1 + (ulong)((int)*(char *)(param_1 + 0xd8) & 1) * 8 + 0x20);
  if (*(char *)(param_1 + 0xd8) < 0) {
    plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x28);
    pcVar4 = (char *)(**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    if (*pcVar4 != '\0') {
      sVar2 = *(short *)(param_2 + 4);
      uVar10 = *(uint *)(lVar14 + 0x28);
      lVar7 = *(long *)(lVar14 + 0x30);
      iVar8 = (int)sVar2;
      if (uVar10 <= (uint)(int)sVar2) {
        iVar8 = 0;
      }
      lVar11 = *(long *)(lVar7 + (long)iVar8 * 8);
      if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) goto LAB_03be14a8;
      uVar9 = *(uint *)(lVar14 + 0x38);
      if (0 < (int)uVar9) {
        uVar12 = 0;
        piVar13 = *(int **)(lVar14 + 0x40);
        do {
          if (*piVar13 == (int)pcVar4) {
            if (uVar9 <= (uint)uVar12) {
              uVar12 = 0;
            }
            piVar13 = *(int **)(lVar14 + 0x40) + uVar12 * 6;
            if (*(long *)(piVar13 + 2) != 0) goto LAB_03be149c;
            lStack_48 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
            local_50 = PTR_DAT_04bb2020 + 0x10;
            lVar7 = FUN_03b3e4f0(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 8),
                                 *(undefined8 *)(param_1 + 0xf8),&local_50);
            *(long *)(piVar13 + 2) = lVar7;
            goto LAB_03be1490;
          }
          uVar12 = uVar12 + 1;
          piVar13 = piVar13 + 6;
        } while (uVar9 != uVar12);
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + 0x18) + 0x20))();
    }
    if (*(long *)(param_1 + 0x100) == 0) {
      lStack_48 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
      local_50 = PTR_DAT_04bb2020 + 0x10;
      uVar5 = FUN_03b3e4f0(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 8),
                           *(undefined8 *)(param_1 + 0xf8),&local_50);
      *(undefined8 *)(param_1 + 0x100) = uVar5;
    }
    piVar13 = (int *)0x0;
LAB_03be1490:
    sVar2 = *(short *)(param_2 + 4);
    uVar10 = *(uint *)(lVar14 + 0x28);
    lVar7 = *(long *)(lVar14 + 0x30);
LAB_03be149c:
    uVar9 = (uint)sVar2;
    if (uVar10 <= uVar9) {
      uVar9 = 0;
    }
    *(int **)(lVar7 + (long)(int)uVar9 * 8) = piVar13;
  }
LAB_03be14a8:
  pcVar4 = (char *)(param_1 + 0x108);
  lVar7 = *(long *)(param_1 + 0x100);
  if (0 < (int)*(uint *)(lVar14 + 0x28)) {
    iVar8 = (int)*(short *)(param_2 + 4);
    if (*(uint *)(lVar14 + 0x28) <= (uint)(int)*(short *)(param_2 + 4)) {
      iVar8 = 0;
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0x30) + (long)iVar8 * 8);
    if (lVar14 != 0) {
      lVar7 = *(long *)(lVar14 + 8);
      pcVar4 = (char *)(lVar14 + 0x10);
    }
  }
  if ((lVar7 != 0) && (*pcVar4 == '\0')) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
    DataMemoryBarrier(2,1);
    DataMemoryBarrier(2,1);
    plVar3 = (long *)(lVar14 + 0x18);
    uVar10 = *(uint *)(lVar14 + 0x10);
    plVar1 = plVar3 + uVar10;
    if (1 < uVar10) {
      plVar1 = plVar3;
    }
    lVar14 = *plVar1;
    *(undefined4 *)(lVar7 + 0x118) = *(undefined4 *)(lVar14 + 0xd8);
    lStack_48 = *(long *)(lVar14 + 0xc0);
    if (lStack_48 != 0) {
      local_50 = PTR_DAT_04bb2020 + 0x10;
      if ((*(long *)PTR_DAT_04bc3ee8 != 0) &&
         (lVar11 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x28), lVar11 != 0)) {
        lVar6 = FUN_03baddf0(lVar11,&local_50);
        lVar11 = *(long *)(lVar11 + 0x88);
        if (lVar6 != 0) {
          lVar11 = lVar6;
        }
        if (lVar11 != 0) {
          *(long *)(lVar7 + 0x110) = lVar11;
        }
      }
    }
    *(byte *)(lVar7 + 0xfc) = *(byte *)(lVar14 + 0xd4) ^ 1;
    *pcVar4 = '\x01';
  }
  return lVar7;
}

