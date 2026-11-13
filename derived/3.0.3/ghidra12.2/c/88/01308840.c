
/* WARNING: Removing unreachable block (ram,0x01308cb8) */
/* WARNING: Removing unreachable block (ram,0x01308c70) */
/* WARNING: Removing unreachable block (ram,0x01308be0) */
/* WARNING: Removing unreachable block (ram,0x01308bbc) */
/* WARNING: Removing unreachable block (ram,0x01308b90) */
/* WARNING: Removing unreachable block (ram,0x01308b68) */
/* WARNING: Removing unreachable block (ram,0x01308b7c) */
/* WARNING: Removing unreachable block (ram,0x01308b9c) */
/* WARNING: Removing unreachable block (ram,0x01308bcc) */
/* WARNING: Removing unreachable block (ram,0x01308bf0) */
/* WARNING: Removing unreachable block (ram,0x01308c80) */
/* WARNING: Removing unreachable block (ram,0x01308cc8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb6 : 0x01308c90 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01308840(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  uint *puVar20;
  ushort uVar21;
  int iVar22;
  int iVar23;
  undefined2 *puVar24;
  char cVar25;
  ushort *puVar26;
  uint local_4c;
  undefined8 local_48;
  undefined1 local_40;
  uint local_3c;
  ushort local_38 [2];
  uint local_34;
  
  puVar16 = PTR_DAT_04bbc2f8;
  sVar8 = *(short *)(param_1 + 0x13fc);
  if (*(short *)(param_1 + 0x1400) <= *(short *)(param_1 + 0x13fc)) {
    sVar8 = *(short *)(param_1 + 0x1400);
  }
  sVar9 = *(short *)(param_1 + 0x13fe);
  if (*(short *)(param_1 + 0x1402) <= *(short *)(param_1 + 0x13fe)) {
    sVar9 = *(short *)(param_1 + 0x1402);
  }
  iVar22 = *(int *)(param_3 + 8);
  iVar23 = *(int *)(param_3 + 0xc);
  puVar26 = (ushort *)
            (param_1 + (ulong)(uint)((iVar23 - sVar9) * 3 + (iVar22 - sVar8)) * 0xe + 0x1404);
  if (2 < (uint)(iVar23 - sVar9) || 2 < (uint)(iVar22 - sVar8)) {
    puVar26 = (ushort *)PTR_DAT_04bbc2f8;
  }
  puVar4 = puVar26 + (ulong)*(uint *)(param_1 + 0x13c8) * 3;
  if (1 < *(uint *)(param_1 + 0x13c8)) {
    puVar4 = puVar26;
  }
  uVar6 = *puVar4;
  uVar21 = puVar4[1];
  local_3c = 0;
  local_4c = (uint)(byte)puVar4[2];
  if (uVar6 < 0x400) {
    lVar19 = param_2 + 8 + (ulong)local_4c * 0x88;
    if (3 < local_4c) {
      lVar19 = param_2 + 8;
    }
    if ((*(uint *)(lVar19 + ((ulong)(uVar6 >> 3) & 0x1ffc) + 8) >> (ulong)(uVar6 & 0x1f) & 1) != 0)
    {
      local_3c = local_4c;
      local_38[0] = uVar6;
      goto LAB_01308adc;
    }
  }
  uVar17 = FUN_013113f4(param_2,local_38,&local_3c,param_1 + 0x2738);
  puVar15 = PTR_DAT_04bbbde0;
  puVar14 = PTR_DAT_04bbbdd8;
  if ((uVar17 & 1) == 0) {
    return 0;
  }
  lVar19 = *(long *)PTR_DAT_04bb27a8;
  uVar1 = (uint)local_38[0] - (uint)*(ushort *)(lVar19 + 0x408);
  if (((uVar1 < *(uint *)(lVar19 + 1000)) &&
      (puVar20 = *(uint **)(*(long *)(lVar19 + 0x3f0) + (long)(int)uVar1 * 8),
      puVar20 != (uint *)0x0)) && (uVar1 = *puVar20, uVar1 != 0)) {
    cVar25 = *PTR_DAT_04bbbdd8;
    do {
      if (cVar25 == '\0') {
        cVar25 = '\x01';
        *(undefined8 *)puVar15 = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 8) = 0xffffffffffffffff;
        *puVar14 = 1;
        *(undefined8 *)(puVar15 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar15 + 0x98) = 0xffffffffffffffff;
        uVar1 = *puVar20;
      }
      else {
        uVar10 = *(uint *)(puVar15 + 0x20);
        if (-1 < (int)uVar10) {
          if ((ushort *)((ulong)uVar10 + (long)puVar20) == (ushort *)0x0) goto LAB_01308a98;
          lVar19 = (ulong)*(ushort *)((ulong)uVar10 + (long)puVar20) + 1;
          break;
        }
        if (uVar10 != 0xffffffff) goto LAB_01308a98;
      }
      puVar13 = (uint *)(ulong)uVar1;
      if (puVar13 == (uint *)0x0) goto LAB_01308a98;
      lVar19 = 1;
      if (puVar20 == puVar13) break;
      lVar19 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar13)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)puVar20 + (lVar19 - (long)puVar13);
      if (lVar19 == 0) goto LAB_01308a98;
      uVar17 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar13));
      *(undefined4 *)(puVar15 + 0x20) = 0xfffffffe;
      if (uVar17 == 0) goto LAB_01308a98;
      piVar18 = (int *)(lVar19 + 4);
      while (piVar18[-1] != -0x38cc5589) {
        piVar18 = piVar18 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto LAB_01308a98;
      }
      lVar19 = 1;
      iVar22 = 0;
      if (*piVar18 != -1) {
        iVar22 = *piVar18;
      }
      *(int *)(puVar15 + 0x20) = iVar22;
      uVar1 = *puVar20;
    } while (uVar1 != 0);
  }
  else {
LAB_01308a98:
    lVar19 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x2738);
  *(undefined4 *)(param_1 + 0x2738) = *(undefined4 *)(param_1 + 0x273c);
  uVar1 = uVar1 ^ uVar1 << 0xb;
  *(undefined4 *)(param_1 + 0x273c) = *(undefined4 *)(param_1 + 0x2740);
  uVar10 = *(uint *)(param_1 + 0x2744);
  *(uint *)(param_1 + 0x2740) = uVar10;
  uVar1 = uVar1 >> 8 ^ uVar10 >> 0x13 ^ uVar1 ^ uVar10;
  *(uint *)(param_1 + 0x2744) = uVar1;
  uVar21 = (ushort)(lVar19 * (ulong)uVar1 >> 0x20);
  iVar22 = *(int *)(param_3 + 8);
  iVar23 = *(int *)(param_3 + 0xc);
LAB_01308adc:
  sVar8 = *(short *)(param_1 + 0x84);
  if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
    sVar8 = *(short *)(param_1 + 0x88);
  }
  sVar9 = *(short *)(param_1 + 0x86);
  if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
    sVar9 = *(short *)(param_1 + 0x8a);
  }
  uVar10 = iVar22 - sVar8;
  uVar11 = iVar23 - sVar9;
  uVar1 = uVar11 * 3 + uVar10;
  puVar24 = (undefined2 *)(param_1 + 0x8c + (ulong)uVar1 * 0xe);
  local_48 = 0xffff0000;
  local_4c = 0xffff;
  puVar26 = (ushort *)((ulong)&local_4c | 2);
  puVar2 = puVar24;
  if (2 < uVar10 || 2 < uVar11) {
    puVar2 = (undefined2 *)puVar16;
  }
  local_40 = *(undefined1 *)(puVar2 + 6);
  uVar7 = puVar2[1];
  uVar12 = *(undefined4 *)(puVar2 + 3);
  uVar5 = *(undefined1 *)(puVar2 + 5);
  puVar20 = (uint *)((long)&local_4c + (ulong)param_4 * 6);
  if (1 < param_4) {
    puVar20 = &local_4c;
  }
  local_34 = param_4;
  *(ushort *)puVar20 = local_38[0];
  puVar3 = (undefined8 *)((long)&local_48 + (ulong)local_34 * 6);
  if (1 < local_34) {
    puVar3 = &local_48;
  }
  local_34 = param_4;
  *(undefined1 *)puVar3 = (undefined1)local_3c;
  puVar4 = puVar26 + (ulong)local_34 * 3;
  if (1 < local_34) {
    puVar4 = puVar26;
  }
  *puVar4 = uVar21;
  if (2 >= uVar10 && 2 >= uVar11) {
    local_34 = 1;
    *puVar24 = 0xffff;
    puVar24[1] = uVar7;
    *(undefined1 *)(puVar24 + 2) = 0;
    local_48._4_2_ = (undefined2)((uint)uVar12 >> 0x10);
    local_48._2_2_ = (undefined2)uVar12;
    puVar24[4] = local_48._4_2_;
    puVar24[3] = local_48._2_2_;
    *(undefined1 *)(puVar24 + 5) = uVar5;
    *(undefined1 *)(param_1 + 0x8c + (ulong)uVar1 * 0xe + 0xc) = local_40;
  }
  return 1;
}

