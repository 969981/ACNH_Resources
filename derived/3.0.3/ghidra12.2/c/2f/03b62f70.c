
void FUN_03b62f70(float param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 local_18;
  
  if ((*(char *)(param_2 + 0x7a) == '\0') || (*(float *)(param_2 + 200) == param_1)) {
    return;
  }
  uVar5 = *(undefined2 *)(param_2 + 0x118);
  fVar14 = 1.0;
  if (param_1 <= 1.0) {
    fVar14 = param_1;
  }
  fVar12 = 0.0;
  if (0.0 <= param_1) {
    fVar12 = fVar14;
  }
  *(float *)(param_2 + 200) = fVar12;
  puVar8 = PTR_DAT_04bd1e70;
  lVar11 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
  piVar1 = (int *)(lVar11 + 0x40);
  if (*piVar1 == 0) {
    plVar10 = (long *)0x0;
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
    plVar10 = (long *)(*(long *)(lVar11 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    *plVar10 = (long)&PTR_LAB_04b77728;
    puVar9 = PTR_DAT_04bd1fb8;
    uVar13 = *(undefined4 *)(param_2 + 200);
    *(undefined2 *)(plVar10 + 1) = uVar5;
    *plVar10 = (long)(puVar9 + 0x10);
    *(undefined4 *)((long)plVar10 + 0xc) = uVar13;
  }
  local_18 = *(undefined8 *)puVar8;
  FUN_03b519f0(&local_18,plVar10);
  return;
}

