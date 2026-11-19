
long * FUN_03900ad0(long param_1,undefined4 *param_2,ulong param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined4 *puVar23;
  ulong uVar24;
  int iVar25;
  uint local_78;
  undefined4 uStack_74;
  long local_70;
  long lStack_68;
  
  puVar2 = (uint *)(param_1 + 100);
  do {
    uVar17 = *(uint *)(param_1 + 100);
    iVar25 = (int)*(undefined8 *)(param_1 + 0x18);
    uVar24 = (ulong)iVar25;
    uVar21 = param_3 + 0xff + (ulong)uVar17 & 0xffffffffffffff00;
    uVar20 = param_3 + 0xff & 0xffffffffffffff00;
    if (uVar21 <= uVar24) {
      uVar20 = uVar21;
    }
    uVar13 = (uint)uVar20;
    while (uVar17 == *puVar2) {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar11) {
        *puVar2 = uVar13;
        cVar10 = ExclusiveMonitorsStatus();
      }
      if (cVar10 == '\0') {
        puVar2 = (uint *)(param_1 + 0x60);
        iVar25 = iVar25 - uVar17;
        goto LAB_03900b4c;
      }
    }
  } while( true );
  while( true ) {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar11) {
      *puVar2 = (uVar6 + 1) - uVar12 * uVar7;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 == '\0') break;
    while (uVar6 != *puVar2) {
LAB_03900b4c:
      uVar6 = *(uint *)(param_1 + 0x60);
      uVar7 = *(uint *)(param_1 + 0x40);
      uVar12 = 0;
      if (uVar7 != 0) {
        uVar12 = (uVar6 + 1) / uVar7;
      }
    }
  }
  uVar7 = 0;
  if (uVar21 <= uVar24) {
    uVar7 = uVar17;
  }
  if (uVar21 <= uVar24) {
    iVar25 = 0;
  }
  if (*(uint *)(param_1 + 0x40) <= uVar6) {
    uVar6 = 0;
  }
  plVar4 = (long *)(*(long *)(param_1 + 0x48) + (long)(int)uVar6 * 0x80);
  lVar5 = *(long *)(param_1 + 0x20);
  iVar19 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar19 = *(int *)(param_1 + 0x10) - *(int *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  uVar17 = iVar19 + uVar7;
  if (lVar5 == 0) {
    uStack_74 = 0;
    if (param_2 == (undefined4 *)0x0) goto LAB_03900c88;
    uStack_74 = 0;
    lVar18 = 0;
  }
  else {
    uStack_74 = *(undefined4 *)(lVar5 + 0x104);
    if (param_2 == (undefined4 *)0x0) goto LAB_03900c88;
    lVar18 = (**(code **)PTR_DAT_04bb2cd8)(lVar5);
  }
  if (0 < (int)(param_3 >> 2)) {
    uVar21 = param_3 >> 2 & 0xffffffff;
    uVar20 = param_3 >> 2 & 3;
    if (uVar21 - 1 < 3) {
      lVar22 = 0;
    }
    else {
      lVar22 = 0;
      puVar23 = (undefined4 *)((ulong)uVar17 + lVar18 + 8);
      do {
        lVar22 = lVar22 + -4;
        puVar23[-2] = *param_2;
        puVar23[-1] = param_2[1];
        *puVar23 = param_2[2];
        puVar1 = param_2 + 3;
        param_2 = param_2 + 4;
        puVar23[1] = *puVar1;
        puVar23 = puVar23 + 4;
      } while (uVar20 - uVar21 != lVar22);
      lVar22 = -lVar22;
    }
    if (uVar20 != 0) {
      puVar23 = (undefined4 *)(lVar18 + (ulong)uVar17 + lVar22 * 4);
      do {
        uVar20 = uVar20 - 1;
        *puVar23 = *param_2;
        puVar23 = puVar23 + 1;
        param_2 = param_2 + 1;
      } while (uVar20 != 0);
    }
  }
LAB_03900c88:
  iVar19 = uVar13 - uVar7;
  *(int *)(plVar4 + 6) = iVar19;
  *(int *)((long)plVar4 + 0x34) = iVar19;
  local_78 = uVar17;
  local_70 = lVar5;
  lStack_68 = param_1 + 8;
  FUN_0390dc00(plVar4,&local_78,1,1);
  bVar8 = *(byte *)((long)plVar4 + 0x39);
  uVar9 = *(ushort *)((long)plVar4 + 0x3a);
  lVar5 = plVar4[6];
  iVar15 = (**(code **)(*plVar4 + 0x20))(plVar4);
  iVar16 = (**(code **)(*plVar4 + 0x20))(plVar4);
  lVar18 = plVar4[4];
  if (lVar18 != 0) {
    lVar22 = plVar4[6];
    lVar14 = plVar4[3];
    uVar17 = (*DAT_04c62000)(lVar18);
    if ((uVar17 >> 2 & 1) != 0) {
      (*DAT_04c61fd8)(lVar18,(int)lVar14 +
                             (uint)uVar9 * (uint)bVar8 * (((int)lVar5 + iVar15) - 1U & -iVar16),
                      (int)lVar22);
    }
  }
  piVar3 = (int *)(param_1 + 0x68);
  *(uint *)(plVar4 + 0xf) = uVar7;
  *(uint *)((long)plVar4 + 0x7c) = uVar13;
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar11) {
      *piVar3 = *piVar3 + 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  piVar3 = (int *)(param_1 + 0x6c);
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar11) {
      *piVar3 = iVar25 + iVar19 + *piVar3;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  return plVar4;
}

