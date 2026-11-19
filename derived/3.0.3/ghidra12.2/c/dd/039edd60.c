
void FUN_039edd60(float param_1,undefined4 param_2,long param_3,long param_4,long *param_5,
                 int param_6)

{
  undefined4 *puVar1;
  byte bVar2;
  bool bVar3;
  void *__dest;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong local_90 [2];
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  fVar14 = 0.0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 1.0;
  if ((param_3 == 0) || (*(char *)(param_3 + 0x58) == '\0')) {
    fVar15 = 0.0;
    bVar3 = true;
    fVar16 = 0.0;
    fVar18 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar19 = 1.0;
    fVar13 = 0.0;
    param_1 = 1.0;
    fVar17 = 0.0;
  }
  else {
    if ((param_4 == 0) || (*(char *)(param_4 + 0x58) == '\0')) {
      param_1 = 0.0;
    }
    bVar3 = false;
    fVar19 = 1.0 - param_1;
    fVar18 = *(float *)(param_3 + 0x188) * fVar19;
    fVar16 = fVar19 * *(float *)(param_3 + 0x18c);
    fVar15 = fVar19 * *(float *)(param_3 + 400);
    fVar14 = fVar19 * *(float *)(param_3 + 0x194);
    fVar12 = fVar19 * *(float *)(param_3 + 0x1b0);
    fVar11 = fVar19 * *(float *)(param_3 + 0x1b4);
    local_78 = fVar19 * *(float *)(param_3 + 0x1b8);
    fVar17 = fVar19 * *(float *)(param_3 + 0x128);
    fVar13 = fVar19 * *(float *)(param_3 + 0x148);
    local_70 = CONCAT44(fVar16,fVar18);
    fVar19 = fVar19 * *(float *)(param_3 + 0x168);
    local_68 = CONCAT44(fVar14,fVar15);
    local_80 = CONCAT44(fVar11,fVar12);
  }
  if ((param_4 != 0) && (*(char *)(param_4 + 0x58) != '\0')) {
    bVar3 = false;
    fVar17 = fVar17 + param_1 * *(float *)(param_4 + 0x128);
    local_70 = CONCAT44(param_1 * *(float *)(param_4 + 0x18c) + fVar16,
                        param_1 * *(float *)(param_4 + 0x188) + fVar18);
    local_68 = CONCAT44(param_1 * *(float *)(param_4 + 0x194) + fVar14,
                        param_1 * *(float *)(param_4 + 400) + fVar15);
    fVar12 = fVar12 + param_1 * *(float *)(param_4 + 0x1b0);
    fVar11 = fVar11 + param_1 * *(float *)(param_4 + 0x1b4);
    local_78 = local_78 + param_1 * *(float *)(param_4 + 0x1b8);
    fVar13 = fVar13 + param_1 * *(float *)(param_4 + 0x148);
    fVar19 = fVar19 + param_1 * *(float *)(param_4 + 0x168);
    local_80 = CONCAT44(fVar11,fVar12);
  }
  fVar14 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + local_78 * local_78);
  if (0.0 < fVar14) {
    fVar14 = 1.0 / fVar14;
    local_78 = local_78 * fVar14;
    local_80 = CONCAT44(fVar11 * fVar14,fVar12 * fVar14);
  }
  if (bVar3) {
    lVar9 = param_5[2];
    local_90[0] = 0;
    local_90[1] = 0;
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x20))(param_5);
    lVar10 = *(long *)param_5[1];
    lVar8 = (long)param_6;
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar10 + (long)param_6 * 0xc + 8) * 4];
    (**(code **)(*param_5 + 0x18))(param_5);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar9 + (ulong)*(ushort *)(lVar10 + (long)param_6 * 0xc + 4)),local_90,
             (ulong)bVar2 << 2);
    }
    lVar9 = param_5[2];
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x20))(param_5);
    lVar10 = *(long *)param_5[1];
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar10 + (lVar8 + 1) * 0xc + 8) * 4];
    (**(code **)(*param_5 + 0x18))(param_5);
    if (bVar2 != 0) {
      uVar6 = (ulong)*(ushort *)(lVar10 + (lVar8 + 1) * 0xc + 4);
      uVar4 = (ulong)bVar2 & 3;
      if (bVar2 < 4) {
        lVar10 = 0;
        puVar5 = (undefined8 *)PTR_DAT_04bb2150;
      }
      else {
        lVar10 = 0;
        puVar7 = (undefined4 *)(uVar6 + lVar9 + 8);
        puVar5 = (undefined8 *)&DAT_0419b56c;
        do {
          lVar10 = lVar10 + -4;
          *(undefined8 *)(puVar7 + -2) = *puVar5;
          *puVar7 = *(undefined4 *)(puVar5 + 1);
          puVar1 = (undefined4 *)((long)puVar5 + 0xc);
          puVar5 = puVar5 + 2;
          puVar7[1] = *puVar1;
          puVar7 = puVar7 + 4;
        } while (-lVar10 != ((ulong)bVar2 & 0xfc));
        lVar10 = -lVar10;
      }
      if ((bVar2 & 3) != 0) {
        puVar7 = (undefined4 *)(lVar9 + uVar6 + lVar10 * 4);
        do {
          uVar4 = uVar4 - 1;
          *puVar7 = *(undefined4 *)puVar5;
          puVar5 = (undefined8 *)((long)puVar5 + 4);
          puVar7 = puVar7 + 1;
        } while (uVar4 != 0);
      }
    }
    lVar9 = param_5[2];
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x20))(param_5);
    local_90[0] = CONCAT44(local_90[0]._4_4_,param_2);
    lVar10 = *(long *)param_5[1];
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar10 + (lVar8 + 2) * 0xc + 8) * 4];
    (**(code **)(*param_5 + 0x18))(param_5);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar9 + (ulong)*(ushort *)(lVar10 + (lVar8 + 2) * 0xc + 4)),local_90,
             (ulong)bVar2 << 2);
    }
    lVar9 = param_5[2];
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x20))(param_5);
    local_90[0] = local_90[0] & 0xffffffff00000000;
    lVar10 = *(long *)param_5[1];
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar10 + (lVar8 + 3) * 0xc + 8) * 4];
    (**(code **)(*param_5 + 0x18))(param_5);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar9 + (ulong)*(ushort *)(lVar10 + (lVar8 + 3) * 0xc + 4)),local_90,
             (ulong)bVar2 << 2);
    }
    lVar9 = param_5[2];
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x20))(param_5);
    local_90[0] = CONCAT44(local_90[0]._4_4_,0x3f800000);
    lVar10 = *(long *)param_5[1];
    uVar4 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar10 + (lVar8 + 4) * 0xc + 8) * 4];
    (**(code **)(*param_5 + 0x18))(param_5);
    if (uVar4 == 0) {
      return;
    }
    __dest = (void *)(lVar9 + (ulong)*(ushort *)(lVar10 + (lVar8 + 4) * 0xc + 4));
  }
  else {
    if (fVar13 - fVar17 == 0.0) {
      fVar14 = 1.0;
    }
    else {
      fVar14 = 1.0 / (fVar13 - fVar17);
    }
    lVar8 = param_5[2];
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x20))(param_5);
    lVar9 = *(long *)param_5[1];
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar9 + (long)param_6 * 0xc + 8) * 4];
    (**(code **)(*param_5 + 0x18))(param_5);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar8 + (ulong)*(ushort *)(lVar9 + (long)param_6 * 0xc + 4)),&local_70,
             (ulong)bVar2 << 2);
    }
    lVar8 = (long)param_6;
    lVar9 = param_5[2];
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x20))(param_5);
    lVar10 = *(long *)param_5[1];
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar10 + (lVar8 + 1) * 0xc + 8) * 4];
    (**(code **)(*param_5 + 0x18))(param_5);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar9 + (ulong)*(ushort *)(lVar10 + (lVar8 + 1) * 0xc + 4)),&local_80,
             (ulong)bVar2 << 2);
    }
    lVar9 = param_5[2];
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x20))(param_5);
    local_90[0] = CONCAT44(local_90[0]._4_4_,-(fVar17 * fVar14));
    lVar10 = *(long *)param_5[1];
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar10 + (lVar8 + 2) * 0xc + 8) * 4];
    (**(code **)(*param_5 + 0x18))(param_5);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar9 + (ulong)*(ushort *)(lVar10 + (lVar8 + 2) * 0xc + 4)),local_90,
             (ulong)bVar2 << 2);
    }
    lVar9 = param_5[2];
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x20))(param_5);
    local_90[0] = CONCAT44(local_90[0]._4_4_,fVar14);
    lVar10 = *(long *)param_5[1];
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar10 + (lVar8 + 3) * 0xc + 8) * 4];
    (**(code **)(*param_5 + 0x18))(param_5);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar9 + (ulong)*(ushort *)(lVar10 + (lVar8 + 3) * 0xc + 4)),local_90,
             (ulong)bVar2 << 2);
    }
    lVar9 = param_5[2];
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x20))(param_5);
    local_90[0] = CONCAT44(local_90[0]._4_4_,fVar19);
    lVar10 = *(long *)param_5[1];
    uVar4 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar10 + (lVar8 + 4) * 0xc + 8) * 4];
    (**(code **)(*param_5 + 0x18))(param_5);
    if (uVar4 == 0) {
      return;
    }
    __dest = (void *)(lVar9 + (ulong)*(ushort *)(lVar10 + (lVar8 + 4) * 0xc + 4));
  }
  memcpy(__dest,local_90,uVar4 << 2);
  return;
}

