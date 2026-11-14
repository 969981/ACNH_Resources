
void FUN_01be3330(int *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  short sVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  int iStack_2f450;
  int iStack_2f448;
  long alStack_2f444 [2];
  undefined1 auStack_2f430 [192944];
  undefined *local_280;
  long local_278 [60];
  uint local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_74;
  long *local_70;
  
  FUN_006f2b00(&local_280,**(undefined4 **)PTR_DAT_04bb3448,1);
  iStack_2f448 = 0;
  local_280 = PTR_DAT_04bc0790 + 0x10;
  if (*param_1 != 0) {
    lVar9 = (long)*param_1 << 3;
    plVar15 = *(long **)(param_1 + 2);
    sVar13 = 0;
    puVar1 = PTR_DAT_04bb2d80 + 0x10;
    do {
      iStack_2f450 = 0x168;
      lVar16 = *plVar15;
      if (iStack_2f448 < 0x168) {
        iVar5 = 0;
        if (0x167 < iStack_2f448) {
          iVar5 = iStack_2f450;
        }
        lVar6 = (long)(iStack_2f448 - iVar5);
        local_70 = alStack_2f444 + lVar6 * 0x43;
        *(undefined4 *)(alStack_2f444 + lVar6 * 0x43 + 2) = 0;
        *local_70 = (long)(auStack_2f430 + lVar6 * 0x218);
        alStack_2f444[lVar6 * 0x43 + 1] = 0x40;
        iStack_2f448 = iStack_2f448 + 1;
      }
      else {
        local_70 = (long *)0x0;
      }
      *(undefined8 *)((long)local_70 + 0xc) = 0;
      plVar2 = (long *)(lVar16 + 0x170);
      local_74 = 0;
      (**(code **)(local_280 + 0x10))(&local_280);
      local_90 = 0;
      uStack_88 = 0;
      local_98 = 0xffffffff;
      local_80 = 0;
      lVar6 = (**(code **)(*(long *)(lVar16 + 0x170) + 0x18))(plVar2);
      lVar7 = (**(code **)(*(long *)(lVar16 + 0x170) + 0x18))(plVar2);
      if (((lVar7 != 0) && (uVar8 = (**(code **)(*plVar2 + 0x20))(plVar2), lVar6 != 0)) &&
         ((int)local_98 < 9)) {
        local_98 = local_98 + 1;
        bVar4 = 9 < local_98;
        uVar10 = (ulong)local_98;
        plVar2 = local_278 + uVar10 * 6;
        if (bVar4) {
          plVar2 = local_278;
        }
        *plVar2 = lVar6;
        plVar2 = local_278 + uVar10 * 6 + 1;
        if (bVar4) {
          plVar2 = local_278 + 1;
        }
        *plVar2 = lVar7 + (uVar8 & 0xffffffff) * 2;
        plVar2 = local_278 + uVar10 * 6 + 2;
        if (bVar4) {
          plVar2 = local_278 + 2;
        }
        *plVar2 = (long)puVar1;
      }
      (**(code **)(local_280 + 0x18))(&local_280);
      FUN_006f1490(&local_280);
      local_70 = (long *)0x0;
      plVar15 = plVar15 + 1;
      lVar9 = lVar9 + -8;
      *(short *)(lVar16 + 2) = sVar13;
      sVar13 = sVar13 + 1;
    } while (lVar9 != 0);
    if (1 < *param_1) {
      lVar9 = *(long *)(param_1 + 2);
      uVar11 = 0;
      uVar14 = *param_1 - 1;
      do {
        if ((int)uVar14 <= (int)uVar11) {
          return;
        }
        uVar10 = (ulong)uVar11;
        uVar12 = (ulong)uVar14;
        uVar8 = uVar10;
        uVar14 = uVar11;
        do {
          plVar15 = (long *)(lVar9 + uVar8 * 8);
          iVar5 = 0;
          if (0x167 < *(ushort *)(*plVar15 + 2)) {
            iVar5 = iStack_2f450;
          }
          iVar3 = 0;
          if (0x167 < *(ushort *)(plVar15[1] + 2)) {
            iVar3 = iStack_2f450;
          }
          iVar5 = FUN_006f2c10(alStack_2f444 +
                               (long)(int)((uint)*(ushort *)(*plVar15 + 2) - iVar5) * 0x43,
                               alStack_2f444 +
                               (long)(int)((uint)*(ushort *)(plVar15[1] + 2) - iVar3) * 0x43);
          if (0 < iVar5) {
            lVar16 = plVar15[1];
            uVar14 = (uint)uVar8;
            plVar15[1] = *(long *)(lVar9 + uVar8 * 8);
            *(long *)(lVar9 + uVar8 * 8) = lVar16;
          }
          uVar8 = uVar8 + 1;
        } while (uVar12 != uVar8);
        if ((int)uVar14 <= (int)uVar11) {
          return;
        }
        uVar8 = (ulong)uVar14;
        uVar11 = uVar14;
        do {
          plVar15 = (long *)(lVar9 + uVar8 * 8);
          iVar5 = 0;
          if (0x167 < *(ushort *)(*plVar15 + 2)) {
            iVar5 = iStack_2f450;
          }
          iVar3 = 0;
          if (0x167 < *(ushort *)(plVar15[-1] + 2)) {
            iVar3 = iStack_2f450;
          }
          iVar5 = FUN_006f2c10(alStack_2f444 +
                               (long)(int)((uint)*(ushort *)(*plVar15 + 2) - iVar5) * 0x43,
                               alStack_2f444 +
                               (long)(int)((uint)*(ushort *)(plVar15[-1] + 2) - iVar3) * 0x43);
          if (iVar5 < 0) {
            lVar16 = plVar15[-1];
            uVar11 = (uint)uVar8;
            plVar15[-1] = *(long *)(lVar9 + uVar8 * 8);
            *(long *)(lVar9 + uVar8 * 8) = lVar16;
          }
          uVar8 = uVar8 - 1;
        } while ((long)uVar10 < (long)uVar8);
      } while (uVar11 != uVar14);
    }
  }
  return;
}

