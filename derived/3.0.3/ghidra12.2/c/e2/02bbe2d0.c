
void FUN_02bbe2d0(long param_1,ulong param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  float fVar11;
  undefined *local_40;
  uint local_38;
  long local_34;
  undefined2 local_2c;
  undefined8 local_2a;
  undefined4 local_20;
  undefined8 local_1c;
  byte local_14;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x210) + 0x570);
  if (lVar7 == 0) {
    return;
  }
  local_20 = 0;
  local_14 = *(byte *)(param_1 + 0x1f8);
  local_2a = 0x101000001;
  local_38 = *(uint *)(param_1 + 0x1c2d0);
  local_1c = 0x30000000c;
  local_34 = 0;
  local_2c = 0;
  local_40 = PTR_DAT_04bc9c78 + 0x10;
  if (7 < local_14) {
    local_14 = 0xff;
  }
  if ((param_2 & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 0x1c1c8);
    if (*(uint *)(param_1 + 0x27e80) <= uVar4) {
      uVar4 = 0;
    }
    if (0 < (int)local_38) {
      uVar9 = 0;
      piVar1 = (int *)(*(long *)(param_1 + 0x27e88) + (long)(int)uVar4 * 0x10);
      do {
        if (**(long **)(*(long *)(param_1 + 0x1c2d8) + uVar9 * 8) == *(long *)(piVar1 + 2)) {
          if (-1 < (int)uVar9) {
            iVar3 = *piVar1;
            local_34 = uVar9 << 0x20;
            if (-1 < iVar3) {
              iVar5 = *(int *)(lVar7 + 0x2e8);
              iVar6 = 0;
              if (iVar5 != 0) {
                iVar6 = (int)uVar9 / iVar5;
              }
              uVar4 = iVar6 * iVar5 - iVar5 * iVar3;
              uVar9 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
            }
            goto LAB_02bbe488;
          }
          break;
        }
        uVar9 = uVar9 + 1;
      } while (local_38 != uVar9);
    }
    uVar9 = 0;
  }
  else {
    if ((int)local_38 < 1) goto LAB_02bbe48c;
    uVar8 = 0;
    uVar9 = 0xffffffff;
    do {
      if (**(long **)(*(long *)(param_1 + 0x1c2d8) + uVar8 * 8) == *param_3) {
        uVar9 = uVar8 & 0xffffffff;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (local_38 != uVar8);
    local_34 = uVar9 << 0x20;
    iVar3 = *(int *)(lVar7 + 0x2e8);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = *(int *)(lVar7 + 0x2f4) / iVar3;
    }
    if (uVar4 != 1) {
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = (int)uVar9 / iVar3;
      }
      fVar11 = (float)(int)uVar4 * 0.5;
      uVar10 = 0;
      if (fVar11 != (float)(int)fVar11) {
        uVar10 = (uint)(0.0 <= fVar11);
      }
      iVar6 = uVar10 + (int)fVar11;
      if ((uVar4 & 1) != 0) {
        iVar6 = uVar4 - (uVar10 + (int)fVar11);
      }
      iVar6 = iVar5 - iVar6;
      iVar2 = iVar6;
      if ((int)local_38 <= iVar6 * iVar3) {
        iVar2 = iVar5;
      }
      iVar5 = 0;
      if (-1 < iVar6) {
        iVar5 = iVar2;
      }
      uVar9 = (ulong)(uint)(iVar5 * iVar3);
    }
  }
LAB_02bbe488:
  local_34 = CONCAT44(local_34._4_4_,(int)uVar9);
LAB_02bbe48c:
  FUN_03864290(lVar7,&local_40);
  return;
}

