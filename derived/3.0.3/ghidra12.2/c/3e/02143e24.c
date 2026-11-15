
/* WARNING: Removing unreachable block (ram,0x02143f44) */

void FUN_02143e24(long param_1,ushort *param_2)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_50;
  uint uStack_4c;
  uint local_44;
  
  if ((char)param_2[3] == '\x03') {
    return;
  }
  lVar9 = *(long *)(param_1 + 8);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar13 = (uint)uVar2;
  uVar11 = (uint)uVar3;
  if ((uint)*(ushort *)(lVar9 + 4) <= (uint)uVar2) {
    bVar5 = false;
    bVar7 = true;
    uVar14 = (uint)uVar2;
    if ((uint)*(ushort *)(lVar9 + 6) <= (uint)uVar3) {
      bVar7 = (uint)*(ushort *)(lVar9 + 8) <= (uint)uVar2;
      bVar5 = uVar14 == *(ushort *)(lVar9 + 8);
    }
    bVar6 = false;
    bVar8 = true;
    uVar12 = (uint)uVar3;
    if (!bVar7 || bVar5) {
      bVar8 = (uint)*(ushort *)(lVar9 + 10) <= (uint)uVar3;
      bVar6 = uVar12 == *(ushort *)(lVar9 + 10);
    }
    if (!bVar8 || bVar6) {
      uVar10 = FUN_035aa010(uVar14,uVar12,*(undefined8 *)(param_1 + 0x10),0);
      if ((uVar10 & 1) != 0) {
        if ((((*(char *)(param_1 + 0x40) != '\0') && (*(int *)(param_1 + 0x28) <= (int)uVar13)) &&
            ((int)uVar13 <= *(int *)(param_1 + 0x38))) &&
           ((*(int *)(param_1 + 0x2c) <= (int)uVar11 && ((int)uVar11 <= *(int *)(param_1 + 0x3c)))))
        {
          return;
        }
        local_44 = 0;
        local_68 = &DAT_048f9750;
        local_60 = 0;
        local_58 = &DAT_048f9750;
        lVar9 = *(long *)(**(long **)(param_1 + 0x10) + 0xd0);
        local_50 = uVar13;
        uStack_4c = uVar11;
        if (lVar9 == 0) {
          local_60._4_4_ = 0;
          uVar10 = 0;
        }
        else {
          lVar1 = lVar9 + 0x130 + (ulong)*(uint *)(lVar9 + 0x198) * 0x30;
          if (1 < *(uint *)(lVar9 + 0x198)) {
            lVar1 = lVar9 + 0x130;
          }
          FUN_012eb21c(lVar1,&local_58,&local_68);
          uVar10 = local_60 & 0xffffffff;
        }
        FUN_035a4bec(*(undefined8 *)(param_1 + 8),uVar10,local_60._4_4_);
        return;
      }
      uVar10 = FUN_035a9d50(uVar2,uVar3,*(undefined8 *)(param_1 + 0x10));
      if ((uVar10 & 1) == 0) {
        local_60 = (ulong)CONCAT24(param_2[1],(uint)*param_2);
        local_58 = (undefined8 *)(PTR_DAT_04bb5ba0 + 0x10);
        local_50 = local_50 & 0xffffff00;
        local_68 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
        if ((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) {
          FUN_00974bc8(*(long *)(DAT_04cfae30 + 0xa8),&local_68,&local_58);
          bVar4 = (byte)local_50;
          if (((byte)local_50 >> 4 & 1) == 0) {
            if (((byte)local_50 >> 5 & 1) == 0) {
              if (((byte)local_50 >> 6 & 1) == 0) goto LAB_02144298;
              FUN_035a71c0(*(undefined8 *)(param_1 + 8),param_2,0);
              uVar15 = 5;
              *(byte *)((long)param_2 + 5) = *(byte *)((long)param_2 + 5) | 0x2a;
              local_44 = 2;
            }
            else {
              FUN_035a71c0(*(undefined8 *)(param_1 + 8),param_2,1);
              local_44 = 1;
              uVar15 = 7;
              *(byte *)((long)param_2 + 5) = *(byte *)((long)param_2 + 5) | 0x89;
            }
            *(char *)(param_2 + 0x10) = (char)local_44;
          }
          else {
            local_44 = 0;
            *(undefined1 *)(param_2 + 0x10) = 0;
            uVar11 = (local_50 & 6 | (local_50 & 1) << 3 | (byte)local_50 >> 3 & 1) ^ 0xf;
            *(char *)((long)param_2 + 5) = (char)uVar11;
            if (((byte)local_50 >> 3 & 1) == 0) {
              FUN_035a70c8(*(undefined8 *)(param_1 + 8),param_2,0);
              uVar11 = *(byte *)((long)param_2 + 5) | 0xffffff91;
              *(char *)((long)param_2 + 5) = (char)uVar11;
              if ((char)param_2[3] != '\x03') {
                local_44 = (uint)(byte)param_2[0x10];
                if (local_44 == 0) {
                  FUN_035a79b0(*(undefined8 *)(param_1 + 8),param_2,0);
                  *(byte *)(param_2 + 2) = (byte)param_2[2] & 0x6e;
                }
                else {
                  FUN_035a72e0(*(undefined8 *)(param_1 + 8),param_2,local_44 == 1);
                }
                uVar11 = (uint)*(byte *)((long)param_2 + 5);
              }
            }
            if ((uVar11 >> 1 & 1) != 0) {
              FUN_035a70c8(*(undefined8 *)(param_1 + 8),param_2,1);
              if ((char)param_2[3] != '\x03') {
                local_44 = (uint)(byte)param_2[0x10];
                if (local_44 == 0) {
                  FUN_035a79b0(*(undefined8 *)(param_1 + 8),param_2,1);
                  *(byte *)(param_2 + 2) = (byte)param_2[2] & 0x9d;
                }
                else {
                  FUN_035a72e0(*(undefined8 *)(param_1 + 8),param_2,local_44 == 1);
                }
              }
              uVar11 = (uint)*(byte *)((long)param_2 + 5);
            }
            if ((uVar11 >> 2 & 1) != 0) {
              FUN_035a70c8(*(undefined8 *)(param_1 + 8),param_2,2);
              uVar11 = *(byte *)((long)param_2 + 5) | 0x54;
              *(char *)((long)param_2 + 5) = (char)uVar11;
              if ((char)param_2[3] != '\x03') {
                local_44 = (uint)(byte)param_2[0x10];
                if (local_44 == 0) {
                  FUN_035a79b0(*(undefined8 *)(param_1 + 8),param_2,2);
                  *(byte *)(param_2 + 2) = (byte)param_2[2] & 0xab;
                }
                else {
                  FUN_035a72e0(*(undefined8 *)(param_1 + 8),param_2,local_44 == 1);
                }
                uVar11 = (uint)*(byte *)((long)param_2 + 5);
              }
            }
            if ((uVar11 >> 3 & 1) == 0) goto LAB_02144298;
            uVar15 = 3;
            FUN_035a70c8(*(undefined8 *)(param_1 + 8),param_2,3);
          }
          if ((char)param_2[3] != '\x03') {
            local_44 = (uint)(byte)param_2[0x10];
            if (local_44 == 0) {
              FUN_035a79b0(*(undefined8 *)(param_1 + 8),param_2,uVar15);
              if ((bVar4 >> 4 & 1) != 0) {
                *(byte *)(param_2 + 2) = (byte)param_2[2] & 0x57;
              }
            }
            else {
              FUN_035a72e0(*(undefined8 *)(param_1 + 8),param_2,local_44 == 1);
            }
          }
        }
LAB_02144298:
        local_58 = (undefined8 *)((ulong)local_58 & 0xffffffff00000000);
        uVar10 = FUN_035ab240(uVar2,uVar3,*(undefined8 *)(param_1 + 0x10),&local_58);
        if ((uVar10 & 1) != 0) {
          FUN_035a4360(*(undefined8 *)(param_1 + 8),uVar14,uVar12,(ulong)local_58 & 0xffffffff);
        }
        return;
      }
      if (((*(char *)(param_1 + 0x40) != '\0') &&
          (*(uint *)(param_1 + 0x28) == uVar13 || (int)*(uint *)(param_1 + 0x28) < (int)uVar14)) &&
         (((int)uVar13 <= *(int *)(param_1 + 0x38) &&
          ((*(uint *)(param_1 + 0x2c) == uVar11 || (int)*(uint *)(param_1 + 0x2c) < (int)uVar12 &&
           ((int)uVar11 <= *(int *)(param_1 + 0x3c))))))) {
        return;
      }
      lVar9 = *(long *)(param_1 + 8);
    }
  }
  FUN_035a4360(lVar9,uVar2,uVar3,0);
  return;
}

