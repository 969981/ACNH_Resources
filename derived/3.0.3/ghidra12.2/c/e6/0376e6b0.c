
/* WARNING: Removing unreachable block (ram,0x0376e73c) */

undefined8 FUN_0376e6b0(long *param_1)

{
  undefined1 *__src;
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  char cVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  undefined *local_50;
  undefined1 *puStack_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  uVar3 = FUN_0376baa0();
  lVar14 = *(long *)PTR_DAT_04bb4138;
  if (lVar14 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    local_50._0_4_ = FUN_006bd550(param_1[1],0);
    lVar14 = FUN_0079e770(lVar14,&local_50);
    if (lVar14 == 0) {
      return 0;
    }
    lVar14 = *(long *)PTR_DAT_04bb46b0;
    if ((lVar14 != 0) &&
       (local_50 = (undefined *)CONCAT44(local_50._4_4_,1),
       ((*(byte *)(lVar14 + 0x50d) ^ 0xff) & 6) == 0)) {
      lVar14 = (**(code **)(**(long **)(*(long *)(lVar14 + 0x10) + 0x188) + 0x38))();
      if (499 < uVar3) {
        return 0;
      }
      if (lVar14 == 0) {
        return 0;
      }
      lVar14 = lVar14 + (ulong)uVar3 * 0x2d48;
      if ((*(long **)(lVar14 + 0x4cc70) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar14 + 0x4cc70), puVar4 == (undefined8 *)0x0)) {
        uVar7 = (uint)*(ushort *)(*(long *)(lVar14 + 0x4cc58) + *(long *)(lVar14 + 0x4cc50) + 4);
      }
      else {
        uVar5 = (**(code **)*puVar4)();
        uVar7 = (uint)*(ushort *)(*(long *)(lVar14 + 0x4cc58) + *(long *)(lVar14 + 0x4cc50) + 4);
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar14 + 0x4cc70) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x4cc70) + 8), puVar4 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar4)();
        }
      }
      puVar2 = PTR_DAT_04bc0678;
      puVar1 = PTR_DAT_04bc0670;
      if (uVar7 != 0xffff) {
        local_35 = 0;
        local_40 = 8;
        local_3c[0] = 0;
        local_50 = PTR_DAT_04bb3768 + 0x10;
        lVar14 = *(long *)PTR_DAT_04bb4958;
        puStack_48 = local_3c;
        if (uVar7 < 500 && lVar14 != 0) {
          uVar3 = *(ushort *)(lVar14 + (ulong)uVar7 * 2 + 0x620);
          if ((int)*(uint *)(lVar14 + 0x1c0) < 1) {
            if (((((*(long *)(lVar14 + 0xb0) == 0) ||
                  (puVar9 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
                 ((uVar7 = (uint)uVar3, uVar7 < *(uint *)(lVar14 + 200) &&
                  (*(char *)(*(long *)(lVar14 + 0xd0) + (ulong)uVar7) == '\0')))) ||
                ((*puVar9 <= uVar7 || (puVar9[1] == 0)))) || ((ushort)puVar9[2] == 0))
            goto LAB_0376ea58;
            iVar8 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            puVar9 = (uint *)((ulong)(puVar9[1] * uVar7 + (uint)(ushort)puVar9[2] * 8 + iVar8) +
                             (long)puVar9);
          }
          else {
            if (*(uint *)(lVar14 + 0x1c0) <= (uint)uVar3) goto LAB_0376ea58;
            uVar7 = (uint)uVar3;
            if (*(uint *)(lVar14 + 0x1b0) <= uVar7) {
              uVar7 = 0;
            }
            puVar9 = *(uint **)(*(long *)(lVar14 + 0x1b8) + (ulong)uVar7 * 8);
          }
          if (puVar9 != (uint *)0x0) {
            if (*puVar9 != 0) {
              cVar10 = *PTR_DAT_04bc0670;
              do {
                if (cVar10 == '\0') {
                  cVar10 = '\x01';
                  *(undefined8 *)puVar2 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                  *puVar1 = 1;
                  *(undefined4 *)(puVar2 + 0x50) = 0xffffffff;
                  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                }
                else {
                  uVar7 = *(uint *)(puVar2 + 0x48);
                  if (-1 < (int)uVar7) {
                    puVar11 = (undefined1 *)((ulong)uVar7 + (long)puVar9);
                    goto LAB_0376e964;
                  }
                  if (uVar7 != 0xffffffff) break;
                }
                puVar12 = (uint *)(ulong)*puVar9;
                puVar11 = (undefined1 *)0x0;
                if ((*puVar9 == 0) || (puVar9 == puVar12)) goto LAB_0376e964;
                lVar14 = 0xc;
                if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar9 + (lVar14 - (long)puVar12);
                if (lVar14 == 0) break;
                uVar5 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
                *(undefined4 *)(puVar2 + 0x48) = 0xfffffffe;
                puVar11 = (undefined1 *)0x0;
                if (uVar5 == 0) goto LAB_0376e964;
                piVar13 = (int *)(lVar14 + 4);
                while (piVar13[-1] != 0x34c8eed5) {
                  piVar13 = piVar13 + 2;
                  uVar5 = uVar5 - 1;
                  if (uVar5 == 0) {
                    puVar11 = (undefined1 *)0x0;
                    goto LAB_0376e964;
                  }
                }
                iVar8 = 0;
                if (*piVar13 != -1) {
                  iVar8 = *piVar13;
                }
                *(int *)(puVar2 + 0x48) = iVar8;
              } while (*puVar9 != 0);
            }
            puVar11 = (undefined1 *)0x0;
LAB_0376e964:
            __src = *(undefined1 **)PTR_PTR_04bc0668;
            if (puVar11 != (undefined1 *)0x0) {
              __src = puVar11;
            }
            if (local_3c != __src) {
              lVar14 = 0;
              do {
                if (__src[lVar14] == '\0') {
LAB_0376ea38:
                  iVar8 = (int)lVar14;
                  if (7 < iVar8) {
                    iVar8 = 7;
                  }
                  goto LAB_0376ea44;
                }
                if (__src[lVar14 + 1] == '\0') {
                  lVar14 = lVar14 + 1;
                  goto LAB_0376ea38;
                }
                if (__src[lVar14 + 2] == '\0') {
                  lVar14 = lVar14 + 2;
                  goto LAB_0376ea38;
                }
                lVar14 = lVar14 + 3;
              } while (lVar14 != 0x80001);
              iVar8 = 0;
LAB_0376ea44:
              memcpy(local_3c,__src,(long)iVar8);
              local_3c[iVar8] = 0;
            }
          }
        }
LAB_0376ea58:
        uVar6 = FUN_0376dea0(&local_50,0);
        return uVar6;
      }
    }
  }
  return 0;
}

