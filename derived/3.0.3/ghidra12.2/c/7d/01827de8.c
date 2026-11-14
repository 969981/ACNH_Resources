
void FUN_01827de8(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar3 = *(int *)(param_1 + 0x3a8);
  if ((iVar3 == 0x276) &&
     (((lVar6 = *(long *)(param_1 + 0x3d0), *(long *)(param_1 + 0x3d8) == 0 ||
       (lVar7 = *(long *)(lVar6 + 0x300), lVar7 == 0)) ||
      (*(float *)(lVar7 + 0x2b0) <= *(float *)(lVar7 + 0x2b8))))) {
    lVar7 = *(long *)(lVar6 + 0x300);
    if (lVar7 == 0) {
      fVar9 = NAN;
    }
    else {
      fVar9 = *(float *)(lVar7 + 0x2b0) / *(float *)(lVar7 + 0x2b4);
    }
    fVar9 = 1.0 - fVar9;
    fVar11 = 1.0;
    if (fVar9 <= 1.0) {
      fVar11 = fVar9;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar9) {
      fVar10 = fVar11;
    }
    *(float *)(param_1 + 0x4f0) = fVar10;
    FUN_0384ff0c((1.0 - fVar10) * 100.0,*(undefined8 *)(*(long *)(lVar6 + 0x60) + 0x1138),1);
  }
  lVar6 = *(long *)(param_1 + 0x3d0);
  if (lVar6 == 0) {
LAB_01827f1c:
    uVar8 = FUN_018294a0(param_1);
    if ((uVar8 & 1) == 0) {
      iVar5 = (**(code **)(*(long *)(param_1 + 0x4d8) + (ulong)*(byte *)(param_1 + 0x4ec) * 8))
                        (param_1 + 0x4d8);
      *(int *)(param_1 + 0x4e0) = iVar5;
      if ((iVar5 != *(int *)(param_1 + 0x4e8)) &&
         (((*(long *)(param_1 + 0x3d0) == 0 ||
           (lVar6 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x300), lVar6 == 0)) ||
          (*(float *)(lVar6 + 0x2b0) <= *(float *)(lVar6 + 0x2b4))))) {
        if (iVar3 != 0x276) {
          return;
        }
        if (1.0 <= *(float *)(param_1 + 0x4f0)) {
          return;
        }
      }
      if (*(int *)(param_1 + 0x280) == 6) {
        return;
      }
      goto LAB_01827fe4;
    }
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x2d8) + 0x28))(lVar6 + 0x2d8);
    bVar4 = *(byte *)(*DAT_0537d558 + 0x473);
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
      uVar8 = (long)(char)bVar4 & 0xffffffff;
      pbVar2 = pbVar1 + uVar8 * 0x80;
      if (7 < bVar4) {
        pbVar2 = pbVar1;
      }
      if ((*pbVar2 >> 3 & 1) != 0) {
        lVar6 = DAT_0537d558[2] + 0x108 + uVar8 * 0xc;
        if (0xb < bVar4) {
          lVar6 = DAT_0537d558[2] + 0x108;
        }
        if (*(char *)(lVar6 + 10) == '\0') {
          return;
        }
      }
    }
    if (((*(long *)(param_1 + 0x3d0) == 0) ||
        (lVar6 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x300), lVar6 == 0)) ||
       (*(float *)(lVar6 + 0x2b0) <= *(float *)(lVar6 + 0x2b8))) goto LAB_01827f1c;
  }
  if (iVar3 == 0x276) {
    iVar3 = 7;
  }
  else {
    iVar3 = 0;
  }
  if (*(int *)(param_1 + 0x280) == iVar3) {
    return;
  }
LAB_01827fe4:
  FUN_03ebb160(param_1 + 0x278);
  return;
}

