
void FUN_03ac01b0(long param_1,long param_2,uint param_3,long *param_4,undefined8 param_5,
                 undefined4 *param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined8 local_ec;
  undefined1 local_dc;
  undefined1 local_db;
  uint local_d8;
  uint local_c0;
  undefined4 local_b4;
  undefined2 local_78;
  
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    param_3 = 0;
  }
  if ((*(byte *)(param_1 + 0x5d0) & 1) == 0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x18);
  lVar15 = lVar11 + (long)(int)param_3 * 0x488;
  *(undefined4 *)(lVar15 + 0x98) = *param_6;
  *(undefined4 *)(lVar15 + 0x9c) = param_6[1];
  *(undefined8 *)(lVar15 + 0xa0) = *(undefined8 *)(param_6 + 2);
  *(undefined8 *)(lVar15 + 0xa8) = *(undefined8 *)(param_6 + 4);
  *(undefined4 *)(lVar15 + 0xb0) = param_6[6];
  *(undefined4 *)(lVar15 + 0xb4) = param_6[7];
  *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(param_6 + 8);
  *(undefined8 *)(lVar15 + 0xc0) = *(undefined8 *)(param_6 + 10);
  uVar7 = *(undefined8 *)(param_6 + 0xc);
  uVar14 = *(undefined8 *)(param_6 + 0xe);
  uVar10 = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(lVar15 + 0xdf) = *(undefined8 *)((long)param_6 + 0x47);
  *(undefined8 *)(lVar15 + 0xd0) = uVar14;
  *(undefined8 *)(lVar15 + 0xd8) = uVar10;
  *(undefined8 *)(lVar15 + 200) = uVar7;
  lVar12 = lVar11 + (long)(int)param_3 * 0x488;
  FUN_038fd1e0(lVar15 + 0xe8);
  uVar7 = FUN_038fd2f0(lVar15 + 0xe8,param_6 + 0x14);
  uVar9 = param_6[0x26];
  *(undefined8 *)(lVar15 + 0x128) = *(undefined8 *)(param_6 + 0x24);
  puVar1 = (uint *)(lVar15 + 0x16c);
  *(undefined4 *)(lVar15 + 0x130) = uVar9;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 | 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_03abfd50(uVar7,param_2);
  FUN_038e4cec(&local_dc);
  local_78 = 0x105;
  local_b4 = 0x2020303;
  local_db = 0;
  local_dc = (*(uint *)(param_1 + 0x5d0) & 2) == 0;
  local_c0 = local_c0 & 0xfffffff0 | 7;
  local_d8 = local_d8 | 1;
  FUN_038e4d90(&local_dc,param_2);
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x81) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x400);
  }
  if (0 < *(int *)(param_1 + 0x5d8)) {
    uVar13 = 0;
    uVar14 = *(undefined8 *)PTR_DAT_04bbd7e8;
    do {
      uVar2 = uVar13;
      if (*(uint *)(param_1 + 0x20) <= uVar13) {
        uVar2 = 0;
      }
      iVar3 = *(int *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 0x2c);
      if (iVar3 == 1) {
        FUN_03abf6c0(param_1,param_2,uVar13,lVar12,uVar14,uVar7);
      }
      else if (iVar3 == 0) {
        FUN_03abf410(param_1,param_2,uVar13,lVar12,uVar14,uVar7);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < *(int *)(param_1 + 0x5d8));
  }
  local_f8 = 0xff7fffffff7fffff;
  local_108 = PTR_DAT_04bd0f08 + 0x10;
  local_100 = 0x7f7fffff7f7fffff;
  local_f0 = *(uint *)PTR_DAT_04bd0ea8;
  local_ec = 0x3f80000000000000;
  if (local_f0 < 6) {
    if ((1 << (ulong)(local_f0 & 0x1f) & 0x39U) == 0) {
      fVar17 = *(float *)(param_4 + 1);
      fVar16 = *(float *)((long)param_4 + 0xc);
    }
    else {
      fVar16 = *(float *)(param_4 + 1);
      fVar17 = *(float *)((long)param_4 + 0xc);
    }
    fVar19 = fVar16;
    fVar6 = 0.0;
    if (fVar16 <= 0.0) {
      fVar19 = 0.0;
      fVar6 = fVar16;
    }
    fVar18 = fVar17;
    fVar16 = 0.0;
    if (fVar17 <= 0.0) {
      fVar18 = 0.0;
      fVar16 = fVar17;
    }
    local_100 = CONCAT44(fVar16,fVar6);
    local_f8 = CONCAT44(fVar18,fVar19);
  }
  FUN_038e77e4(&local_108,param_2,param_4);
  (**(code **)(*param_4 + 0x38))(param_4,param_2);
  uVar13 = *(uint *)(lVar11 + (long)(int)param_3 * 0x488 + 0x2b0);
  if (uVar13 != 0xffffffff) {
    lVar15 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar15 + 0x5c8) >> 3 & 1) == 0) {
      uVar2 = uVar13 - *(ushort *)(lVar15 + 0x3da);
      if (*(uint *)(lVar15 + 0x368) <= uVar2) {
        uVar2 = 0;
      }
      if ((*(uint *)(*(long *)(lVar15 + 0x370) + (long)(int)uVar2 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar13 & 0x3f);
        goto LAB_03ac052c;
      }
    }
    if ((*(uint *)(lVar15 + 0x5c8) >> 5 & 1) == 0) {
      uVar8 = 0x112;
      uVar9 = 0x12;
    }
    else {
      uVar8 = 0x111;
      uVar9 = 0x11;
    }
    if ((*(uint *)(lVar15 + 800) & 2) != 0) {
      uVar9 = uVar8;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar9);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03ac052c:
  FUN_03abf970(param_1,param_2,lVar12);
  FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
               *(undefined8 *)(lVar11 + (long)(int)param_3 * 0x488 + 0x3a0));
  return;
}

