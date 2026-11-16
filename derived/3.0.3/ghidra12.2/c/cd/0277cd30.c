
int FUN_0277cd30(int param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  uint *puVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  uint *local_70;
  undefined8 local_68;
  
  local_68 = 0x8a4;
  FUN_0277d4ac(&local_68);
  puVar4 = PTR_DAT_04bc0510;
  puVar2 = PTR_DAT_04bb43c0;
  local_70 = (uint *)0x0;
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_78 = (undefined4)local_68;
  local_74 = local_68._4_4_;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar2 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_68);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar9 != (uint *)0x0)) {
        local_70 = puVar9;
      }
    }
  }
  iVar6 = FUN_01aed730(&local_80);
  puVar3 = PTR_DAT_04bc00c8;
  if (param_1 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    iVar12 = 0;
    do {
      psVar8 = (short *)(**(code **)*param_2)(param_2,iVar12);
      if (*psVar8 == -2) {
        iVar10 = iVar10 + iVar6;
      }
      else {
        lVar13 = *(long *)puVar2;
        uVar5 = FUN_0277d6c4();
        lVar11 = *(long *)puVar2;
        if (lVar11 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            local_78 = *(undefined4 *)psVar8;
            local_74 = *(undefined4 *)(psVar8 + 2);
            local_70 = (uint *)0x0;
            local_80 = puVar4 + 0x10;
            uVar5 = FUN_0277d6c4(&local_78);
            if (*(long *)puVar2 == 0) {
LAB_0277cf60:
              if (local_70 == (uint *)0x0) goto LAB_0277ce48;
            }
            else {
              lVar11 = *(long *)(lVar11 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
              goto LAB_0277cf60;
              lVar11 = *(long *)PTR_DAT_04bc0428;
              uVar5 = FUN_0277d6c4(psVar8);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
                 (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
                 puVar9 == (uint *)0x0)) goto LAB_0277cf60;
              local_70 = puVar9;
            }
            puVar9 = (uint *)((long)local_70 - (ulong)*local_70);
            if ((((*local_70 != 0) && (puVar9 != (uint *)0x0)) && (*puVar9 != 0)) &&
               ((uVar5 = puVar9[1], uVar5 != 0 && ((ulong)(ushort)puVar9[2] != 0)))) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar11 != 0) {
                uVar1 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar1 = (uint)((ulong)((long)local_70 - lVar11) / (ulong)uVar5);
                }
                if (*puVar9 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)puVar3) &&
                   (*(short *)(*(long *)(puVar3 + 8) + (long)(int)uVar1 * 2) == 0x86)) {
                  iVar7 = FUN_01aed730(&local_80);
                  iVar10 = (iVar10 + iVar6) - iVar7;
                }
              }
            }
          }
        }
      }
LAB_0277ce48:
      iVar12 = iVar12 + 1;
    } while (param_1 != iVar12);
  }
  return iVar10;
}

