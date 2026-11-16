
void FUN_02988830(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  byte local_58 [4];
  undefined4 local_54;
  undefined2 local_50;
  byte local_4c [4];
  undefined4 local_48;
  undefined2 local_44;
  
  if ((*(long *)(param_2 + 8) != 0 && *(long *)(param_2 + 0x10) != 0) &&
      *(char *)(param_2 + 1) != '\0') {
    FUN_02507c6c(local_4c,7,1,0,0);
    puVar4 = PTR_DAT_04bb5038;
    uVar6 = (uint)local_4c[0];
    uVar11 = 0;
    local_54 = local_48;
    local_58[0] = 0xff;
    if (local_4c[0] < 8) {
      local_58[0] = local_4c[0];
    }
    local_50 = local_44;
    if (local_4c[0] < 8) {
      uVar11 = 0;
      do {
        uVar12 = (ulong)uVar6;
        uVar11 = 1 << (ulong)(uVar6 & 0x1f) | uVar11;
        do {
          if (uVar12 == 7) goto LAB_029888ac;
          uVar12 = uVar12 + 1;
          uVar5 = FUN_02507924(local_58,puVar4 + uVar12);
        } while ((uVar5 & 1) == 0);
        local_58[0] = puVar4[uVar12];
        uVar6 = (uint)local_58[0];
      } while (uVar6 < 8);
    }
LAB_029888ac:
    uVar3 = *(uint *)(param_1 + 0xc0);
    uVar6 = uVar3 - (uVar3 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
    uVar6 = uVar6 + (uVar6 >> 8);
    uVar6 = uVar6 + (uVar6 >> 0x10) & 0x3f;
    if (uVar6 != 0) {
      uVar7 = 0;
      iVar8 = 2;
      do {
        if (uVar3 != 0) {
          iVar10 = iVar8;
          uVar9 = uVar3;
          do {
            iVar10 = iVar10 + -1;
            if (iVar10 < 2) {
              uVar9 = uVar9 - 1 & (uVar9 ^ 0xffffffff);
              uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
              uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
              uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
              uVar9 = uVar9 + (uVar9 >> 8);
              uVar9 = uVar9 + (uVar9 >> 0x10);
              uVar2 = uVar9 & 0x3f;
              uVar9 = 1 << (ulong)(uVar9 & 0x1f);
              if (uVar2 < 0xc && (uVar9 & uVar11) == 0) {
                puVar1 = (undefined8 *)(param_1 + (ulong)uVar2 * 0x10);
                *puVar1 = 0;
                puVar1[1] = 0;
                *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & (uVar9 ^ 0xffffffff);
              }
              break;
            }
            uVar9 = uVar9 - 1 & uVar9;
          } while (uVar9 != 0);
        }
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 1;
      } while (uVar7 != uVar6);
    }
  }
  return;
}

