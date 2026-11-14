
/* WARNING: Type propagation algorithm not settling */

void FUN_01b8b270(long param_1,long *param_2,undefined8 param_3,code *param_4,ulong param_5)

{
  undefined *puVar1;
  long *******ppppppplVar2;
  uint *puVar3;
  long **pplVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  long ******pppppplVar9;
  long *******ppppppplVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  char cVar15;
  ushort uVar16;
  int iVar17;
  ulong uVar18;
  int *piVar19;
  long *******ppppppplVar20;
  long *******ppppppplVar21;
  uint uVar22;
  ulong uVar23;
  long *******ppppppplVar24;
  int iVar25;
  long ******apppppplStack_18b8 [2];
  ulong local_18a8;
  undefined8 local_18a0;
  long *******local_1898;
  long *******local_1890;
  int local_1888;
  long **local_1880;
  long **local_1878;
  int local_1870;
  long *local_1868 [6];
  long alStack_1838 [756];
  undefined8 local_98;
  
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  puVar1 = PTR_DAT_04bc06e8;
  local_1890 = (long *******)&local_1898;
  ppppppplVar21 = (long *******)&local_1890;
  local_18a0 = param_3;
  local_1898 = (long *******)&local_1898;
  lVar12 = 0x7e;
  local_1888 = 0;
  local_1880 = local_1868;
  local_1868[0] = alStack_1838;
  plVar7 = alStack_1838;
  do {
    lVar12 = lVar12 + -2;
    *plVar7 = (long)(plVar7 + 6);
    plVar7[6] = (long)(plVar7 + 0xc);
    plVar7 = plVar7 + 0xc;
  } while (lVar12 != 0);
  uVar23 = 0;
  local_1878 = local_1868;
  local_98 = 0;
  local_1870 = 0x80;
  do {
    if ((*(byte *)(param_1 + (uVar23 >> 3)) >> (ulong)((uint)uVar23 & 7) & 1) != 0)
    goto LAB_01b8b328;
    uVar22 = (uint)uVar23 + 1;
    uVar23 = (ulong)uVar22;
  } while (uVar22 != 0x80);
  uVar23 = 0;
LAB_01b8b328:
  iVar6 = 0x80;
  do {
    if ((*(byte *)(param_1 + (ulong)(iVar6 - 1U >> 3)) >> (ulong)(iVar6 - 1U & 7) & 1) != 0) break;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar6 != (int)uVar23) {
    local_18a8 = param_5;
    iVar8 = 0;
    iVar25 = 0;
    lVar12 = *(long *)PTR_DAT_04bb4788;
LAB_01b8b394:
    pplVar4 = local_1880;
    uVar22 = (uint)uVar23;
    if ((int)*(uint *)(lVar12 + 0x1c0) < 1) {
      lVar14 = *(long *)(lVar12 + 0xb0);
      if (lVar14 == 0) goto LAB_01b8b544;
      uVar11 = 0;
      if (*(uint **)(lVar14 + 8) != (uint *)0x0) {
        uVar11 = **(uint **)(lVar14 + 8);
      }
      puVar13 = *(uint **)(lVar14 + 8);
      if (uVar11 <= uVar22) {
        uVar22 = 0;
      }
      if (puVar13 == (uint *)0x0) goto LAB_01b8b544;
      if ((*(uint *)(lVar12 + 200) <= uVar22) ||
         (bVar5 = *(byte *)(*(long *)(lVar12 + 0xd0) + (long)(int)uVar22), uVar16 = (ushort)bVar5,
         bVar5 != 0)) {
        if (uVar22 < *puVar13) {
          uVar16 = 0;
          if (puVar13[1] == 0) goto LAB_01b8b548;
          if ((ushort)puVar13[2] != 0) {
            iVar17 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              iVar17 = 0x1c;
            }
            puVar13 = (uint *)((ulong)(puVar13[1] * uVar22 + (uint)(ushort)puVar13[2] * 8 + iVar17)
                              + (long)puVar13);
            goto joined_r0x01b8b52c;
          }
        }
        goto LAB_01b8b544;
      }
    }
    else {
      if (*(uint *)(lVar12 + 0x1c0) <= uVar22) {
        uVar22 = 0;
      }
      if (*(uint *)(lVar12 + 0x1b0) <= uVar22) {
        uVar22 = 0;
      }
      puVar13 = *(uint **)(*(long *)(lVar12 + 0x1b8) + (ulong)uVar22 * 8);
joined_r0x01b8b52c:
      if ((puVar13 != (uint *)0x0) && (uVar22 = *puVar13, uVar22 != 0)) {
        cVar15 = *PTR_DAT_04bc06e0;
        do {
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *PTR_DAT_04bc06e0 = 1;
            *(undefined4 *)(puVar1 + 0x50) = 0xffffffff;
            *(undefined8 *)puVar1 = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
            uVar22 = *puVar13;
          }
          else {
            uVar11 = *(uint *)(puVar1 + 0x40);
            if (-1 < (int)uVar11) {
              if ((ushort *)((ulong)uVar11 + (long)puVar13) == (ushort *)0x0) break;
              uVar16 = *(ushort *)((ulong)uVar11 + (long)puVar13);
              goto LAB_01b8b548;
            }
            if (uVar11 != 0xffffffff) break;
          }
          puVar3 = (uint *)(ulong)uVar22;
          uVar16 = 0;
          if ((puVar3 == (uint *)0x0) || (uVar16 = 0, puVar13 == puVar3)) goto LAB_01b8b548;
          lVar14 = 0xc;
          if (*(char *)((long)puVar13 + (10 - (long)puVar3)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar13 + (lVar14 - (long)puVar3);
          if (lVar14 == 0) break;
          uVar18 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar3));
          *(undefined4 *)(puVar1 + 0x40) = 0xfffffffe;
          uVar16 = 0;
          if (uVar18 == 0) goto LAB_01b8b548;
          piVar19 = (int *)(lVar14 + 4);
          while (piVar19[-1] != 0x54706054) {
            piVar19 = piVar19 + 2;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) {
              uVar16 = 0;
              goto LAB_01b8b548;
            }
          }
          uVar16 = 0;
          iVar17 = 0;
          if (*piVar19 != -1) {
            iVar17 = *piVar19;
          }
          *(int *)(puVar1 + 0x40) = iVar17;
          uVar22 = *puVar13;
          if (uVar22 == 0) goto LAB_01b8b548;
        } while( true );
      }
LAB_01b8b544:
      uVar16 = 0;
    }
LAB_01b8b548:
    if (iVar8 < local_1870) {
      if (local_1880 != (long **)0x0) {
        local_1880 = (long **)*local_1880;
      }
      *pplVar4 = (long *)&PTR_LAB_04a393e0;
      *(undefined2 *)(pplVar4 + 2) = 0;
      *(ushort *)(pplVar4 + 1) = uVar16;
      *(int *)((long)pplVar4 + 0xc) = iVar25;
      *(undefined4 *)((long)pplVar4 + 0x12) = 0x101;
      *(undefined1 *)((long)pplVar4 + 0x16) = 0;
      *(undefined1 *)(pplVar4 + 3) = 0;
      bVar5 = FUN_01b863a0(pplVar4,pplVar4 + 2,local_18a0);
      ppppppplVar10 = local_1898;
      *(byte *)(pplVar4 + 3) = (bVar5 ^ 0xff) & 1;
      local_1898 = (long *******)(pplVar4 + 4);
      *local_1898 = (long ******)0x0;
      *local_1898 = (long ******)ppppppplVar10;
      pplVar4[5] = (long *)&local_1898;
      if (ppppppplVar10 != (long *******)0x0) {
        ppppppplVar10[1] = (long ******)local_1898;
      }
      lVar12 = *(long *)PTR_DAT_04bb4788;
      iVar8 = local_1888 + 1;
      local_1888 = iVar8;
    }
    uVar18 = local_18a8;
    iVar25 = iVar25 + 1;
    do {
      uVar22 = (int)uVar23 + 1;
      uVar23 = (ulong)uVar22;
      if (0x7f < uVar22) {
        uVar22 = 0x7e;
        goto LAB_01b8b610;
      }
    } while ((*(byte *)(param_1 + (ulong)(uVar22 >> 3)) >> (ulong)(uVar22 & 7) & 1) == 0);
    goto LAB_01b8b38c;
  }
  goto LAB_01b8b788;
  while (uVar22 = uVar22 - 2, uVar22 != 0xfffffffe) {
LAB_01b8b610:
    uVar11 = uVar22 + 1;
    if (((*(byte *)(param_1 + (ulong)(uVar11 >> 3)) >> (ulong)(uVar11 & 7) & 1) != 0) ||
       (uVar11 = uVar22, (*(byte *)(param_1 + (ulong)(uVar22 >> 3)) >> (ulong)(uVar22 & 7) & 1) != 0
       )) {
      uVar23 = (ulong)(uVar11 + 1);
      goto LAB_01b8b38c;
    }
  }
  uVar23 = 0;
LAB_01b8b38c:
  if (iVar6 == (int)uVar23) goto LAB_01b8b654;
  goto LAB_01b8b394;
LAB_01b8b654:
  if (1 < iVar8) {
    if ((long ********)local_1890[1] != &local_1898) {
      lVar12 = (long)local_18a8 >> 1;
      ppppppplVar10 = (long *******)local_1890[1];
      do {
        ppppppplVar24 = (long *******)*ppppppplVar10;
        ppppppplVar2 = (long *******)ppppppplVar10[1];
        ppppppplVar20 = ppppppplVar10 + -4;
        plVar7 = (long *)((long)ppppppplVar24 + lVar12 + -0x20);
        if ((uVar18 & 1) == 0) {
          iVar6 = (*param_4)(plVar7,ppppppplVar20);
          if (0 < iVar6) {
            do {
              ppppppplVar24 = (long *******)*ppppppplVar24;
              if ((long ********)ppppppplVar24 == &local_1898) {
                ppppppplVar24 = (long *******)&local_1898;
                pppppplVar9 = *ppppppplVar10;
                goto joined_r0x01b8b770;
              }
              iVar6 = (*param_4)((long)ppppppplVar24 + lVar12 + -0x20,ppppppplVar20);
            } while (0 < iVar6);
LAB_01b8b72c:
            pppppplVar9 = *ppppppplVar10;
joined_r0x01b8b770:
            if (pppppplVar9 != (long ******)0x0) {
              *(long *******)((long)pppppplVar9 + 8) = ppppppplVar10[1];
            }
            if (ppppppplVar10[1] != (long ******)0x0) {
              *ppppppplVar10[1] = (long *****)*ppppppplVar10;
            }
            *ppppppplVar10 = (long ******)0x0;
            ppppppplVar10[1] = (long ******)0x0;
            pppppplVar9 = *(long *******)((long)ppppppplVar24 + 8);
            *(long ********)((long)ppppppplVar24 + 8) = ppppppplVar10;
            *ppppppplVar10 = (long ******)ppppppplVar24;
            ppppppplVar10[1] = pppppplVar9;
            if (pppppplVar9 != (long ******)0x0) {
              *pppppplVar9 = (long *****)ppppppplVar10;
            }
          }
        }
        else {
          iVar6 = (**(code **)(param_4 + *plVar7))(plVar7,ppppppplVar20);
          if (0 < iVar6) {
            do {
              ppppppplVar24 = (long *******)*ppppppplVar24;
              if ((long ********)ppppppplVar24 == &local_1898) {
                ppppppplVar24 = (long *******)&local_1898;
                pppppplVar9 = *ppppppplVar10;
                goto joined_r0x01b8b770;
              }
              plVar7 = (long *)((long)ppppppplVar24 + lVar12 + -0x20);
              iVar6 = (**(code **)(param_4 + *plVar7))(plVar7,ppppppplVar20);
            } while (0 < iVar6);
            goto LAB_01b8b72c;
          }
        }
        ppppppplVar10 = ppppppplVar2;
      } while ((long ********)ppppppplVar2 != &local_1898);
    }
  }
LAB_01b8b788:
  if ((long ********)local_1890 != &local_1898) {
    if ((int)param_2[2] < (int)param_2[1]) {
      ppppppplVar10 = local_1890 + -4;
      puVar1 = PTR_DAT_04bc06f0 + 0x10;
      do {
        iVar6 = (int)param_2[2];
        iVar8 = (int)param_2[1];
        if (iVar6 < iVar8) {
          *(int *)(param_2 + 2) = iVar6 + 1;
          iVar6 = *(int *)((long)param_2 + 0xc) + iVar6;
          iVar25 = 0;
          if (iVar8 <= iVar6) {
            iVar25 = iVar8;
          }
          plVar7 = (long *)(*param_2 + (long)(iVar6 - iVar25) * 0x10);
          *plVar7 = (long)puVar1;
          *(undefined2 *)(plVar7 + 1) = *(undefined2 *)(ppppppplVar10 + 1);
        }
        local_1890 = (long *******)local_1890[1];
        ppppppplVar10 = local_1890 + -4;
      } while (ppppppplVar10 != apppppplStack_18b8);
    }
    else {
      do {
        local_1890 = (long *******)local_1890[1];
      } while (local_1890 + -4 != apppppplStack_18b8);
    }
  }
  do {
    ppppppplVar10 = (long *******)*ppppppplVar21;
    ppppppplVar21 = ppppppplVar10 + 1;
  } while ((long ********)ppppppplVar10 != &local_1898);
  return;
}

