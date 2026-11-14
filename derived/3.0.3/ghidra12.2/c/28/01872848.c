
void FUN_01872848(long param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  
  *(undefined4 *)(param_1 + 0x308) = 0;
  lVar7 = *(long *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x40c) = 0;
  puVar5 = PTR_DAT_04bb27d0;
  if (lVar7 == 0) {
    *(byte *)(param_1 + 0x3e0) = *(byte *)(param_1 + 0x3e0) & 0xfd;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x90);
    if (lVar8 == 0) {
      *(byte *)(param_1 + 0x3e0) = *(byte *)(param_1 + 0x3e0) & 0xfd;
    }
    else {
      *(uint *)(lVar8 + 0x178) = *(uint *)(lVar8 + 0x178) | 1;
      lVar7 = *(long *)(param_1 + 0x3d0);
      *(byte *)(param_1 + 0x3e0) = *(byte *)(param_1 + 0x3e0) & 0xfd;
      if (lVar7 == 0) goto LAB_018728ec;
    }
    (**(code **)(*(long *)(lVar7 + 0x2d8) + 0x28))(lVar7 + 0x2d8);
    plVar9 = *(long **)puVar5;
    uVar6 = FUN_01d3e29c(*plVar9 + 8);
    if (((uVar6 & 1) != 0) && (uVar6 = FUN_01d692e8(plVar9[2]), (uVar6 & 1) == 0))
    goto LAB_018729e4;
  }
LAB_018728ec:
  lVar7 = *(long *)(param_1 + 0x3d0);
  if (lVar7 == 0) {
LAB_01872924:
    uVar3 = *(uint *)(param_1 + 1000);
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x3ec);
    uVar3 = uVar3 ^ uVar3 << 0xb;
    *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x3f0);
    uVar4 = *(uint *)(param_1 + 0x3f4);
    uVar2 = uVar3 ^ uVar4;
    *(uint *)(param_1 + 0x3f0) = uVar4;
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar2;
    *(uint *)(param_1 + 0x3f4) = uVar3;
    fVar10 = (float)(uVar3 & 0xffffff);
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar2 >> 0x18) * 0x10);
    *(float *)(param_1 + 0x328) =
         *(float *)(param_1 + 0x334) + (pfVar1[2] + pfVar1[3] * fVar10 * 5.9604645e-08) * 10.0;
    *(float *)(param_1 + 0x330) =
         *(float *)(param_1 + 0x33c) + (*pfVar1 + pfVar1[1] * fVar10 * 5.9604645e-08) * 10.0;
    FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  }
  else {
    (**(code **)(*(long *)(lVar7 + 0x2d8) + 0x28))(lVar7 + 0x2d8);
    plVar9 = *(long **)puVar5;
    uVar6 = FUN_01d3e29c(*plVar9 + 8);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_01d692e8(plVar9[2]), (uVar6 & 1) != 0))
    goto LAB_01872924;
  }
  *(undefined1 *)(param_1 + 0x514) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x510) = 0x5a;
  *(undefined1 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0x1e;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
LAB_018729e4:
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  return;
}

