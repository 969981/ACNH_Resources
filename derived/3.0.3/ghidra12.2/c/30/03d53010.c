
undefined8 FUN_03d53010(undefined8 param_1,long *param_2,long *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x408) + 8);
  local_158 = 0x100;
  local_55 = 0;
  puStack_160 = local_154;
  local_154[0] = 0;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_038d1270(&local_168,"%s.msbt",param_3[1]);
  if (*(long *)(lVar14 + 0x10) != lVar14 + 8) {
    lVar15 = (long)*(int *)(lVar14 + 0x1c);
    lVar13 = *(long *)(lVar14 + 0x10) - lVar15;
    do {
      if ((lVar13 != 0) && (plVar3 = (long *)FUN_03d54360(lVar13,&local_168), plVar3 != (long *)0x0)
         ) {
        if (((int)param_2[2] < 0x100) || (*(uint *)(plVar3 + 1) <= param_4)) {
          puVar6 = (undefined1 *)param_2[1];
          uVar4 = 0;
        }
        else {
          lVar14 = *plVar3;
          (**(code **)(*param_2 + 0x18))(param_2);
          puVar5 = (undefined8 *)(*(long *)(lVar14 + 0x18) + (long)*(int *)(lVar14 + 0x20) * 0x18);
          piVar7 = (int *)*puVar5;
          uVar1 = *(uint *)((long)puVar5 + 0xc);
          uVar9 = *piVar7 << 3 | 4;
          if (uVar1 <= uVar9) {
            return 1;
          }
          lVar14 = param_2[1];
          while( true ) {
            bVar2 = *(byte *)((long)piVar7 + (ulong)uVar9);
            uVar8 = (ulong)bVar2;
            if (*(uint *)((long)piVar7 + uVar8 + uVar9 + 1) == param_4) break;
            uVar9 = uVar9 + bVar2 + 5;
            if (uVar1 <= uVar9) {
              return 1;
            }
          }
          if (bVar2 != 0) {
            uVar10 = uVar8 & 3;
            if (bVar2 < 4) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              do {
                puVar6 = (undefined1 *)((long)piVar7 + uVar11 + (ulong)(uVar9 + 1) + 1);
                puVar12 = (undefined1 *)(lVar14 + 1 + uVar11);
                uVar11 = uVar11 + 4;
                puVar12[-1] = puVar6[-1];
                *puVar12 = *puVar6;
                puVar12[1] = puVar6[1];
                puVar12[2] = puVar6[2];
              } while ((uVar8 & 0xfc) != uVar11);
            }
            if ((bVar2 & 3) != 0) {
              puVar6 = (undefined1 *)((long)piVar7 + (uVar9 + 1) + uVar11);
              puVar12 = (undefined1 *)(lVar14 + uVar11);
              do {
                uVar10 = uVar10 - 1;
                *puVar12 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar12 = puVar12 + 1;
              } while (uVar10 != 0);
            }
          }
          puVar6 = (undefined1 *)(lVar14 + uVar8);
          uVar4 = 1;
        }
        *puVar6 = 0;
        return uVar4;
      }
      lVar13 = *(long *)(lVar13 + lVar15 + 8) - lVar15;
    } while (lVar13 != (lVar14 + 8) - lVar15);
  }
  return 0;
}

