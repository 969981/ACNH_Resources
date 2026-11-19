
void FUN_03a75a00(long param_1,undefined8 param_2,uint param_3,long param_4,long param_5,
                 int *param_6,uint param_7,uint param_8)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  float fVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  
  lVar14 = *(long *)(param_1 + 0x238);
  if (*(uint *)(param_1 + 0x230) <= param_3) {
    param_3 = 0;
  }
  lVar13 = lVar14 + (long)(int)param_3 * 0x6d0;
  *(undefined8 *)(lVar13 + 0x428) = 0;
  *(undefined8 *)(lVar13 + 0x420) = 0;
  *(undefined8 *)(lVar13 + 0x418) = 0;
  *(undefined8 *)(lVar13 + 0x410) = 0;
  *(undefined8 *)(lVar13 + 0x408) = 0;
  *(undefined8 *)(lVar13 + 0x400) = 0;
  *(undefined8 *)(lVar13 + 0x3f8) = 0;
  *(undefined8 *)(lVar13 + 0x3f0) = 0;
  *(undefined8 *)(lVar13 + 1000) = 0;
  if (param_4 == 0) {
    fVar17 = 0.0;
    fVar18 = 0.0;
  }
  else {
    uVar6 = *(ushort *)(param_4 + 0x30);
    uVar7 = *(ushort *)(param_4 + 0x32);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    fVar17 = (float)uVar6;
    uVar6 = uVar7;
    if (*(short *)(param_4 + 0x3a) != 3) {
      uVar6 = 1;
    }
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    fVar18 = (float)uVar6;
    lVar11 = lVar14 + (long)(int)param_3 * 0x6d0;
    FUN_01560750(lVar11 + 0x430,param_4,*(undefined1 *)(lVar11 + 0x4ee),
                 *(undefined2 *)(lVar11 + 0x4ec));
    *(long *)(lVar13 + 1000) = lVar11 + 0x430;
  }
  if (param_5 != 0) {
    uVar6 = *(ushort *)(param_5 + 0x30);
    lVar11 = lVar14 + (long)(int)param_3 * 0x6d0;
    uVar7 = *(ushort *)(param_5 + 0x32);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    uVar2 = uVar7;
    if (*(short *)(param_5 + 0x3a) != 3) {
      uVar2 = 1;
    }
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    FUN_0155a100(lVar11 + 0x510,param_5,*(undefined1 *)(lVar11 + 0x5ce),
                 *(undefined2 *)(lVar11 + 0x5cc));
    lVar4 = *(long *)(param_6 + 2);
    uVar5 = *(undefined8 *)(param_6 + 4);
    iVar3 = param_6[1];
    if (((lVar4 != *(long *)(lVar11 + 0x5e0)) || (*param_6 != *(int *)(lVar11 + 0x5d8))) ||
       (iVar3 != *(int *)(lVar14 + (long)(int)param_3 * 0x6d0 + 0x5dc))) {
      *(int *)(lVar11 + 0x5d8) = *param_6;
      lVar14 = lVar14 + (long)(int)param_3 * 0x6d0;
      *(int *)(lVar14 + 0x5dc) = iVar3;
      *(undefined8 *)(lVar14 + 0x5e8) = uVar5;
      *(long *)(lVar11 + 0x5e0) = lVar4;
      puVar1 = (uint *)(lVar11 + 0x5c8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = *puVar1 & 0xfffffff7 | 8;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (*(ushort *)(lVar11 + 0x5cc) != param_7) {
      puVar1 = (uint *)(lVar11 + 0x5c8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar9) {
          *puVar1 = *puVar1 & 0xfffffffd | 2;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(short *)(lVar11 + 0x5cc) = (short)param_7;
    }
    *(long *)(lVar13 + 0x428) = lVar11 + 0x510;
    fVar17 = (float)uVar6;
    fVar18 = (float)uVar2;
  }
  plVar12 = (long *)(lVar13 + 0x3c8);
  *(float *)(lVar13 + 0x3d0) = fVar17;
  *(float *)(lVar13 + 0x3d4) = fVar18;
  fVar16 = fVar17;
  fVar10 = 0.0;
  if (fVar17 <= 0.0) {
    fVar16 = 0.0;
    fVar10 = fVar17;
  }
  fVar17 = 0.0;
  if (fVar18 <= 0.0) {
    fVar17 = fVar18;
  }
  *(float *)(lVar13 + 0x3d8) = fVar10;
  *(float *)(lVar13 + 0x3e0) = fVar16;
  *(float *)(lVar13 + 0x3dc) = fVar17;
  *(float *)(lVar13 + 0x3e4) = fVar18;
  (**(code **)(*plVar12 + 0x38))(plVar12,param_2);
  if ((param_8 & 1) != 0) {
    local_88 = 0xff7fffffff7fffff;
    local_98 = PTR_DAT_04bd0f08 + 0x10;
    local_90 = 0x7f7fffff7f7fffff;
    local_80 = *(uint *)PTR_DAT_04bd0ea8;
    local_7c = 0x3f80000000000000;
    if (local_80 < 6) {
      if ((1 << (ulong)(local_80 & 0x1f) & 0x39U) == 0) {
        fVar18 = *(float *)(lVar13 + 0x3d0);
        fVar17 = *(float *)(lVar13 + 0x3d4);
      }
      else {
        fVar17 = *(float *)(lVar13 + 0x3d0);
        fVar18 = *(float *)(lVar13 + 0x3d4);
      }
      fVar16 = fVar17;
      fVar10 = 0.0;
      if (fVar17 <= 0.0) {
        fVar16 = 0.0;
        fVar10 = fVar17;
      }
      fVar15 = fVar18;
      fVar17 = 0.0;
      if (fVar18 <= 0.0) {
        fVar15 = 0.0;
        fVar17 = fVar18;
      }
      local_90 = CONCAT44(fVar17,fVar10);
      local_88 = CONCAT44(fVar15,fVar16);
    }
    FUN_038e77e4(&local_98,param_2,plVar12);
  }
  return;
}

