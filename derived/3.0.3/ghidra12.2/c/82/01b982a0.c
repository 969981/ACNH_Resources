
undefined8 FUN_01b982a0(undefined8 param_1,void *param_2,long *param_3,long *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  void *__src;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  lVar13 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x408) + 8);
  local_158 = 0x100;
  local_55 = 0;
  puStack_160 = local_154;
  local_154[0] = 0;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_038d1270(&local_168,"%s.msbt",param_3[1]);
  if (*(long *)(lVar13 + 0x10) != lVar13 + 8) {
    lVar15 = (long)*(int *)(lVar13 + 0x1c);
    lVar14 = *(long *)(lVar13 + 0x10) - lVar15;
    do {
      if ((lVar14 != 0) && (plVar4 = (long *)FUN_03d54360(lVar14,&local_168), plVar4 != (long *)0x0)
         ) {
        if (1 < *(uint *)(*(long *)(*(long *)(*plVar4 + 0x18) +
                                   (long)*(int *)(*plVar4 + 0x28) * 0x18) + 4)) {
          return 0;
        }
        (**(code **)(*param_4 + 0x18))(param_4);
        uVar5 = FUN_03b0db80(plVar4,param_4[1]);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        (**(code **)(*param_4 + 0x18))(param_4);
        lVar13 = *plVar4;
        if (*(int *)(lVar13 + 0x20) == -1) {
          uVar10 = 0xfffffffe;
          goto LAB_01b984f4;
        }
        pbVar7 = (byte *)param_4[1];
        lVar14 = 0;
        do {
          pbVar12 = pbVar7 + lVar14;
          lVar14 = lVar14 + 1;
        } while (*pbVar12 != 0);
        lVar15 = *(long *)(lVar13 + 0x18);
        uVar11 = (uint)*pbVar7;
        puVar8 = *(uint **)(lVar15 + (long)*(int *)(lVar13 + 0x20) * 0x18);
        uVar10 = *puVar8;
        if (*pbVar7 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          pbVar12 = pbVar7;
          do {
            pbVar12 = pbVar12 + 1;
            uVar9 = uVar11 + uVar9 * 0x492;
            uVar11 = (uint)*pbVar12;
          } while (uVar11 != 0);
        }
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar9 / uVar10;
        }
        iVar2 = uVar9 - uVar11 * uVar10;
        if (puVar8[(int)(iVar2 * 2 | 1)] != 0) {
          uVar10 = 0;
          iVar3 = (int)lVar14;
          uVar11 = puVar8[iVar2 * 2 + 2];
          do {
            bVar1 = *(byte *)((long)puVar8 + (ulong)uVar11);
            if (bVar1 + 1 == iVar3) {
              lVar14 = (ulong)uVar11 + 1;
              if (iVar3 + -1 < 1) {
LAB_01b984ec:
                uVar10 = *(uint *)((long)puVar8 + lVar14 + (ulong)(uint)bVar1);
LAB_01b984f4:
                lVar15 = *(long *)(lVar13 + 0x18);
                if (uVar10 < *(uint *)(plVar4 + 1)) {
                  lVar14 = *(long *)(lVar15 + (long)*(int *)(lVar13 + 0x28) * 0x18);
                  __src = (void *)((ulong)(*(int *)(lVar14 + 4) * uVar10) + lVar14 + 8);
                  goto LAB_01b9852c;
                }
                break;
              }
              pbVar12 = (byte *)((long)puVar8 + lVar14);
              pbVar6 = pbVar7;
              uVar5 = (ulong)(iVar3 - 1);
              while( true ) {
                if (*pbVar6 != *pbVar12) break;
                uVar5 = uVar5 - 1;
                pbVar12 = pbVar12 + 1;
                pbVar6 = pbVar6 + 1;
                if (uVar5 == 0) goto LAB_01b984ec;
              }
            }
            uVar10 = uVar10 + 1;
            uVar11 = uVar11 + bVar1 + 5;
          } while (uVar10 != puVar8[(int)(iVar2 * 2 | 1)]);
        }
        __src = (void *)0x0;
LAB_01b9852c:
        memcpy(param_2,__src,
               (ulong)*(uint *)(*(long *)(lVar15 + (long)*(int *)(lVar13 + 0x28) * 0x18) + 4));
        return 1;
      }
      lVar14 = *(long *)(lVar14 + lVar15 + 8) - lVar15;
    } while (lVar14 != (lVar13 + 8) - lVar15);
  }
  return 0;
}

