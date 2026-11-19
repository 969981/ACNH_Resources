
undefined8 FUN_03b619d0(long param_1,int *param_2,undefined4 param_3,long param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  ushort uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_58 = CONCAT44(local_58._4_4_,4);
  if (*(int *)(param_1 + 0x70) == 0) {
    *(undefined4 *)(param_1 + 0x70) = 4;
    *(undefined1 *)(param_1 + 0x7d) = 0;
    puVar8 = PTR_DAT_04bd1e70;
    if (((char)param_2[2] != '\0') && (*(int **)(param_2 + 4) != (int *)0x0)) {
      if (**(int **)(param_2 + 4) != 0x56415742) {
        return 0;
      }
      uVar4 = *(ushort *)(param_2 + 0xc);
      if (uVar4 == 0) {
        return 0;
      }
      if (*param_2 == 2) {
        if (param_4 == 0) {
          return 0;
        }
        lVar13 = *(long *)PTR_DAT_04bd1e70;
        if (*(char *)(lVar13 + 1) == '\0') {
          return 0;
        }
        lVar14 = *(long *)(lVar13 + 0x1a8);
        if (lVar14 == 0) {
          return 0;
        }
        if (*(int *)(lVar14 + 0x18) < 1) {
          return 0;
        }
        if (*(int *)(lVar14 + 0x50) < (int)(uint)uVar4) {
          return 0;
        }
        if (*(int *)(lVar14 + 0x7c) - *(int *)(lVar14 + 0x80) <
            (int)((uint)*(ushort *)(param_2 + 0x10) * (uint)uVar4)) {
          return 0;
        }
        if (*(char *)(lVar13 + 1) == '\0') {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          if (*(long *)(lVar13 + 0x1a8) != 0) {
            uVar9 = FUN_03b6a750(*(long *)(lVar13 + 0x1a8),param_4,param_2);
          }
        }
        *(undefined8 *)(param_1 + 0x108) = uVar9;
      }
      FUN_03b61690(param_1,param_2,param_3);
      uVar5 = *(undefined2 *)(param_1 + 0x118);
      lVar13 = *(long *)(*(long *)puVar8 + 0x188);
      piVar1 = (int *)(lVar13 + 0x40);
      if (*piVar1 == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (uint *)(lVar13 + 0x38);
        do {
          while( true ) {
            uVar15 = *puVar2;
            if (*puVar2 == uVar15) break;
            ClearExclusiveLocal();
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = (uint)*(ushort *)(*(long *)(lVar13 + 0x30) + (ulong)uVar15 * 2);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        piVar3 = (int *)(lVar13 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        puVar11 = (undefined8 *)(*(long *)(lVar13 + 0x18) + ((ulong)uVar15 & 0xffff) * 0x40);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *(undefined2 *)(puVar11 + 1) = uVar5;
        *puVar11 = &PTR_LAB_04b77168;
      }
      local_58 = *(undefined8 *)puVar8;
      uVar10 = FUN_03b519f0(&local_58,puVar11);
      if ((uVar10 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x7a) = 1;
      }
      if (*(short *)(param_1 + 0x78) == 0) {
        return 1;
      }
      uVar15 = 0;
      do {
        lVar13 = *(long *)(param_1 + 0x100);
        local_50 = 0;
        uStack_48 = 0;
        local_58 = 0;
        if (((*(char *)(lVar13 + 8) == '\0') || (*(int **)(lVar13 + 0x10) == (int *)0x0)) ||
           (**(int **)(lVar13 + 0x10) != 0x56415742)) {
          uVar10 = 6;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (uVar15 != 0) {
            if (3 < uVar15) {
              uVar12 = uVar15 & 0xfffffffc;
              do {
                uVar12 = uVar12 - 4;
                lVar13 = lVar13 + (ulong)*(ushort *)(lVar13 + 0x38) * 0xc;
                lVar13 = lVar13 + (ulong)*(ushort *)(lVar13 + 0x78) * 0xc;
                lVar13 = lVar13 + 0x40 + (ulong)*(ushort *)(lVar13 + 0xb8) * 0xc;
                lVar13 = lVar13 + (ulong)*(ushort *)(lVar13 + 0xb8) * 0xc + 0xc0;
              } while (uVar12 != 0);
            }
            if ((uVar15 & 3) != 0) {
              uVar12 = uVar15 & 3;
              do {
                uVar12 = uVar12 - 1;
                lVar13 = lVar13 + (ulong)*(ushort *)(lVar13 + 0x38) * 0xc + 0x40;
              } while (uVar12 != 0);
            }
          }
          uVar10 = (ulong)*(ushort *)(lVar13 + 2);
        }
        *(undefined4 *)((long)&local_58 + uVar10 * 4) = 0x3f800000;
        FUN_03b61cc0(param_1,uVar15,&local_58);
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(ushort *)(param_1 + 0x78));
      return 1;
    }
  }
  return 0;
}

