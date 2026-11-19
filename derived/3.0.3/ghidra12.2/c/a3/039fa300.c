
void FUN_039fa300(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  byte *pbVar9;
  long lVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined **local_210;
  undefined1 local_208 [8];
  undefined8 local_200;
  undefined8 local_158;
  long local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined2 local_117;
  undefined8 local_110;
  
  if ((*(byte *)(param_1 + 0x262) >> 1 & 1) == 0) {
    uVar15 = 0;
    uVar16 = 0;
    iVar8 = (int)param_2;
    ppuVar1 = (undefined **)(PTR_DAT_04bd0d18 + 0x10);
    do {
      lVar7 = *(long *)(param_1 + 0x20) + 0x10;
      if ((uVar15 == *(byte *)(lVar7 + uVar15 * 0x38 + 0x31)) &&
         (lVar10 = *(long *)(param_1 + 0x30 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3)
                            ) + 0x20, *(int *)(lVar10 + (long)iVar8 * 0x260 + 0x20) != 0)) {
        uVar12 = *(undefined8 *)(lVar7 + uVar15 * 0x38 + 0x20);
        lVar14 = lVar10 + (long)iVar8 * 0x260;
        local_210 = ppuVar1;
        FUN_00347d68(local_208);
        local_200 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
        local_120 = 0;
        local_118 = 0;
        local_110 = 0;
        local_117 = 4;
        local_158 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x40);
        local_208[0] = 2;
        local_210 = &PTR_FUN_04b659a0;
        *(long *)(lVar14 + 0x30) = (long)&local_210;
        local_128 = lVar14;
        uVar6 = FUN_038fe8f0(lVar14);
        if ((uVar6 & 1) != 0) {
          FUN_039fa590(param_1,&local_210,lVar7 + uVar15 * 0x38 + 8,uVar12,0,param_2);
          uVar13 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + 0xb8);
          uVar12 = (*DAT_04c62820)(uVar13);
          lVar14 = lVar10 + (long)iVar8 * 0x260;
          *(undefined8 *)(lVar14 + 0x250) = uVar12;
          uVar5 = (**(code **)PTR_DAT_04bcfce8)(uVar13);
          *(undefined4 *)(lVar14 + 0x24c) = uVar5;
          lVar7 = (**(code **)PTR_DAT_04bcfcd0)(uVar13);
          if (lVar7 == 0) {
            pbVar9 = (byte *)(lVar10 + (long)iVar8 * 0x260 + 600);
            if (*(int *)(lVar14 + 0x24c) != 0) goto LAB_039fa4f0;
            bVar11 = *pbVar9 & 0xfe;
          }
          else {
            pbVar9 = (byte *)(lVar10 + (long)iVar8 * 0x260 + 600);
LAB_039fa4f0:
            bVar11 = *pbVar9 | 1;
          }
          *pbVar9 = bVar11;
          *(int *)(lVar10 + (long)iVar8 * 0x260 + 0x24) = (int)lVar7;
          lVar7 = *(long *)PTR_DAT_04bc1010;
          (*DAT_04c627a8)(uVar13);
          piVar2 = (int *)(lVar7 + 0x644);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = *piVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar10 = lVar10 + (long)iVar8 * 0x260;
          *(byte *)(lVar10 + 600) = *(byte *)(lVar10 + 600) & 0xfb | 2;
        }
        FUN_038f43d0(&local_210);
      }
      uVar15 = uVar15 + 1;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (uVar15 != 0x40);
  }
  return;
}

