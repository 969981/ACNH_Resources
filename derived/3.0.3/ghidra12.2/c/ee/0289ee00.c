
void FUN_0289ee00(long param_1,undefined2 *param_2,uint param_3,byte param_4)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [31];
  undefined1 local_5d;
  undefined1 auStack_58 [16];
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  lVar11 = 0;
  lVar9 = 0;
  lVar12 = param_1 + 0xe00;
  do {
    lVar2 = param_1 + (ulong)param_3 * 0x200;
    if (6 < param_3) {
      lVar2 = param_1;
    }
    if (*(short *)(lVar2 + lVar11) == -2) {
      lVar3 = lVar12 + (ulong)param_3 * 0x100;
      if (6 < param_3) {
        lVar3 = lVar12;
      }
      if (*(int *)(lVar3 + lVar9 * 4) < 0) {
        puVar1 = (undefined4 *)(lVar2 + lVar11);
        *(undefined2 *)puVar1 = *param_2;
        *(undefined1 *)((long)puVar1 + 2) = *(undefined1 *)(param_2 + 1);
        *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_2 + 3);
        puVar1[1] = *(undefined4 *)(param_2 + 2);
        lVar11 = lVar12 + (ulong)param_3 * 0x100;
        if (6 < param_3) {
          lVar11 = lVar12;
        }
        *(undefined4 *)(lVar11 + lVar9 * 4) = 0xffffffff;
        local_38 = (uint *)0x0;
        local_48 = PTR_DAT_04bc0510 + 0x10;
        lVar12 = param_1 + 0x1500 + (ulong)param_3 * 0x40;
        if (6 < param_3) {
          lVar12 = param_1 + 0x1500;
        }
        *(byte *)(lVar12 + lVar9) = param_4 & 1;
        puVar4 = PTR_DAT_04bb43c0;
        local_40 = *puVar1;
        uStack_3c = puVar1[1];
        lVar12 = *(long *)PTR_DAT_04bb43c0;
        uVar5 = FUN_0277d6c4(&local_40);
        if (*(long *)puVar4 != 0) {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar1);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
               (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar10 != (uint *)0x0)) {
              local_38 = puVar10;
            }
          }
        }
        FUN_01afb1a0(&local_48,auStack_58);
        local_5d = 0;
        local_80 = 0x20;
        puStack_88 = local_7c;
        local_7c[0] = 0;
        local_90 = PTR_DAT_04bb2028 + 0x10;
        if (param_3 < 7) {
          puVar6 = *(undefined8 **)(PTR_s_Sunday_04bc3898 + (ulong)param_3 * 8 + 0x40);
        }
        else {
          puVar6 = &DAT_0407ebb1;
        }
        if (local_38 == (uint *)0x0) {
          uVar8 = 0xbc;
        }
        else {
          uVar5 = *local_38;
          uVar8 = 0;
          if ((uVar5 != 0) && (local_38 != (uint *)(ulong)uVar5)) {
            puVar10 = (uint *)((long)local_38 - (long)(ulong)uVar5);
            uVar8 = 0;
            if (*puVar10 != 0) {
              uVar5 = puVar10[1];
              if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
                if (lVar12 != 0) {
                  uVar8 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar8 = (uint)((ulong)((long)local_38 - lVar12) / (ulong)uVar5);
                  }
                  if (*puVar10 <= uVar8) {
                    uVar8 = 0xffffffff;
                  }
                  if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar8 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2),
                     uVar8 < 0xbd)) goto LAB_0289f074;
                }
              }
              uVar8 = 0;
            }
          }
        }
LAB_0289f074:
        if (uVar8 < 0xbd) {
          puVar7 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)uVar8 * 8 + 0x830);
        }
        else {
          puVar7 = &DAT_0407ebb1;
        }
        FUN_038d1270(&local_90,"Shop.Zakka.%s.%s",puVar6,puVar7);
        return;
      }
    }
    lVar11 = lVar11 + 8;
    lVar9 = lVar9 + 1;
    if (lVar11 == 0x200) {
      return;
    }
  } while( true );
}

