
/* WARNING: Removing unreachable block (ram,0x0253b2f8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffee4 : 0x0253b084 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0253afa0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  byte local_130;
  undefined2 uStack_12f;
  undefined1 uStack_12d;
  int iStack_12c;
  undefined1 uStack_128;
  undefined2 local_127;
  int local_125;
  undefined1 local_121;
  uint uStack_120;
  undefined2 uStack_11c;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  
  sVar7 = *(short *)PTR_DAT_04bb6298;
  if (sVar7 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
    if (0xff < (uint)(int)sVar7) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar1 + 4) & 1) != 0) && (iVar5 = *(int *)(param_1 + 0x23b0), 0 < iVar5)) {
      lVar17 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      puVar3 = PTR_DAT_04bb3780 + 0x10;
      do {
        local_80 = 0.0;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_11a = 0;
        uStack_119 = 0;
        local_90 = 0;
        local_88 = 0;
        local_130 = (byte)puVar1;
        uStack_12f = (undefined2)((ulong)puVar1 >> 8);
        uStack_12d = (undefined1)((ulong)puVar1 >> 0x18);
        iStack_12c = (int)((ulong)puVar1 >> 0x20);
        uStack_128 = SUB81(puVar2,0);
        local_127 = (undefined2)((ulong)puVar2 >> 8);
        local_125 = (int)((ulong)puVar2 >> 0x18);
        local_121 = (undefined1)((ulong)puVar2 >> 0x38);
        iVar9 = 0;
        if (*(int *)(param_1 + 0x23a8) <= (int)lVar17 + *(int *)(param_1 + 0x23ac)) {
          iVar9 = *(int *)(param_1 + 0x23a8);
        }
        local_110 = 0;
        pbVar4 = (byte *)((*(long *)(param_1 + 0x23a0) - (long)iVar9) +
                         *(int *)(param_1 + 0x23ac) + lVar17);
        local_a0 = 0;
        bVar6 = *pbVar4;
        if (7 < bVar6) {
          bVar6 = 0xff;
        }
        local_118 = puVar2;
        local_b0 = puVar1;
        puStack_a8 = puVar2;
        puStack_98 = puVar2;
        uVar11 = FUN_00924fe8(&local_130,&local_b0,(int)(char)bVar6);
        if ((uVar11 & 1) != 0) {
          local_80 = ((float)local_a0._4_4_ * 5.0 + (float)local_90._4_4_ * 5.0 + 5.0) * 0.5;
          local_88 = CONCAT44(local_88._4_4_,
                              ((float)(int)local_a0 * 5.0 + (float)(int)local_90 * 5.0 + 5.0) * 0.5)
          ;
          fVar18 = (float)FUN_016e026c(0,&local_88,0,0);
          local_88._4_4_ = fVar18;
          if (*pbVar4 < 8) {
            uVar8 = FUN_02582d8c(pbVar4,1);
            if (((uVar8 < 8) &&
                (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) &&
               (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0')) {
              puVar15 = (uint *)PTR_DAT_04bb3238;
              if (((ulong)*pbVar4 < 8) && (DAT_054f5738 != 0)) {
                puVar15 = (uint *)(DAT_054f5738 + (ulong)*pbVar4 * 4 + 0xde8);
              }
              lVar13 = *(long *)PTR_DAT_04bb27c0;
              if (lVar13 == 0) goto LAB_0253b144;
              uVar8 = *puVar15;
              if (((uVar8 == 0) ||
                  (plVar16 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                       ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0))
                 || (((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0 ||
                     (*(uint *)(plVar16 + 0x46) != uVar8)))) {
                plVar16 = (long *)0x0;
              }
              if ((*(int *)(lVar13 + 0x288) == 1) || (*(int *)(lVar13 + 0x288) == -1)) {
                plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar13 = *(long *)PTR_DAT_04bb27c0;
                iVar9 = (**(code **)(*plVar12 + 0x60))();
                if (iVar9 < 0x11) {
                  uVar8 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_0253b3b8;
                  uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_0253b3b8:
                uVar8 = 0;
              }
              if (plVar16 != (long *)0x0) {
                if (((*PTR_DAT_04bb3778 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar9 != 0)) {
                  *(undefined **)PTR_DAT_04bb3770 = puVar3;
                  __cxa_guard_release(PTR_DAT_04bb3778);
                }
                uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3770);
                if ((uVar8 & uVar10) == 1) {
                  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,5);
                  lVar14 = plVar16[0xe];
                  uVar8 = 0;
                  lVar13 = 0;
                  if (lVar14 != 0) {
                    uVar8 = 0;
                    if (*(uint *)(lVar14 + 0x280) < 0x149) {
                      uVar8 = *(uint *)(lVar14 + 0x280);
                    }
                    lVar13 = lVar14 + 0x278;
                  }
                  local_130 = (byte)uVar8;
                  uStack_12f = (undefined2)(uVar8 >> 8);
                  uStack_12d = (undefined1)(uVar8 >> 0x18);
                  if (uVar8 != 5) {
                    local_130 = 5;
                    uStack_12f = 0;
                    uStack_12d = 0;
                    plVar16[0x318] = plVar16[0x328];
                    plVar16[0x318] = 0;
                    plVar16[0x319] = plVar16[0x329];
                    plVar16[0x319] = 0;
                    plVar16[0x31a] = plVar16[0x32a];
                    plVar16[0x31a] = 0;
                    *(short *)(plVar16 + 0x31b) = (short)plVar16[0x32b];
                    plVar16[0x314] = plVar16[0x324];
                    plVar16[0x314] = 0;
                    plVar16[0x315] = plVar16[0x325];
                    plVar16[0x315] = 0;
                    plVar16[0x316] = plVar16[0x326];
                    plVar16[0x316] = 0;
                    plVar16[0x317] = plVar16[0x327];
                    plVar16[0x317] = 0;
                    plVar16[0x310] = plVar16[800];
                    plVar16[0x310] = 0;
                    plVar16[0x311] = plVar16[0x321];
                    plVar16[0x311] = 0;
                    plVar16[0x312] = plVar16[0x322];
                    plVar16[0x312] = 0;
                    plVar16[0x313] = plVar16[0x323];
                    plVar16[0x313] = 0;
                    plVar16[0x30c] = plVar16[0x31c];
                    plVar16[0x30d] = plVar16[0x31d];
                    plVar16[0x30e] = plVar16[0x31e];
                    plVar16[0x30f] = plVar16[799];
                    FUN_03ebb160(lVar13,5);
                  }
                  (**(code **)(*(long *)plVar16[0xd] + 0x100))((long *)plVar16[0xd],&local_88);
                  (**(code **)(*(long *)plVar16[0xd] + 0x160))
                            ((long *)plVar16[0xd],PTR_DAT_04bb2ce8);
                }
              }
              goto LAB_0253b144;
            }
          }
          local_130 = *PTR_DAT_04bb32e0;
          uStack_12f = 0;
          uStack_11c = 0;
          if (7 < local_130) {
            local_130 = 0xff;
          }
          local_7c = 1;
          local_118 = (undefined *)CONCAT53((int5)((ulong)local_118 >> 0x18),1);
          uStack_11a = 0;
          local_b8 = 0;
          iVar9 = (int)(local_88._4_4_ * 4.0);
          uStack_119 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_110 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_121 = 0;
          uStack_120 = uStack_120 & 0xffffff00;
          local_108 = 0;
          uStack_100 = 0;
          if (0x7ffe < iVar9) {
            iVar9 = 0x7fff;
          }
          local_b0 = (undefined *)CONCAT35((int3)((ulong)local_b0 >> 0x28),0x100000000);
          if (iVar9 < -0x7fff) {
            iVar9 = -0x8000;
          }
          local_127 = (undefined2)iVar9;
          uStack_12d = 5;
          iStack_12c = (int)((float)local_88 * 999.99994) << 8;
          uStack_128 = (undefined1)((uint)(int)((float)local_88 * 999.99994) >> 0x18);
          local_125 = (int)(local_80 * 999.99994);
          local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x1010001);
          FUN_02558ce0(pbVar4,&local_130,&local_b0);
        }
LAB_0253b144:
        lVar17 = lVar17 + 1;
      } while (iVar5 != (int)lVar17);
      *(undefined8 *)(param_1 + 0x23ac) = 0;
    }
  }
  return;
}

