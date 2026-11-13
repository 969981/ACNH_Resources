
/* WARNING: Removing unreachable block (ram,0x0125ef08) */
/* WARNING: Removing unreachable block (ram,0x0125eec0) */
/* WARNING: Removing unreachable block (ram,0x0125ec50) */
/* WARNING: Removing unreachable block (ram,0x0125ec60) */
/* WARNING: Removing unreachable block (ram,0x0125eee4) */
/* WARNING: Removing unreachable block (ram,0x0125ef2c) */

undefined8 FUN_0125ec00(float *param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_38;
  float local_30;
  uint local_2c;
  undefined1 local_28 [4];
  uint local_24;
  
  if (param_1 != (float *)0x0) {
    local_24 = 1;
    lVar9 = *(long *)PTR_DAT_04bb27a8;
    if ((*(long *)(lVar9 + 0x38) != 0) &&
       (lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0xb8), lVar10 != 0)) {
      iVar11 = 0;
      lVar10 = lVar10 + 0x10;
      do {
        uVar3 = *(ushort *)(lVar10 + (long)iVar11 * 0x18 + 8);
        uVar13 = (uint)uVar3;
        uVar5 = uVar13 - *(ushort *)(lVar9 + 0xb90);
        if (uVar5 < *(uint *)(lVar9 + 0xb70)) {
          puVar12 = *(uint **)(*(long *)(lVar9 + 0xb78) + (long)(int)uVar5 * 8);
          local_2c = 0;
          if (puVar12 != (uint *)0x0) {
            uVar5 = *puVar12;
            if (uVar5 != 0 && puVar12 != (uint *)(ulong)uVar5) {
              puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar5);
              if (((*puVar8 != 0) && (uVar5 = puVar8[1], uVar5 != 0)) &&
                 ((ulong)(ushort)puVar8[2] != 0)) {
                lVar1 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar1 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar12 - lVar1) / (ulong)uVar5);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bbbd58) &&
                     (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar2 * 2),
                     local_2c = (uint)uVar4, uVar4 < 0x20)) goto LAB_0125ed54;
                }
              }
            }
            goto LAB_0125ed50;
          }
        }
        else {
LAB_0125ed50:
          local_2c = 0;
        }
LAB_0125ed54:
        if (((local_2c == 0x15) || (local_2c == 0x17)) && ((uVar13 - 0x87 & 0xffff) < 4)) {
          lVar10 = lVar10 + (long)iVar11 * 0x18;
          fVar15 = (float)*(int *)(lVar10 + 0xc) * 160.0 +
                   *(float *)((&PTR_DAT_04989668)[(short)(uVar13 - 0x87)] + 4);
          local_30 = (float)*(int *)(lVar10 + 0x10) * 160.0 +
                     *(float *)((&PTR_DAT_04989668)[(short)(uVar13 - 0x87)] + 0xc);
          local_38 = (ulong)(uint)fVar15;
          if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
             (lVar9 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar9 == 0)) {
            fVar14 = -500.0;
          }
          else {
            local_28[0] = 0;
            if (DAT_04c487d4 == -1) {
              local_24 = 7;
            }
            else {
              puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
              if (0xff < (uint)(int)DAT_04c487d4) {
                puVar12 = (uint *)PTR_DAT_04bc39f8;
              }
              local_24 = 7;
              if ((*puVar12 & 2) != 0) {
                local_24 = 5;
              }
            }
            fVar14 = (float)FUN_00962700(lVar9,&local_38,&local_24,0,local_28);
            fVar15 = (float)local_38;
          }
          local_38 = CONCAT44(fVar14,(float)local_38);
          *param_1 = fVar15;
          param_1[1] = fVar14;
          param_1[2] = local_30;
          uVar6 = FUN_013884a0();
          if ((uVar6 & 1) != 0) {
            lVar9 = FUN_01260194(0xe7);
            local_24 = 0;
            if (((((DAT_05618008 == uVar13) || (local_24 = 1, DAT_05618028 == uVar13)) ||
                 (local_24 = 2, DAT_05618048 == uVar3)) || (local_24 = 3, DAT_05618068 == uVar3)) &&
               ((local_24 < *(uint *)(lVar9 + 0x420) &&
                (lVar9 = *(long *)(*(long *)(lVar9 + 0x428) + (long)(int)local_24 * 8), lVar9 != 0))
               )) {
              pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x140) + 0xf0))(lVar9 + 0x140);
              *param_1 = *param_1 + *pfVar7;
              param_1[1] = param_1[1] + pfVar7[1];
              param_1[2] = param_1[2] + pfVar7[2];
              return 1;
            }
          }
          return 1;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x48);
    }
  }
  return 0;
}

