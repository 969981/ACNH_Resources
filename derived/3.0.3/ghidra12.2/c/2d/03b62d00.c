
void FUN_03b62d00(float param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 local_28;
  
  puVar8 = PTR_DAT_04bd1e70;
  if (*(char *)(param_2 + 0x7a) != '\0') {
    fVar12 = 128.0;
    if (param_1 <= 128.0) {
      fVar12 = param_1;
    }
    fVar13 = -128.0;
    if (-128.0 <= param_1) {
      fVar13 = fVar12;
    }
    if (fVar13 != *(float *)(param_2 + 0x88)) {
      uVar5 = *(undefined2 *)(param_2 + 0x118);
      lVar11 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
      piVar1 = (int *)(lVar11 + 0x40);
      if (*piVar1 == 0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (uint *)(lVar11 + 0x38);
        do {
          while( true ) {
            uVar4 = *puVar2;
            if (*puVar2 == uVar4) break;
            ClearExclusiveLocal();
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = (uint)*(ushort *)(*(long *)(lVar11 + 0x30) + (ulong)uVar4 * 2);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        piVar3 = (int *)(lVar11 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        puVar10 = (undefined8 *)(*(long *)(lVar11 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *(float *)(puVar10 + 1) = fVar13;
        *puVar10 = &PTR_LAB_04b779c0;
        *(undefined2 *)((long)puVar10 + 0xc) = uVar5;
        *(undefined4 *)(puVar10 + 2) = 0;
      }
      local_28 = *(undefined8 *)puVar8;
      FUN_03b519f0(&local_28,puVar10);
    }
    *(float *)(param_2 + 0x88) = fVar13;
    plVar9 = *(long **)(param_2 + 0x90);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x10))();
      *(long *)(param_2 + 0x90) = 0;
    }
  }
  return;
}

