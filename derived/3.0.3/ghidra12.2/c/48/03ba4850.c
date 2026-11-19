
void FUN_03ba4850(long param_1,long *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 uVar19;
  ulong uVar20;
  void *pvVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  
  puVar6 = PTR_DAT_04bb2698;
  pvVar21 = *(void **)(param_1 + 0x50);
  if (pvVar21 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar21);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar21);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar21);
      }
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  uVar13 = *(uint *)(param_1 + 0x30);
  uVar22 = (ulong)uVar13;
  if ((uVar13 != 0) && (0 < (int)uVar13)) {
    lVar23 = *(long *)puVar6;
    if (lVar23 == 0) {
      pvVar21 = malloc(uVar22 << 4);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar5 = (undefined8 *)(lVar23 + 8);
        if (lVar8 != 0) {
          puVar5 = (undefined8 *)(lVar8 + 0xa8);
        }
        param_2 = (long *)*puVar5;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      pvVar21 = (void *)(**(code **)(*param_2 + 0x30))(param_2,uVar22 << 4,8);
    }
    if (pvVar21 != (void *)0x0) {
      *(uint *)(param_1 + 0x48) = uVar13;
      *(void **)(param_1 + 0x50) = pvVar21;
      uVar12 = uVar13;
      if (*(long *)(param_1 + 0x28) != param_1 + 0x20) {
        lVar8 = (long)*(int *)(param_1 + 0x34);
        uVar12 = 0;
        lVar23 = *(long *)(param_1 + 0x28) - lVar8;
        do {
          lVar24 = *(long *)(param_1 + 0x50);
          uVar4 = uVar12;
          if (*(uint *)(param_1 + 0x48) <= uVar12) {
            uVar4 = 0;
          }
          (**(code **)(*(long *)(lVar23 + 8) + 0x18))((long *)(lVar23 + 8));
          pbVar14 = *(byte **)(lVar23 + 0x10);
          uVar10 = (uint)*pbVar14;
          uVar9 = 0;
          if (*pbVar14 != 0) {
            uVar9 = 0xffffffff;
            do {
              pbVar14 = pbVar14 + 1;
              uVar9 = crc32b(uVar9,uVar10,0x4c11db7);
              uVar10 = (uint)*pbVar14;
            } while (uVar10 != 0);
            uVar9 = ~uVar9;
          }
          uVar12 = uVar12 + 1;
          *(uint *)(lVar24 + (ulong)uVar4 * 0x10) = uVar9;
          *(long *)(lVar24 + (ulong)uVar4 * 0x10 + 8) = lVar23;
          lVar23 = *(long *)(lVar23 + lVar8 + 8) - lVar8;
        } while (lVar23 != (param_1 + 0x20) - lVar8);
        uVar12 = *(uint *)(param_1 + 0x48);
      }
      if ((1 < (int)uVar13) && (uVar13 - 1 < uVar12)) {
        puVar11 = *(uint **)(param_1 + 0x50);
        uVar15 = (ulong)(uVar13 >> 1);
        uVar16 = uVar15;
        do {
          uVar9 = (int)uVar15 * 2;
          puVar2 = puVar11 + (uVar16 - 1 & 0xffffffff) * 4;
          uVar19 = *(undefined8 *)(puVar2 + 1);
          uVar12 = puVar2[3];
          uVar4 = *puVar2;
          if ((int)uVar13 < (int)uVar9) {
            uVar10 = (uint)uVar16;
          }
          else {
            uVar20 = uVar16 & 0xffffffff;
            do {
              if ((int)uVar9 < (int)uVar13) {
                uVar18 = uVar9 | (puVar11 + (long)(int)uVar9 * 4)[-4] <
                                 puVar11[(long)(int)uVar9 * 4];
              }
              else {
                uVar18 = uVar9;
              }
              puVar2 = puVar11 + (long)(int)(uVar18 - 1) * 4;
              uVar10 = (uint)uVar20;
              if (*puVar2 <= uVar4) break;
              uVar17 = *(undefined8 *)(puVar2 + 2);
              *(undefined8 *)(puVar11 + (long)(int)((uint)uVar20 - 1) * 4) = *(undefined8 *)puVar2;
              *(undefined8 *)(puVar11 + (long)(int)((uint)uVar20 - 1) * 4 + 2) = uVar17;
              uVar9 = uVar18 * 2;
              uVar20 = (ulong)uVar18;
              uVar10 = uVar18;
            } while ((int)uVar9 <= (int)uVar13);
          }
          uVar15 = (ulong)((int)uVar15 - 1);
          puVar2 = puVar11 + (long)(int)(uVar10 - 1) * 4;
          *puVar2 = uVar4;
          *(undefined8 *)(puVar2 + 1) = uVar19;
          puVar2[3] = uVar12;
          bVar1 = 1 < (long)uVar16;
          uVar16 = uVar16 - 1;
        } while (bVar1);
        uVar16 = uVar22 - 1;
        uVar19 = *(undefined8 *)(puVar11 + 2);
        puVar2 = puVar11 + (uVar16 & 0xffffffff) * 4;
        uVar17 = *(undefined8 *)(puVar2 + 1);
        uVar12 = puVar2[3];
        uVar4 = *puVar2;
        *(undefined8 *)puVar2 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar2 + 2) = uVar19;
        while (2 < (int)uVar13) {
          uVar13 = (uint)uVar16;
          uVar15 = uVar16 & 0xffffffff;
          uVar9 = 2;
          uVar10 = 1;
          do {
            if ((int)uVar9 < (int)uVar13) {
              uVar18 = uVar9 | (puVar11 + (long)(int)uVar9 * 4)[-4] < puVar11[(long)(int)uVar9 * 4];
            }
            else {
              uVar18 = uVar9;
            }
            puVar2 = puVar11 + (long)(int)(uVar18 - 1) * 4;
            lVar23 = (long)(int)(uVar10 - 1);
            if (*puVar2 <= uVar4) goto LAB_03ba4b40;
            uVar19 = *(undefined8 *)(puVar2 + 2);
            *(undefined8 *)(puVar11 + lVar23 * 4) = *(undefined8 *)puVar2;
            *(undefined8 *)(puVar11 + lVar23 * 4 + 2) = uVar19;
            uVar9 = uVar18 * 2;
            uVar10 = uVar18;
          } while ((int)uVar9 < (int)uVar22);
          lVar23 = (long)(int)(uVar18 - 1);
LAB_03ba4b40:
          puVar3 = puVar11 + lVar23 * 4;
          uVar16 = uVar16 - 1;
          puVar2 = puVar11 + (uVar16 & 0xffffffff) * 4;
          *puVar3 = uVar4;
          *(undefined8 *)(puVar3 + 1) = uVar17;
          puVar3[3] = uVar12;
          uVar17 = *(undefined8 *)(puVar2 + 1);
          uVar12 = puVar2[3];
          uVar19 = *(undefined8 *)(puVar11 + 2);
          uVar4 = *puVar2;
          *(undefined8 *)puVar2 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar2 + 2) = uVar19;
          uVar22 = uVar15;
        }
        *puVar11 = uVar4;
        *(undefined8 *)(puVar11 + 1) = uVar17;
        puVar11[3] = uVar12;
      }
    }
  }
  return;
}

