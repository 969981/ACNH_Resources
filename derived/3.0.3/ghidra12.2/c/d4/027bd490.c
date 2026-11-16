
int FUN_027bd490(long param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int local_88;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined8 local_70;
  uint local_64;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_88 = 0;
  local_64 = 0x6a;
  uVar9 = 0;
  param_1 = param_1 + 0x1004;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  do {
    puVar1 = (undefined2 *)(param_1 + ((long)((ulong)uVar9 << 0x20) >> 0x1d));
    uVar4 = FUN_0277d6c4(puVar1);
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_78 = *puVar1;
        lVar5 = param_1 + (long)(int)uVar9 * 8;
        local_70 = 0;
        local_76 = *(undefined2 *)(lVar5 + 2);
        local_74 = *(undefined4 *)(lVar5 + 4);
        uVar4 = FUN_0277d6c4(&local_78);
        lVar5 = *(long *)puVar3;
        if (lVar5 == 0) {
LAB_027bd688:
          uVar4 = 0xbc;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_027bd688;
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar1);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          lVar5 = *(long *)puVar3;
          if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
             (puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
             puVar6 == (uint *)0x0)) goto LAB_027bd688;
          uVar2 = *puVar6;
          uVar4 = 0;
          if ((uVar2 != 0) && (puVar6 != (uint *)(ulong)uVar2)) {
            puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
            uVar4 = 0;
            if (*puVar7 != 0) {
              uVar4 = puVar7[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
                lVar8 = 0xc;
                if (*(char *)((long)puVar7 + 10) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
                if (lVar8 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar4);
                  }
                  if (*puVar7 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar4 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     uVar4 < 0xbd)) goto LAB_027bd68c;
                }
              }
              uVar4 = 0;
            }
          }
        }
LAB_027bd68c:
        if (uVar4 == local_64) {
          local_88 = local_88 + 1;
        }
        lVar8 = lVar5;
      }
    }
    uVar9 = uVar9 + 1;
    lVar5 = lVar8;
  } while (uVar9 != 0x400);
  local_64 = 0x6b;
  iVar10 = 0;
  uVar9 = 0;
  do {
    puVar1 = (undefined2 *)(param_1 + ((long)((ulong)uVar9 << 0x20) >> 0x1d));
    uVar4 = FUN_0277d6c4(puVar1);
    lVar5 = *(long *)puVar3;
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_78 = *puVar1;
        lVar8 = param_1 + (long)(int)uVar9 * 8;
        local_70 = 0;
        local_76 = *(undefined2 *)(lVar8 + 2);
        local_74 = *(undefined4 *)(lVar8 + 4);
        uVar4 = FUN_0277d6c4(&local_78);
        lVar8 = *(long *)puVar3;
        if (lVar8 == 0) {
LAB_027bd6e0:
          uVar4 = 0xbc;
        }
        else {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((*(uint *)(lVar5 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_027bd6e0;
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar1);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          lVar8 = *(long *)puVar3;
          if ((*(uint *)(lVar5 + 0x1d8) <= uVar4) ||
             (puVar6 = *(uint **)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8),
             puVar6 == (uint *)0x0)) goto LAB_027bd6e0;
          uVar2 = *puVar6;
          uVar4 = 0;
          if ((uVar2 != 0) && (puVar6 != (uint *)(ulong)uVar2)) {
            puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
            uVar4 = 0;
            if (*puVar7 != 0) {
              uVar4 = puVar7[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar7 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar7 + lVar5 + (ulong)(ushort)puVar7[2] * 8;
                if (lVar5 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar6 - lVar5) / (ulong)uVar4);
                  }
                  if (*puVar7 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar4 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     uVar4 < 0xbd)) goto LAB_027bd6e4;
                }
              }
              uVar4 = 0;
            }
          }
        }
LAB_027bd6e4:
        if (uVar4 == local_64) {
          iVar10 = iVar10 + 1;
        }
        lVar5 = lVar8;
      }
    }
    lVar8 = lVar5;
    uVar9 = uVar9 + 1;
    if (uVar9 == 0x400) {
      return iVar10 + local_88;
    }
  } while( true );
}

