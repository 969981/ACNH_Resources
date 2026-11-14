
void FUN_0183bb88(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  lVar7 = *(long *)(param_1 + 0x3d0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x2d8) + 0x28))(lVar7 + 0x2d8);
    plVar2 = DAT_0537d558;
    uVar4 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if ((uVar4 & 1) != 0) {
      bVar1 = *(byte *)(*DAT_0537d558 + 0x473);
      if ((long)(char)bVar1 != 0xffffffffffffffff) {
        lVar7 = plVar2[2] + 0x108 + ((long)(char)bVar1 & 0xffffffffU) * 0xc;
        if (0xb < bVar1) {
          lVar7 = plVar2[2] + 0x108;
        }
        if (*(char *)(lVar7 + 10) == '\0') {
          return;
        }
      }
    }
  }
  pfVar5 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x98) + 0xf0))();
  fVar10 = *pfVar5;
  pfVar5 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x1e0) + 0xf0))
                              (*(long *)(param_1 + 0x4f8) + 0x1e0);
  fVar8 = *pfVar5;
  pfVar5 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 200) + 0xf0))();
  fVar11 = *pfVar5;
  auVar12 = (**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x1e0) + 0xf0))
                      (*(long *)(param_1 + 0x4f8) + 0x1e0);
  uVar6 = auVar12._8_8_;
  fVar9 = *auVar12._0_8_;
  lVar7 = *(long *)(param_1 + 0x3d8);
  if (lVar7 != 0) {
    FUN_006f0400(*(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(lVar7 + 0x2cc),
                 *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(lVar7 + 0x2d4));
    uVar6 = extraout_x1;
  }
  uVar4 = FUN_0187afc0(fVar10 * fVar8,fVar11 * fVar9,param_1,uVar6,0);
  if ((uVar4 & 1) == 0) {
    if (*(char *)(param_1 + 0x4d8) != '\0') {
      *(undefined4 *)(param_1 + 0x4d4) = 0x2aab0000;
      lVar7 = *(long *)(param_1 + 0x3d0);
      if ((lVar7 != 0) &&
         ((**(code **)(*(long *)(lVar7 + 0x2d8) + 0x28))(lVar7 + 0x2d8),
         1 < *(byte *)(*DAT_0537d558 + 0x476))) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x2d8) + 0x28))
                  (*(long *)(param_1 + 0x3d0) + 0x2d8);
        plVar2 = DAT_0537d558;
        uVar4 = FUN_01d3e29c(*DAT_0537d558 + 8);
        if ((uVar4 & 1) != 0) {
          bVar1 = *(byte *)(*DAT_0537d558 + 0x473);
          if ((long)(char)bVar1 != 0xffffffffffffffff) {
            lVar7 = plVar2[2] + 0x108 + ((long)(char)bVar1 & 0xffffffffU) * 0xc;
            if (0xb < bVar1) {
              lVar7 = plVar2[2] + 0x108;
            }
            if (*(char *)(lVar7 + 10) == '\0') {
              return;
            }
          }
        }
        FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
        uVar3 = FUN_006f0400(*(float *)(param_1 + 0x328) -
                             *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                             *(float *)(param_1 + 0x330) -
                             *(float *)(*(long *)(param_1 + 0x300) + 0x280));
        *(undefined4 *)(param_1 + 0x4c8) = uVar3;
        fVar8 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
        fVar9 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
        *(float *)(param_1 + 0x4d0) = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
      }
    }
  }
  else if (*(int *)(param_1 + 0x280) != 1) {
    FUN_03ebb160(param_1 + 0x278);
    return;
  }
  return;
}

