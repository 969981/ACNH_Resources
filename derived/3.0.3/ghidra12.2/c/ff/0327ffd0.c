
void FUN_0327ffd0(long *param_1,byte *param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  ushort uVar9;
  char cVar10;
  uint uVar11;
  ulong uVar12;
  bool bVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  int local_58;
  int iStack_54;
  long local_50;
  long lStack_48;
  
  lStack_48 = param_1[6];
  piVar14 = (int *)param_1[4];
  local_50 = *(long *)(lStack_48 + 0x18);
  local_58 = 0;
  if (*(long *)(lStack_48 + 0x20) != 0) {
    local_58 = *(int *)(lStack_48 + 8) - *(int *)(*(long *)(lStack_48 + 0x20) + 0x10);
  }
  if (local_50 == 0) {
    iStack_54 = 0;
  }
  else {
    iStack_54 = *(int *)(local_50 + 0x104);
  }
  *piVar14 = local_58;
  piVar14[1] = iStack_54;
  *(long *)(piVar14 + 2) = local_50;
  *(long *)(piVar14 + 4) = lStack_48;
  if ((*(byte *)((long)piVar14 + 0x4e) >> 1 & 1) == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = 0x11 < *(ushort *)(piVar14 + 0x26) && *(ushort *)(piVar14 + 0x26) - 0x59 < 0xffffffd6;
  }
  FUN_038fd3e0(piVar14 + 0x14,&local_58,piVar14 + 0xc,0,*(undefined8 *)(piVar14 + 0x24),bVar13,1);
  piVar14 = (int *)param_1[4];
  *(uint *)((long)piVar14 + 0x4a) =
       (*(uint *)(param_2 + 8) & 0xff) << 0x10 | *(int *)(param_2 + 0xc) << 0x18 |
       (*(uint *)(param_2 + 4) & 0xff) << 8 | (uint)*param_2;
  if ((*(byte *)((long)piVar14 + 0x4e) >> 1 & 1) == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = 0x11 < *(ushort *)(piVar14 + 0x26) && *(ushort *)(piVar14 + 0x26) - 0x59 < 0xffffffd6;
  }
  local_58 = *piVar14;
  iStack_54 = piVar14[1];
  local_50 = *(long *)(piVar14 + 2);
  lStack_48 = *(long *)(piVar14 + 4);
  FUN_038fd3e0(piVar14 + 0x14,&local_58,piVar14 + 0xc,0,*(undefined8 *)(piVar14 + 0x24),bVar13,0);
  if (*(int *)((long)param_1 + 0xc) != 1) {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  puVar3 = (undefined4 *)param_1[4];
  puVar5 = (undefined4 *)param_1[5];
  *puVar5 = *puVar3;
  puVar5[1] = puVar3[1];
  *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar3 + 2);
  *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar3 + 4);
  puVar5[6] = puVar3[6];
  puVar5[7] = puVar3[7];
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar5 + 10) = *(undefined8 *)(puVar3 + 10);
  uVar4 = *(undefined8 *)(puVar3 + 0xc);
  uVar6 = *(undefined8 *)(puVar3 + 0xe);
  uVar15 = *(undefined8 *)(puVar3 + 0x10);
  *(undefined8 *)((long)puVar5 + 0x47) = *(undefined8 *)((long)puVar3 + 0x47);
  *(undefined8 *)(puVar5 + 0xc) = uVar4;
  *(undefined8 *)(puVar5 + 0xe) = uVar6;
  *(undefined8 *)(puVar5 + 0x10) = uVar15;
  FUN_038fd1e0(puVar5 + 0x14);
  FUN_038fd2f0(puVar5 + 0x14,puVar3 + 0x14);
  uVar7 = puVar3[0x26];
  *(undefined8 *)(puVar5 + 0x24) = *(undefined8 *)(puVar3 + 0x24);
  puVar1 = puVar5 + 0x35;
  puVar5[0x26] = uVar7;
  do {
    cVar10 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = *puVar1 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  lVar17 = param_1[4];
  if (3 < *(ushort *)(lVar17 + 0x98) - 0x59) {
    lVar16 = param_1[7];
    uVar12 = FUN_032e4390(&local_58,*(ushort *)(lVar17 + 0x98),0);
    if ((uVar12 & 1) != 0) {
      uVar8 = *(ushort *)(lVar17 + 0x30);
      uVar9 = *(ushort *)(lVar17 + 0x32);
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      uVar2 = uVar9;
      if (*(short *)(lVar17 + 0x3a) != 3) {
        uVar2 = 1;
      }
      *(ushort *)(lVar16 + 0x10) = uVar8;
      if (uVar2 <= uVar9) {
        uVar2 = uVar9;
      }
      *(ushort *)(lVar16 + 0x12) = uVar2;
      if (*(int *)(lVar17 + 0x50) == -1) {
        lVar17 = -1;
      }
      else {
        uVar11 = *(int *)(lVar17 + 0x50) - (uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
        if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar11) {
          uVar11 = 0;
        }
        puVar1 = (uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar11 * 0x20 + 4);
        do {
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar13) {
            *puVar1 = *puVar1 | 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        lVar17 = (long)*(int *)(lVar17 + 0x50);
      }
      *(long *)(lVar16 + 8) = lVar17;
    }
  }
  *(undefined4 *)(param_1 + 1) = 2;
  return;
}

