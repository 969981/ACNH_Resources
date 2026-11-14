
void FUN_01afbaa4(undefined4 *param_1,undefined2 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  int iVar9;
  char cVar10;
  int *piVar11;
  long lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  long lVar15;
  undefined **local_68;
  undefined2 local_60;
  byte local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  uint *local_58;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  lVar15 = *(long *)puVar4;
  if (lVar15 == 0) {
LAB_01afbbc8:
    uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
    param_1[1] = uVar1;
    return;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01afbbc8;
  local_60 = *param_2;
  local_68 = &PTR_FUN_04a36b50;
  bVar3 = *(byte *)(param_2 + 1);
  local_5d = *(undefined1 *)((long)param_2 + 3);
  puVar13 = (undefined4 *)&local_60;
  local_58 = (uint *)0x0;
  local_5c = *(undefined4 *)(param_2 + 2);
  local_5e = bVar3;
  uVar6 = FUN_0277d6c4(puVar13);
  lVar12 = DAT_0532a768;
  if (*(long *)puVar4 == 0) {
LAB_01afbbf4:
    puVar14 = (uint *)0x0;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01afbbf4;
    uVar6 = FUN_0277d6c4(param_2);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar6) goto LAB_01afbbf4;
    puVar14 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8);
    if (puVar14 != (uint *)0x0) {
      local_58 = puVar14;
    }
  }
  uVar7 = FUN_0277e158(param_2);
  if ((uVar7 & 1) != 0) {
    FUN_01afa2dc(&local_68,*param_3);
    goto LAB_01afbe58;
  }
  uVar7 = FUN_0277e294(param_2);
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  if ((uVar7 & 1) == 0) {
    puVar13 = (undefined4 *)PTR_DAT_04bb37e0;
    goto LAB_01afbe58;
  }
  uVar1 = *param_3;
  if (puVar14 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar2 = *puVar14;
    uVar6 = 0;
    if ((uVar2 != 0) && (puVar14 != (uint *)(ulong)uVar2)) {
      puVar8 = (uint *)((long)puVar14 - (long)(ulong)uVar2);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar6 = puVar8[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar8 + lVar12 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar12 != 0) {
            uVar2 = 0;
            if ((ulong)uVar6 != 0) {
              uVar2 = (uint)((ulong)((long)puVar14 - lVar12) / (ulong)uVar6);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar6 < 0xbd)) goto LAB_01afbccc;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_01afbccc:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) == 0) ||
         (puVar14 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar14 == (uint *)0x0)) ||
        ((uVar6 < *(uint *)(DAT_0532a778 + 200) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) == '\0')))) ||
       (((*puVar14 <= uVar6 || (puVar14[1] == 0)) || ((ushort)puVar14[2] == 0)))) goto LAB_01afbe58;
    iVar9 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar14 = (uint *)((ulong)(puVar14[1] * uVar6 + (uint)(ushort)puVar14[2] * 8 + iVar9) +
                      (long)puVar14);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar6) goto LAB_01afbe58;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar14 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
  }
  if ((puVar14 != (uint *)0x0) && (*puVar14 != 0)) {
    cVar10 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar5 + 0x2c);
        if (-1 < (int)uVar6) {
          if (((char *)((ulong)uVar6 + (long)puVar14) != (char *)0x0) &&
             (*(char *)((ulong)uVar6 + (long)puVar14) != '\0')) {
            local_5e = bVar3 & 0xfc | (byte)uVar1 & 3;
          }
          break;
        }
        if (uVar6 != 0xffffffff) break;
      }
      lVar12 = (long)puVar14 - (ulong)*puVar14;
      if ((*puVar14 == 0) || (lVar12 == 0)) break;
      lVar15 = 0xc;
      if (*(char *)(lVar12 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      if (lVar15 + lVar12 == 0) break;
      uVar7 = (ulong)*(ushort *)(lVar12 + 8);
      *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
      if (uVar7 == 0) break;
      piVar11 = (int *)(lVar15 + lVar12 + 4);
      while (piVar11[-1] != -0x6f43f7ab) {
        piVar11 = piVar11 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_01afbe58;
      }
      iVar9 = 0;
      if (*piVar11 != -1) {
        iVar9 = *piVar11;
      }
      *(int *)(puVar5 + 0x2c) = iVar9;
      if (*puVar14 == 0) break;
    } while( true );
  }
LAB_01afbe58:
  uVar1 = puVar13[1];
  *param_1 = *puVar13;
  param_1[1] = uVar1;
  return;
}

