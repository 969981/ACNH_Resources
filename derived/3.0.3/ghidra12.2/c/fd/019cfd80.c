
void FUN_019cfd80(float param_1,byte *param_2,float *param_3)

{
  undefined *puVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 uVar6;
  byte *pbVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  byte local_6c [12];
  
  *param_2 = *param_2 & 0xfb;
  FUN_02507c6c(local_6c,7,1,1,0);
  puVar1 = PTR_DAT_04bb5038;
  bVar5 = 0;
  if (local_6c[0] < 8) {
    fVar10 = 3.4028235e+38;
    bVar8 = false;
    do {
      pfVar2 = (float *)FUN_0251b3b0(local_6c,0);
      if (pfVar2 != (float *)0x0) {
        fVar9 = param_1;
        if (fVar10 <= param_1) {
          fVar9 = fVar10;
        }
        if (SQRT((param_3[2] - pfVar2[2]) * (param_3[2] - pfVar2[2]) +
                 (*param_3 - *pfVar2) * (*param_3 - *pfVar2)) <= fVar9) {
          uVar3 = FUN_0254e430(local_6c);
          if ((uVar3 & 1) == 0) {
            fVar9 = (float)FUN_0251bf88(local_6c,0);
            if (fVar9 <= 0.0) goto LAB_019cfe8c;
          }
          bVar8 = true;
          *param_2 = *param_2 | 4;
          uVar6 = *(undefined8 *)pfVar2;
          *(float *)(param_2 + 0xc) = pfVar2[2];
          *(undefined8 *)(param_2 + 4) = uVar6;
          fVar10 = param_1;
        }
      }
LAB_019cfe8c:
      bVar5 = local_6c[0];
      uVar3 = (ulong)local_6c[0];
      if ((7 < local_6c[0]) || (uVar3 + 1 == 8)) break;
      pbVar7 = puVar1 + uVar3 + 1;
      uVar4 = FUN_02507924(local_6c,pbVar7);
      if ((uVar4 & 1) == 0) {
        if (uVar3 + 2 == 8) break;
        pbVar7 = puVar1 + uVar3 + 2;
        uVar4 = FUN_02507924(local_6c,pbVar7);
        if ((uVar4 & 1) == 0) {
          if (uVar3 + 3 == 8) break;
          pbVar7 = puVar1 + uVar3 + 3;
          uVar4 = FUN_02507924(local_6c,pbVar7);
          if ((uVar4 & 1) == 0) {
            if (uVar3 + 4 == 8) break;
            pbVar7 = puVar1 + uVar3 + 4;
            uVar4 = FUN_02507924(local_6c,pbVar7);
            if ((uVar4 & 1) == 0) {
              if (uVar3 + 5 == 8) break;
              pbVar7 = puVar1 + uVar3 + 5;
              uVar4 = FUN_02507924(local_6c,pbVar7);
              if ((uVar4 & 1) == 0) {
                if (uVar3 + 6 == 8) break;
                pbVar7 = puVar1 + uVar3 + 6;
                uVar4 = FUN_02507924(local_6c,pbVar7);
                if ((uVar4 & 1) == 0) {
                  if (uVar3 + 7 == 8) break;
                  pbVar7 = puVar1 + uVar3 + 7;
                  uVar4 = FUN_02507924(local_6c,pbVar7);
                  if ((uVar4 & 1) == 0) {
                    if (bVar5 == 0) break;
                    pbVar7 = puVar1 + uVar3 + 8;
                    FUN_02507924(local_6c,pbVar7);
                  }
                }
              }
            }
          }
        }
      }
      local_6c[0] = *pbVar7;
    } while (local_6c[0] < 8);
    if (bVar8) {
      bVar5 = (*param_2 & 0xfc | (*param_2 & 1) << 1) ^ 3;
    }
    else {
      bVar5 = 0;
    }
  }
  *param_2 = bVar5;
  return;
}

