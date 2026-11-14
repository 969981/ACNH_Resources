
void FUN_01881560(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  float *pfVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte local_6c [12];
  
  lVar6 = *(long *)(param_1 + 0x4b8);
  lVar10 = *(long *)(param_1 + 0x3d0);
  FUN_02507c6c(local_6c,7,1,1,0);
  puVar1 = PTR_DAT_04bb5038;
  if (7 < local_6c[0]) {
    pfVar8 = (float *)0x0;
LAB_018815b8:
    uVar5 = *(undefined8 *)(lVar10 + 0x160);
    pfVar9 = (float *)(param_1 + 0x334);
    *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(lVar10 + 0x168);
    *(undefined8 *)pfVar9 = uVar5;
    pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x128) + 0xf0))(lVar6 + 0x128);
    *(float *)(param_1 + 0x33c) = *pfVar3 + *(float *)(param_1 + 0x33c);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x158) + 0xf0))(lVar6 + 0x158);
    *(float *)(param_1 + 0x338) = *pfVar3 + *(float *)(param_1 + 0x338);
    if ((pfVar8 == (float *)0x0) || (*pfVar8 <= *(float *)(lVar10 + 0x160))) {
      pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0xf8) + 0xf0))((long *)(lVar6 + 0xf8));
      fVar12 = *pfVar8 + *pfVar9;
    }
    else {
      pfVar8 = (float *)(**(code **)(*(long *)(lVar6 + 0xf8) + 0xf0))((long *)(lVar6 + 0xf8));
      fVar12 = *pfVar9 - *pfVar8;
    }
    *pfVar9 = fVar12;
    return;
  }
  fVar12 = 3.4028235e+38;
  pfVar9 = (float *)0x0;
  do {
    pfVar3 = (float *)FUN_0251b3b0(local_6c,0);
    bVar2 = local_6c[0];
    pfVar8 = pfVar9;
    if (pfVar3 != (float *)0x0) {
      fVar13 = *pfVar3 - *(float *)(lVar10 + 0x160);
      fVar14 = pfVar3[2] - *(float *)(lVar10 + 0x168);
      fVar13 = fVar14 * fVar14 + fVar13 * fVar13;
      pfVar8 = pfVar3;
      if (fVar12 <= fVar13) {
        pfVar8 = pfVar9;
        fVar13 = fVar12;
      }
      fVar12 = fVar13;
    }
    uVar11 = (ulong)local_6c[0];
    if ((7 < local_6c[0]) || (uVar11 + 1 == 8)) goto LAB_018815b8;
    pbVar7 = puVar1 + uVar11 + 1;
    uVar4 = FUN_02507924(local_6c,pbVar7);
    if ((uVar4 & 1) == 0) {
      if (uVar11 + 2 == 8) goto LAB_018815b8;
      pbVar7 = puVar1 + uVar11 + 2;
      uVar4 = FUN_02507924(local_6c,pbVar7);
      if ((uVar4 & 1) == 0) {
        if (uVar11 + 3 == 8) goto LAB_018815b8;
        pbVar7 = puVar1 + uVar11 + 3;
        uVar4 = FUN_02507924(local_6c,pbVar7);
        if ((uVar4 & 1) == 0) {
          if (uVar11 + 4 == 8) goto LAB_018815b8;
          pbVar7 = puVar1 + uVar11 + 4;
          uVar4 = FUN_02507924(local_6c,pbVar7);
          if ((uVar4 & 1) == 0) {
            if (uVar11 + 5 == 8) goto LAB_018815b8;
            pbVar7 = puVar1 + uVar11 + 5;
            uVar4 = FUN_02507924(local_6c,pbVar7);
            if ((uVar4 & 1) == 0) {
              if (uVar11 + 6 == 8) goto LAB_018815b8;
              pbVar7 = puVar1 + uVar11 + 6;
              uVar4 = FUN_02507924(local_6c,pbVar7);
              if ((uVar4 & 1) == 0) {
                if (uVar11 + 7 == 8) goto LAB_018815b8;
                pbVar7 = puVar1 + uVar11 + 7;
                uVar4 = FUN_02507924(local_6c,pbVar7);
                if ((uVar4 & 1) == 0) {
                  if (bVar2 == 0) goto LAB_018815b8;
                  pbVar7 = puVar1 + uVar11 + 8;
                  FUN_02507924(local_6c,pbVar7);
                }
              }
            }
          }
        }
      }
    }
    if (7 < *pbVar7) goto LAB_018815b8;
    pfVar9 = pfVar8;
    local_6c[0] = *pbVar7;
  } while( true );
}

