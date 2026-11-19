
void FUN_039baa70(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined **local_210;
  undefined1 local_208 [8];
  undefined8 local_200;
  undefined8 local_158;
  long local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined2 local_117;
  undefined8 local_110;
  
  if (*(int *)(param_1 + 0x1060) != 0) {
    iVar13 = 0;
    uVar14 = 0;
    do {
      if (uVar14 == *(byte *)(param_1 + 0x10 + (long)(int)uVar14 * 0x38 + 0x32)) {
        lVar11 = *(long *)(param_1 + 0x10 + (long)(int)uVar14 * 0x38 + 0x28);
        local_210 = &PTR_LAB_04b642f0;
        FUN_00347d68(local_208);
        local_210 = &PTR_FUN_04b659a0;
        lVar9 = *(long *)PTR_DAT_04bbd7c0;
        local_200 = *(undefined8 *)(lVar9 + 0x48);
        local_120 = 0;
        local_118 = 0;
        local_110 = 0;
        local_208[0] = 2;
        local_117 = 4;
        local_158 = *(undefined8 *)(lVar9 + 0x40);
        if (lVar11 == 0) {
          local_158 = *(undefined8 *)(lVar9 + 0x40);
        }
        else {
          *(undefined ****)(lVar11 + 0x30) = &local_210;
        }
        iVar2 = *(int *)(param_1 + 0x1048);
        uVar6 = *(undefined4 *)(param_1 + 0x104c);
        lVar9 = *(long *)(param_1 + 0x1050);
        uVar10 = *(undefined8 *)(param_1 + 0x1058);
        iVar3 = *(int *)(param_1 + 0x1060);
        *(long *)(lVar11 + 0x10) = lVar9;
        *(undefined8 *)(lVar11 + 0x18) = uVar10;
        *(int *)(lVar11 + 8) = iVar2 + iVar13;
        *(undefined4 *)(lVar11 + 0xc) = uVar6;
        iVar2 = 0;
        if (lVar9 != 0) {
          iVar2 = iVar3 - iVar13;
        }
        *(int *)(lVar11 + 0x20) = iVar2;
        *(undefined4 *)(lVar11 + 0x24) = 0;
        *(byte *)(lVar11 + 600) = *(byte *)(lVar11 + 600) & 0xfc | *(int *)(lVar11 + 0x24c) != 0;
        local_128 = lVar11;
        uVar7 = FUN_038fe8f0(lVar11);
        if ((uVar7 & 1) != 0) {
          FUN_039ba850(param_1,&local_210,param_2,uVar14 >> 2,uVar14 & 3);
          uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + 0xb8);
          uVar10 = (*DAT_04c62820)(uVar12);
          *(undefined8 *)(lVar11 + 0x250) = uVar10;
          uVar6 = (**(code **)PTR_DAT_04bcfce8)(uVar12);
          *(undefined4 *)(lVar11 + 0x24c) = uVar6;
          lVar9 = (**(code **)PTR_DAT_04bcfcd0)(uVar12);
          if ((lVar9 == 0) && (*(int *)(lVar11 + 0x24c) == 0)) {
            bVar8 = *(byte *)(lVar11 + 600) & 0xfe;
          }
          else {
            bVar8 = *(byte *)(lVar11 + 600) | 1;
          }
          *(byte *)(lVar11 + 600) = bVar8;
          *(int *)(lVar11 + 0x24) = (int)lVar9;
          lVar9 = DAT_05ae78f0;
          (*DAT_04c627a8)(uVar12);
          piVar1 = (int *)(lVar9 + 0x644);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          *(byte *)(lVar11 + 600) = *(byte *)(lVar11 + 600) & 0xfb | 2;
        }
        iVar13 = (*(int *)(lVar11 + 0x24) + 3U & 0xfffffffc) + iVar13;
        FUN_038f43d0(&local_210);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x40);
  }
  return;
}

