
void FUN_03b63090(float param_1,long param_2,int param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  undefined8 local_48;
  short local_40;
  undefined8 local_38;
  
  puVar8 = PTR_DAT_04bd1e70;
  local_40 = 0;
  local_48 = 0;
  if (0x3e < (int)param_4) {
    param_4 = 0x3f;
  }
  plVar13 = *(long **)(*(long *)(*(long *)PTR_DAT_04bd1e70 + 0x168) +
                       (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)) * 8 + 8);
  if (plVar13 == (long *)0x0) {
    local_48._0_2_ = 0;
  }
  else {
    fVar14 = 1.0;
    if (param_1 <= 1.0) {
      fVar14 = param_1;
    }
    fVar15 = 0.0;
    if (0.0 <= param_1) {
      fVar15 = fVar14;
    }
    if (NAN(fVar15)) {
      fVar15 = 0.0;
    }
    (**(code **)(*plVar13 + 0x10))(fVar15,plVar13,&local_48);
  }
  bVar9 = plVar13 != (long *)0x0;
  pcVar11 = (char *)(param_2 + param_3 + 0xcc);
  if (((((bool)*pcVar11 != bVar9) ||
       (*(short *)(param_2 + (long)param_3 * 10 + 0xce) != (short)local_48)) ||
      (*(short *)(param_2 + (long)param_3 * 10 + 0xd0) != local_48._2_2_)) ||
     (((*(short *)(param_2 + (long)param_3 * 10 + 0xd2) != local_48._4_2_ ||
       (*(short *)(param_2 + (long)param_3 * 10 + 0xd4) != local_48._6_2_)) ||
      (*(short *)(param_2 + (long)param_3 * 10 + 0xd6) != local_40)))) {
    *pcVar11 = bVar9;
    lVar12 = param_2 + (long)param_3 * 10;
    *(undefined8 *)(lVar12 + 0xce) = local_48;
    *(short *)(lVar12 + 0xd6) = local_40;
    uVar5 = *(undefined2 *)(param_2 + 0x118);
    lVar12 = *(long *)(*(long *)puVar8 + 0x188);
    piVar1 = (int *)(lVar12 + 0x40);
    if (*piVar1 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (uint *)(lVar12 + 0x38);
      do {
        while( true ) {
          uVar4 = *puVar2;
          if (*puVar2 == uVar4) break;
          ClearExclusiveLocal();
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = (uint)*(ushort *)(*(long *)(lVar12 + 0x30) + (ulong)uVar4 * 2);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      piVar3 = (int *)(lVar12 + 0x10);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      puVar10 = (undefined8 *)(*(long *)(lVar12 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(int *)(puVar10 + 1) = param_3;
      *(short *)(puVar10 + 2) = (short)local_48;
      *(undefined2 *)((long)puVar10 + 0xc) = uVar5;
      *(bool *)((long)puVar10 + 0xe) = bVar9;
      *(short *)((long)puVar10 + 0x12) = local_48._2_2_;
      *(short *)((long)puVar10 + 0x14) = local_48._4_2_;
      *(short *)((long)puVar10 + 0x16) = local_48._6_2_;
      *(short *)(puVar10 + 3) = local_40;
      *puVar10 = &PTR_LAB_04b77428;
    }
    local_38 = *(undefined8 *)puVar8;
    FUN_03b519f0(&local_38,puVar10);
  }
  return;
}

