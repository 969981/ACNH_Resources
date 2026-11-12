
void FUN_0068f570(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ushort *puVar14;
  int iVar15;
  ushort *puVar16;
  
  puVar7 = (undefined8 *)*param_1;
  iVar5 = *(int *)(param_1 + 1);
  puVar8 = puVar7;
  if (iVar5 == 0) {
LAB_0068f61c:
    if (puVar8 != puVar7 + (long)iVar5 * 3) {
      return;
    }
  }
  else {
    uVar4 = *(ushort *)*param_2;
    if (uVar4 == 0) {
      lVar12 = (long)iVar5 * 0x18;
      do {
        if (**(short **)puVar8[2] == 0) goto LAB_0068f61c;
        puVar8 = puVar8 + 3;
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != 0);
    }
    else {
      do {
        if ((uint)**(ushort **)puVar8[2] == (uint)uVar4) {
          puVar14 = *(ushort **)puVar8[2] + 1;
          puVar16 = (ushort *)*param_2 + 1;
          iVar15 = uVar4 + 1;
          while( true ) {
            cVar3 = (char)*puVar16;
            if (cVar3 == '\0' || cVar3 != (char)*puVar14) break;
            iVar15 = iVar15 + -1;
            puVar16 = (ushort *)((long)puVar16 + 1);
            puVar14 = (ushort *)((long)puVar14 + 1);
            if (iVar15 < 2) goto LAB_0068f61c;
          }
          if (cVar3 == (char)*puVar14) goto LAB_0068f61c;
        }
        puVar8 = puVar8 + 3;
      } while (puVar8 != puVar7 + (long)iVar5 * 3);
    }
  }
  if (*(int *)((long)param_1 + 0xc) <= iVar5) {
    iVar5 = iVar5 * 2 + 2;
    puVar7 = (undefined8 *)
             (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],(long)(iVar5 * 0x18),0x10)
    ;
    puVar8 = (undefined8 *)*param_1;
    iVar15 = *(int *)(param_1 + 1);
    if (iVar15 != 0) {
      uVar11 = (long)iVar15 * 0x18 - 0x18;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar11;
      puVar9 = puVar8;
      puVar10 = puVar7;
      if ((SUB164(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 4 & 1) == 0) {
        uVar2 = *puVar8;
        uVar13 = puVar8[2];
        puVar7[1] = puVar8[1];
        puVar7[2] = uVar13;
        *puVar7 = uVar2;
        puVar9 = puVar8 + 3;
        puVar10 = puVar7 + 3;
      }
      if (0x17 < uVar11) {
        do {
          uVar2 = *puVar9;
          uVar13 = puVar9[2];
          puVar10[1] = puVar9[1];
          puVar10[2] = uVar13;
          *puVar10 = uVar2;
          puVar1 = puVar9 + 3;
          uVar2 = puVar9[4];
          uVar13 = puVar9[5];
          puVar9 = puVar9 + 6;
          puVar10[3] = *puVar1;
          puVar10[4] = uVar2;
          puVar10[5] = uVar13;
          puVar10 = puVar10 + 6;
        } while (puVar9 != puVar8 + (long)iVar15 * 3);
      }
    }
    *param_1 = puVar7;
    *(int *)((long)param_1 + 0xc) = iVar5;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[2] + 0x18))();
      puVar7 = (undefined8 *)*param_1;
    }
  }
  iVar5 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = iVar5 + 1;
  puVar7 = puVar7 + (long)iVar5 * 3;
  puVar7[2] = param_2;
  *puVar7 = 0;
  puVar7[1] = 0;
  return;
}

