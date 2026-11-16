
void FUN_0252d600(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint *local_90;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined1 local_7c [4];
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  FUN_02507c6c(local_6c,1,1,0,0);
  puVar6 = PTR_DAT_04bb5038;
  puVar5 = PTR_DAT_04bb43c0;
  puVar4 = PTR_DAT_04bb37e0;
  uVar10 = (uint)local_6c[0];
  local_74 = local_68;
  local_78[0] = 0xff;
  if (local_6c[0] < 8) {
    local_78[0] = local_6c[0];
  }
  local_70 = local_64;
  if ((param_1 & 1) == 0) {
    if (local_6c[0] < 8) {
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      do {
        local_7c[0] = (undefined1)uVar10;
        FUN_0252d8f0(&local_84,local_7c);
        lVar14 = *(long *)puVar5;
        uVar7 = FUN_0277d6c4(&local_84);
        lVar12 = *(long *)puVar5;
        if (lVar12 == 0) {
LAB_0252d8a0:
          FUN_02471f38(local_7c,puVar4,0,0xffffffff);
        }
        else {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((*(uint *)(lVar14 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0252d8a0;
          local_90 = (uint *)0x0;
          local_98 = local_84;
          uStack_94 = uStack_80;
          local_a0 = puVar1;
          uVar7 = FUN_0277d6c4(&local_98);
          if (*(long *)puVar5 == 0) {
LAB_0252d800:
            puVar13 = (uint *)0x0;
          }
          else {
            lVar12 = *(long *)(lVar12 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_0252d800;
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_84);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if (*(uint *)(lVar12 + 0x1d8) <= uVar7) goto LAB_0252d800;
            puVar13 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8);
            if (puVar13 != (uint *)0x0) {
              local_90 = puVar13;
            }
          }
          iVar8 = FUN_01ad78cc(&local_a0);
          if (iVar8 != 0x12) {
            if (puVar13 != (uint *)0x0) {
              puVar3 = (uint *)((long)puVar13 - (ulong)*puVar13);
              if ((((*puVar13 != 0) && (puVar3 != (uint *)0x0)) && (*puVar3 != 0)) &&
                 ((uVar7 = puVar3[1], uVar7 != 0 && ((ulong)(ushort)puVar3[2] != 0)))) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar3 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar3 + lVar12 + (ulong)(ushort)puVar3[2] * 8;
                if (lVar12 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar7);
                  }
                  if (*puVar3 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0x25))
                  goto LAB_0252d8b4;
                }
              }
            }
            goto LAB_0252d8a0;
          }
        }
LAB_0252d8b4:
        uVar11 = (ulong)uVar10;
        do {
          if (uVar11 == 7) {
            return;
          }
          uVar11 = uVar11 + 1;
          uVar9 = FUN_02507924(local_78,puVar6 + uVar11);
        } while ((uVar9 & 1) == 0);
        local_78[0] = puVar6[uVar11];
        uVar10 = (uint)local_78[0];
        if (7 < uVar10) {
          return;
        }
      } while( true );
    }
  }
  else if (local_6c[0] < 8) {
    do {
      local_7c[0] = (undefined1)uVar10;
      FUN_02471f38(local_7c,puVar4,0,0xffffffff);
      uVar11 = (ulong)uVar10;
      do {
        if (uVar11 == 7) {
          return;
        }
        uVar11 = uVar11 + 1;
        uVar9 = FUN_02507924(local_78,puVar6 + uVar11);
      } while ((uVar9 & 1) == 0);
      local_78[0] = puVar6[uVar11];
      uVar10 = (uint)local_78[0];
    } while (uVar10 < 8);
  }
  return;
}

