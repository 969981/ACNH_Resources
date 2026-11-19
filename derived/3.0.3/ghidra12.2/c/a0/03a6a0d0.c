
void FUN_03a6a0d0(long param_1,undefined8 param_2,uint param_3,long param_4,long param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  
  if (*(char *)(param_1 + 0x468) != '\0') {
    uVar3 = *(ushort *)(param_5 + 0x32);
    lVar14 = 0;
    lVar13 = *(long *)(param_1 + 0x1d8);
    uVar4 = *(ushort *)(param_5 + 0x30);
    if (*(uint *)(param_1 + 0x1d0) <= param_3) {
      param_3 = 0;
    }
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    uVar6 = *(ushort *)(param_4 + 0x38);
    uVar1 = uVar3;
    if (*(short *)(param_5 + 0x3a) != 3) {
      uVar1 = 1;
    }
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    uVar5 = *(ushort *)(param_4 + 0x3a);
    uVar3 = uVar5;
    if (*(short *)(param_4 + 0x42) != 3) {
      uVar3 = 1;
    }
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    if ((uVar4 == uVar6) && (uVar1 == uVar3)) {
      lVar12 = lVar13 + (long)(int)param_3 * 0x3f8;
      *(undefined4 *)(lVar12 + 0x318) = *(undefined4 *)(param_4 + 8);
      lVar14 = lVar12 + 0x310;
      *(undefined4 *)(lVar12 + 0x31c) = *(undefined4 *)(param_4 + 0xc);
      *(undefined8 *)(lVar12 + 800) = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(lVar12 + 0x328) = *(undefined8 *)(param_4 + 0x18);
      *(undefined4 *)(lVar12 + 0x330) = *(undefined4 *)(param_4 + 0x20);
      *(undefined4 *)(lVar12 + 0x334) = *(undefined4 *)(param_4 + 0x24);
      *(undefined8 *)(lVar12 + 0x338) = *(undefined8 *)(param_4 + 0x28);
      *(undefined8 *)(lVar12 + 0x340) = *(undefined8 *)(param_4 + 0x30);
      uVar11 = *(undefined8 *)(param_4 + 0x48);
      uVar10 = *(undefined8 *)(param_4 + 0x38);
      uVar2 = *(undefined8 *)(param_4 + 0x40);
      *(undefined8 *)(lVar12 + 0x35f) = *(undefined8 *)(param_4 + 0x4f);
      *(undefined8 *)(lVar12 + 0x358) = uVar11;
      *(undefined8 *)(lVar12 + 0x350) = uVar2;
      *(undefined8 *)(lVar12 + 0x348) = uVar10;
      FUN_038fd1e0(lVar12 + 0x368);
      FUN_038fd2f0(lVar12 + 0x368,param_4 + 0x58);
      uVar10 = *(undefined8 *)(param_4 + 0x98);
      *(undefined4 *)(lVar12 + 0x3b0) = *(undefined4 *)(param_4 + 0xa0);
      *(undefined8 *)(lVar12 + 0x3a8) = uVar10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass((undefined4 *)(lVar12 + 0x3c8),0x10);
        if (bVar8) {
          *(undefined4 *)(lVar12 + 0x3c8) = 0x7fffffff;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      *(undefined2 *)(lVar12 + 0x3cc) = *(undefined2 *)(param_4 + 0xbc);
      *(undefined1 *)(lVar12 + 0x3ce) = *(undefined1 *)(param_4 + 0xbe);
      *(undefined1 *)(lVar12 + 0x3cf) = *(undefined1 *)(param_4 + 0xbf);
      uVar10 = *(undefined8 *)(param_4 + 0xb0);
      *(undefined8 *)(lVar12 + 0x3b8) = *(undefined8 *)(param_4 + 0xa8);
      *(undefined8 *)(lVar12 + 0x3c0) = uVar10;
      lVar12 = lVar13 + (long)(int)param_3 * 0x3f8;
      *(undefined8 *)(lVar12 + 0x3d0) = *(undefined8 *)(param_4 + 0xc0);
      *(undefined4 *)(lVar12 + 0x3d8) = *(undefined4 *)(param_4 + 200);
      *(undefined4 *)(lVar12 + 0x3dc) = *(undefined4 *)(param_4 + 0xcc);
      *(undefined8 *)(lVar12 + 0x3e0) = *(undefined8 *)(param_4 + 0xd0);
      *(undefined8 *)(lVar12 + 1000) = *(undefined8 *)(param_4 + 0xd8);
    }
    lVar13 = lVar13 + (long)(int)param_3 * 0x3f8;
    *(long *)(lVar13 + 0x228) = lVar14;
    *(undefined8 *)(lVar13 + 0x1d8) = 0;
    *(float *)(lVar13 + 0x1d0) = (float)uVar4;
    *(float *)(lVar13 + 0x1d4) = (float)uVar1;
    *(float *)(lVar13 + 0x1e0) = (float)uVar4;
    *(float *)(lVar13 + 0x1e4) = (float)uVar1;
    FUN_01560750(lVar13 + 0x230,param_5,*(undefined1 *)(lVar13 + 0x2ee),
                 *(undefined2 *)(lVar13 + 0x2ec));
    *(long *)(lVar13 + 0x1e8) = lVar13 + 0x230;
    (**(code **)(*(long *)(lVar13 + 0x1c8) + 0x38))(lVar13 + 0x1c8,param_2);
    local_78 = 0xff7fffffff7fffff;
    local_88 = PTR_DAT_04bd0f08 + 0x10;
    local_80 = 0x7f7fffff7f7fffff;
    local_70 = *(uint *)PTR_DAT_04bd0ea8;
    local_6c = 0x3f80000000000000;
    if (local_70 < 6) {
      if ((1 << (ulong)(local_70 & 0x1f) & 0x39U) == 0) {
        fVar16 = *(float *)(lVar13 + 0x1d0);
        fVar15 = *(float *)(lVar13 + 0x1d4);
      }
      else {
        fVar15 = *(float *)(lVar13 + 0x1d0);
        fVar16 = *(float *)(lVar13 + 0x1d4);
      }
      fVar18 = fVar15;
      fVar9 = 0.0;
      if (fVar15 <= 0.0) {
        fVar18 = 0.0;
        fVar9 = fVar15;
      }
      fVar17 = fVar16;
      fVar15 = 0.0;
      if (fVar16 <= 0.0) {
        fVar17 = 0.0;
        fVar15 = fVar16;
      }
      local_80 = CONCAT44(fVar15,fVar9);
      local_78 = CONCAT44(fVar17,fVar18);
    }
    FUN_038e77e4(&local_88,param_2,lVar13 + 0x1c8);
  }
  return;
}

