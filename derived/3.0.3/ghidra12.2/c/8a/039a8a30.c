
undefined8 FUN_039a8a30(long param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined *puVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  short sVar17;
  long *plVar18;
  ushort uVar19;
  long lVar20;
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x284);
  if (*(uint *)(param_1 + 0x20) <= (uint)*(ushort *)(param_1 + 0x284)) {
    uVar9 = 0;
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x28) + (ulong)uVar9 * 0x38);
  *plVar18 = (long)param_2;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *(undefined4 *)(plVar18 + 3) = 0xffffffff;
  uVar3 = *(undefined2 *)(param_1 + 0x284);
  *(undefined1 *)((long)plVar18 + 0x1e) = 0x30;
  *(undefined2 *)((long)plVar18 + 0x1c) = uVar3;
  *(undefined4 *)((long)plVar18 + 0x34) = 8;
  if ((param_3 & 1) != 0) {
    *(undefined1 *)((long)plVar18 + 0x1e) = 0x32;
  }
  puVar8 = PTR_DAT_04bbdcb8;
  if ((*(byte *)(param_1 + 0x280) >> 5 & 1) != 0) {
    if (*(short *)(param_1 + 0x284) == 0) {
      piVar1 = (int *)(*(long *)PTR_DAT_04bbdcb8 + 0x90);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar19 = (ushort)iVar10 & 0x7ff;
    }
    else {
      uVar19 = *(ushort *)(*(long *)(**(long **)(param_1 + 0x28) + 0x50) + 4);
    }
    uVar9 = (**(code **)(*param_2 + 0xb8))(param_2);
    if (0 < (int)uVar9) {
      if (uVar9 == 1) {
        uVar14 = 0;
      }
      else {
        lVar16 = 0;
        uVar14 = 0;
        do {
          uVar14 = uVar14 + 2;
          *(ushort *)(param_2[10] + lVar16 + 4) = uVar19;
          lVar20 = param_2[10] + lVar16;
          lVar16 = lVar16 + 0x18;
          *(ushort *)(lVar20 + 0x10) = uVar19;
        } while (((ulong)uVar9 & 0xfffffffe) != uVar14);
      }
      if ((uVar9 & 1) != 0) {
        *(ushort *)(param_2[10] + uVar14 * 0xc + 4) = uVar19;
      }
    }
  }
  *(short *)(param_1 + 0x284) = *(short *)(param_1 + 0x284) + 1;
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
    *(long **)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 8) = plVar18;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  (**(code **)(*param_2 + 0x270))(param_2);
  puVar7 = PTR_DAT_04bb3490;
  if (((*PTR_DAT_04bb3490 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  puVar6 = PTR_DAT_04bb3488;
  (**(code **)*param_2)(param_2,PTR_DAT_04bb3488);
  iVar10 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (iVar10 != 0) {
    iVar13 = 0;
    iVar12 = 0;
    do {
      if (iVar10 != 0) {
        plVar15 = *(long **)(param_1 + 0x38);
        plVar18 = plVar15 + iVar10;
        do {
          lVar16 = *plVar15;
          sVar17 = *(short *)(lVar16 + 0x18);
          if (sVar17 == -1 || *(short *)(lVar16 + 0x1a) == -1) {
            iVar10 = 0;
          }
          else {
            iVar10 = 0;
            do {
              iVar10 = iVar10 + 1;
              lVar20 = *(long *)(*(long *)(param_1 + 0x38) + (long)sVar17 * 8);
              sVar17 = *(short *)(lVar20 + 0x18);
            } while (sVar17 != -1 && *(short *)(lVar20 + 0x1a) != -1);
          }
          if ((iVar10 == iVar12) && (iVar13 < *(int *)(param_1 + 0x44))) {
            *(long *)(*(long *)(param_1 + 0x48) + (long)iVar13 * 8) = lVar16;
            iVar13 = *(int *)(param_1 + 0x40) + 1;
            *(int *)(param_1 + 0x40) = iVar13;
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar18);
        iVar10 = *(int *)(param_1 + 0x30);
      }
      iVar12 = iVar12 + 1;
    } while (iVar10 != iVar13);
  }
  plVar18 = *(long **)(param_1 + 0xa0);
  if (plVar18 != (long *)0x0) {
    lVar16 = *plVar18;
    *(undefined4 *)((long)plVar18 + 0x24) = 0xffffffff;
    if (0 < *(int *)(lVar16 + 0x30)) {
      lVar20 = 0;
      puVar2 = PTR_DAT_04bb3498 + 0x10;
      do {
        puVar11 = (undefined8 *)**(long **)(*(long *)(lVar16 + 0x38) + lVar20 * 8);
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          *(undefined **)puVar6 = puVar2;
          __cxa_guard_release(puVar7);
        }
        if ((puVar11 != (undefined8 *)0x0) &&
           (uVar14 = (**(code **)*puVar11)(puVar11,puVar6), (uVar14 & 1) != 0)) {
          *(int *)((long)plVar18 + 0x24) = (int)lVar20;
          break;
        }
        lVar16 = *plVar18;
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(int *)(lVar16 + 0x30));
    }
  }
  plVar18 = *(long **)(*(long *)puVar8 + 0x48);
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18,param_1,param_2,param_4);
  }
  return 1;
}

