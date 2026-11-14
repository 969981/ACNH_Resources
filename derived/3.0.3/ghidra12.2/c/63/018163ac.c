
void FUN_018163ac(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  short sVar5;
  bool bVar6;
  float *pfVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  
  sVar5 = *(short *)(param_1 + 0x40a) + -1;
  *(short *)(param_1 + 0x40a) = sVar5;
  if (sVar5 < 1) {
    *(undefined4 *)(param_1 + 0x308) = 0;
    if ((*(char *)(param_1 + 0x432) == '\0') && (lVar9 = *(long *)(param_1 + 0x3d0), lVar9 != 0)) {
      (**(code **)(*(long *)(lVar9 + 0x2d8) + 0x28))(lVar9 + 0x2d8);
      bVar4 = *(byte *)(*DAT_0537d558 + 0x473);
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
        uVar10 = (long)(char)bVar4 & 0xffffffff;
        pbVar3 = pbVar1 + uVar10 * 0x80;
        if (7 < bVar4) {
          pbVar3 = pbVar1;
        }
        if ((*pbVar3 >> 3 & 1) != 0) {
          lVar9 = DAT_0537d558[2] + 0x108 + uVar10 * 0xc;
          if (0xb < bVar4) {
            lVar9 = DAT_0537d558[2] + 0x108;
          }
          if (*(char *)(lVar9 + 10) == '\0') {
            if (*(long *)(param_1 + 0x3d0) == 0) {
              return;
            }
            FUN_01947900();
            return;
          }
        }
      }
    }
    if (*(long *)(param_1 + 0x3d0) == 0) {
      return;
    }
    FUN_006fb3d0();
    return;
  }
  lVar9 = *(long *)(param_1 + 0x460);
  if (lVar9 == 0) {
    uVar12 = 0;
LAB_01816460:
    uVar10 = 0;
  }
  else {
    pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x120) + 0xf0))(lVar9 + 0x120);
    lVar9 = *(long *)(param_1 + 0x460);
    uVar12 = (uint)(long)(*pfVar7 * 11930465.0);
    if (lVar9 == 0) goto LAB_01816460;
    pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x150) + 0xf0))(lVar9 + 0x150);
    uVar10 = (long)(*pfVar7 * 11930465.0) & 0xffffffff;
  }
  uVar8 = *(uint *)(param_1 + 0x31c);
  if (uVar8 == uVar12) {
    lVar11 = 0;
  }
  else {
    uVar2 = uVar8 - uVar12;
    if (uVar8 < uVar12 || uVar8 - uVar12 == 0) {
      uVar2 = uVar12 - uVar8;
    }
    if (uVar2 < 0x80000001) {
      lVar9 = -1;
    }
    else {
      lVar9 = 1;
    }
    lVar11 = -lVar9;
    if (uVar12 < uVar8) {
      lVar11 = lVar9;
    }
  }
  lVar11 = lVar11 * uVar10;
  uVar2 = uVar8 + (int)lVar11;
  if (lVar11 < 1) {
    if (-1 < lVar11) goto LAB_01816500;
    if (uVar2 < uVar8) {
      if (uVar8 < uVar12) goto LAB_018164f4;
    }
    else {
      bVar6 = uVar12 <= uVar8;
      uVar8 = uVar12;
      if (bVar6) goto LAB_018164f8;
    }
    uVar8 = uVar12;
    if (uVar12 < uVar2) goto LAB_018164f4;
  }
  else {
    if (uVar8 < uVar2) {
      if (uVar12 < uVar8) goto LAB_018164f4;
    }
    else {
      bVar6 = uVar8 <= uVar12;
      uVar8 = uVar12;
      if (bVar6) goto LAB_018164f8;
    }
    uVar8 = uVar12;
    if (uVar2 < uVar12) {
LAB_018164f4:
      uVar8 = uVar2;
    }
  }
LAB_018164f8:
  *(uint *)(param_1 + 0x31c) = uVar8;
LAB_01816500:
  *(uint *)(param_1 + 0x34c) = -uVar8;
  return;
}

