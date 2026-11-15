
void FUN_0211c4e4(long param_1,short *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort uVar7;
  uint *puVar8;
  short *psVar9;
  uint *puVar10;
  long lVar11;
  uint local_70;
  undefined4 local_6c;
  undefined *local_68;
  short local_60;
  short local_5e;
  undefined4 local_5c;
  uint *local_58;
  
  if (*(char *)(param_1 + 0xec) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xec) = 1;
  *(short *)(param_1 + 0x17c) = *param_2;
  *(char *)(param_1 + 0x17e) = (char)param_2[1];
  *(undefined1 *)(param_1 + 0x17f) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 2);
  *(short *)(param_1 + 0x184) = param_2[4];
  *(char *)(param_1 + 0x186) = (char)param_2[5];
  *(undefined1 *)(param_1 + 0x187) = *(undefined1 *)((long)param_2 + 0xb);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 6);
  *(short *)(param_1 + 0x18c) = param_2[8];
  *(char *)(param_1 + 0x18e) = (char)param_2[9];
  *(undefined1 *)(param_1 + 399) = *(undefined1 *)((long)param_2 + 0x13);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 10);
  psVar9 = param_2 + 0xc;
  *(short *)(param_1 + 0x194) = *psVar9;
  *(char *)(param_1 + 0x196) = (char)param_2[0xd];
  *(undefined1 *)(param_1 + 0x197) = *(undefined1 *)((long)param_2 + 0x1b);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0xe);
  *(short *)(param_1 + 0x19c) = param_2[0x10];
  *(char *)(param_1 + 0x19e) = (char)param_2[0x11];
  *(undefined1 *)(param_1 + 0x19f) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x12);
  *(short *)(param_1 + 0x1a4) = param_2[0x14];
  *(char *)(param_1 + 0x1a6) = (char)param_2[0x15];
  *(undefined1 *)(param_1 + 0x1a7) = *(undefined1 *)((long)param_2 + 0x2b);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x16);
  *(short *)(param_1 + 0x1ac) = param_2[0x18];
  *(char *)(param_1 + 0x1ae) = (char)param_2[0x19];
  *(undefined1 *)(param_1 + 0x1af) = *(undefined1 *)((long)param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1a);
  *(short *)(param_1 + 0x1b4) = param_2[0x1c];
  *(char *)(param_1 + 0x1b6) = (char)param_2[0x1d];
  *(undefined1 *)(param_1 + 0x1b7) = *(undefined1 *)((long)param_2 + 0x3b);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1e);
  *(short *)(param_1 + 0x1bc) = param_2[0x20];
  *(char *)(param_1 + 0x1be) = (char)param_2[0x21];
  *(undefined1 *)(param_1 + 0x1bf) = *(undefined1 *)((long)param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x22);
  puVar3 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x130) != 0) {
    return;
  }
  local_60 = *psVar9;
  if (local_60 != -2) {
    local_5e = param_2[0xd];
    local_58 = (uint *)0x0;
    local_5c = *(undefined4 *)(param_2 + 0xe);
    local_68 = PTR_DAT_04bc0510 + 0x10;
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar3 == 0) {
LAB_0211c71c:
      puVar10 = (uint *)0x0;
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0211c71c;
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(psVar9);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (*(uint *)(lVar11 + 0x1d8) <= uVar4) goto LAB_0211c71c;
      puVar10 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
      if (puVar10 != (uint *)0x0) {
        local_58 = puVar10;
      }
    }
    iVar5 = FUN_0277d6c4(&local_60);
    if (iVar5 != 0x3920) {
      local_70 = 0xac;
      if (puVar10 == (uint *)0x0) {
        uVar7 = 0xbc;
      }
      else {
        uVar4 = *puVar10;
        uVar7 = 0;
        if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
          uVar7 = 0;
          if (*puVar8 != 0) {
            uVar4 = puVar8[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar8 + lVar11 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar11 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   uVar7 < 0xbd)) goto LAB_0211c7d4;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_0211c7d4:
      if ((uVar7 == 0xac) &&
         (lVar11 = FUN_00ede184(*(undefined8 *)PTR_DAT_04bb4138,param_1 + 0xf8), lVar11 != 0)) {
        puVar6 = (ushort *)FUN_0079e910(lVar11,0x14,0x870f1e29,*(undefined8 *)PTR_DAT_04bb6960);
        if (puVar6 == (ushort *)0x0) {
          uVar7 = 0xfffe;
        }
        else {
          uVar7 = *puVar6;
        }
        local_70 = (uint)uVar7;
        local_6c = 0;
        FUN_0277d4ac(&local_70);
        *(uint *)(param_1 + 0x194) = local_70;
        *(undefined4 *)(param_1 + 0x198) = local_6c;
      }
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  local_60 = *param_2;
  if (local_60 == -2) {
    return;
  }
  local_5e = param_2[1];
  local_58 = (uint *)0x0;
  local_5c = *(undefined4 *)(param_2 + 2);
  local_68 = PTR_DAT_04bc0510 + 0x10;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar10 != (uint *)0x0)) {
        uVar4 = *puVar10;
        if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
          if ((*puVar8 != 0) && ((uVar4 = puVar8[1], uVar4 != 0 && ((ulong)(ushort)puVar8[2] != 0)))
             ) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar8 + lVar11 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar11 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if (((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                  (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                  uVar7 < 0xbd)) && (uVar7 == 0xaf)) {
                return;
              }
            }
          }
        }
        uVar7 = 0;
        uVar4 = *puVar10;
        if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
          uVar7 = 0;
          if (*puVar8 != 0) {
            uVar4 = puVar8[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar8 + lVar11 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar11 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   uVar7 < 0xbd)) goto LAB_0211ca38;
              }
            }
            uVar7 = 0;
          }
        }
        goto LAB_0211ca38;
      }
    }
  }
  uVar7 = 0xbc;
LAB_0211ca38:
  if (uVar7 == 0xac) {
    uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)PTR_DAT_04bb37e0;
    *(undefined4 *)(param_1 + 0x180) = uVar2;
  }
  return;
}

