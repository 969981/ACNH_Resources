
int FUN_027bea80(long param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined8 local_70;
  uint local_64;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_64 = 0x70;
  iVar9 = 0;
  uVar10 = 0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  do {
    puVar1 = (undefined2 *)(param_1 + 0x1004 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
    uVar4 = FUN_0277d6c4(puVar1);
    lVar11 = *(long *)puVar3;
    lVar6 = lVar11;
    if (lVar11 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_78 = *puVar1;
        lVar5 = param_1 + 0x1004 + (long)(int)uVar10 * 8;
        local_70 = 0;
        local_76 = *(undefined2 *)(lVar5 + 2);
        local_74 = *(undefined4 *)(lVar5 + 4);
        uVar4 = FUN_0277d6c4(&local_78);
        lVar6 = *(long *)puVar3;
        if (lVar6 == 0) {
LAB_027beae4:
          uVar4 = 0xbc;
        }
        else {
          lVar5 = *(long *)(lVar11 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((*(uint *)(lVar5 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_027beae4;
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar1);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          lVar6 = *(long *)puVar3;
          if ((*(uint *)(lVar5 + 0x1d8) <= uVar4) ||
             (puVar7 = *(uint **)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8),
             puVar7 == (uint *)0x0)) goto LAB_027beae4;
          uVar2 = *puVar7;
          uVar4 = 0;
          if ((uVar2 != 0) && (puVar7 != (uint *)(ulong)uVar2)) {
            puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar2);
            uVar4 = 0;
            if (*puVar8 != 0) {
              uVar4 = puVar8[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar8 + lVar5 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar5 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar7 - lVar5) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar4 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     uVar4 < 0xbd)) goto LAB_027beae8;
                }
              }
              uVar4 = 0;
            }
          }
        }
LAB_027beae8:
        if (uVar4 == local_64) {
          iVar9 = iVar9 + 1;
        }
      }
    }
    uVar10 = uVar10 + 1;
    lVar5 = lVar6;
    if (uVar10 == 0x400) {
      return iVar9;
    }
  } while( true );
}

