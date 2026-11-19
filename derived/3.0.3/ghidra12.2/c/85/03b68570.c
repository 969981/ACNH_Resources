
long FUN_03b68570(long param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*(char *)(param_1 + 8) != '\0') &&
     ((*(char *)(param_1 + 0x10) != '\0' || (*(long *)(param_1 + 0x18) != 0)))) {
    piVar1 = (int *)(param_1 + 0x20);
    puVar2 = (uint *)(param_1 + 0x40);
    do {
      while( true ) {
        uVar4 = *puVar2;
        if (uVar4 == 0xffff) {
          return 0;
        }
        if (*puVar2 == uVar4) break;
        ClearExclusiveLocal();
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *puVar2 = (uint)*(ushort *)(*(long *)(param_1 + 0x38) + (ulong)uVar4 * 2);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (((uVar4 ^ 0xffffffff) & 0xffff) != 0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar16 = *(long *)(param_1 + 0x18);
      uVar17 = (ulong)uVar4 & 0xffff;
      lVar15 = lVar16 + uVar17 * 0x120;
      *(short *)(lVar15 + 0x118) = (short)uVar4;
      FUN_03b61540(lVar15);
      if (0 < param_2) {
        iVar13 = 0;
        lVar9 = lVar16 + uVar17 * 0x120;
        piVar1 = (int *)(param_1 + 0x58);
        puVar2 = (uint *)(param_1 + 0x78);
        plVar3 = (long *)(lVar9 + 0xe8);
        do {
          if (*(char *)(param_1 + 0x48) == '\0' && *(long *)(param_1 + 0x50) == 0) {
LAB_03b6886c:
            FUN_03b68880(param_1,lVar15);
            return 0;
          }
          do {
            while( true ) {
              uVar4 = *puVar2;
              if (uVar4 == 0xffff) goto LAB_03b6886c;
              if (*puVar2 == uVar4) break;
              ClearExclusiveLocal();
            }
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = (uint)*(ushort *)(*(long *)(param_1 + 0x70) + (ulong)uVar4 * 2);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (((uVar4 ^ 0xffffffff) & 0xffff) == 0) goto LAB_03b6886c;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = *piVar1 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          lVar10 = *(long *)(param_1 + 0x50);
          uVar11 = (ulong)uVar4 & 0xffff;
          puVar18 = (undefined8 *)(lVar10 + uVar11 * 0x240);
          *(short *)(puVar18 + 0x40) = (short)uVar4;
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar18[2] = 0;
          puVar18[3] = 0;
          *(undefined4 *)(puVar18 + 8) = 0;
          *(undefined2 *)((long)puVar18 + 0x44) = 0;
          puVar18[0x10] = 0;
          puVar18[0x11] = 0;
          if ((*(int *)((long)puVar18 + 300) != 0) &&
             (lVar12 = lVar10 + uVar11 * 0x240, *(int *)(lVar12 + 0x128) != 0)) {
            if (*(int *)((long)puVar18 + 300) == 1) {
              lVar14 = lVar10 + uVar11 * 0x240;
              *(undefined8 *)(lVar14 + 0x118) = 0;
              *(undefined ***)(lVar14 + 0x108) = &PTR_LAB_04b77c48;
            }
            *(undefined8 *)(lVar12 + 0x128) = 0;
            *(undefined8 *)(lVar12 + 0x130) = 0;
            *(undefined8 *)(lVar12 + 0x135) = 0;
            *(undefined8 *)(lVar10 + uVar11 * 0x240 + 0x140) = 0;
          }
          lVar10 = lVar10 + uVar11 * 0x240;
          *(undefined8 *)(lVar10 + 400) = 0;
          *(undefined8 *)(lVar10 + 0x198) = 0;
          *(undefined8 *)(lVar10 + 0x1a0) = 0;
          *(undefined8 *)(lVar10 + 0x1a8) = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_78 = 0;
          *(undefined8 *)(lVar10 + 0x1b8) = 0;
          *(undefined8 *)(lVar10 + 0x1c0) = 0;
          *(undefined8 *)(lVar10 + 0x1c8) = 0;
          FUN_006bb600(0x18,lVar10 + 0x1d0,&local_78,5);
          plVar8 = *(long **)(lVar10 + 0x1e8);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x10))();
            *(long *)(lVar10 + 0x1e8) = 0;
          }
          lVar10 = *plVar3;
          plVar8 = (long *)((long)*(int *)(lVar9 + 0xfc) + (long)puVar18);
          *plVar3 = (long)plVar8;
          *plVar8 = lVar10;
          plVar8[1] = (long)plVar3;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 8) = plVar8;
          }
          iVar13 = iVar13 + 1;
          *(int *)(lVar9 + 0xf8) = *(int *)(lVar9 + 0xf8) + 1;
        } while (iVar13 != param_2);
      }
      *(short *)(lVar16 + uVar17 * 0x120 + 0x78) = (short)param_2;
      uVar5 = *(ushort *)(lVar15 + 0x118);
      lVar16 = param_1 + ((ulong)(uVar5 >> 3) & 0x1ff8);
      *(ulong *)(lVar16 + 0xa0) = 1L << ((ulong)uVar5 & 0x3f) | *(ulong *)(lVar16 + 0xa0);
      uVar5 = *(ushort *)(lVar15 + 0x118);
      param_1 = param_1 + ((ulong)(uVar5 >> 3) & 0x1ff8);
      *(ulong *)(param_1 + 0xd0) = 1L << ((ulong)uVar5 & 0x3f) | *(ulong *)(param_1 + 0xd0);
      return lVar15;
    }
  }
  return 0;
}

