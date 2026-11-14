
void FUN_0183e1c8(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined1 uVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  
  lVar11 = *(long *)(param_1 + 0x3d0);
  *(undefined1 *)(param_1 + 0x52c) = 0;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x2d8) + 0x28))(lVar11 + 0x2d8);
    bVar5 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
      uVar12 = (long)(char)bVar5 & 0xffffffff;
      pbVar2 = pbVar1 + uVar12 * 0x80;
      if (7 < bVar5) {
        pbVar2 = pbVar1;
      }
      if ((*pbVar2 >> 3 & 1) != 0) {
        lVar11 = DAT_0537d558[2] + 0x108 + uVar12 * 0xc;
        if (0xb < bVar5) {
          lVar11 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar11 + 10) == '\0') goto LAB_0183e428;
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 1000);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x3ec);
  uVar3 = uVar3 ^ uVar3 << 0xb;
  lVar11 = *(long *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x3f0);
  uVar4 = *(uint *)(param_1 + 0x3f4);
  *(uint *)(param_1 + 0x3f0) = uVar4;
  uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
  *(uint *)(param_1 + 0x3f4) = uVar3;
  pfVar6 = (float *)(**(code **)(*(long *)(lVar11 + 0x338) + 0xf0))(lVar11 + 0x338);
  *(bool *)(param_1 + 0x52c) = (float)(uVar3 >> 9 | 0x3f800000) + -1.0 < *pfVar6;
  fVar14 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x520);
  fVar15 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x528);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar11 + 0x98) + 0xf0))((long *)(lVar11 + 0x98));
  if (*pfVar6 <= SQRT(fVar15 * fVar15 + fVar14 * fVar14)) {
    if (*(char *)(param_1 + 0x52c) == '\0') goto LAB_0183e324;
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x528);
    *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x520);
LAB_0183e368:
    lVar11 = *(long *)(param_1 + 0x4c8);
    fVar14 = (float)FUN_015cb8d4(param_1 + 0x328,0);
    pfVar6 = (float *)(**(code **)(*(long *)(lVar11 + 0x1b8) + 0xf0))(lVar11 + 0x1b8);
    uVar9 = 0;
    *(float *)(param_1 + 0x32c) = fVar14 + *pfVar6;
  }
  else {
    *(undefined1 *)(param_1 + 0x52c) = 0;
LAB_0183e324:
    lVar11 = *(long *)(param_1 + 0x4c8);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x98) + 0xf0))();
    plVar13 = (long *)(lVar11 + 200);
    uVar16 = *puVar7;
    puVar7 = (undefined4 *)(**(code **)(*plVar13 + 0xf0))(plVar13);
    uVar12 = FUN_0187e11c(uVar16,*puVar7,DAT_0529def8,param_1);
    if ((uVar12 & 1) != 0) goto LAB_0183e368;
    uVar9 = 1;
  }
  *(undefined1 *)(param_1 + 0x4a6) = uVar9;
  if (*(char *)(param_1 + 0x534) == '\0') {
    puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar3 = *puVar8 ^ *puVar8 << 0xb;
    uVar4 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar8[2] = uVar4;
    puVar8[3] = uVar3;
    bVar10 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0 < 0.3;
  }
  else {
    bVar10 = false;
  }
  *(bool *)(param_1 + 0x534) = bVar10;
  *(bool *)(param_1 + 0x3fa) = bVar10;
  *(undefined1 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0xf;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
LAB_0183e428:
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  *(undefined4 *)(param_1 + 0x51c) = 1;
  return;
}

