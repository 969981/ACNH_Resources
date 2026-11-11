
void FUN_00405c90(long param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar11 = *param_2;
  param_2[1] = lVar11;
  lVar12 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar12 + 0x18) - lVar9) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    uVar5 = *(uint *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 0x28) + lVar9);
    uVar17 = (ulong)uVar5;
    *(long *)(param_1 + 0x18) = lVar9 + 4;
    if ((ulong)((param_2[2] - lVar11 >> 3) * -0x5555555555555555) < uVar17) {
      puVar6 = (undefined8 *)FUN_00187df4(uVar17 * 0x18);
      puVar3 = (undefined8 *)*param_2;
      puVar8 = (undefined8 *)param_2[1];
      puVar13 = puVar6;
      puVar14 = puVar6;
      if (puVar8 != puVar3) {
        do {
          puVar7 = puVar8 + -3;
          uVar4 = puVar8[-2];
          uVar15 = puVar8[-1];
          puVar14 = puVar13 + -3;
          *puVar14 = *puVar7;
          puVar13[-2] = uVar4;
          puVar13[-1] = uVar15;
          puVar8 = puVar7;
          puVar13 = puVar14;
        } while (puVar7 != puVar3);
        puVar8 = (undefined8 *)*param_2;
      }
      *param_2 = (long)puVar14;
      param_2[1] = (long)puVar6;
      param_2[2] = (long)(puVar6 + uVar17 * 3);
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00187e4c();
      }
    }
    if (uVar5 != 0) {
      uVar16 = 0;
      do {
        if (*(char *)(param_1 + 8) != '\0') {
          return;
        }
        FUN_0018aa4c(&local_78);
        FUN_001f72d0(param_1,&local_78);
        if (*(char *)(param_1 + 8) != '\0') {
          param_2[1] = *param_2;
          return;
        }
        puVar3 = (undefined8 *)param_2[1];
        if (puVar3 == (undefined8 *)param_2[2]) {
          lVar12 = (long)puVar3 - *param_2 >> 3;
          uVar17 = lVar12 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar17) {
            plVar10 = (long *)FUN_00404d78(param_2);
            puVar1 = PTR_DAT_04bc0ef8;
            *(undefined1 *)(plVar10 + 6) = 0;
            *(undefined1 *)(plVar10 + 1) = 0;
            *plVar10 = (long)(puVar1 + 0x10);
            plVar10[5] = (long)&PTR_LAB_04a426b8;
            plVar10[8] = (long)(plVar10 + 6);
            plVar10[9] = 0x10;
            FUN_0019d7fc(plVar10 + 0xb,0,0);
            *(undefined2 *)(plVar10 + 0x13) = 0x300;
            plVar10[0x14] = 0;
            plVar10[0x15] = 0;
            plVar10[0x16] = 0;
            plVar10[0x12] = (long)&PTR_LAB_04a42918;
            FUN_01c68940(plVar10 + 0x14,0,0,0);
            *(undefined2 *)(plVar10 + 0x18) = 0x300;
            plVar10[0x19] = 0;
            plVar10[0x17] = (long)&PTR_LAB_04a42918;
            plVar10[0x1a] = 0;
            plVar10[0x1b] = 0;
            FUN_01c68940(plVar10 + 0x19,0,0,0);
            FUN_00186524(plVar10 + 0x1c);
            FUN_00186524(plVar10 + 0x1d);
            FUN_00186524(plVar10 + 0x20);
            FUN_00186524(plVar10 + 0x21);
            plVar10[0x22] = 0;
            plVar10[0x23] = 0;
            plVar10[0x24] = 0;
            plVar10[0x25] = 0;
            plVar10[0x26] = 0;
            plVar10[0x27] = 0;
            puVar1 = PTR_DAT_04bc0ef0 + 0x10;
            plVar10[2] = 0;
            *plVar10 = (long)puVar1;
            return;
          }
          uVar2 = lVar12 * 0x5555555555555556;
          if ((ulong)(lVar12 * 0x5555555555555556) <= uVar17) {
            uVar2 = uVar17;
          }
          if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
            uVar2 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar2 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = FUN_00187df4(uVar2 * 0x18);
          }
          puVar6 = (undefined8 *)(lVar9 + lVar12 * 8);
          puVar6[1] = uStack_70;
          puVar6[2] = local_68;
          *puVar6 = local_78;
          puVar3 = (undefined8 *)*param_2;
          puVar8 = (undefined8 *)param_2[1];
          puVar13 = puVar6;
          puVar14 = puVar6;
          if (puVar8 != puVar3) {
            do {
              puVar7 = puVar8 + -3;
              uVar4 = puVar8[-2];
              uVar15 = puVar8[-1];
              puVar14 = puVar13 + -3;
              *puVar14 = *puVar7;
              puVar13[-2] = uVar4;
              puVar13[-1] = uVar15;
              puVar8 = puVar7;
              puVar13 = puVar14;
            } while (puVar7 != puVar3);
            puVar8 = (undefined8 *)*param_2;
          }
          param_2[2] = lVar9 + uVar2 * 0x18;
          *param_2 = (long)puVar14;
          param_2[1] = (long)(puVar6 + 3);
          if (puVar8 != (undefined8 *)0x0) {
            FUN_00187e4c(puVar8);
          }
        }
        else {
          puVar3[1] = uStack_70;
          puVar3[2] = local_68;
          *puVar3 = local_78;
          param_2[1] = (long)(puVar3 + 3);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar5);
    }
  }
  return;
}

