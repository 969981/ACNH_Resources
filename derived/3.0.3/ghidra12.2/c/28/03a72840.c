
void FUN_03a72840(long param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  
  lVar10 = *(long *)(param_1 + 0x1d8);
  if (*(uint *)(param_1 + 0x1d0) <= param_3) {
    param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    lVar11 = lVar10 + (long)(int)param_3 * 0x560;
    *(undefined4 *)(lVar11 + 0x78) = *param_4;
    *(undefined4 *)(lVar11 + 0x7c) = param_4[1];
    *(undefined8 *)(lVar11 + 0x80) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(param_4 + 4);
    *(undefined4 *)(lVar11 + 0x90) = param_4[6];
    *(undefined4 *)(lVar11 + 0x94) = param_4[7];
    *(undefined8 *)(lVar11 + 0x98) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(lVar11 + 0xa0) = *(undefined8 *)(param_4 + 10);
    uVar7 = *(undefined8 *)(param_4 + 0xc);
    uVar2 = *(undefined8 *)(param_4 + 0xe);
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(lVar11 + 0xbf) = *(undefined8 *)((long)param_4 + 0x47);
    *(undefined8 *)(lVar11 + 0xb0) = uVar2;
    *(undefined8 *)(lVar11 + 0xb8) = uVar8;
    *(undefined8 *)(lVar11 + 0xa8) = uVar7;
    FUN_038fd1e0(lVar11 + 200);
    FUN_038fd2f0(lVar11 + 200,param_4 + 0x14);
    uVar3 = param_4[0x26];
    *(undefined8 *)(lVar11 + 0x108) = *(undefined8 *)(param_4 + 0x24);
    puVar1 = (uint *)(lVar11 + 0x14c);
    *(undefined4 *)(lVar11 + 0x110) = uVar3;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((*(byte *)(param_1 + 0x1e0) & 1) != 0) {
    lVar9 = lVar10 + (long)(int)param_3 * 0x560;
    lVar11 = lVar9 + 0x330;
    FUN_03901694(lVar11,param_2);
    *(undefined8 *)(lVar9 + 0x328) = *(undefined8 *)(lVar9 + 800);
    FUN_01560750(lVar9 + 0x398,*(undefined8 *)(lVar9 + 800),*(undefined1 *)(lVar9 + 0x456),
                 *(undefined2 *)(lVar9 + 0x454));
    *(long *)(lVar9 + 0x350) = lVar9 + 0x398;
    (**(code **)(*(long *)(lVar9 + 0x330) + 0x38))(lVar11,param_2);
    local_78 = 0xff7fffffff7fffff;
    local_88 = PTR_DAT_04bd0f08 + 0x10;
    local_80 = 0x7f7fffff7f7fffff;
    local_70 = *(uint *)PTR_DAT_04bd0ea8;
    local_6c = 0x3f80000000000000;
    if (local_70 < 6) {
      if ((1 << (ulong)(local_70 & 0x1f) & 0x39U) == 0) {
        fVar13 = *(float *)(lVar9 + 0x338);
        fVar12 = *(float *)(lVar9 + 0x33c);
      }
      else {
        fVar12 = *(float *)(lVar9 + 0x338);
        fVar13 = *(float *)(lVar9 + 0x33c);
      }
      fVar15 = fVar12;
      fVar6 = 0.0;
      if (fVar12 <= 0.0) {
        fVar15 = 0.0;
        fVar6 = fVar12;
      }
      fVar14 = fVar13;
      fVar12 = 0.0;
      if (fVar13 <= 0.0) {
        fVar14 = 0.0;
        fVar12 = fVar13;
      }
      local_80 = CONCAT44(fVar12,fVar6);
      local_78 = CONCAT44(fVar14,fVar15);
    }
    uVar7 = FUN_038e77e4(&local_88,param_2,lVar11);
    lVar9 = lVar10 + (long)(int)param_3 * 0x560;
    FUN_03a72510(uVar7,param_2,lVar10 + (long)(int)param_3 * 0x560,lVar9 + 0x238,lVar9 + 0x78);
    FUN_03901694(lVar11,param_2);
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar9 + 0x318));
    *(undefined8 *)(lVar9 + 0x318) = 0;
  }
  return;
}

