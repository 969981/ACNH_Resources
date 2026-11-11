
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003992c0(long *param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  byte *pbVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_0037d4c0();
  (**(code **)(*param_1 + 0xb8))(param_1,param_2);
  uVar11 = FUN_0037e870(param_1);
  if ((uVar11 & 1) != 0) {
    return;
  }
  FUN_0037b240(param_1[0x23],param_2);
  FUN_00376c48(param_1[0x23],param_2);
  if ('\0' < *(char *)((long)param_1 + 0x109)) {
    lVar16 = 0;
    lVar17 = 8;
    do {
      FUN_0037b240(*(undefined8 *)(param_1[0x22] + lVar17),param_2);
      FUN_00376c48(*(undefined8 *)(param_1[0x22] + lVar17),param_2);
      lVar16 = lVar16 + 1;
      lVar17 = lVar17 + 0x10;
    } while (lVar16 < *(char *)((long)param_1 + 0x109));
  }
  lVar16 = FUN_003788bc(param_1[0x23],param_2);
  if ((lVar16 == 0) || (lVar16 = FUN_003795ec(param_1[0x23],param_2), lVar16 == 0)) {
    if ((**(byte **)(param_2 + 200) >> 1 & 1) == 0) {
      return;
    }
    if (*(char *)((long)param_1 + 0x109) != '\x01') {
      return;
    }
    if (2 < (ulong)(long)(char)param_1[0x21]) {
      return;
    }
    iVar13 = 0;
    iVar1 = *(int *)(&DAT_0413538c + (long)(char)param_1[0x21] * 4);
    lVar16 = *(long *)(*(long *)(param_2 + 0xb8) + 0x68);
    uVar11 = lVar16 + 0x22fU & -lVar16;
    do {
      pbVar14 = *(byte **)(param_2 + 200);
      if ((*pbVar14 & 1) == 0) {
        *(ulong *)(pbVar14 + 0x40) = *(long *)(pbVar14 + 0x40) + uVar11;
      }
      else {
        plVar15 = *(long **)(pbVar14 + 0x40);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar4) {
            *plVar15 = *plVar15 + uVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar1);
    return;
  }
  cVar3 = (char)param_1[0x21];
  if (cVar3 == '\x02') {
    FUN_00399ca0(param_1,param_2);
  }
  else {
    if (cVar3 == '\x01') {
      FUN_0039995c(param_1,param_2);
      bVar2 = *(byte *)((long)param_1 + 0x62);
      goto joined_r0x00399474;
    }
    if (cVar3 == '\0') {
      FUN_00399598(param_1,param_2);
      bVar2 = *(byte *)((long)param_1 + 0x62);
      goto joined_r0x00399474;
    }
  }
  bVar2 = *(byte *)((long)param_1 + 0x62);
joined_r0x00399474:
  if ((bVar2 >> 1 & 1) != 0) {
    FUN_0037ea30(param_1,param_2);
    FUN_0037e958(param_1,&local_90);
    uVar10 = _UNK_04102888;
    uVar9 = _DAT_04102880;
    uVar8 = _UNK_041023d8;
    uVar7 = _DAT_041023d0;
    uVar6 = _UNK_04102208;
    uVar5 = _DAT_04102200;
    if ('\0' < *(char *)((long)param_1 + 0x109)) {
      lVar16 = 0;
      lVar17 = 8;
      do {
        puVar12 = (undefined8 *)FUN_003788bc(*(undefined8 *)(param_1[0x22] + lVar17),param_2);
        lVar16 = lVar16 + 1;
        lVar17 = lVar17 + 0x10;
        puVar12[1] = uStack_88;
        *puVar12 = local_90;
        puVar12[3] = uStack_78;
        puVar12[2] = uStack_80;
        puVar12[5] = uStack_68;
        puVar12[4] = local_70;
        puVar12[7] = uStack_58;
        puVar12[6] = uStack_60;
        puVar12[9] = uVar6;
        puVar12[8] = uVar5;
        puVar12[0xb] = uVar10;
        puVar12[10] = uVar9;
        puVar12[0xd] = uVar8;
        puVar12[0xc] = uVar7;
      } while (lVar16 < *(char *)((long)param_1 + 0x109));
    }
    uVar10 = _UNK_04102888;
    uVar9 = _DAT_04102880;
    uVar8 = _UNK_041023d8;
    uVar7 = _DAT_041023d0;
    uVar6 = _UNK_04102208;
    uVar5 = _DAT_04102200;
    if ((int)param_1[0x25] != 0) {
      uVar11 = 0;
      do {
        lVar16 = uVar11 * 4;
        uVar11 = uVar11 + 1;
        puVar12 = (undefined8 *)
                  (*(long *)(*(long *)(param_2 + 200) + 0x38) +
                  (ulong)*(uint *)(param_1[0x24] + lVar16));
        puVar12[1] = uStack_88;
        *puVar12 = local_90;
        puVar12[3] = uStack_78;
        puVar12[2] = uStack_80;
        puVar12[5] = uStack_68;
        puVar12[4] = local_70;
        puVar12[7] = uStack_58;
        puVar12[6] = uStack_60;
        puVar12[9] = uVar6;
        puVar12[8] = uVar5;
        puVar12[0xb] = uVar10;
        puVar12[10] = uVar9;
        puVar12[0xd] = uVar8;
        puVar12[0xc] = uVar7;
      } while (uVar11 < *(uint *)(param_1 + 0x25));
    }
  }
  if (*(code **)(param_2 + 0x168) != (code *)0x0) {
    (**(code **)(param_2 + 0x168))(param_2,param_1,*(undefined8 *)(param_2 + 0x170));
  }
  return;
}

