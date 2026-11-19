
void FUN_03b5f940(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint7 uStack_48;
  
  if (*(char *)(param_1 + 8) != '\0') {
    if (*(int *)(param_1 + 0xc) - 1U < 3) {
      *(int *)(param_1 + 0xc) = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar9 = PTR_DAT_04bd1e70;
    plVar12 = *(long **)(param_1 + 0xd8);
    if (plVar12 != (long *)0x0) {
      if (*(char *)(*(long *)PTR_DAT_04bd1e70 + 1) != '\0') {
        lVar13 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x1a0);
        *(undefined4 *)(plVar12 + 2) = 0;
        (**(code **)(*plVar12 + 0x30))(plVar12,plVar12 + 1);
        lVar11 = lVar13 + ((ulong)(*(ushort *)(plVar12 + 0x23) >> 3) & 0x1ff8);
        *(ulong *)(lVar11 + 0xb8) =
             1L << ((ulong)*(ushort *)(plVar12 + 0x23) & 0x3f) | *(ulong *)(lVar11 + 0xb8);
        lVar13 = lVar13 + ((ulong)(*(ushort *)(plVar12 + 0x23) >> 3) & 0x1ff8);
        *(ulong *)(lVar13 + 0xd0) =
             *(ulong *)(lVar13 + 0xd0) &
             (1L << ((ulong)*(ushort *)(plVar12 + 0x23) & 0x3f) ^ 0xffffffffffffffffU);
      }
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    puVar10 = *(undefined4 **)(param_1 + 0xe0);
    lVar11 = 0;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = 0;
      *(undefined1 *)(puVar10 + 2) = 0;
      *(undefined2 *)(puVar10 + 0xc) = 0;
      *(undefined8 *)(puVar10 + 10) = 0;
      *(undefined8 *)(puVar10 + 0xe) = 0;
      *(undefined2 *)(puVar10 + 0x10) = 0;
      *(ulong *)((long)puVar10 + 9) = (ulong)uStack_48;
      *(undefined1 *)((long)puVar10 + 0x42) = 1;
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined8 *)(puVar10 + 8) = 0;
      *(undefined8 *)((long)puVar10 + 0x11) = 0;
      lVar11 = *(long *)(param_1 + 0xe0);
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    uVar8 = DAT_041e8298;
    uVar7 = DAT_041e8290;
    *(undefined8 *)(param_1 + 0x5a) = 0;
    *(undefined8 *)(param_1 + 0x6a) = 0;
    *(undefined8 *)(param_1 + 100) = 0;
    *(undefined8 *)(param_1 + 0x7a) = 0;
    *(undefined8 *)(param_1 + 0x74) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x8a) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x9a) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0xaa) = 0;
    *(undefined8 *)(param_1 + 0xb4) = 0;
    *(undefined8 *)(param_1 + 0xba) = 0;
    *(undefined8 *)(param_1 + 0xc4) = 0;
    *(undefined8 *)(param_1 + 0xca) = 0;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    uVar7 = DAT_041e82a8;
    *(undefined8 *)(param_1 + 0x40) = DAT_041e82a0;
    *(undefined8 *)(param_1 + 0x48) = uVar7;
    uVar7 = DAT_041e8288;
    *(undefined8 *)(param_1 + 0x20) = DAT_041e8280;
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    if (lVar11 != 0) {
      lVar13 = *(long *)(*(long *)puVar9 + 0x180);
      if ((lVar13 != 0) && ((*(char *)(lVar13 + 8) != '\0' || (*(long *)(lVar13 + 0x10) != 0)))) {
        uVar4 = *(ushort *)(lVar11 + 0x44);
        if ((int)(uint)uVar4 < *(int *)(lVar13 + 0x28)) {
          piVar1 = (int *)(lVar13 + 0x18);
          puVar2 = (uint *)(lVar13 + 0x38);
          do {
            while (uVar3 = *puVar2,
                  *(short *)(*(long *)(lVar13 + 0x30) + (ulong)uVar4 * 2) = (short)uVar3,
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
        *(undefined2 *)(lVar11 + 0x44) = 0xffff;
      }
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}

