
ulong FUN_01242c70(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort *puVar6;
  uint *puVar7;
  char cVar8;
  ushort uVar9;
  int *piVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  uint local_60;
  uint local_5c;
  undefined **local_58;
  uint local_50;
  uint uStack_4c;
  uint *local_48;
  
  FUN_0124c030(&local_58,param_3);
  iVar3 = FUN_0123db50(&local_50,local_48);
  lVar12 = DAT_05150358;
  if (iVar3 == 0x2d) {
    uVar4 = FUN_0277d6c4(param_3);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x5d0);
    if ((uVar4 < *(uint *)(lVar12 + 0x5b0)) &&
       (puVar11 = *(uint **)(*(long *)(lVar12 + 0x5b8) + (long)(int)uVar4 * 8),
       puVar11 != (uint *)0x0)) {
      if (*puVar11 == 0) {
LAB_01242dc8:
        uVar9 = 0;
      }
      else {
        cVar8 = DAT_05150d60;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            DAT_05150d64 = -1;
            DAT_05150d6c = 0xffffffffffffffff;
            DAT_05150d60 = '\x01';
          }
          else {
            if (-1 < DAT_05150d64) {
              if ((ushort *)((ulong)DAT_05150d64._4_4_ + (long)puVar11) == (ushort *)0x0)
              goto LAB_01242dc8;
              uVar9 = *(ushort *)((ulong)DAT_05150d64._4_4_ + (long)puVar11);
              goto LAB_01242dcc;
            }
            if (DAT_05150d64._4_4_ != 0xffffffff) goto LAB_01242dc8;
          }
          puVar7 = (uint *)(ulong)*puVar11;
          uVar9 = 0;
          if ((*puVar11 == 0) || (puVar11 == puVar7)) goto LAB_01242dcc;
          lVar12 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar7)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar11 + (lVar12 - (long)puVar7);
          if (lVar12 == 0) goto LAB_01242dc8;
          uVar5 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar7));
          DAT_05150d64 = CONCAT44(0xfffffffe,(undefined4)DAT_05150d64);
          uVar9 = 0;
          if (uVar5 == 0) goto LAB_01242dcc;
          piVar10 = (int *)(lVar12 + 4);
          while (piVar10[-1] != -0x2650e1f) {
            piVar10 = piVar10 + 2;
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) {
              uVar9 = 0;
              goto LAB_01242dcc;
            }
          }
          iVar3 = 0;
          if (*piVar10 != -1) {
            iVar3 = *piVar10;
          }
          DAT_05150d64 = CONCAT44(iVar3,(undefined4)DAT_05150d64);
        } while (*puVar11 != 0);
        uVar9 = 0;
      }
LAB_01242dcc:
      local_60 = (uint)uVar9;
      local_5c = 0;
      FUN_0277d4ac(&local_60);
      puVar2 = PTR_DAT_04bb43c0;
      lVar13 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_60);
      lVar12 = *(long *)puVar2;
      if (lVar12 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_48 = (uint *)0x0;
          local_50 = local_60;
          uStack_4c = local_5c;
          local_58 = &PTR_FUN_04a36b50;
          uVar4 = FUN_0277d6c4(&local_50);
          if (*(long *)puVar2 != 0) {
            lVar12 = *(long *)(lVar12 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar12 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(&local_60);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
                 (local_48 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8),
                 local_48 != (uint *)0x0)) {
                uVar4 = *local_48;
                if (uVar4 == 0) {
                  return 0;
                }
                if (local_48 == (uint *)(ulong)uVar4) {
                  return 0;
                }
                puVar7 = (uint *)((long)local_48 - (long)(ulong)uVar4);
                if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) &&
                   ((ulong)(ushort)puVar7[2] != 0)) {
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar7 + 10) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar7 + lVar12 + (ulong)(ushort)puVar7[2] * 8;
                  if (lVar12 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar1 = (uint)((ulong)((long)local_48 - lVar12) / (ulong)uVar4);
                    }
                    if (*puVar7 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < DAT_05326ec0) &&
                       (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0x78)) {
                      uVar5 = FUN_01ad7260(&local_58);
                      if ((int)uVar5 == 0) {
                        return uVar5;
                      }
                      if (param_1 != (uint *)0x0) {
                        *param_1 = local_60;
                        param_1[1] = local_5c;
                      }
                      if (param_2 == (uint *)0x0) {
                        return (ulong)(param_1 != (uint *)0x0);
                      }
                      puVar6 = (ushort *)FUN_0124b2a0(puVar11,2,0xc019a854,DAT_051513b0);
                      if (puVar6 == (ushort *)0x0) {
                        uVar4 = 0;
                      }
                      else {
                        uVar4 = (uint)*puVar6;
                      }
                      *param_2 = uVar4;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

