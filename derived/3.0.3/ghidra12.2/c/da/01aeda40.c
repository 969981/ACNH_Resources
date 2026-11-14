
/* WARNING: Removing unreachable block (ram,0x01aeda84) */

void FUN_01aeda40(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint local_88;
  undefined4 local_84;
  undefined **local_80;
  uint local_78;
  undefined4 uStack_74;
  uint *local_70;
  uint local_68;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (param_2 < 0) {
    *param_1 = 0x839;
    FUN_0277d4ac(param_1);
    return;
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,0x86);
  if (*(int *)(DAT_0532a840 + 0x10c0) != 0) {
    puVar7 = *(undefined8 **)(DAT_0532a840 + 0x10c8);
    lVar8 = (long)*(int *)(DAT_0532a840 + 0x10c0) << 3;
    do {
      local_80 = (undefined **)(ulong)(ushort)*(undefined4 *)*puVar7;
      FUN_0277d4ac(&local_80);
      lVar9 = *(long *)puVar3;
      uVar5 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          local_84 = 0;
          local_88 = *(uint *)*puVar7 & 0xffff;
          FUN_0277d4ac(&local_88);
          lVar10 = *(long *)puVar3;
          local_80 = &PTR_FUN_04a36b50;
          local_70 = (uint *)0x0;
          local_78 = local_88;
          uStack_74 = local_84;
          uVar5 = FUN_0277d6c4(&local_78);
          lVar9 = DAT_0532a768;
          if (*(long *)puVar3 == 0) {
LAB_01aedbd4:
            if (local_70 != (uint *)0x0) goto LAB_01aedbe0;
            local_68 = 0xbc;
          }
          else {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((*(uint *)(lVar10 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
            goto LAB_01aedbd4;
            uVar5 = FUN_0277d6c4(&local_88);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((*(uint *)(lVar9 + 0x1d8) <= uVar5) ||
               (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar6 == (uint *)0x0)) goto LAB_01aedbd4;
            local_70 = puVar6;
LAB_01aedbe0:
            uVar5 = *local_70;
            local_68 = 0;
            if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
              puVar6 = (uint *)((long)local_70 - (long)(ulong)uVar5);
              local_68 = 0;
              if (*puVar6 != 0) {
                uVar5 = puVar6[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
                  lVar9 = 0xc;
                  if (*(char *)((long)puVar6 + 10) != '\0') {
                    lVar9 = 0x1c;
                  }
                  lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
                  if (lVar9 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar1 = (uint)((ulong)((long)local_70 - lVar9) / (ulong)uVar5);
                    }
                    if (*puVar6 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_68 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                       local_68 < 0xbd)) goto LAB_01aedc74;
                  }
                }
                local_68 = 0;
              }
            }
          }
LAB_01aedc74:
          local_64 = 0x86;
          if (local_68 == 0x86) {
            iVar4 = FUN_01aed730(&local_80);
            if (iVar4 == param_2) goto LAB_01aedcfc;
          }
          else if (param_2 == 0) {
LAB_01aedcfc:
            uVar2 = *(undefined4 *)*puVar7;
            *(undefined2 *)((long)param_1 + 2) = 0;
            *(undefined4 *)((long)param_1 + 4) = 0;
            *(short *)param_1 = (short)uVar2;
            goto LAB_01aedca8;
          }
        }
      }
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  *param_1 = 0x839;
LAB_01aedca8:
  FUN_0277d4ac(param_1);
  return;
}

