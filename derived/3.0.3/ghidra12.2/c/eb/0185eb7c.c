
void FUN_0185eb7c(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  float *pfVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  lVar6 = *(long *)(param_1 + 0x3d0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x2d8) + 0x28))(lVar6 + 0x2d8);
    plVar1 = DAT_0537d558;
    uVar3 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_01d692e8(plVar1[2]), (uVar3 & 1) == 0)) {
      return;
    }
  }
  pfVar4 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0xf8) + 0xf0))();
  fVar9 = *pfVar4;
  pfVar4 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x60) + 0xf0))();
  fVar7 = *pfVar4;
  pfVar4 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x128) + 0xf0))
                              (*(long *)(param_1 + 0x500) + 0x128);
  fVar10 = *pfVar4;
  auVar11 = (**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x60) + 0xf0))();
  uVar5 = auVar11._8_8_;
  fVar8 = *auVar11._0_8_;
  lVar6 = *(long *)(param_1 + 0x3d8);
  if (lVar6 != 0) {
    FUN_006f0400(*(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(lVar6 + 0x2cc),
                 *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(lVar6 + 0x2d4));
    uVar5 = extraout_x1;
  }
  uVar3 = FUN_0187afc0(fVar9 * fVar7,fVar10 * fVar8,param_1,uVar5,0);
  if (((uVar3 & 1) == 0) && (*(char *)(param_1 + 0x4d8) != '\0')) {
    *(undefined4 *)(param_1 + 0x4d4) = 0x20000000;
    lVar6 = *(long *)(param_1 + 0x3d0);
    if ((lVar6 != 0) &&
       ((**(code **)(*(long *)(lVar6 + 0x2d8) + 0x28))(lVar6 + 0x2d8),
       1 < *(byte *)(*DAT_0537d558 + 0x476))) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x2d8) + 0x28))
                (*(long *)(param_1 + 0x3d0) + 0x2d8);
      plVar1 = DAT_0537d558;
      uVar3 = FUN_01d3e29c(*DAT_0537d558 + 8);
      if (((uVar3 & 1) == 0) || (uVar3 = FUN_01d692e8(plVar1[2]), (uVar3 & 1) != 0)) {
        FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
        uVar2 = FUN_006f0400(*(float *)(param_1 + 0x328) -
                             *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                             *(float *)(param_1 + 0x330) -
                             *(float *)(*(long *)(param_1 + 0x300) + 0x280));
        *(undefined4 *)(param_1 + 0x4c8) = uVar2;
        fVar7 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
        fVar8 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
        *(float *)(param_1 + 0x4d0) = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
      }
    }
  }
  return;
}

