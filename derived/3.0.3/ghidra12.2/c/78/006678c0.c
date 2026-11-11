
void FUN_006678c0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *local_1078;
  undefined8 local_1070;
  undefined1 auStack_1068 [4104];
  
  puVar4 = PTR_DAT_048607b8;
  local_1078 = auStack_1068;
  local_1070 = 0x8000100000000000;
  uVar10 = param_1[2];
  if (uVar10 != 0) {
    uVar7 = param_1[1];
    uVar15 = 0;
    uVar14 = uVar7;
    do {
      if (uVar14 != 0) {
        uVar14 = *param_1;
        uVar10 = 0;
        do {
          if (uVar14 != 0) {
            uVar7 = 0;
            do {
              uVar14 = param_1[3] >> (ulong)(uVar7 & 0x1f);
              if (uVar14 < 2) {
                uVar14 = 1;
              }
              iVar5 = FUN_0065b1f0(param_1[6],uVar14);
              if ((int)(local_1070._4_4_ & 0x3fffffff) < iVar5) {
                local_1078 = (undefined1 *)
                             FUN_00426720(puVar4,iVar5,1,local_1078,local_1070 & 0xffffffff,
                                          (long)&local_1070 + 4);
              }
              if ((int)local_1070 != iVar5) {
                local_1070 = CONCAT44(local_1070._4_4_,iVar5);
              }
              uVar8 = param_1[4];
              uVar14 = uVar8 >> (ulong)(uVar7 & 0x1f);
              if (uVar14 < 2) {
                uVar14 = 1;
              }
              uVar2 = uVar14 >> 1;
              if (uVar2 != 0) {
                iVar13 = 0;
                while( true ) {
                  uVar14 = uVar14 - 1;
                  uVar1 = param_1[3] >> (ulong)(uVar7 & 0x1f);
                  uVar8 = uVar8 >> (ulong)(uVar7 & 0x1f);
                  if (uVar1 < 2) {
                    uVar1 = 1;
                  }
                  if (uVar8 < 2) {
                    uVar8 = 1;
                  }
                  uVar3 = uVar7 + (uVar10 + param_1[1] * uVar15) * *param_1;
                  lVar9 = *(long *)(*(long *)(param_1 + 8) +
                                   (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4
                                   ));
                  lVar11 = *(long *)(param_1 + 0x4c);
                  uVar6 = FUN_0065b270(param_1[6],uVar1,uVar8,0,iVar13,0);
                  uVar8 = param_1[3] >> (ulong)(uVar7 & 0x1f);
                  if (uVar8 < 2) {
                    uVar8 = 1;
                  }
                  uVar1 = param_1[4] >> (ulong)(uVar7 & 0x1f);
                  if (uVar1 < 2) {
                    uVar1 = 1;
                  }
                  lVar9 = lVar11 + lVar9 + (uVar6 & 0xffffffff);
                  uVar3 = uVar7 + (uVar10 + param_1[1] * uVar15) * *param_1;
                  lVar11 = *(long *)(*(long *)(param_1 + 8) +
                                    (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 |
                                    (ulong)uVar3 << 4));
                  lVar12 = *(long *)(param_1 + 0x4c);
                  uVar6 = FUN_0065b270(param_1[6],uVar8,uVar1,0,uVar14,0);
                  lVar11 = lVar12 + lVar11 + (uVar6 & 0xffffffff);
                  FUN_0043a3b0(local_1078,lVar9,iVar5);
                  FUN_0043a3b0(lVar9,lVar11,iVar5);
                  FUN_0043a3b0(lVar11,local_1078,iVar5);
                  if (uVar2 - 1 == iVar13) break;
                  uVar8 = param_1[4];
                  iVar13 = iVar13 + 1;
                }
              }
              uVar14 = *param_1;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar14);
            uVar7 = param_1[1];
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar7);
        uVar10 = param_1[2];
        uVar14 = uVar7;
      }
      uVar6 = local_1070;
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar10);
    uVar10 = local_1070._4_4_;
    local_1070 = (ulong)local_1070._4_4_ << 0x20;
    if ((-1 < (long)uVar6) && (local_1078 != (undefined1 *)0x0)) {
      FUN_00421f90(puVar4,local_1078,1,uVar10 & 0x3fffffff);
    }
  }
  return;
}

