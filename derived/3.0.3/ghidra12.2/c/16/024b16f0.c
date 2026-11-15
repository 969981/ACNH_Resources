
void FUN_024b16f0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  uint *puVar10;
  short *psVar11;
  short local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  short local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 local_14;
  
  bVar8 = *(byte *)(param_1 + 0x1ee8);
  lVar5 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  bVar9 = *(byte *)(lVar5 + 0x44);
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (bVar8 == bVar9) {
    lVar7 = 0;
  }
  else {
    bVar9 = *(byte *)(lVar5 + 100);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar8 == bVar9) {
      lVar7 = 1;
    }
    else {
      bVar9 = *(byte *)(lVar5 + 0x84);
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (bVar8 == bVar9) {
        lVar7 = 2;
      }
      else {
        bVar9 = *(byte *)(lVar5 + 0xa4);
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        if (bVar8 == bVar9) {
          lVar7 = 3;
        }
        else {
          bVar9 = *(byte *)(lVar5 + 0xc4);
          if (7 < bVar9) {
            bVar9 = 0xff;
          }
          if (bVar8 == bVar9) {
            lVar7 = 4;
          }
          else {
            bVar9 = *(byte *)(lVar5 + 0xe4);
            if (7 < bVar9) {
              bVar9 = 0xff;
            }
            if (bVar8 == bVar9) {
              lVar7 = 5;
            }
            else {
              bVar9 = *(byte *)(lVar5 + 0x104);
              if (7 < bVar9) {
                bVar9 = 0xff;
              }
              if (bVar8 == bVar9) {
                lVar7 = 6;
              }
              else {
                bVar9 = *(byte *)(lVar5 + 0x124);
                if (7 < bVar9) {
                  bVar9 = 0xff;
                }
                if (bVar8 != bVar9) {
                  lVar5 = lVar5 + 0x140;
                  goto LAB_024b1818;
                }
                lVar7 = 7;
              }
            }
          }
        }
      }
    }
  }
  lVar5 = lVar5 + 0x40 + lVar7 * 0x20;
LAB_024b1818:
  uVar4 = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined4 *)(lVar5 + 8) = 0;
  *(undefined4 *)(lVar5 + 0xc) = uVar4;
  puVar2 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x298) == 0) {
    psVar11 = (short *)PTR_DAT_04bb37e0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    psVar11 = (short *)(lVar5 + ((ulong)*(uint *)(lVar5 + 0x10) & 1) * 0x20 + 0x14);
  }
  local_40 = *psVar11;
  local_3e = (undefined1)psVar11[1];
  local_3d = *(undefined1 *)((long)psVar11 + 3);
  local_3c = *(undefined4 *)(psVar11 + 2);
  if (local_40 != -2) {
    local_38 = 0;
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    local_18 = local_40;
    local_16 = local_3e;
    local_15 = local_3d;
    local_14 = local_3c;
    uVar3 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar2 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar5 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(&local_18);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
           (((puVar6 = *(uint **)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8),
             puVar6 != (uint *)0x0 && (uVar3 = *puVar6, uVar3 != 0)) &&
            (puVar6 != (uint *)(ulong)uVar3)))) {
          puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
          if (((*puVar10 != 0) && (uVar3 = puVar10[1], uVar3 != 0)) &&
             ((ulong)(ushort)puVar10[2] != 0)) {
            lVar5 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar10 + lVar5 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar5 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar6 - lVar5) / (ulong)uVar3);
              }
              if (*puVar10 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 0x18)) {
                uVar4 = FUN_024b1b70(param_1);
                FUN_024b19e0(uVar4,0);
              }
            }
          }
        }
      }
    }
  }
  return;
}

