
undefined8 FUN_00147cc0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint local_98 [6];
  int local_80 [6];
  int local_68;
  int local_64;
  
  local_98[4] = 0;
  local_80[4] = 0xffffffff;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_80[0] = -1;
  local_80[1] = -1;
  local_80[2] = -1;
  local_80[3] = -1;
  uVar7 = FUN_00148088(param_2,local_80);
  uVar13 = 0;
  lVar1 = param_1 + 0xb8;
  do {
    uVar12 = (uint)uVar13;
    if ((uVar7 >> (ulong)(uVar12 & 0x1f) & 0x10001) == 0) break;
    iVar5 = local_80[(int)uVar12];
    local_64 = iVar5;
    if (iVar5 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_0014b0d0(lVar1,&local_64,4);
    }
    uVar2 = 1 << (ulong)(uVar12 & 0x1f) & uVar7;
    uVar3 = 1 << (ulong)(uVar12 + 0x10 & 0x1f) & uVar7;
    uVar4 = (uint)(uVar2 != 0);
    if (uVar3 != 0) {
      uVar4 = uVar2 != 0 | 2;
    }
    local_98[(int)uVar12] = uVar4;
    if (lVar8 == 0) {
      local_68 = iVar5;
      local_64 = iVar5;
      if ((iVar5 == -1) || (lVar8 = FUN_0014b0d0(lVar1,&local_64,4), lVar8 == 0)) {
        lVar8 = FUN_00143330(1,0x40);
        if (lVar8 == 0) {
          return 3;
        }
        FUN_00143a84(lVar8,0);
        lVar9 = FUN_0014af3c(lVar1,&local_68,4,lVar8);
        if (lVar9 == 0) {
          FUN_00143300(lVar8);
          return 3;
        }
      }
    }
    else {
      uVar13 = (ulong)*(uint *)(param_2 + 0xc0);
      if ((int)*(uint *)(param_2 + 0xc0) < 1) {
        uVar13 = 0;
      }
      else {
        uVar14 = 0;
        do {
          lVar9 = param_2 + uVar14 * 4;
          if (iVar5 == *(int *)(lVar9 + 0x98)) {
            uVar12 = *(uint *)(lVar9 + 0xac);
            if (uVar12 != uVar4) {
              if ((uVar12 & 1) != 0) {
                *(int *)(lVar8 + 0x34) = *(int *)(lVar8 + 0x34) + -1;
              }
              if ((uVar12 >> 1 & 1) != 0) {
                *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + -1;
              }
              if (uVar2 != 0) {
                *(int *)(lVar8 + 0x34) = *(int *)(lVar8 + 0x34) + 1;
              }
              if (uVar3 != 0) {
                *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
              }
            }
            goto LAB_00147e98;
          }
          uVar14 = uVar14 + 1;
        } while (uVar13 != uVar14);
      }
    }
    *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
    if (uVar2 != 0) {
      *(int *)(lVar8 + 0x34) = *(int *)(lVar8 + 0x34) + 1;
    }
    if (uVar3 != 0) {
      *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
    }
    FUN_00143a90(lVar8,*(undefined8 *)(lVar8 + 8),param_2,param_2 + 0x48);
    uVar14 = uVar13;
LAB_00147e98:
    uVar12 = (uint)(*(int *)(lVar8 + 0x34) != 0) | (uint)(*(int *)(lVar8 + 0x38) != 0) << 1;
    if (*(uint *)(lVar8 + 0x20) != uVar12) {
      if (*(code **)(param_1 + 0x60) != (code *)0x0) {
        (**(code **)(param_1 + 0x60))
                  (param_2,iVar5,uVar12,*(undefined8 *)(param_1 + 0x68),
                   *(undefined8 *)(lVar8 + 0x28));
      }
      *(uint *)(lVar8 + 0x20) = uVar12;
    }
    uVar13 = (ulong)((int)uVar14 + 1);
  } while ((int)uVar14 < 4);
  if (0 < *(int *)(param_2 + 0xc0)) {
    lVar8 = 0;
    do {
      lVar9 = param_2 + lVar8 * 4;
      iVar5 = *(int *)(lVar9 + 0x98);
      if (0 < (int)uVar13) {
        piVar11 = local_80;
        uVar14 = uVar13;
        do {
          if (iVar5 == *piVar11) goto LAB_00147ffc;
          uVar14 = uVar14 - 1;
          piVar11 = piVar11 + 1;
        } while (uVar14 != 0);
      }
      local_64 = iVar5;
      if ((iVar5 != -1) && (lVar10 = FUN_0014b0d0(lVar1,&local_64,4), lVar10 != 0)) {
        iVar6 = *(int *)(lVar10 + 0x30) + -1;
        uVar7 = *(uint *)(lVar9 + 0xac);
        *(int *)(lVar10 + 0x30) = iVar6;
        if ((uVar7 >> 1 & 1) != 0) {
          *(int *)(lVar10 + 0x38) = *(int *)(lVar10 + 0x38) + -1;
        }
        if ((uVar7 & 1) != 0) {
          *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + -1;
        }
        if (iVar6 == 0) {
          if (*(code **)(param_1 + 0x60) != (code *)0x0) {
            (**(code **)(param_1 + 0x60))
                      (param_2,iVar5,4,*(undefined8 *)(param_1 + 0x68),
                       *(undefined8 *)(lVar10 + 0x28));
          }
          local_64 = iVar5;
          FUN_0014b02c(lVar1,&local_64,4);
        }
        else {
          FUN_00143b00(lVar10,param_2 + 0x48,0);
        }
      }
LAB_00147ffc:
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_2 + 0xc0));
  }
  uVar14 = -(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
  memcpy((void *)(param_2 + 0x98),local_80,uVar14);
  memcpy((void *)(param_2 + 0xac),local_98,uVar14);
  *(int *)(param_2 + 0xc0) = (int)uVar13;
  return 0;
}

