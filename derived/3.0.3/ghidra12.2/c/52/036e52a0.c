
void FUN_036e52a0(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *__s;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  undefined3 local_64;
  
  lVar1 = param_1 + 0x1290;
  __s = (void *)(**(code **)(*(long *)(param_1 + 0x1290) + 0x18))(lVar1);
  memset(__s,0,0x754);
  puVar6 = PTR_DAT_04bc3968;
  local_64 = 0;
  lVar13 = *(long *)PTR_DAT_04bb4960;
  if (lVar13 != 0) {
    uVar14 = 0;
    do {
      local_68 = uVar14;
      uVar7 = FUN_0377fb80(uVar14);
      if ((((uVar7 & 1) != 0) &&
          (uVar16 = (local_68 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8),
          uVar16 < *(uint *)(lVar13 + 0x1d8))) &&
         (puVar15 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar16 * 8),
         puVar15 != (uint *)0x0)) {
        if (*puVar15 == 0) {
LAB_036e5464:
          uVar16 = 0;
        }
        else {
          cVar10 = DAT_055b7898;
          do {
            puVar5 = PTR_DAT_04bc3960;
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
              *puVar5 = 1;
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            }
            else {
              uVar16 = *(uint *)(puVar6 + 0x14);
              if (-1 < (int)uVar16) {
                if (((ushort *)((ulong)uVar16 + (long)puVar15) == (ushort *)0x0) ||
                   (uVar4 = *(ushort *)((ulong)uVar16 + (long)puVar15), uVar16 = (uint)uVar4,
                   0x15 < uVar4)) goto LAB_036e5464;
                goto LAB_036e5468;
              }
              if (uVar16 != 0xffffffff) goto LAB_036e5464;
            }
            puVar11 = (uint *)(ulong)*puVar15;
            uVar16 = 0;
            if ((*puVar15 == 0) || (puVar15 == puVar11)) goto LAB_036e5468;
            lVar8 = 0xc;
            if (*(char *)((long)puVar15 + (10 - (long)puVar11)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar15 + (lVar8 - (long)puVar11);
            if (lVar8 == 0) goto LAB_036e5464;
            uVar7 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar11));
            *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
            uVar16 = 0;
            if (uVar7 == 0) goto LAB_036e5468;
            piVar12 = (int *)(lVar8 + 4);
            while (piVar12[-1] != -0x1e3de1fd) {
              piVar12 = piVar12 + 2;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) {
                uVar16 = 0;
                goto LAB_036e5468;
              }
            }
            iVar3 = 0;
            if (*piVar12 != -1) {
              iVar3 = *piVar12;
            }
            *(int *)(puVar6 + 0x14) = iVar3;
          } while (*puVar15 != 0);
          uVar16 = 0;
        }
LAB_036e5468:
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar16);
        if (uVar16 < 0x16) {
          local_a8 = (undefined **)CONCAT44(local_a8._4_4_,uVar16);
          uVar2 = uVar16 + 7;
          if (-1 < (int)uVar16) {
            uVar2 = uVar16;
          }
          uVar2 = (int)uVar2 >> 3;
          if (uVar2 < 3) {
            local_a8 = (undefined **)CONCAT44(local_a8._4_4_,uVar16);
            *(byte *)((long)&local_64 + (ulong)uVar2) =
                 *(byte *)((long)&local_64 + (ulong)uVar2) | (byte)(1 << (ulong)(uVar16 & 7));
          }
        }
        lVar8 = FUN_03776680();
        if (lVar8 != 0) {
          if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
             (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
            uVar4 = *(ushort *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
          }
          else {
            uVar7 = (**(code **)*puVar9)();
            uVar4 = *(ushort *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
            if ((((uVar7 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
               (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar9)();
            }
          }
          if ((uVar4 >> 1 & 1) != 0) {
            if (*puVar15 == 0) {
LAB_036e5604:
              uVar16 = 0;
            }
            else {
              cVar10 = DAT_055b7898;
              do {
                puVar5 = PTR_DAT_04bc3960;
                if (cVar10 == '\0') {
                  cVar10 = '\x01';
                  *(undefined8 *)puVar6 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
                  *puVar5 = 1;
                  *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                }
                else {
                  uVar16 = *(uint *)(puVar6 + 0x18);
                  if (-1 < (int)uVar16) {
                    if (((ushort *)((ulong)uVar16 + (long)puVar15) == (ushort *)0x0) ||
                       (uVar4 = *(ushort *)((ulong)uVar16 + (long)puVar15), uVar16 = (uint)uVar4,
                       0x15 < uVar4)) goto LAB_036e5604;
                    goto LAB_036e5608;
                  }
                  if (uVar16 != 0xffffffff) goto LAB_036e5604;
                }
                puVar11 = (uint *)(ulong)*puVar15;
                uVar16 = 0;
                if ((*puVar15 == 0) || (puVar15 == puVar11)) goto LAB_036e5608;
                lVar8 = 0xc;
                if (*(char *)((long)puVar15 + (10 - (long)puVar11)) != '\0') {
                  lVar8 = 0x1c;
                }
                lVar8 = (long)puVar15 + (lVar8 - (long)puVar11);
                if (lVar8 == 0) goto LAB_036e5604;
                uVar7 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar11));
                *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
                uVar16 = 0;
                if (uVar7 == 0) goto LAB_036e5608;
                piVar12 = (int *)(lVar8 + 4);
                while (piVar12[-1] != 0x1dd11bc9) {
                  piVar12 = piVar12 + 2;
                  uVar7 = uVar7 - 1;
                  if (uVar7 == 0) {
                    uVar16 = 0;
                    goto LAB_036e5608;
                  }
                }
                iVar3 = 0;
                if (*piVar12 != -1) {
                  iVar3 = *piVar12;
                }
                *(int *)(puVar6 + 0x18) = iVar3;
              } while (*puVar15 != 0);
              uVar16 = 0;
            }
LAB_036e5608:
            local_c8._4_4_ = (undefined4)((ulong)local_c8 >> 0x20);
            local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar16);
            if (uVar16 < 0x16) {
              local_a8._4_4_ = (undefined4)((ulong)local_a8 >> 0x20);
              local_a8 = (undefined **)CONCAT44(local_a8._4_4_,uVar16);
              uVar2 = uVar16 + 7;
              if (-1 < (int)uVar16) {
                uVar2 = uVar16;
              }
              uVar2 = (int)uVar2 >> 3;
              if (uVar2 < 3) {
                local_a8 = (undefined **)CONCAT44(local_a8._4_4_,uVar16);
                *(byte *)((long)&local_64 + (ulong)uVar2) =
                     *(byte *)((long)&local_64 + (ulong)uVar2) | (byte)(1 << (ulong)(uVar16 & 7));
              }
            }
          }
        }
      }
      uVar16 = 7;
      if ((int)uVar14 < 7) {
        uVar16 = uVar14 + 1;
      }
      uVar14 = uVar16;
    } while (uVar16 != 7);
  }
  puStack_a0 = &local_c8;
  local_c8 = (undefined *)CONCAT53(local_c8._3_5_,local_64);
  local_a8 = &PTR_LAB_04b46998;
  FUN_008a1ba0(lVar1,&local_a8);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (undefined **)0x0;
  puStack_a0 = (undefined8 *)0x0;
  local_c8 = &DAT_04b454e8;
  puStack_c0 = &local_a8;
  FUN_02685630(&local_c8);
  FUN_03754280(lVar1,&local_a8);
  return;
}

