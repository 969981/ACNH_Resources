
void FUN_0098ea90(undefined4 param_1,long param_2,undefined4 param_3,uint *param_4,uint *param_5,
                 undefined4 param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  void *pvVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  size_t __size;
  uint uVar16;
  ulong *puVar17;
  
  *(undefined4 *)(param_2 + 0x278) = param_1;
  *(undefined4 *)(param_2 + 0x27c) = param_3;
  *(undefined4 *)(param_2 + 0x280) = param_6;
  lVar14 = DAT_05ae7600;
  uVar2 = *param_5;
  uVar11 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    uVar15 = uVar11 * 0x30 | 8;
    if (DAT_05ae7600 == 0) {
      puVar9 = malloc(uVar15);
    }
    else {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar14 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_0098ef48;
      puVar9 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar15,8);
    }
    if (puVar9 != (ulong *)0x0) {
      uVar15 = uVar11 * 0x30 - 0x30;
      puVar17 = puVar9 + 1;
      *puVar9 = uVar11;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15;
      puVar12 = puVar17;
      if ((SUB164(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 5 & 1) == 0) {
        puVar12 = puVar9 + 7;
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 2) = 0;
        *(undefined4 *)(puVar9 + 3) = 0;
        puVar9[4] = 0;
        *(undefined4 *)(puVar9 + 5) = 0;
        puVar9[6] = 0;
      }
      if (0x2f < uVar15) {
        do {
          *puVar12 = 0;
          *(undefined4 *)(puVar12 + 1) = 0;
          *(undefined4 *)(puVar12 + 2) = 0;
          puVar12[3] = 0;
          *(undefined4 *)(puVar12 + 4) = 0;
          *(undefined4 *)(puVar12 + 7) = 0;
          *(undefined4 *)(puVar12 + 8) = 0;
          puVar12[9] = 0;
          *(undefined4 *)(puVar12 + 10) = 0;
          puVar12[0xb] = 0;
          puVar12[5] = 0;
          puVar12[6] = 0;
          puVar12 = puVar12 + 0xc;
        } while (puVar12 != puVar17 + uVar11 * 6);
      }
      *(ulong **)(param_2 + 0x290) = puVar17;
      uVar16 = 0;
      *(uint *)(param_2 + 0x288) = uVar2;
      puVar6 = PTR_DAT_04bb3238;
      do {
        lVar7 = (long)(int)uVar16;
        lVar14 = lVar7;
        if (*param_5 <= uVar16) {
          lVar14 = 0;
        }
        lVar1 = lVar7;
        if (*(uint *)(param_2 + 0x288) <= uVar16) {
          lVar1 = 0;
        }
        *(undefined4 *)(*(long *)(param_2 + 0x290) + lVar1 * 0x30) =
             *(undefined4 *)(*(long *)(param_5 + 2) + lVar14 * 4);
        lVar14 = lVar7;
        if (*param_4 <= uVar16) {
          lVar14 = 0;
        }
        lVar1 = lVar7;
        if (*(uint *)(param_2 + 0x288) <= uVar16) {
          lVar1 = 0;
        }
        *(undefined4 *)(*(long *)(param_2 + 0x290) + lVar1 * 0x30 + 8) =
             *(undefined4 *)(*(long *)(param_4 + 2) + lVar14 * 4);
        if (*(uint *)(param_2 + 0x288) <= uVar16) {
          lVar7 = 0;
        }
        *(undefined4 *)(*(long *)(param_2 + 0x290) + lVar7 * 0x30 + 4) = 0;
        lVar14 = DAT_05ae7600;
        uVar5 = (uint)puVar17[(long)(int)uVar16 * 6];
        uVar11 = (ulong)uVar5;
        if (0 < (int)uVar5) {
          __size = uVar11 << 2;
          if (DAT_05ae7600 == 0) {
            pvVar10 = malloc(__size);
            if (pvVar10 != (void *)0x0) goto LAB_0098ed04;
LAB_0098ed40:
            uVar3 = (uint)puVar17[(long)(int)uVar16 * 6 + 2];
            uVar15 = (ulong)uVar3;
            if (0 < (int)uVar3) goto LAB_0098ed4c;
          }
          else {
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar8 = (long *)(lVar14 + 8);
            if (lVar7 != 0) {
              plVar8 = (long *)(lVar7 + 0xa8);
            }
            plVar8 = (long *)*plVar8;
            if ((plVar8 == (long *)0x0) ||
               (pvVar10 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8),
               pvVar10 == (void *)0x0)) goto LAB_0098ed40;
LAB_0098ed04:
            memset(pvVar10,0,__size);
            *(uint *)(puVar17 + (long)(int)uVar16 * 6 + 2) = uVar5;
            puVar17[(long)(int)uVar16 * 6 + 3] = (ulong)pvVar10;
            uVar15 = uVar11;
LAB_0098ed4c:
            puVar9 = puVar17 + (long)(int)uVar16 * 6 + 3;
            if (uVar15 - 1 < 3) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              do {
                lVar14 = uVar13 * 4;
                uVar13 = uVar13 + 4;
                *(undefined4 *)(*puVar9 + lVar14) = *(undefined4 *)puVar6;
                *(undefined4 *)(*puVar9 + lVar14 + 4) = *(undefined4 *)puVar6;
                *(undefined4 *)(*puVar9 + lVar14 + 8) = *(undefined4 *)puVar6;
                *(undefined4 *)(*puVar9 + lVar14 + 0xc) = *(undefined4 *)puVar6;
              } while ((uVar15 & 0xfffffffc) != uVar13);
            }
            uVar15 = uVar15 & 3;
            if (uVar15 != 0) {
              lVar14 = uVar13 << 2;
              do {
                uVar15 = uVar15 - 1;
                *(undefined4 *)(*puVar9 + lVar14) = *(undefined4 *)puVar6;
                lVar14 = lVar14 + 4;
              } while (uVar15 != 0);
            }
          }
          lVar14 = DAT_05ae7600;
          if (DAT_05ae7600 == 0) {
            pvVar10 = malloc(uVar11);
            if (pvVar10 != (void *)0x0) goto LAB_0098ee54;
LAB_0098ee7c:
            uVar5 = (uint)puVar17[(long)(int)uVar16 * 6 + 4];
            uVar11 = (ulong)uVar5;
          }
          else {
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar8 = (long *)(lVar14 + 8);
            if (lVar7 != 0) {
              plVar8 = (long *)(lVar7 + 0xa8);
            }
            plVar8 = (long *)*plVar8;
            if ((plVar8 == (long *)0x0) ||
               (pvVar10 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar11,8),
               pvVar10 == (void *)0x0)) goto LAB_0098ee7c;
LAB_0098ee54:
            *(uint *)(puVar17 + (long)(int)uVar16 * 6 + 4) = uVar5;
            puVar17[(long)(int)uVar16 * 6 + 5] = (ulong)pvVar10;
          }
          if (0 < (int)uVar5) {
            puVar9 = puVar17 + (long)(int)uVar16 * 6 + 5;
            if (uVar11 < 8) {
              lVar7 = 0;
            }
            else {
              lVar14 = 7;
              do {
                lVar7 = lVar14;
                *(undefined1 *)(*puVar9 + lVar7 + -7) = 0;
                *(undefined1 *)(*puVar9 + lVar7 + -6) = 0;
                *(undefined1 *)(*puVar9 + lVar7 + -5) = 0;
                *(undefined1 *)(*puVar9 + lVar7 + -4) = 0;
                *(undefined1 *)(*puVar9 + lVar7 + -3) = 0;
                *(undefined1 *)(*puVar9 + lVar7 + -2) = 0;
                *(undefined1 *)(*puVar9 + lVar7 + -1) = 0;
                *(undefined1 *)(*puVar9 + lVar7) = 0;
                lVar14 = lVar7 + 8;
              } while ((lVar7 + 8) - (uVar11 & 0xfffffff8) != 7);
              lVar7 = lVar7 + 1;
            }
            for (uVar11 = uVar11 & 7; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined1 *)(*puVar9 + lVar7) = 0;
              lVar7 = lVar7 + 1;
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar2 != uVar16);
    }
  }
LAB_0098ef48:
  *(undefined4 *)(param_2 + 0x298) = 0;
  *(undefined1 *)(param_2 + 0x38c) = 1;
  return;
}

