
undefined8 FUN_01360e00(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  char cVar20;
  uint *puVar21;
  undefined2 uVar22;
  uint uVar23;
  undefined8 *puVar24;
  uint *puVar25;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    return 0;
  }
  local_90 = 0;
  local_a0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_98 = PTR_DAT_04bb2010 + 0x10;
  local_80 = 0;
  local_88 = puStack_98;
  FUN_02a8f7b0(param_2,&local_a0);
  if (((((uint)local_90 < 0x120) && (local_90._4_4_ < 0x100)) && ((uint)local_80 < 0x120)) &&
     ((local_80._4_4_ < 0x100 && (uVar10 = FUN_013614c0(param_1,param_2), (uVar10 & 1) == 0)))) {
    puVar24 = (undefined8 *)(param_1 + 0x10);
    plVar11 = (long *)(**(code **)*puVar24)(puVar24);
    uVar8 = (**(code **)(*plVar11 + 0x18))();
    puVar6 = PTR_DAT_04bb5008;
    if (0 < (int)uVar8) {
      uVar23 = 0;
      do {
        plVar11 = (long *)(**(code **)*puVar24)(puVar24);
        uVar9 = (**(code **)(*plVar11 + 0x18))();
        lVar14 = plVar11[5];
        uVar2 = uVar23;
        if (uVar9 <= uVar23) {
          uVar2 = 0;
        }
        if (lVar14 == 0) {
          uVar10 = 0;
        }
        else {
          if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
            uVar10 = 0;
            lVar14 = *(long *)(lVar14 + 0x20);
          }
          else {
            uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
            uVar10 = uVar10 & 0xffffffff;
            if (plVar11[5] == 0) goto LAB_01360fac;
            lVar14 = *(long *)(plVar11[5] + 0x20);
          }
          if (lVar14 != 0) {
            local_78 = plVar11[1];
            local_70 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
            uStack_68 = 0x14;
            (**(code **)(**(long **)(plVar11[5] + 0x20) + 0x20))
                      (*(long **)(plVar11[5] + 0x20),&local_78);
          }
        }
LAB_01360fac:
        lVar14 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
        lVar15 = *(long *)puVar6;
        uVar9 = *(uint *)(lVar15 + 0x1df8);
        iVar16 = 0;
        if (uVar9 != 0) {
          uVar4 = *(ushort *)(lVar14 + plVar11[1]);
          lVar14 = *(long *)(lVar15 + 0x1e00);
          uVar19 = 0;
          if (1 < (int)uVar9) {
            iVar16 = uVar9 - 1;
            do {
              uVar17 = (uint)uVar19;
              iVar1 = iVar16 + uVar17;
              if (iVar1 < 0 != SCARRY4(iVar16,uVar17)) {
                iVar1 = iVar1 + 1;
              }
              uVar18 = iVar1 >> 1;
              uVar19 = (ulong)uVar18;
              uVar5 = *(ushort *)
                       (lVar14 + (-(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3));
              if (uVar5 == uVar4) goto joined_r0x01361050;
              if (uVar5 < uVar4) {
                uVar17 = uVar18 + 1;
              }
              else {
                iVar16 = uVar18 - 1;
              }
              uVar19 = (ulong)uVar17;
            } while ((int)uVar17 < iVar16);
          }
          if (*(ushort *)(lVar14 + (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3)) == uVar4)
          {
            uVar18 = (uint)uVar19;
joined_r0x01361050:
            if (-1 < (int)uVar18) {
              uVar17 = (uint)uVar19;
              if (uVar9 <= uVar17) {
                uVar17 = 0;
              }
              iVar16 = *(int *)(lVar14 + (ulong)uVar17 * 8 + 4);
              goto LAB_01361058;
            }
          }
          iVar16 = 0;
        }
LAB_01361058:
        local_78 = CONCAT44(local_78._4_4_,iVar16);
        if (iVar16 == 0) {
          uVar8 = *(uint *)(param_2 + 0xc);
          local_78 = CONCAT44(local_78._4_4_,uVar8);
          if (uVar8 == 0) {
LAB_01361160:
            puVar25 = (uint *)0x0;
          }
          else if ((int)*(uint *)(lVar15 + 0x1e0) < 1) {
            if ((((*(long *)(lVar15 + 0xd0) == 0) ||
                 (puVar25 = *(uint **)(*(long *)(lVar15 + 0xd0) + 8), puVar25 == (uint *)0x0)) ||
                ((uVar8 < *(uint *)(lVar15 + 0xe8) &&
                 (*(char *)(*(long *)(lVar15 + 0xf0) + (long)(int)uVar8) == '\0')))) ||
               (((*puVar25 <= uVar8 || (puVar25[1] == 0)) || ((ushort)puVar25[2] == 0))))
            goto LAB_01361160;
            iVar16 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              iVar16 = 0x1c;
            }
            puVar25 = (uint *)((ulong)(puVar25[1] * uVar8 + (uint)(ushort)puVar25[2] * 8 + iVar16) +
                              (long)puVar25);
          }
          else {
            if (*(uint *)(lVar15 + 0x1e0) <= uVar8) goto LAB_01361160;
            if (*(uint *)(lVar15 + 0x1d0) <= uVar8) {
              uVar8 = 0;
            }
            puVar25 = *(uint **)(*(long *)(lVar15 + 0x1d8) + (ulong)uVar8 * 8);
          }
          if ((plVar11[5] != 0) && (*(long *)(plVar11[5] + 0x20) != 0)) {
            local_78 = plVar11[1];
            local_70 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
            uStack_68 = 0x14;
            (**(code **)(**(long **)(plVar11[5] + 0x20) + 0x20))
                      (*(long **)(plVar11[5] + 0x20),&local_78);
          }
          lVar14 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
          puVar7 = PTR_DAT_04bc4698;
          puVar6 = PTR_DAT_04bc4690;
          lVar15 = plVar11[1];
          if ((puVar25 == (uint *)0x0) || (uVar8 = *puVar25, uVar8 == 0)) goto LAB_013612b0;
          cVar20 = *PTR_DAT_04bc4690;
          goto LAB_013611fc;
        }
        if ((((uVar10 & 1) != 0) && (plVar11[5] != 0)) &&
           (puVar12 = *(undefined8 **)(plVar11[5] + 0x18), puVar12 != (undefined8 *)0x0)) {
          (**(code **)*puVar12)();
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar8);
    }
  }
  return 0;
LAB_013611fc:
  if (cVar20 == '\0') {
    cVar20 = '\x01';
    *(undefined8 *)puVar7 = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    *puVar6 = 1;
    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined4 *)(puVar7 + 0x18) = 0xffffffff;
    uVar8 = *puVar25;
  }
  else {
    uVar9 = *(uint *)(puVar7 + 0x18);
    if (-1 < (int)uVar9) {
      if ((undefined2 *)((ulong)uVar9 + (long)puVar25) == (undefined2 *)0x0) {
LAB_013612b0:
        uVar22 = 0;
      }
      else {
        uVar22 = *(undefined2 *)((ulong)uVar9 + (long)puVar25);
      }
LAB_013612b4:
      *(undefined2 *)(lVar15 + lVar14) = uVar22;
      if ((plVar11[5] != 0) && (*(long *)(plVar11[5] + 0x20) != 0)) {
        local_78 = plVar11[1];
        local_70 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
        uStack_68 = 0x14;
        (**(code **)(**(long **)(plVar11[5] + 0x20) + 0x20))
                  (*(long **)(plVar11[5] + 0x20),&local_78);
      }
      lVar14 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
      lVar15 = plVar11[1];
      *(short *)(lVar14 + lVar15 + 2) = (short)*(undefined4 *)(param_2 + 0x18);
      *(short *)(lVar14 + lVar15 + 4) = (short)*(undefined4 *)(param_2 + 0x1c);
      if ((plVar11[5] != 0) && (*(long *)(plVar11[5] + 0x20) != 0)) {
        local_78 = plVar11[1];
        local_70 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
        uStack_68 = 0x14;
        (**(code **)(**(long **)(plVar11[5] + 0x20) + 0x20))
                  (*(long **)(plVar11[5] + 0x20),&local_78);
      }
      lVar14 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0x20));
      *(char *)(lVar14 + plVar11[1] + 6) = (char)*(undefined4 *)(param_2 + 0x20);
      if ((plVar11[5] != 0) && (*(long *)(plVar11[5] + 0x20) != 0)) {
        local_78 = plVar11[1];
        local_70 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
        uStack_68 = 0x14;
        (**(code **)(**(long **)(plVar11[5] + 0x20) + 0x20))
                  (*(long **)(plVar11[5] + 0x20),&local_78);
      }
      lVar14 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
      *(undefined1 *)(lVar14 + plVar11[1] + 7) = *(undefined1 *)(param_2 + 8);
      if ((plVar11[5] != 0) && (*(long *)(plVar11[5] + 0x20) != 0)) {
        local_78 = plVar11[1];
        local_70 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
        uStack_68 = 0x14;
        (**(code **)(**(long **)(plVar11[5] + 0x20) + 0x20))
                  (*(long **)(plVar11[5] + 0x20),&local_78);
      }
      lVar14 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar2);
      *(undefined2 *)(lVar14 + plVar11[1] + 8) = *(undefined2 *)(param_2 + 0x24);
      FUN_013606b0(param_1,uVar23,param_2);
      if ((((uVar10 & 1) != 0) && (plVar11[5] != 0)) &&
         (puVar24 = *(undefined8 **)(plVar11[5] + 0x18), puVar24 != (undefined8 *)0x0)) {
        (**(code **)*puVar24)();
      }
      return 1;
    }
    if (uVar9 != 0xffffffff) goto LAB_013612b0;
  }
  puVar21 = (uint *)(ulong)uVar8;
  uVar22 = 0;
  if ((puVar21 == (uint *)0x0) || (puVar25 == puVar21)) goto LAB_013612b4;
  lVar3 = 0xc;
  if (*(char *)((long)puVar25 + (10 - (long)puVar21)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar25 + (lVar3 - (long)puVar21);
  uVar22 = 0;
  if (lVar3 == 0) goto LAB_013612b4;
  uVar19 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar21));
  *(undefined4 *)(puVar7 + 0x18) = 0xfffffffe;
  if (uVar19 == 0) goto LAB_013612b0;
  piVar13 = (int *)(lVar3 + 4);
  while (piVar13[-1] != 0x54706054) {
    piVar13 = piVar13 + 2;
    uVar19 = uVar19 - 1;
    if (uVar19 == 0) goto LAB_013612b0;
  }
  uVar22 = 0;
  iVar16 = 0;
  if (*piVar13 != -1) {
    iVar16 = *piVar13;
  }
  *(int *)(puVar7 + 0x18) = iVar16;
  uVar8 = *puVar25;
  if (uVar8 == 0) goto LAB_013612b4;
  goto LAB_013611fc;
}

