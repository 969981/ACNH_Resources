
/* WARNING: Removing unreachable block (ram,0x0285078c) */

void FUN_02850410(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint *puVar9;
  short sVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  undefined *local_58;
  uint local_50;
  undefined4 uStack_4c;
  byte local_48;
  undefined4 local_28;
  uint local_24;
  
  if (DAT_055c1b60 == &DAT_055c1b58) {
LAB_028504b8:
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = DAT_055c1b60 + -8;
    sVar10 = 0;
    puVar13 = DAT_055c1b60;
    puVar14 = puVar12;
    do {
      puVar8 = DAT_055c1b60;
      if (*(int *)(puVar14 + 7) == 0x6622bd46) {
        if (sVar10 != 0) goto LAB_02850490;
        goto LAB_028504c0;
      }
      puVar13 = (undefined8 *)puVar13[1];
      sVar10 = sVar10 + 1;
      puVar14 = puVar13 + -8;
    } while (puVar13 != &DAT_055c1b58);
    sVar10 = -1;
LAB_02850490:
    do {
      puVar8 = (undefined8 *)puVar8[1];
      sVar10 = sVar10 + -1;
    } while (puVar8 != &DAT_055c1b58 && sVar10 != 0);
    puVar12 = puVar8 + -8;
    if (puVar12 == &DAT_055c1b18) goto LAB_028504b8;
  }
LAB_028504c0:
  lVar16 = 0;
  while (*(int *)(PTR_DAT_04bbbf90 + lVar16 * 4 + 8) != *(int *)(puVar12 + 7)) {
    if (0x37 < (uint)lVar16) {
      lVar16 = 0;
      puVar6 = PTR_DAT_04bbbf90;
      goto LAB_02850514;
    }
    if (*(int *)(PTR_DAT_04bbbf90 + lVar16 * 4 + 0xc) == *(int *)(puVar12 + 7)) {
      lVar16 = lVar16 + 1;
      break;
    }
    lVar16 = lVar16 + 2;
  }
  puVar6 = PTR_DAT_04bbbf90 + lVar16 * 4;
LAB_02850514:
  local_58 = PTR_DAT_04bbfe68 + 0x10;
  uStack_4c = *(undefined4 *)(puVar6 + 8);
  uVar15 = (uint)lVar16;
  local_50 = uVar15;
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  local_60 = (int)*(short *)((long)param_1 + 0x36);
  iStack_5c = (int)*(short *)(param_1 + 7);
  local_68 = PTR_DAT_04bb2010 + 0x10;
  FUN_01a5033c(&local_70,&local_58,0,&local_68,0);
  puVar6 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_70);
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) goto LAB_028507a0;
  lVar17 = *(long *)(lVar17 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
  if ((*(uint *)(lVar17 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_028507a0;
  local_78 = (uint *)0x0;
  local_88 = PTR_DAT_04bc0510 + 0x10;
  local_80 = local_70;
  uStack_7c = uStack_6c;
  uVar4 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar6 == 0) {
LAB_028506ec:
    local_28 = 0xbc;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_028506ec;
    lVar16 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_70);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar4) ||
       (puVar9 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8), puVar9 == (uint *)0x0
       )) goto LAB_028506ec;
    local_28 = 0;
    uVar4 = *puVar9;
    local_78 = puVar9;
    if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
      puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
      local_28 = 0;
      if (*puVar11 != 0) {
        uVar4 = puVar11[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar16 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar11 + lVar16 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar16 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar9 - lVar16) / (ulong)uVar4);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_28 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2)
               , local_28 < 0xbd)) goto LAB_028506f8;
          }
        }
        local_28 = 0;
      }
    }
  }
LAB_028506f8:
  local_24 = 0x92;
  if ((local_28 != 0x92) || (uVar5 = FUN_01a4f798(&local_58,0,&local_68), (uVar5 & 1) == 0))
  goto LAB_028507a0;
  if (uVar15 == 0) {
    local_24 = 0;
LAB_02850748:
    if (local_24 == 0) {
      plVar7 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    }
    else {
      plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar7 = plVar1 + local_24;
      if (0x38 < local_24) {
        plVar7 = plVar1;
      }
    }
    lVar16 = *plVar7;
  }
  else {
    local_28 = uVar15;
    if (uVar15 != 0) {
      local_24 = uVar15;
      goto LAB_02850748;
    }
    lVar16 = 0;
  }
  local_24 = 0;
  if (*(long *)(lVar16 + 0xd0) != 0) {
    FUN_012e5af4(*(long *)(lVar16 + 0xd0),&local_68);
  }
LAB_028507a0:
  FUN_0284a220();
  bVar3 = *(byte *)((long)param_1 + 0x2c);
  if ((bVar3 < 10) &&
     (uVar4 = (uint)(char)bVar3, (&DAT_053fee41)[((long)(char)bVar3 & 0xffffffffU) * 0xba0] != '\0')
     ) {
    if (((&DAT_053fede8)[(ulong)uVar4 * 0x174] == 0) ||
       (*(int *)((&DAT_053fede8)[(ulong)uVar4 * 0x174] + 4) != 0x13)) {
      local_24 = (&DAT_053feddc)[(ulong)uVar4 * 0x2e8];
      if (local_24 == 0x13) {
        (&DAT_053feddc)[(ulong)uVar4 * 0x2e8] = 0x22;
        lVar16 = (ulong)uVar4 * 0xba0;
        *(undefined4 *)(&DAT_053fedd8 + lVar16) = 0x1d0005;
        *(undefined2 *)(&DAT_053fede0 + lVar16) = 0;
        *(undefined1 *)((long)&DAT_053fede1 + lVar16 + 1) = 0;
        local_28 = CONCAT13(local_28._3_1_,0x10000);
        uVar5 = (ulong)local_88 >> 0x30;
        local_88 = (undefined *)CONCAT26((ushort)uVar5 & 0xff00,0xff0000000000);
        local_28._0_2_ = CONCAT11(0x13,bVar3);
        if (-1 < DAT_053d0e00) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e00,&local_88,&local_28,3,0);
        }
      }
    }
    else {
      FUN_0214eb90(&DAT_053febf8 + (ulong)uVar4 * 0xba0,(long)(char)bVar3,1);
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)((long)param_1 + 0x1e) = 0x101;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 **)((long)param_1 + 0x24) = &LAB_01010000;
  *(undefined1 *)((long)param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0xff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x2f) = 0;
  *(undefined1 *)((long)param_1 + 0x2d) = 3;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 6) = 5;
  return;
}

