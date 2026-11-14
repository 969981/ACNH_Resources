
ulong FUN_01a4b650(long param_1,undefined4 *param_2,undefined1 param_3)

{
  short sVar1;
  undefined *puVar2;
  undefined *__s;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  uint *puVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  char cVar17;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (param_1 == 0) {
    return 0;
  }
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  puVar3 = PTR_DAT_04bc0510;
  lVar14 = *(long *)puVar2;
  if (lVar14 == 0) {
    return 0;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar4) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 0;
  }
  local_68 = (uint *)0x0;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  local_78 = PTR_DAT_04bc0510 + 0x10;
  uVar4 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar2 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (uVar4 < *(uint *)(lVar14 + 0x1d8)) {
        puVar16 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8);
        if (puVar16 != (uint *)0x0) {
          local_68 = puVar16;
        }
        goto LAB_01a4b770;
      }
    }
  }
  puVar16 = (uint *)0x0;
LAB_01a4b770:
  uVar8 = FUN_01ad7260(&local_78);
  if ((int)uVar8 == 0) {
    return uVar8;
  }
  uVar8 = FUN_01ae6580(&local_78);
  if ((uVar8 & 1) != 0) {
    iVar5 = FUN_01afe130(&local_78);
    __s = PTR_DAT_04bbfe90;
    if (iVar5 == 1) {
      return 0;
    }
    if (puVar16 == (uint *)0x0) {
      return 0;
    }
    uVar4 = *puVar16;
    if (uVar4 != 0) {
      cVar17 = *PTR_DAT_04bbfe88;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *PTR_DAT_04bbfe88 = 1;
          memset(__s,0xff,0x1ac);
          uVar4 = *puVar16;
        }
        else {
          uVar6 = *(uint *)(__s + 0x120);
          if (-1 < (int)uVar6) {
            if ((short *)((ulong)uVar6 + (long)puVar16) == (short *)0x0) {
              return 0;
            }
            sVar1 = *(short *)((ulong)uVar6 + (long)puVar16);
            if ((int)sVar1 == 0xffffffff) {
              return 0;
            }
            if ((*(long **)(param_1 + 0x28) == (long *)0x0) ||
               (puVar9 = (undefined8 *)**(long **)(param_1 + 0x28), puVar9 == (undefined8 *)0x0)) {
              uVar4 = 1;
            }
            else {
              uVar4 = (**(code **)*puVar9)();
              uVar4 = uVar4 ^ 1;
            }
            local_80 = *param_2;
            uStack_7c = param_2[1];
            local_98 = (undefined *)CONCAT71(local_98._1_7_,param_3);
            lVar14 = *(long *)(param_1 + 8);
            lVar15 = *(long *)(param_1 + 0x10);
            FUN_01af193c(&local_80,&local_98,PTR_LAB_04bc0418);
            lVar13 = *(long *)puVar2;
            local_98 = puVar3 + 0x10;
            local_88 = 0;
            local_90 = local_80;
            uStack_8c = uStack_7c;
            uVar6 = FUN_0277d6c4(&local_90);
            if (*(long *)puVar2 != 0) {
              lVar13 = *(long *)(lVar13 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar13 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(&local_80);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
                  lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8);
                  if (lVar13 != 0) {
                    local_88 = lVar13;
                  }
                }
              }
            }
            iVar5 = FUN_01ad7260(&local_98);
            if ((iVar5 == 0) ||
               (puVar10 = (ushort *)FUN_01afd600(&local_98), puVar10 == (ushort *)0x0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = *puVar10 & 7;
              uVar7 = FUN_01ad7260(&local_98);
              if (uVar7 <= uVar6) {
                uVar6 = 0;
              }
            }
            if (((uint)(int)sVar1 >> 4 & 0x1ffffff) < 0x7d) {
              uVar8 = (ulong)(*(uint *)(lVar15 + lVar14 +
                                       (ulong)(((int)sVar1 & 0x1fffffffU) >> 2) * 4) >>
                              (ulong)(uVar6 | ((int)sVar1 & 3U) << 3) & 1);
            }
            else {
              uVar8 = 0;
            }
            if ((uVar4 & 1) != 0) {
              return uVar8;
            }
            if (*(long *)(param_1 + 0x28) == 0) {
              return uVar8;
            }
            puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 8);
            if (puVar9 == (undefined8 *)0x0) {
              return uVar8;
            }
            (**(code **)*puVar9)();
            return uVar8;
          }
          if (uVar6 != 0xffffffff) {
            return 0;
          }
        }
        puVar11 = (uint *)(ulong)uVar4;
        if (puVar11 == (uint *)0x0) {
          return 0;
        }
        if (puVar16 == puVar11) {
          return 0;
        }
        lVar14 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar11)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar16 + (lVar14 - (long)puVar11);
        if (lVar14 == 0) {
          return 0;
        }
        uVar8 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar11));
        *(undefined4 *)(__s + 0x120) = 0xfffffffe;
        if (uVar8 == 0) {
          return 0;
        }
        piVar12 = (int *)(lVar14 + 4);
        while (piVar12[-1] != -0x34a14cc1) {
          piVar12 = piVar12 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar5 = 0;
        if (*piVar12 != -1) {
          iVar5 = *piVar12;
        }
        *(int *)(__s + 0x120) = iVar5;
        uVar4 = *puVar16;
      } while (uVar4 != 0);
      return 0;
    }
  }
  return 0;
}

