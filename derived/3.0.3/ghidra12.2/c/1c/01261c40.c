
byte FUN_01261c40(float param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float local_8c [2];
  float local_84;
  
  lVar2 = param_2 + 8;
  uVar3 = *(uint *)(param_3 + 0x10);
  uVar9 = *(uint *)(param_3 + 0x14);
  uVar1 = *(int *)(param_3 + 0x24) + 1;
  if ((param_5 & 1) == 0) {
    bVar10 = 0;
    if (uVar1 != uVar9) {
      uVar8 = uVar3;
      uVar7 = uVar3;
      do {
        bVar5 = false;
        if ((uVar7 < 0x120) && (uVar9 < 0x100)) {
          uVar8 = 1 << (ulong)(uVar7 & 0x1f);
          lVar4 = (ulong)(uVar7 + uVar9 * 0x120 >> 5) * 4;
          *(uint *)(lVar2 + lVar4) = *(uint *)(lVar2 + lVar4) | uVar8;
          bVar5 = (*(uint *)(param_2 + 0x2410 + lVar4) & uVar8) == 0;
          uVar8 = *(uint *)(param_3 + 0x10);
        }
        bVar10 = bVar10 | bVar5;
        if ((int)uVar7 < *(int *)(param_3 + 0x20)) {
          uVar7 = uVar7 + 1;
        }
        else {
          uVar9 = uVar9 + 1;
          uVar7 = uVar8;
        }
      } while (uVar3 != uVar7 || uVar1 != uVar9);
    }
  }
  else if (uVar1 != uVar9) {
    bVar10 = 0;
    uVar8 = uVar3;
    do {
      local_8c[0] = (float)(int)uVar8 * 5.0 + 2.5;
      local_84 = (float)(int)uVar9 * 5.0 + 2.5;
      uVar6 = FUN_016eb1a0(0,local_8c,1);
      if (((uVar6 & 1) == 0) && (uVar6 = FUN_016eb1a0(0,local_8c,0), (uVar6 & 1) == 0)) {
        fVar11 = (float)FUN_016e026c(0,local_8c,0,0);
        fVar11 = fVar11 - param_1;
        fVar12 = -fVar11;
        if (0.0 <= fVar11) {
          fVar12 = fVar11;
        }
        if (fVar12 < 10.0) {
          bVar5 = false;
          if ((uVar8 < 0x120) && (uVar9 < 0x100)) {
            uVar7 = 1 << (ulong)(uVar8 & 0x1f);
            lVar4 = (ulong)(uVar8 + uVar9 * 0x120 >> 5) * 4;
            bVar5 = (*(uint *)(param_2 + 0x2410 + lVar4) & uVar7) == 0;
            *(uint *)(lVar2 + lVar4) = *(uint *)(lVar2 + lVar4) | uVar7;
          }
          bVar10 = bVar10 | bVar5;
        }
      }
      if ((int)uVar8 < *(int *)(param_3 + 0x20)) {
        uVar8 = uVar8 + 1;
      }
      else {
        uVar9 = uVar9 + 1;
        uVar8 = *(uint *)(param_3 + 0x10);
      }
    } while ((uVar3 != uVar8) || (uVar1 != uVar9));
  }
  else {
    bVar10 = 0;
  }
  return bVar10;
}

