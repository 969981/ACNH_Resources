
void FUN_0183b8d4(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  
  puVar5 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x98) + 0xf0))();
  uVar12 = *puVar5;
  puVar5 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 200) + 0xf0))();
  uVar6 = FUN_0187afc0(uVar12,*puVar5,param_1,param_1 + 800,0);
  puVar4 = PTR_DAT_04bb4790;
  if ((uVar6 & 1) == 0) {
    if (*(char *)(param_1 + 0x4d8) != '\0') {
      *(undefined4 *)(param_1 + 0x4d4) = 0x2aab0000;
      lVar8 = *(long *)(*(long *)puVar4 + 0x10);
      if (lVar8 != 0) {
        uVar2 = *(uint *)(*(long *)(param_1 + 0x3d0) + 0x2e0);
        if (*(uint *)(*(long *)puVar4 + 8) <= uVar2) {
          uVar2 = 0;
        }
        pbVar9 = (byte *)(lVar8 + (long)(int)uVar2 * 10);
        bVar3 = *(byte *)(param_1 + 0x280);
        *pbVar9 = *pbVar9 & 0x7f | bVar3 << 7;
        pbVar9[1] = pbVar9[1] & 0xf8 | bVar3 >> 1 & 7;
        uVar2 = (int)*(float *)(param_1 + 0x328) >> 2;
        pbVar9[1] = (byte)(uVar2 << 3) | bVar3 >> 1 & 7;
        pbVar9[2] = pbVar9[2] & 0xe0 | (byte)(uVar2 >> 5) & 0x1f;
        uVar1 = (int)*(float *)(param_1 + 0x330) >> 2;
        pbVar9[2] = (byte)(uVar1 << 5) | (byte)(uVar2 >> 5) & 0x1f;
        pbVar9[3] = pbVar9[3] & 0x80 | (byte)(uVar1 >> 3) & 0x7f;
        lVar8 = *(long *)(param_1 + 0x3d0);
        plVar7 = (long *)(**(code **)(*(long *)(lVar8 + 0x2d8) + 0x20))(lVar8 + 0x2d8);
        (**(code **)(*plVar7 + 0x38))(plVar7,*(undefined4 *)(lVar8 + 0x2e0),0);
      }
      if (*(char *)(param_1 + 0x58c) == '\0') {
        uVar12 = FUN_006f0400(*(float *)(param_1 + 0x328) -
                              *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                              *(float *)(param_1 + 0x330) -
                              *(float *)(*(long *)(param_1 + 0x300) + 0x280));
        *(undefined4 *)(param_1 + 0x4c8) = uVar12;
        fVar10 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
        fVar11 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
        *(float *)(param_1 + 0x4d0) = SQRT(fVar11 * fVar11 + fVar10 * fVar10);
      }
      *(undefined1 *)(param_1 + 0x58c) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x280) != 1) {
    FUN_03ebb160(param_1 + 0x278);
    return;
  }
  return;
}

