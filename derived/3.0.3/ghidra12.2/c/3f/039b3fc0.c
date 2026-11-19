
void FUN_039b3fc0(long param_1,long *param_2,long param_3,uint param_4,uint param_5,long param_6)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined **local_278;
  int local_270 [2];
  undefined8 auStack_268 [32];
  undefined8 auStack_168 [33];
  
  param_2[1] = 0;
  param_2[2] = 0;
  uVar14 = (ulong)param_4;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  lVar11 = *(long *)(param_6 + 8);
  uVar7 = *(uint *)(param_1 + 0x18);
  lVar20 = *(long *)(param_1 + 0x20);
  uVar3 = *(uint *)(*(long *)(lVar11 + 0x18) + 0x28);
  lVar16 = 0;
  if (uVar3 < 3) {
    lVar16 = (ulong)uVar3 + 1;
  }
  if (uVar7 == 0) {
    do {
      bVar1 = uVar14 != 0;
      uVar13 = 0;
      uVar14 = (ulong)*(uint *)(&DAT_041b4070 + uVar14 * 4);
    } while (bVar1);
  }
  else {
    do {
      uVar13 = uVar14;
      uVar14 = 0;
      lVar18 = (long)(int)uVar7 * 8;
      do {
        if (((ulong)*(uint *)(*(long *)(lVar20 + uVar14 * 8) + 0xc0) & 1L << (uVar13 & 0x3f)) != 0)
        goto LAB_039b4080;
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + -8;
      } while (lVar18 != 0);
      uVar14 = (ulong)*(uint *)(&DAT_041b4070 + uVar13 * 4);
    } while (uVar13 != 0);
  }
  uVar14 = 0;
LAB_039b4080:
  if ((uint)uVar14 < uVar7) {
    lVar18 = (long)(int)uVar7 * 8 + (uVar14 & 0xffffffff) * -8;
    uVar14 = uVar14 & 0xffffffff;
    puVar15 = (&PTR_s_gsys_assign_material_04b71438)[uVar13];
    do {
      local_278 = &PTR_LAB_04b714e8;
      local_270[0] = 0;
      bVar4 = *(byte *)(*(long *)(lVar20 + uVar14 * 8) + 0x220);
      if (param_3 != 0) {
        memcpy(local_270,(void *)(param_3 + 8),0x208);
      }
      bVar5 = *(byte *)(*(long *)(lVar20 + uVar14 * 8) + 0x221);
      bVar6 = *(byte *)(lVar11 + 0x5a);
      auStack_268[local_270[0]] = "gsys_weight";
      lVar8 = 0;
      if ((bVar5 & 1) != 0) {
        lVar8 = lVar16;
      }
      puVar12 = (&PTR_DAT_04b6a580)[lVar8];
      auStack_168[local_270[0]] = (&PTR_DAT_04b6a580)[bVar6];
      iVar10 = (int)((long)local_270[0] + 1);
      auStack_268[(long)local_270[0] + 1] = "gsys_index_stream_format";
      auStack_168[iVar10] = puVar12;
      lVar8 = (long)iVar10 + 1;
      lVar2 = 0;
      if (((uint)bVar4 & 1 << (ulong)(param_5 & 0x1f) & 0xffU) != 0) {
        lVar2 = (long)(int)param_5;
      }
      iVar10 = (int)lVar8;
      auStack_268[lVar8] = "gsys_assign_type";
      puVar12 = (&PTR_DAT_04b6a580)[lVar2];
      auStack_168[iVar10] = puVar15;
      lVar8 = (long)iVar10 + 1;
      local_270[0] = (int)lVar8;
      auStack_268[lVar8] = "gsys_assign_variation";
      auStack_168[local_270[0]] = puVar12;
      local_270[0] = local_270[0] + 1;
      lVar8 = FUN_03ad3450(&local_278,*(long *)(lVar20 + uVar14 * 8) + 0x90);
      if (lVar8 != 0) {
        lVar16 = *(long *)(*(long *)(lVar20 + uVar14 * 8) + 8);
        if ((*(long *)(lVar16 + 200) == 0) ||
           (puVar17 = *(undefined8 **)
                       (*(long *)(*(long *)(lVar16 + 200) + 0x40) +
                       (long)(int)((ulong)(lVar8 - *(long *)(lVar16 + 0x88)) >> 6) * 8),
           puVar17 == (undefined8 *)0x0)) {
          plVar9 = *(long **)(DAT_05ae92f0 + 0x58);
          if (plVar9 == (long *)0x0) {
            puVar17 = (undefined8 *)0x0;
          }
          else {
            if (DAT_05ae7600 == 0) {
              puVar17 = malloc(0xec);
            }
            else {
              puVar17 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0xec,8);
            }
            *(undefined4 *)((long)puVar17 + 0xc) = 0;
            *puVar17 = 0xffffffffffffffff;
            puVar17[2] = 0xffffffffffffffff;
            puVar17[3] = 0xffffffffffffffff;
            puVar17[0x1c] = 0xffffffffffffffff;
            *(undefined4 *)(puVar17 + 0x1d) = 0xffffffff;
            puVar17[4] = 0xffffffffffffffff;
            puVar17[5] = 0xffffffffffffffff;
            puVar17[6] = 0xffffffffffffffff;
            puVar17[7] = 0xffffffffffffffff;
            puVar17[8] = 0xffffffffffffffff;
            puVar17[9] = 0xffffffffffffffff;
            puVar17[10] = 0xffffffffffffffff;
            puVar17[0xb] = 0xffffffffffffffff;
            puVar17[0xc] = 0xffffffffffffffff;
            puVar17[0xd] = 0xffffffffffffffff;
            puVar17[0xe] = 0xffffffffffffffff;
            puVar17[0xf] = 0xffffffffffffffff;
            puVar17[0x10] = 0xffffffffffffffff;
            puVar17[0x11] = 0xffffffffffffffff;
            puVar17[0x12] = 0xffffffffffffffff;
            puVar17[0x13] = 0xffffffffffffffff;
            puVar17[0x14] = 0xffffffffffffffff;
            puVar17[0x15] = 0xffffffffffffffff;
            puVar17[0x16] = 0xffffffffffffffff;
            puVar17[0x17] = 0xffffffffffffffff;
            puVar17[0x18] = 0xffffffffffffffff;
            puVar17[0x19] = 0xffffffffffffffff;
            puVar17[0x1a] = 0xffffffffffffffff;
            puVar17[0x1b] = 0xffffffffffffffff;
            uVar19 = *(undefined8 *)(*(long *)(lVar8 + 0x20) + *(long *)PTR_DAT_04bd0028);
            FUN_0034fbe4(uVar19,0);
            FUN_0034fbe4(uVar19,4);
            FUN_0034fbe4(uVar19,3);
            FUN_039b6f90(puVar17,lVar16,lVar8);
          }
        }
        *param_2 = lVar16;
        param_2[1] = lVar8;
        param_2[2] = (long)puVar17;
        *(int *)(param_2 + 3) = (int)uVar14;
        return;
      }
      uVar14 = uVar14 + 1;
      lVar18 = lVar18 + -8;
    } while (lVar18 != 0);
  }
  return;
}

