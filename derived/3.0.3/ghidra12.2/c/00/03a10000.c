
void FUN_03a10000(long param_1,undefined8 param_2,uint param_3,float *param_4,float *param_5,
                 ulong param_6)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  
  puVar7 = PTR_DAT_04bbd510;
  if (*(ushort *)(param_1 + 0x5ba) < 10 &&
      (1 << (ulong)(*(ushort *)(param_1 + 0x5ba) & 0x1f) & 0x350U) != 0) {
    uVar9 = *(ushort *)(param_1 + 0x5b4);
    uVar10 = uVar9;
  }
  else {
    uVar9 = *(ushort *)(param_1 + 0x5b4);
    uVar10 = 1;
  }
  if (uVar10 <= uVar9) {
    uVar10 = uVar9;
  }
  if (*(char *)(param_1 + 0xb99) != '\0') {
    uVar4 = *(undefined1 *)(param_1 + 0x5b9);
    if (*(long *)(param_1 + 0x1d8) != 0) {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
      *(undefined8 *)(param_1 + 0x1d8) = 0;
    }
    if (*(long *)(param_1 + 0x2c0) != 0) {
      FUN_039499cc(*(undefined8 *)puVar7);
      *(undefined8 *)(param_1 + 0x2c0) = 0;
    }
    if (*(long *)(param_1 + 0x3a8) != 0) {
      FUN_039499cc(*(undefined8 *)puVar7);
      *(undefined8 *)(param_1 + 0x3a8) = 0;
    }
    if (*(long *)(param_1 + 0x490) != 0) {
      FUN_039499cc(*(undefined8 *)puVar7);
      *(undefined8 *)(param_1 + 0x490) = 0;
    }
    FUN_03a0fcd0(param_1,param_2,uVar10,uVar4);
    *(undefined1 *)(param_1 + 0xb99) = 0;
  }
  if (*(ushort *)(param_1 + 0x634) != param_3) {
    puVar1 = (uint *)(param_1 + 0x630);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(short *)(param_1 + 0x634) = (short)param_3;
  }
  uVar11 = *(uint *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  lVar2 = param_1 + 0x658;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  fVar17 = (float)(int)uVar11;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  uVar3 = *(uint *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0x678) = 0;
  *(long *)(param_1 + 0x6b8) = param_1 + 0x578;
  fVar18 = (float)(int)uVar3;
  *(float *)(param_1 + 0x660) = fVar17;
  *(float *)(param_1 + 0x668) = (float)(int)(uVar11 & (int)uVar11 >> 0x1f);
  *(float *)(param_1 + 0x670) = (float)(int)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU));
  *(float *)(param_1 + 0x664) = fVar18;
  *(float *)(param_1 + 0x66c) = (float)(int)(uVar3 & (int)uVar3 >> 0x1f);
  *(float *)(param_1 + 0x674) = (float)(int)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  (**(code **)(*(long *)(param_1 + 0x658) + 0x38))(lVar2,param_2);
  puVar8 = PTR_DAT_04bd0f08;
  puVar7 = PTR_DAT_04bd0ea8;
  local_90 = 0x7f7fffff7f7fffff;
  local_88 = 0xff7fffffff7fffff;
  local_98 = PTR_DAT_04bd0f08 + 0x10;
  local_7c = 0x3f80000000000000;
  local_80 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_80 < 6) {
    if ((1 << (ulong)(local_80 & 0x1f) & 0x39U) == 0) {
      fVar12 = *(float *)(param_1 + 0x664);
      fVar13 = *(float *)(param_1 + 0x660);
    }
    else {
      fVar12 = *(float *)(param_1 + 0x660);
      fVar13 = *(float *)(param_1 + 0x664);
    }
    fVar14 = fVar12;
    fVar15 = 0.0;
    if (fVar12 <= 0.0) {
      fVar14 = 0.0;
      fVar15 = fVar12;
    }
    fVar16 = fVar13;
    fVar12 = 0.0;
    if (fVar13 <= 0.0) {
      fVar16 = 0.0;
      fVar12 = fVar13;
    }
    local_90 = CONCAT44(fVar12,fVar15);
    local_88 = CONCAT44(fVar16,fVar14);
  }
  FUN_038e77e4(&local_98,param_2,lVar2);
  if ((param_6 & 1) != 0) {
    local_7c = 0x3f80000000000000;
    local_a8 = &DAT_3f8000003f800000;
    puStack_a0 = &DAT_3f8000003f800000;
    local_90 = 0x7f7fffff7f7fffff;
    local_88 = 0xff7fffffff7fffff;
    local_98 = puVar8 + 0x10;
    local_80 = *(uint *)puVar7;
    if (local_80 < 6) {
      if ((1 << (ulong)(local_80 & 0x1f) & 0x39U) == 0) {
        fVar12 = *(float *)(param_1 + 0x664);
        fVar13 = *(float *)(param_1 + 0x660);
      }
      else {
        fVar12 = *(float *)(param_1 + 0x660);
        fVar13 = *(float *)(param_1 + 0x664);
      }
      fVar14 = fVar12;
      fVar15 = 0.0;
      if (fVar12 <= 0.0) {
        fVar14 = 0.0;
        fVar15 = fVar12;
      }
      fVar16 = fVar13;
      fVar12 = 0.0;
      if (fVar13 <= 0.0) {
        fVar16 = 0.0;
        fVar12 = fVar13;
      }
      local_90 = CONCAT44(fVar12,fVar15);
      local_88 = CONCAT44(fVar16,fVar14);
    }
    FUN_039025b0(0x3f800000,lVar2,param_2,0,2,&local_a8,0,&local_98,1);
  }
  if (*(char *)(param_1 + 0x128) != '\0') {
    fVar12 = *(float *)(param_1 + 0x1c8);
    fVar13 = fVar17 * *param_4 - fVar12;
    fVar15 = fVar18 * param_4[1] - fVar12;
    uVar11 = 0;
    if (fVar13 != (float)(int)fVar13) {
      uVar11 = (uint)(fVar13 < 0.0);
    }
    fVar14 = 0.0;
    if (0.0 <= (float)(int)((int)fVar13 - uVar11)) {
      fVar14 = (float)(int)((int)fVar13 - uVar11);
    }
    uVar11 = 0;
    if (fVar15 != (float)(int)fVar15) {
      uVar11 = (uint)(fVar15 < 0.0);
    }
    fVar16 = fVar12 + fVar12 + *param_5 * fVar17;
    fVar13 = fVar12 + fVar12 + param_5[1] * fVar18;
    fVar12 = 0.0;
    if (0.0 <= (float)(int)((int)fVar15 - uVar11)) {
      fVar12 = (float)(int)((int)fVar15 - uVar11);
    }
    uVar11 = 0;
    if (fVar16 != (float)(int)fVar16) {
      uVar11 = (uint)(0.0 <= fVar16);
    }
    if ((float)(int)(uVar11 + (int)fVar16) <= fVar17) {
      fVar17 = (float)(int)(uVar11 + (int)fVar16);
    }
    fVar17 = fVar14 + fVar17;
    uVar11 = 0;
    if (fVar13 != (float)(int)fVar13) {
      uVar11 = (uint)(0.0 <= fVar13);
    }
    local_98 = puVar8 + 0x10;
    local_80 = *(uint *)puVar7;
    local_7c = 0x3f80000000000000;
    if ((float)(int)(uVar11 + (int)fVar13) <= fVar18) {
      fVar18 = (float)(int)(uVar11 + (int)fVar13);
    }
    fVar18 = fVar12 + fVar18;
    fVar13 = fVar17;
    if (fVar17 <= fVar14) {
      fVar13 = fVar14;
      fVar14 = fVar17;
    }
    fVar17 = fVar18;
    if (fVar18 <= fVar12) {
      fVar17 = fVar12;
      fVar12 = fVar18;
    }
    local_90 = CONCAT44(fVar12,fVar14);
    local_88 = CONCAT44(fVar17,fVar13);
    FUN_038e7c94(&local_98,param_2,lVar2);
  }
  return;
}

