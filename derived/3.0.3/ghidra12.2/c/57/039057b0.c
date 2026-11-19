
void FUN_039057b0(long param_1,long param_2,long param_3,long *param_4)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  char *pcVar14;
  ulong *puVar15;
  uint uVar16;
  ulong *puVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  short *psVar21;
  short sVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  int *piVar27;
  undefined *local_70;
  char *pcStack_68;
  
  uVar5 = *(uint *)(param_3 + 4);
  uVar24 = (ulong)uVar5;
  lVar25 = *(long *)PTR_DAT_04bb2698;
  if (lVar25 == 0) {
    plVar8 = malloc(0x40);
  }
  else {
    plVar8 = param_4;
    if (param_4 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar25 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x40,8);
  }
  puVar6 = PTR_DAT_04bb2120;
  puVar2 = PTR_DAT_04bb2020;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  *plVar8 = (long)(puVar2 + 0x10);
  plVar8[1] = (long)puVar6;
  plVar8[2] = (long)&PTR_FUN_04b65e40;
  plVar8[3] = 0;
  *(long **)(param_1 + 8) = plVar8;
  plVar8[1] = *(long *)(param_2 + 8);
  *(long *)(*(long *)(param_1 + 8) + 0x18) = param_1;
  if (0 < (int)uVar5) {
    lVar25 = *(long *)(param_1 + 8);
    __size = uVar24 * 0x38 + 8;
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 == 0) {
      puVar10 = malloc(__size);
    }
    else {
      plVar8 = param_4;
      if (param_4 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar7 + 8);
        if (lVar9 != 0) {
          plVar8 = (long *)(lVar9 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_039059a4;
      }
      puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8);
    }
    if (puVar10 != (ulong *)0x0) {
      uVar12 = uVar24 * 0x38 - 0x38;
      puVar15 = puVar10 + 1;
      *puVar10 = uVar24;
      puVar2 = PTR_DAT_04bb2020;
      puVar17 = puVar15;
      if ((uVar12 / 0x38 & 1) == 0) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        *(undefined4 *)(puVar10 + 5) = 0;
        puVar10[6] = 0;
        puVar10[1] = (ulong)puVar1;
        puVar10[2] = (ulong)puVar6;
        puVar10[3] = (ulong)puVar1;
        puVar10[4] = (ulong)puVar6;
        puVar17 = puVar10 + 8;
      }
      if (0x37 < uVar12) {
        puVar2 = puVar2 + 0x10;
        do {
          *puVar17 = (ulong)puVar2;
          puVar17[1] = (ulong)puVar6;
          *(undefined4 *)(puVar17 + 4) = 0;
          puVar17[5] = 0;
          *(undefined4 *)(puVar17 + 0xb) = 0;
          puVar17[0xc] = 0;
          puVar17[2] = (ulong)puVar2;
          puVar17[3] = (ulong)puVar6;
          puVar17[7] = (ulong)puVar2;
          puVar17[8] = (ulong)puVar6;
          puVar17[9] = (ulong)puVar2;
          puVar17[10] = (ulong)puVar6;
          puVar17 = puVar17 + 0xe;
        } while (puVar17 != puVar15 + uVar24 * 7);
      }
      *(uint *)(lVar25 + 0x30) = uVar5;
      *(ulong **)(lVar25 + 0x38) = puVar15;
    }
  }
LAB_039059a4:
  uVar5 = *(uint *)(param_3 + 4);
  if (uVar5 != 0) {
    uVar26 = 0;
    piVar27 = (int *)(param_3 + 8);
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar13 = piVar27[2];
      uVar24 = (ulong)uVar13;
      piVar3 = piVar27 + 4;
      uVar16 = 0;
      pcVar14 = (char *)((long)piVar3 + (ulong)(uint)piVar27[1]);
      while( true ) {
        pcVar14 = pcVar14 + -1;
        do {
          pcVar14 = pcVar14 + 1;
        } while (*pcVar14 == '\0');
        if (uVar16 == uVar13) break;
        do {
          pcVar14 = pcVar14 + 1;
        } while (*pcVar14 != '\0');
        uVar16 = uVar16 + 1;
      }
      lVar25 = *(long *)(*(long *)(param_1 + 8) + 0x38);
      uVar16 = uVar26;
      if (*(uint *)(*(long *)(param_1 + 8) + 0x30) <= uVar26) {
        uVar16 = 0;
      }
      lVar7 = lVar25 + (ulong)uVar16 * 0x38;
      *(char **)(lVar7 + 0x18) = pcVar14;
      *(int **)(lVar7 + 8) = piVar3;
      *(undefined2 *)(lVar7 + 0x30) = 1;
      if (0 < (int)uVar13) {
        uVar12 = uVar24 << 4 | 8;
        lVar9 = *(long *)PTR_DAT_04bb2698;
        if (lVar9 == 0) {
          puVar10 = malloc(uVar12);
        }
        else {
          plVar8 = param_4;
          if (param_4 == (long *)0x0) {
            lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar8 = (long *)(lVar9 + 8);
            if (lVar11 != 0) {
              plVar8 = (long *)(lVar11 + 0xa8);
            }
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_03905b68;
          }
          puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar12,8);
        }
        if (puVar10 != (ulong *)0x0) {
          puVar17 = puVar10 + 1;
          *puVar10 = uVar24;
          puVar1 = PTR_DAT_04bb2020;
          uVar12 = uVar24 & 7;
          puVar10 = puVar17;
          if ((uVar13 & 7) != 0) {
            puVar15 = puVar17;
            do {
              uVar12 = uVar12 - 1;
              puVar10 = puVar15 + 2;
              *puVar15 = (ulong)(puVar1 + 0x10);
              puVar15[1] = (ulong)puVar6;
              puVar15 = puVar10;
            } while (uVar12 != 0);
          }
          if (6 < (uVar24 - 1 & 0xfffffffffffffff)) {
            do {
              *puVar10 = (ulong)puVar2;
              puVar10[1] = (ulong)puVar6;
              puVar10[2] = (ulong)puVar2;
              puVar10[3] = (ulong)puVar6;
              puVar10[4] = (ulong)puVar2;
              puVar10[5] = (ulong)puVar6;
              puVar10[6] = (ulong)puVar2;
              puVar10[7] = (ulong)puVar6;
              puVar10[8] = (ulong)puVar2;
              puVar10[9] = (ulong)puVar6;
              puVar10[10] = (ulong)puVar2;
              puVar10[0xb] = (ulong)puVar6;
              puVar10[0xc] = (ulong)puVar2;
              puVar10[0xd] = (ulong)puVar6;
              puVar10[0xe] = (ulong)puVar2;
              puVar10[0xf] = (ulong)puVar6;
              puVar10 = puVar10 + 0x10;
            } while (puVar10 != puVar17 + uVar24 * 2);
          }
          *(uint *)(lVar7 + 0x20) = uVar13;
          *(ulong **)(lVar25 + (ulong)uVar16 * 0x38 + 0x28) = puVar17;
        }
      }
LAB_03905b68:
      puVar1 = PTR_DAT_04bb2020;
      if (0 < piVar27[2]) {
        uVar16 = 0;
        do {
          uVar13 = 0;
          pcStack_68 = (char *)((long)piVar3 + (ulong)(uint)piVar27[1]);
          while( true ) {
            pcStack_68 = pcStack_68 + -1;
            do {
              pcStack_68 = pcStack_68 + 1;
            } while (*pcStack_68 == '\0');
            if (uVar13 == uVar16) break;
            do {
              pcStack_68 = pcStack_68 + 1;
            } while (*pcStack_68 != '\0');
            uVar13 = uVar13 + 1;
          }
          local_70 = puVar1 + 0x10;
          uVar13 = uVar26;
          if (*(uint *)(*(long *)(param_1 + 8) + 0x30) <= uVar26) {
            uVar13 = 0;
          }
          lVar25 = *(long *)(*(long *)(param_1 + 8) + 0x38) + (ulong)uVar13 * 0x38;
          uVar13 = uVar16;
          if (*(uint *)(lVar25 + 0x20) <= uVar16) {
            uVar13 = 0;
          }
          plVar8 = (long *)(*(long *)(lVar25 + 0x28) + (ulong)uVar13 * 0x10);
          (**(code **)(*plVar8 + 0x10))(plVar8,&local_70);
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < piVar27[2]);
      }
      uVar26 = uVar26 + 1;
      piVar27 = (int *)((long)piVar27 + (long)*piVar27);
    } while (uVar5 != uVar26);
  }
  lVar25 = *(long *)(param_1 + 8);
  uVar5 = *(uint *)(lVar25 + 0x30);
  if (uVar5 != 0) {
    lVar7 = *(long *)(lVar25 + 0x38);
    uVar26 = 0;
    uVar16 = 0;
    iVar19 = 1;
    uVar13 = uVar5;
    do {
      uVar26 = uVar26 + 1;
      if ((int)uVar26 < (int)uVar13) {
        psVar21 = (short *)(lVar7 + (long)(int)uVar16 * 0x38 + 0x30);
        sVar22 = *psVar21;
        uVar23 = uVar26;
        do {
          uVar4 = uVar23;
          if (uVar13 <= uVar23) {
            uVar4 = 0;
          }
          uVar23 = uVar23 + 1;
          sVar22 = sVar22 * *(short *)(*(long *)(lVar25 + 0x38) + (ulong)uVar4 * 0x38 + 0x20);
          *psVar21 = sVar22;
          uVar13 = *(uint *)(lVar25 + 0x30);
        } while ((int)uVar23 < (int)uVar13);
      }
      iVar19 = *(int *)(lVar7 + (long)(int)uVar16 * 0x38 + 0x20) * iVar19;
      uVar16 = uVar16 + 1;
    } while (uVar5 != uVar16);
    uVar5 = iVar19 - 1;
    uVar24 = (ulong)uVar5;
    if (uVar5 != 0 && 0 < iVar19) {
      uVar12 = uVar24 * 0x150 | 8;
      lVar7 = *(long *)PTR_DAT_04bb2698;
      if (lVar7 == 0) {
        puVar10 = malloc(uVar12);
      }
      else {
        if (param_4 == (long *)0x0) {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          param_4 = (long *)(lVar7 + 8);
          if (lVar9 != 0) {
            param_4 = (long *)(lVar9 + 0xa8);
          }
          param_4 = (long *)*param_4;
          if (param_4 == (long *)0x0) goto LAB_03905dc4;
        }
        puVar10 = (ulong *)(**(code **)(*param_4 + 0x30))(param_4,uVar12,8);
      }
      if (puVar10 != (ulong *)0x0) {
        puVar17 = puVar10 + 1;
        *puVar10 = uVar24;
        puVar10 = puVar17;
        do {
          *puVar10 = (ulong)&PTR_FUN_04b65e20;
          puVar10[1] = 0;
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)((long)puVar10 + 0x14) = 0;
          *(undefined4 *)(puVar10 + 3) = 0;
          *(undefined1 *)((long)puVar10 + 0x1c) = 2;
          *(undefined2 *)((long)puVar10 + 0x1e) = 0;
          *(undefined4 *)(puVar10 + 4) = 0;
          puVar10[5] = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          puVar10[7] = 0;
          *(undefined4 *)(puVar10 + 8) = 0;
          puVar10[9] = 0;
          *(undefined4 *)(puVar10 + 10) = 0;
          puVar10[0xb] = 0;
          *(undefined4 *)(puVar10 + 0xc) = 0;
          puVar10[0xd] = 0;
          *(undefined4 *)(puVar10 + 0xe) = 0;
          puVar10[0x28] = 0;
          *(undefined2 *)(puVar10 + 0x29) = 0;
          puVar10[0xf] = 0;
          puVar10[0x16] = 0;
          puVar10[0x17] = 0;
          puVar10[0x14] = 0;
          puVar10[0x15] = 0;
          puVar10[0x12] = 0;
          puVar10[0x13] = 0;
          puVar10[0x10] = 0;
          puVar10[0x11] = 0;
          puVar10 = puVar10 + 0x2a;
        } while (puVar10 != puVar17 + uVar24 * 0x2a);
        *(uint *)(lVar25 + 0x20) = uVar5;
        *(ulong **)(lVar25 + 0x28) = puVar17;
      }
    }
  }
LAB_03905dc4:
  iVar19 = *(int *)(lVar25 + 0x20);
  if (iVar19 != 0) {
    lVar7 = *(long *)(lVar25 + 0x28);
    iVar18 = 0;
    sVar22 = 1;
    do {
      lVar9 = lVar7 + (long)iVar18 * 0x150;
      iVar18 = iVar18 + 1;
      uVar20 = *(undefined8 *)(*(long *)(lVar25 + 0x18) + 8);
      *(short *)(lVar9 + 0x1e) = sVar22;
      sVar22 = sVar22 + 1;
      *(undefined8 *)(lVar9 + 8) = uVar20;
    } while (iVar19 != iVar18);
  }
  return;
}

