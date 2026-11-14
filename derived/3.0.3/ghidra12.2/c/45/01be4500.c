
void FUN_01be4500(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  short sVar14;
  uint uVar15;
  undefined8 *puVar16;
  short *psVar17;
  int iStack_5e610;
  int iStack_5e608;
  long alStack_5e604 [2];
  undefined1 auStack_5e5f0 [385904];
  undefined *local_280;
  long local_278 [60];
  uint local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_74;
  long *local_70;
  
  FUN_006f2b00(&local_280,**(undefined4 **)PTR_DAT_04bb3448,1);
  iStack_5e608 = 0;
  local_280 = PTR_DAT_04bc0790 + 0x10;
  if (*param_1 != 0) {
    lVar9 = (long)*param_1 << 3;
    puVar16 = *(undefined8 **)(param_1 + 2);
    sVar14 = 0;
    puVar1 = PTR_DAT_04bb2d80 + 0x10;
    do {
      iStack_5e610 = 0x2d0;
      psVar17 = (short *)*puVar16;
      if (iStack_5e608 < 0x2d0) {
        iVar4 = 0;
        if (0x2cf < iStack_5e608) {
          iVar4 = iStack_5e610;
        }
        lVar5 = (long)(iStack_5e608 - iVar4);
        local_70 = alStack_5e604 + lVar5 * 0x43;
        *(undefined4 *)(alStack_5e604 + lVar5 * 0x43 + 2) = 0;
        *local_70 = (long)(auStack_5e5f0 + lVar5 * 0x218);
        alStack_5e604[lVar5 * 0x43 + 1] = 0x40;
        iStack_5e608 = iStack_5e608 + 1;
      }
      else {
        local_70 = (long *)0x0;
      }
      *(undefined8 *)((long)local_70 + 0xc) = 0;
      local_74 = 0;
      (**(code **)(local_280 + 0x10))(&local_280);
      local_90 = 0;
      uStack_88 = 0;
      local_98 = 0xffffffff;
      local_80 = 0;
      plVar10 = (long *)(psVar17 + 8);
      lVar5 = (**(code **)(*plVar10 + 0x18))(plVar10);
      lVar6 = (**(code **)(*plVar10 + 0x18))(plVar10);
      if (((lVar6 != 0) && (uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10), lVar5 != 0)) &&
         ((int)local_98 < 9)) {
        local_98 = local_98 + 1;
        bVar3 = 9 < local_98;
        uVar11 = (ulong)local_98;
        plVar10 = local_278 + uVar11 * 6;
        if (bVar3) {
          plVar10 = local_278;
        }
        *plVar10 = lVar5;
        plVar10 = local_278 + uVar11 * 6 + 1;
        if (bVar3) {
          plVar10 = local_278 + 1;
        }
        *plVar10 = lVar6 + (uVar7 & 0xffffffff) * 2;
        plVar10 = local_278 + uVar11 * 6 + 2;
        if (bVar3) {
          plVar10 = local_278 + 2;
        }
        *plVar10 = (long)puVar1;
      }
      (**(code **)(local_280 + 0x18))(&local_280);
      FUN_006f1490(&local_280);
      local_70 = (long *)0x0;
      puVar16 = puVar16 + 1;
      lVar9 = lVar9 + -8;
      *psVar17 = sVar14;
      sVar14 = sVar14 + 1;
    } while (lVar9 != 0);
    if (1 < *param_1) {
      lVar9 = *(long *)(param_1 + 2);
      uVar12 = 0;
      uVar15 = *param_1 - 1;
      do {
        if ((int)uVar15 <= (int)uVar12) {
          return;
        }
        uVar11 = (ulong)uVar12;
        uVar13 = (ulong)uVar15;
        uVar7 = uVar11;
        uVar15 = uVar12;
        do {
          puVar16 = (undefined8 *)(lVar9 + uVar7 * 8);
          iVar4 = 0;
          if (0x2cf < *(ushort *)*puVar16) {
            iVar4 = iStack_5e610;
          }
          iVar2 = 0;
          if (0x2cf < *(ushort *)puVar16[1]) {
            iVar2 = iStack_5e610;
          }
          iVar4 = FUN_006f2c10(alStack_5e604 + (long)(int)((uint)*(ushort *)*puVar16 - iVar4) * 0x43
                               ,alStack_5e604 +
                                (long)(int)((uint)*(ushort *)puVar16[1] - iVar2) * 0x43);
          if (0 < iVar4) {
            uVar8 = puVar16[1];
            uVar15 = (uint)uVar7;
            puVar16[1] = *(undefined8 *)(lVar9 + uVar7 * 8);
            *(undefined8 *)(lVar9 + uVar7 * 8) = uVar8;
          }
          uVar7 = uVar7 + 1;
        } while (uVar13 != uVar7);
        if ((int)uVar15 <= (int)uVar12) {
          return;
        }
        uVar7 = (ulong)uVar15;
        uVar12 = uVar15;
        do {
          puVar16 = (undefined8 *)(lVar9 + uVar7 * 8);
          iVar4 = 0;
          if (0x2cf < *(ushort *)*puVar16) {
            iVar4 = iStack_5e610;
          }
          iVar2 = 0;
          if (0x2cf < *(ushort *)puVar16[-1]) {
            iVar2 = iStack_5e610;
          }
          iVar4 = FUN_006f2c10(alStack_5e604 + (long)(int)((uint)*(ushort *)*puVar16 - iVar4) * 0x43
                               ,alStack_5e604 +
                                (long)(int)((uint)*(ushort *)puVar16[-1] - iVar2) * 0x43);
          if (iVar4 < 0) {
            uVar8 = puVar16[-1];
            uVar12 = (uint)uVar7;
            puVar16[-1] = *(undefined8 *)(lVar9 + uVar7 * 8);
            *(undefined8 *)(lVar9 + uVar7 * 8) = uVar8;
          }
          uVar7 = uVar7 - 1;
        } while ((long)uVar11 < (long)uVar7);
      } while (uVar12 != uVar15);
    }
  }
  return;
}

