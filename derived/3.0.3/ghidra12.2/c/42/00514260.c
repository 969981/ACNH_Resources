
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00514260(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x134) != param_2) {
    local_40 = 0;
    local_38 = -0x8000000000000000;
    if (*(char *)(param_1 + 0x130) != '\0') {
      FUN_00514140(param_1,*(int *)(param_1 + 0x134),&local_40);
    }
    local_50 = 0;
    local_48 = -0x8000000000000000;
    FUN_00514140(param_1,param_2,&local_50);
    lVar6 = local_48;
    uVar4 = _DAT_0413f508;
    uVar3 = DAT_0413f500;
    if (0 < (int)local_48) {
      fVar11 = -(float)DAT_0413f500;
      fVar12 = -(float)((ulong)DAT_0413f500 >> 0x20);
      fVar13 = -(float)_DAT_0413f508;
      fVar14 = -(float)((ulong)_DAT_0413f508 >> 0x20);
      lVar8 = 0;
LAB_005142e0:
      do {
        iVar2 = *(int *)(local_50 + lVar8 * 4);
        if (0 < (int)local_38) {
          lVar9 = 0;
          do {
            if (*(int *)(local_40 + lVar9 * 4) == iVar2) {
              if (-1 < (int)lVar9) {
                lVar8 = lVar8 + 1;
                if ((int)local_48 <= lVar8) goto LAB_00514358;
                goto LAB_005142e0;
              }
              break;
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < (int)local_38);
        }
        lVar9 = (long)iVar2 * 8;
        lVar10 = *(long *)(*(long *)(param_1 + 0x40) + lVar9);
        *(undefined8 *)(lVar10 + 0x68) = uVar4;
        *(undefined8 *)(lVar10 + 0x60) = uVar3;
        *(ulong *)(lVar10 + 0x78) = CONCAT44(fVar14,fVar13);
        *(ulong *)(lVar10 + 0x70) = CONCAT44(fVar12,fVar11);
        lVar10 = *(long *)(*(long *)(param_1 + 0x40) + lVar9);
        *(undefined8 *)(lVar10 + 0x88) = uVar4;
        *(undefined8 *)(lVar10 + 0x80) = uVar3;
        *(ulong *)(lVar10 + 0x98) = CONCAT44(fVar14,fVar13);
        *(ulong *)(lVar10 + 0x90) = CONCAT44(fVar12,fVar11);
        lVar9 = *(long *)(*(long *)(param_1 + 0x40) + lVar9);
        *(undefined8 *)(lVar9 + 0xb8) = uVar4;
        *(undefined8 *)(lVar9 + 0xb0) = uVar3;
        *(ulong *)(lVar9 + 200) = CONCAT44(fVar14,fVar13);
        *(ulong *)(lVar9 + 0xc0) = CONCAT44(fVar12,fVar11);
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)local_48);
    }
LAB_00514358:
    puVar5 = PTR_DAT_048607b8;
    uVar7 = local_48._4_4_;
    local_48 = (ulong)local_48._4_4_ << 0x20;
    if ((-1 < lVar6) && (local_50 != 0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_50,4,uVar7 & 0x3fffffff);
    }
    lVar6 = local_38;
    uVar7 = local_38._4_4_;
    local_38 = (ulong)local_38._4_4_ << 0x20;
    if ((-1 < lVar6) && (local_40 != 0)) {
      FUN_00421f90(puVar5,local_40,4,uVar7 & 0x3fffffff);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x134);
    *(int *)(param_1 + 0x134) = param_2;
    local_40 = CONCAT44(param_2,uVar1);
    FUN_005143e0(param_1 + 0x98,param_1,&local_40);
  }
  return;
}

