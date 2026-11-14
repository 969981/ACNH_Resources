
uint FUN_01885a9c(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  lVar7 = *(long *)(param_1 + 0x3d0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x2d8) + 0x28))(lVar7 + 0x2d8);
    plVar1 = DAT_0537d558;
    uVar4 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_01d692e8(plVar1[2]), (uVar4 & 1) == 0)) {
      uVar2 = 0;
      goto LAB_01885bd0;
    }
  }
  lVar7 = *(long *)(param_1 + 0x3d8);
  if (lVar7 == 0) {
    bVar6 = false;
    puVar5 = PTR_DAT_04bb2150;
  }
  else {
    if (*(char *)(lVar7 + 0x2e8) == '\0') {
      bVar6 = *(float *)(lVar7 + 0x2b0) <= 0.0;
    }
    else {
      bVar6 = false;
    }
    *(bool *)(param_1 + 0x4a4) = bVar6;
    fVar8 = SQRT(*(float *)(lVar7 + 0x2c8));
    if (NAN(fVar8)) {
      fVar8 = sqrtf(*(float *)(lVar7 + 0x2c8));
    }
    bVar6 = fVar8 <= *(float *)(lVar7 + 0x298);
    puVar5 = (undefined *)(lVar7 + 0x2cc);
  }
  uVar2 = FUN_018775a0(0x41700000,param_1,puVar5,bVar6);
  uVar3 = FUN_006f0400(*(float *)(param_1 + 0x328) - *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                       *(float *)(param_1 + 0x330) - *(float *)(*(long *)(param_1 + 0x300) + 0x280))
  ;
  lVar7 = *(long *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x4dc) = uVar3;
  fVar8 = *(float *)(lVar7 + 0x278) - *(float *)(param_1 + 0x328);
  fVar9 = *(float *)(lVar7 + 0x280) - *(float *)(param_1 + 0x330);
  *(float *)(param_1 + 0x4e0) = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(lVar7 + 0x27c);
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
LAB_01885bd0:
  return uVar2 & 1;
}

