
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f69350(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  short *psVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  byte *pbVar19;
  undefined4 uVar20;
  undefined **local_a0;
  char *pcStack_98;
  undefined **local_90;
  char *pcStack_88;
  undefined4 local_80;
  undefined1 local_7c;
  long local_78;
  
  uVar9 = FUN_01f689f0();
  if ((uVar9 & 1) != 0) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x136bc);
  if (0 < iVar8) {
    *(int *)(param_1 + 0x136bc) = iVar8 + -1;
    iVar8 = iVar8 + -1;
  }
  puVar2 = PTR_DAT_04bb2020;
  if ((*(int *)(*(long *)(param_1 + 0x10) + 0x4b8) != 0) &&
     (*(int *)(*(long *)(param_1 + 0x10) + 0x378) == 0x23)) {
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    pcStack_88 = "CarnivalEventPlazaNpcWander";
    local_90 = ppuVar1;
    iVar8 = FUN_0273ea30(&local_90);
    if (iVar8 == 0) {
      pcStack_98 = "ArrivedInEventPlaza";
      local_a0 = ppuVar1;
      sVar7 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_a0);
      if (sVar7 == 1) {
        uVar11 = 0x7a;
        goto LAB_01f694c0;
      }
    }
    if (*(int *)(param_1 + 0x136bc) < 1) goto LAB_01f69520;
    lVar16 = *(long *)(param_1 + 0x18);
    uVar20 = *(undefined4 *)(lVar16 + 0x29c);
    *(undefined4 *)(lVar16 + 0x29c) = 0x42700000;
    FUN_02507c6c(&local_90,7,1,1,0);
    puVar5 = PTR_DAT_04bb5038;
    puVar4 = PTR_DAT_04bb4718;
    puVar3 = PTR_DAT_04bb32e0;
    uVar12 = (uint)(byte)local_90;
    if ((byte)local_90 < 8) {
      do {
        if (7 < (byte)*puVar3 || (byte)*puVar3 != uVar12) {
          lVar13 = *(long *)puVar4;
          if (lVar13 == 0) {
            psVar14 = &DAT_054f0c08;
            if ((DAT_054f0c70 & 1) == 0) {
              iVar8 = __cxa_guard_acquire(&DAT_054f0c70);
              if (iVar8 == 0) {
                psVar14 = &DAT_054f0c08;
              }
              else {
                DAT_054f0c6c = 0;
                DAT_054f0c1c._0_4_ = 0;
                DAT_054f0c1c._4_4_ = 0;
                DAT_054f0c68 = 1;
                DAT_054f0c24._0_4_ = 0;
                DAT_054f0c24._4_4_ = 0;
                DAT_054f0c2c._0_4_ = 0;
                DAT_054f0c2c._4_4_ = 0;
                _DAT_054f0c44 = 0;
                DAT_054f0c34._0_4_ = 0;
                DAT_054f0c34._4_4_ = 0;
                DAT_054f0c3c._0_4_ = 0;
                DAT_054f0c3c._4_4_ = 0;
                _DAT_054f0c08 = 0;
                _DAT_054f0c10 = 1;
                DAT_054f0c14._0_4_ = 0;
                DAT_054f0c14._4_4_ = 0;
                DAT_054f0c48 = 0;
                DAT_054f0c50 = 0;
                DAT_054f0c58 = 0;
                DAT_054f0c60 = 0;
                __cxa_guard_release(&DAT_054f0c70);
                psVar14 = &DAT_054f0c08;
              }
            }
          }
          else {
            psVar14 = (short *)(lVar13 + (ulong)uVar12 * 0xd0 +
                                (ulong)(*(uint *)(lVar13 + (ulong)uVar12 * 4 + 0xd68) & 1) * 0x68 +
                               0x6e8);
          }
          if ((((char)psVar14[0x32] == '\0') || (*psVar14 != *(short *)PTR_DAT_04bb6298)) ||
             (0x148 < *(uint *)(psVar14 + 2) || 4 < *(uint *)(psVar14 + 2) - 0xf)) {
            puVar15 = (undefined4 *)PTR_DAT_04bb3238;
            if ((((ulong)local_90 & 0xff) < 8) && (lVar13 = *(long *)puVar4, lVar13 != 0)) {
              puVar15 = (undefined4 *)(lVar13 + ((ulong)local_90 & 0xff) * 4 + 0xde8);
            }
            local_a0 = (undefined **)CONCAT44(local_a0._4_4_,*puVar15);
            uVar9 = FUN_02087ce0(lVar16,&local_a0,0);
            if ((uVar9 & 1) != 0) goto LAB_01f694b8;
          }
        }
        bVar6 = (byte)local_90;
        uVar9 = (ulong)local_90 & 0xff;
        if ((7 < (byte)local_90) || (uVar9 + 1 == 8)) break;
        pbVar19 = puVar5 + uVar9 + 1;
        uVar10 = FUN_02507924(&local_90,pbVar19);
        if ((uVar10 & 1) == 0) {
          if (uVar9 + 2 == 8) break;
          pbVar19 = puVar5 + uVar9 + 2;
          uVar10 = FUN_02507924(&local_90,pbVar19);
          if ((uVar10 & 1) == 0) {
            if (uVar9 + 3 == 8) break;
            pbVar19 = puVar5 + uVar9 + 3;
            uVar10 = FUN_02507924(&local_90,pbVar19);
            if ((uVar10 & 1) == 0) {
              if (uVar9 + 4 == 8) break;
              pbVar19 = puVar5 + uVar9 + 4;
              uVar10 = FUN_02507924(&local_90,pbVar19);
              if ((uVar10 & 1) == 0) {
                if (uVar9 + 5 == 8) break;
                pbVar19 = puVar5 + uVar9 + 5;
                uVar10 = FUN_02507924(&local_90,pbVar19);
                if ((uVar10 & 1) == 0) {
                  if (uVar9 + 6 == 8) break;
                  pbVar19 = puVar5 + uVar9 + 6;
                  uVar10 = FUN_02507924(&local_90,pbVar19);
                  if ((uVar10 & 1) == 0) {
                    if (uVar9 + 7 == 8) break;
                    pbVar19 = puVar5 + uVar9 + 7;
                    uVar10 = FUN_02507924(&local_90,pbVar19);
                    if ((uVar10 & 1) == 0) {
                      if (bVar6 == 0) break;
                      pbVar19 = puVar5 + uVar9 + 8;
                      FUN_02507924(&local_90,pbVar19);
                    }
                  }
                }
              }
            }
          }
        }
        uVar12 = (uint)*pbVar19;
        if (7 < uVar12) break;
        local_90 = (undefined **)CONCAT71(local_90._1_7_,*pbVar19);
      } while( true );
    }
    lVar13 = *(long *)PTR_DAT_04bb3968;
    if (lVar13 != 0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffffffffff00);
      local_90 = &PTR_FUN_04a67808;
      local_80 = 0x40000000;
      local_7c = 0;
      pcStack_88 = (char *)&local_a0;
      local_78 = param_1;
      if (*(int *)(lVar13 + 0xb88) != 0) {
        lVar18 = (long)*(int *)(lVar13 + 0xb88) << 3;
        puVar17 = *(undefined8 **)(lVar13 + 0xb90);
        pcStack_88 = (char *)&local_a0;
        do {
          (*(code *)*local_90)(&local_90,*puVar17);
          lVar18 = lVar18 + -8;
          puVar17 = puVar17 + 1;
        } while (lVar18 != 0);
        if ((char)local_a0 != '\0') {
LAB_01f694b8:
          *(undefined4 *)(lVar16 + 0x29c) = uVar20;
          uVar11 = 0x76;
LAB_01f694c0:
          FUN_01e6648c(param_1,uVar11,0,1);
          if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) != 0) {
            local_90 = (undefined **)(puVar2 + 0x10);
            pcStack_88 = "ApproachUpdateStop";
            FUN_021c98f0(*(undefined8 *)(param_1 + 8),&local_90,1);
          }
          if (*(char *)(param_1 + 0x13716) != '\0') {
            *(undefined1 *)(param_1 + 0x13716) = 0;
          }
          *(undefined4 *)(param_1 + 0x1367c) = 0xffffffff;
          return;
        }
      }
    }
    *(undefined4 *)(lVar16 + 0x29c) = uVar20;
    iVar8 = *(int *)(param_1 + 0x136bc);
  }
  if (0 < iVar8) {
    return;
  }
LAB_01f69520:
  FUN_01edb5b4(param_1,0x74,0x75);
  return;
}

