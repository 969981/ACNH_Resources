
undefined8 FUN_03b68880(long param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 8) != '\0') {
    if (*(long *)(param_2 + 0x108) != 0) {
      local_28 = *(undefined8 *)PTR_DAT_04bd1e70;
      FUN_03b51b10(&local_28);
      *(undefined8 *)(param_2 + 0x108) = 0;
    }
    if (*(char *)(param_2 + 0x7a) != '\0') {
      FUN_03b63b60(param_2);
      *(undefined1 *)(param_2 + 0x7a) = 0;
    }
    piVar1 = (int *)(param_1 + 0x58);
    puVar2 = (uint *)(param_1 + 0x78);
    while (0 < *(int *)(param_2 + 0xf8)) {
      plVar7 = *(long **)(param_2 + 0xe8);
      if (*plVar7 != 0) {
        *(long *)(*plVar7 + 8) = plVar7[1];
      }
      if ((long *)plVar7[1] != (long *)0x0) {
        *(long *)plVar7[1] = *plVar7;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      *(int *)(param_2 + 0xf8) = *(int *)(param_2 + 0xf8) + -1;
      if ((plVar7 == (long *)0x0) ||
         (lVar8 = (long)plVar7 - (long)*(int *)(param_2 + 0xfc), lVar8 == 0)) break;
      if ((*(char *)(param_1 + 0x48) != '\0') || (*(long *)(param_1 + 0x50) != 0)) {
        uVar4 = *(ushort *)(lVar8 + 0x200);
        if ((int)(uint)uVar4 < *(int *)(param_1 + 0x68)) {
          do {
            while (uVar3 = *(uint *)(param_1 + 0x78),
                  *(short *)(*(long *)(param_1 + 0x70) + (ulong)uVar4 * 2) = (short)uVar3,
                  *puVar2 != uVar3) {
              ClearExclusiveLocal();
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = (uint)uVar4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(undefined2 *)(lVar8 + 0x200) = 0xffff;
      }
    }
    if (*(long *)(param_2 + 0x110) != 0) {
      if (*(int *)(param_1 + 0x3f0) < *(int *)(param_1 + 0x3f4)) {
        *(long *)(*(long *)(param_1 + 0x3f8) + (long)*(int *)(param_1 + 0x3f0) * 8) =
             *(long *)(param_2 + 0x110);
        *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3f0) + 1;
      }
      *(undefined8 *)(param_2 + 0x110) = 0;
    }
    FUN_03b61540(param_2);
    if ((*(char *)(param_1 + 0x10) != '\0') || (*(long *)(param_1 + 0x18) != 0)) {
      uVar4 = *(ushort *)(param_2 + 0x118);
      if ((int)(uint)uVar4 < *(int *)(param_1 + 0x30)) {
        piVar1 = (int *)(param_1 + 0x20);
        puVar2 = (uint *)(param_1 + 0x40);
        do {
          while (uVar3 = *puVar2,
                *(short *)(*(long *)(param_1 + 0x38) + (ulong)uVar4 * 2) = (short)uVar3,
                *puVar2 != uVar3) {
            ClearExclusiveLocal();
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = (uint)uVar4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(undefined2 *)(param_2 + 0x118) = 0xffff;
    }
  }
  return 1;
}

