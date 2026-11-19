
bool FUN_039ea910(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  long *plVar25;
  
  uVar13 = (uint)*(char *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x38) == -1) {
    bVar2 = *(byte *)(param_1 + 0x21);
    uVar13 = *(uint *)(param_2 + ((ulong)(bVar2 >> 1) & 0x7c) + 0x230) >> (ulong)((bVar2 & 7) << 1)
             & 3;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x21);
  }
  plVar25 = *(long **)(param_2 + (long)(int)(uVar13 + (uint)bVar2 * 4) * 8 + 0x30);
  lVar21 = *plVar25;
  if (lVar21 == 0) goto LAB_039eb85c;
  piVar23 = (int *)plVar25[1];
  lVar14 = *(long *)(param_2 + 0x20);
  if (piVar23 == *(int **)(param_1 + 0x1c8)) {
    lVar22 = *(long *)(param_1 + 0x1c0);
  }
  else {
    *(int **)(param_1 + 0x1c8) = piVar23;
    FUN_0039fc3c(*plVar25,*(long *)(param_1 + 0x18) + 8);
    if (*piVar23 != *(int *)(param_1 + 0x148)) {
      *(int *)(param_1 + 0x148) = *piVar23;
      *(int *)(param_1 + 0x158) = piVar23[0x27];
      *(int *)(param_1 + 0x160) = piVar23[0x29];
      if (*(int *)(param_1 + 0x150) != piVar23[0x25]) {
        plVar18 = *(long **)(param_1 + 0x28);
        *(int *)(param_1 + 0x150) = piVar23[0x25];
        lVar12 = *(long *)(param_1 + 0x18);
        lVar10 = plVar18[0xe];
        uVar8 = *(ushort *)((long)plVar18 + 0x3a);
        lVar22 = plVar18[6];
        bVar2 = *(byte *)((long)plVar18 + 0x39);
        iVar5 = (**(code **)(*plVar18 + 0x20))(plVar18);
        iVar6 = (**(code **)(*plVar18 + 0x20))(plVar18);
        uVar9 = piVar23[0x25];
        if (uVar9 != 0xffffffff) {
          uVar1 = (undefined4)plVar18[6];
          lVar10 = lVar10 + (ulong)uVar8 * (ulong)bVar2 *
                            (ulong)(((int)lVar22 + iVar5) - 1U & -iVar6);
          uVar24 = *(undefined8 *)(lVar12 + 0xb8);
          if (((uVar9 ^ 0xffffffff) & 0xff) == 0) {
            uVar9 = uVar9 >> 8;
          }
          else {
            (**(code **)(*plVar18 + 0x40))(plVar18,uVar24,0,(int)(char)uVar9,lVar10,uVar1);
            uVar9 = (uint)*(byte *)((long)piVar23 + 0x95);
          }
          if (((uVar9 ^ 0xffffffff) & 0xff) != 0) {
            (**(code **)(*plVar18 + 0x40))(plVar18,uVar24,1,(int)(char)uVar9,lVar10,uVar1);
          }
          if (*(char *)((long)piVar23 + 0x96) != -1) {
            (**(code **)(*plVar18 + 0x40))
                      (plVar18,uVar24,2,(long)*(char *)((long)piVar23 + 0x96),lVar10,uVar1);
          }
          if (*(char *)((long)piVar23 + 0x97) != -1) {
            (**(code **)(*plVar18 + 0x40))
                      (plVar18,uVar24,5,(long)*(char *)((long)piVar23 + 0x97),lVar10,uVar1);
          }
        }
      }
      if (*(int *)(param_1 + 0x174) != piVar23[0x2e]) {
        *(int *)(param_1 + 0x174) = piVar23[0x2e];
        FUN_039efca4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      }
      if (*(int *)(param_1 + 0x164) != piVar23[0x2a]) {
        *(int *)(param_1 + 0x164) = piVar23[0x2a];
        *(undefined1 *)(param_1 + 0x34) = 0xff;
      }
    }
    if (piVar23[1] != *(int *)(param_1 + 0x40)) {
      *(int *)(param_1 + 0x40) = piVar23[1];
      uVar9 = piVar23[3];
      if ((uVar9 & 0x1fffffff) != 0) {
        lVar22 = 0;
        piVar15 = piVar23 + 4;
        do {
          if ((uVar9 >> (ulong)((uint)lVar22 & 0x1f) & 1) != 0) {
            FUN_0390d290(*(undefined8 *)(param_1 + 0x48 + lVar22 * 8),
                         *(undefined8 *)(param_1 + 0x18),piVar15,0,1);
          }
          lVar22 = lVar22 + 1;
          piVar15 = piVar15 + 1;
        } while (lVar22 != 0x1d);
      }
      if (*(int *)(param_1 + 0x188) != piVar23[0x22]) {
        *(int *)(param_1 + 0x188) = piVar23[0x22];
        *(undefined8 *)(param_1 + 400) = 0;
      }
      if (*(int *)(param_1 + 0x18c) != piVar23[0x23]) {
        *(int *)(param_1 + 0x18c) = piVar23[0x23];
        *(undefined8 *)(param_1 + 0x198) = 0;
      }
    }
    lVar22 = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  uVar8 = *(ushort *)(param_1 + 0x36);
  if ((lVar22 != lVar14) || ((uVar8 >> 9 & 1) != 0)) {
    uVar9 = uVar8 & 0xfffffdff;
    *(long *)(param_1 + 0x1c0) = lVar14;
    *(short *)(param_1 + 0x36) = (short)uVar9;
    if ((uVar8 >> 1 & 1) != 0) {
      lVar22 = *(long *)(param_2 + 0x28);
      if (lVar22 + 0x68 != *(long *)(param_1 + 0x1d0)) {
        bVar2 = *(byte *)(lVar22 + 0x71) & 7;
        if ((bVar2 == 5) || (bVar2 == 2)) {
          if (*(int *)(lVar22 + 0x80) == 0) {
            *(undefined4 *)(param_1 + 0x1e4) = 0;
          }
          else {
            *(uint *)(param_1 + 0x1e4) = (uint)*(byte *)(param_1 + 0x35);
            uVar24 = *(undefined8 *)(lVar22 + 0x8c);
            *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(lVar22 + 0x84);
            *(undefined8 *)(param_1 + 0x1f0) = uVar24;
            *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(lVar22 + 0xa4);
            *(undefined2 *)(param_1 + 0x20c) = *(undefined2 *)(lVar22 + 0xa8);
            *(undefined4 *)(param_1 + 0x20e) = *(undefined4 *)(lVar22 + 0xaa);
            *(undefined2 *)(param_1 + 0x212) = *(undefined2 *)(lVar22 + 0xae);
            *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(lVar22 + 0xb0);
            *(undefined2 *)(param_1 + 0x218) = *(undefined2 *)(lVar22 + 0xb4);
            *(undefined4 *)(param_1 + 0x21a) = *(undefined4 *)(lVar22 + 0xb6);
            *(undefined2 *)(param_1 + 0x21e) = *(undefined2 *)(lVar22 + 0xba);
            *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(lVar22 + 0xbc);
            *(undefined2 *)(param_1 + 0x224) = *(undefined2 *)(lVar22 + 0xc0);
            *(undefined4 *)(param_1 + 0x226) = *(undefined4 *)(lVar22 + 0xc2);
            *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(lVar22 + 0xc6);
            *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(lVar22 + 200);
            *(undefined2 *)(param_1 + 0x230) = *(undefined2 *)(lVar22 + 0xcc);
            *(undefined4 *)(param_1 + 0x232) = *(undefined4 *)(lVar22 + 0xce);
            *(undefined2 *)(param_1 + 0x236) = *(undefined2 *)(lVar22 + 0xd2);
          }
          if (((*(byte *)(lVar22 + 0x71) & 7) == 5) && ((uVar8 >> 4 & 1) != 0)) {
            *(undefined2 *)(param_1 + 0x1e0) = *(undefined2 *)(lVar22 + 0x7c);
            *(undefined1 *)(param_1 + 0x244) = *(undefined1 *)(lVar22 + 0xe0);
          }
        }
        uVar9 = uVar9 | 0x80;
        *(long *)(param_1 + 0x1d0) = lVar22 + 0x68;
        *(short *)(param_1 + 0x36) = (short)uVar9;
      }
    }
    if (((uVar9 >> 5 & 1) == 0) || ((*(byte *)(plVar25 + 3) & 1) == 0)) {
      FUN_039ba850(lVar14,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x28),
                   *(undefined1 *)(param_1 + 0x21),uVar13);
    }
    else if ((*(byte *)(plVar25 + 3) >> 1 & 1) != 0) {
      (*DAT_04c62828)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8),1,plVar25 + 2);
    }
  }
  if (*(char *)(param_2 + 0x261) != '\0') {
    plVar18 = (long *)(param_1 + 400);
    if (*(int *)(param_1 + 0x188) == -1) {
      lVar22 = 0;
    }
    else {
      lVar10 = *(long *)(param_2 + 0x238);
      lVar22 = 1;
      if ((lVar10 != 0) && (lVar10 != *plVar18)) {
        *(long *)(param_1 + 400) = lVar10;
        lVar22 = 1;
        FUN_0390d290(lVar10,*(undefined8 *)(param_1 + 0x18),param_1 + 0x188,0,1);
      }
    }
    if (((*(int *)(param_1 + 0x18c) != -1) &&
        (lVar10 = ((long *)(param_2 + 0x238))[lVar22], lVar10 != 0)) && (lVar10 != plVar18[lVar22]))
    {
      uVar24 = *(undefined8 *)(param_1 + 0x18);
      plVar18[lVar22] = lVar10;
      FUN_0390d290(lVar10,uVar24,param_1 + 0x18c,0,1);
    }
  }
  uVar16 = (ulong)*(byte *)(*(long *)(param_2 + 8) + 0x2e5) & 3;
  if (((*(ushort *)(param_1 + 0x36) >> 5 & 1) == 0) ||
     ((*(byte *)(plVar25 + uVar16 * 0x4c + 0x4f) >> 1 & 1) == 0)) {
    lVar14 = lVar14 + (long)(int)(uVar13 + (uint)*(byte *)(param_1 + 0x21) * 4) * 0x38;
    FUN_039fa590(param_2,*(undefined8 *)(param_1 + 0x18),lVar14 + 0x18,
                 *(undefined8 *)(lVar14 + 0x30),*(undefined1 *)(param_1 + 0x20),uVar16);
  }
  else if ((*(byte *)(plVar25 + uVar16 * 0x4c + 0x4f) & 1) != 0) {
    (*DAT_04c62828)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8),1,
                    plVar25 + uVar16 * 0x4c + 0x4e);
    if (((ulong)*(byte *)(param_1 + 0x20) != 0) && ((*(byte *)(param_2 + 0x25a) >> 1 & 1) != 0)) {
      lVar12 = *(long *)(param_1 + 0x18);
      lVar19 = *(long *)(param_1 + 0x1c8);
      lVar10 = *(long *)(*(long *)(param_2 + 8) + 0x118);
      lVar14 = lVar10 + (ulong)*(ushort *)(param_2 + 0x14) * 0x70;
      lVar22 = *(long *)(lVar14 + 0x20);
      if (*(char *)(lVar14 + 0xd) != '\0') {
        uVar16 = (ulong)*(byte *)(lVar10 + (ulong)*(ushort *)(param_2 + 0x14) * 0x70 + 0xf) *
                 (ulong)*(byte *)(param_1 + 0x20) + uVar16;
      }
      lVar14 = 0;
      if (lVar22 != 0) {
        lVar14 = lVar22 + uVar16 * 0x48;
      }
      uVar24 = (*DAT_04c620e0)(*(undefined8 *)(lVar14 + 8));
      puVar3 = PTR_DAT_04bcf2e8;
      uVar17 = *(undefined8 *)(lVar12 + 0xb8);
      if (*(char *)(lVar19 + 0xa0) != -1) {
        (**(code **)PTR_DAT_04bcf2e8)(uVar17,0,(long)*(char *)(lVar19 + 0xa0),uVar24,0x100);
      }
      if (*(char *)(lVar19 + 0xa1) != -1) {
        (**(code **)puVar3)(uVar17,1,(long)*(char *)(lVar19 + 0xa1),uVar24,0x100);
      }
      if (*(char *)(lVar19 + 0xa2) != -1) {
        (**(code **)puVar3)(uVar17,2,(long)*(char *)(lVar19 + 0xa2),uVar24,0x100);
      }
      if (*(char *)(lVar19 + 0xa3) != -1) {
        (**(code **)puVar3)(uVar17,5,(long)*(char *)(lVar19 + 0xa3),uVar24,0x100);
      }
    }
  }
  if (*(char *)(param_2 + 600) != *(char *)(param_1 + 0x31)) {
    *(char *)(param_1 + 0x31) = *(char *)(param_2 + 600);
    uVar11 = 0;
    bVar2 = *(byte *)(param_1 + 0x22) | *(byte *)(param_2 + 600);
    *(byte *)(param_1 + 0x24d) = *(byte *)(param_1 + 0x24d) & 0xfe | bVar2 >> 2 & 1;
    switch(bVar2 & 3) {
    case 0:
      uVar11 = 1;
      if ((bVar2 & 8) != 0) {
        uVar11 = 2;
      }
      break;
    case 1:
      uVar11 = 1;
      if ((bVar2 & 8) == 0) {
        uVar11 = 2;
      }
      break;
    case 3:
      uVar11 = 3;
    }
    *(undefined1 *)(param_1 + 0x245) = uVar11;
    uVar11 = (undefined1)(0x2000102 >> (ulong)(bVar2 >> 1 & 0x18));
    *(undefined1 *)(param_1 + 0x24b) = uVar11;
    *(undefined1 *)(param_1 + 0x24c) = uVar11;
    *(ushort *)(param_1 + 0x36) = *(ushort *)(param_1 + 0x36) | 0x80;
  }
  bVar2 = *(byte *)(param_2 + 0x260);
  if (bVar2 != 0) {
    if ((bVar2 & 1) != 0) {
      lVar12 = *(long *)(param_1 + 0x1c8);
      plVar25 = *(long **)(*(long *)(param_2 + 8) + 0x58);
      lVar22 = *(long *)(param_1 + 0x18);
      lVar10 = plVar25[0xe];
      bVar2 = *(byte *)((long)plVar25 + 0x39);
      uVar8 = *(ushort *)((long)plVar25 + 0x3a);
      lVar14 = plVar25[6];
      bVar4 = *(int *)(lVar12 + 0xbc) != -1;
      piVar23 = (int *)(lVar12 + 0xdc);
      if (bVar4) {
        piVar23 = (int *)(lVar12 + 0xbc);
      }
      lVar19 = 0xdc;
      if (bVar4) {
        lVar19 = 0xbc;
      }
      iVar5 = (**(code **)(*plVar25 + 0x20))(plVar25);
      iVar6 = (**(code **)(*plVar25 + 0x20))(plVar25);
      uVar13 = *(uint *)(lVar12 + lVar19);
      if (uVar13 != 0xffffffff) {
        lVar10 = lVar10 + (ulong)uVar8 * (ulong)bVar2 * (ulong)(((int)lVar14 + iVar5) - 1U & -iVar6)
        ;
        uVar1 = (undefined4)plVar25[6];
        uVar24 = *(undefined8 *)(lVar22 + 0xb8);
        if (((uVar13 ^ 0xffffffff) & 0xff) == 0) {
          cVar7 = (char)(uVar13 >> 8);
          if (((uVar13 >> 8 ^ 0xffffffff) & 0xff) != 0) goto LAB_039eb120;
        }
        else {
          (**(code **)(*plVar25 + 0x40))(plVar25,uVar24,0,(int)(char)uVar13,lVar10,uVar1);
          cVar7 = *(char *)((long)piVar23 + 1);
          if (cVar7 != -1) {
LAB_039eb120:
            (**(code **)(*plVar25 + 0x40))(plVar25,uVar24,1,(int)cVar7,lVar10,uVar1);
          }
        }
        if (*(char *)((long)piVar23 + 2) != -1) {
          (**(code **)(*plVar25 + 0x40))
                    (plVar25,uVar24,2,(long)*(char *)((long)piVar23 + 2),lVar10,uVar1);
        }
        if (*(char *)((long)piVar23 + 3) != -1) {
          (**(code **)(*plVar25 + 0x40))
                    (plVar25,uVar24,5,(long)*(char *)((long)piVar23 + 3),lVar10,uVar1);
        }
      }
      bVar2 = *(byte *)(param_2 + 0x260);
    }
    if ((bVar2 >> 1 & 1) != 0) {
      lVar12 = *(long *)(param_1 + 0x1c8);
      plVar25 = *(long **)(*(long *)(param_2 + 8) + 0x60);
      lVar22 = *(long *)(param_1 + 0x18);
      lVar10 = plVar25[0xe];
      bVar2 = *(byte *)((long)plVar25 + 0x39);
      uVar8 = *(ushort *)((long)plVar25 + 0x3a);
      lVar14 = plVar25[6];
      bVar4 = *(int *)(lVar12 + 0xc0) != -1;
      piVar23 = (int *)(lVar12 + 0xe0);
      if (bVar4) {
        piVar23 = (int *)(lVar12 + 0xc0);
      }
      lVar19 = 0xe0;
      if (bVar4) {
        lVar19 = 0xc0;
      }
      iVar5 = (**(code **)(*plVar25 + 0x20))(plVar25);
      iVar6 = (**(code **)(*plVar25 + 0x20))(plVar25);
      uVar13 = *(uint *)(lVar12 + lVar19);
      if (uVar13 != 0xffffffff) {
        lVar10 = lVar10 + (ulong)uVar8 * (ulong)bVar2 * (ulong)(((int)lVar14 + iVar5) - 1U & -iVar6)
        ;
        uVar1 = (undefined4)plVar25[6];
        uVar24 = *(undefined8 *)(lVar22 + 0xb8);
        if (((uVar13 ^ 0xffffffff) & 0xff) == 0) {
          cVar7 = (char)(uVar13 >> 8);
          if (((uVar13 >> 8 ^ 0xffffffff) & 0xff) != 0) goto LAB_039eb25c;
        }
        else {
          (**(code **)(*plVar25 + 0x40))(plVar25,uVar24,0,(int)(char)uVar13,lVar10,uVar1);
          cVar7 = *(char *)((long)piVar23 + 1);
          if (cVar7 != -1) {
LAB_039eb25c:
            (**(code **)(*plVar25 + 0x40))(plVar25,uVar24,1,(int)cVar7,lVar10,uVar1);
          }
        }
        if (*(char *)((long)piVar23 + 2) != -1) {
          (**(code **)(*plVar25 + 0x40))
                    (plVar25,uVar24,2,(long)*(char *)((long)piVar23 + 2),lVar10,uVar1);
        }
        if (*(char *)((long)piVar23 + 3) != -1) {
          (**(code **)(*plVar25 + 0x40))
                    (plVar25,uVar24,5,(long)*(char *)((long)piVar23 + 3),lVar10,uVar1);
        }
      }
      bVar2 = *(byte *)(param_2 + 0x260);
    }
    if ((bVar2 >> 2 & 1) != 0) {
      lVar12 = *(long *)(param_1 + 0x1c8);
      plVar25 = *(long **)(*(long *)(param_2 + 8) + 0x68);
      lVar22 = *(long *)(param_1 + 0x18);
      lVar10 = plVar25[0xe];
      bVar2 = *(byte *)((long)plVar25 + 0x39);
      uVar8 = *(ushort *)((long)plVar25 + 0x3a);
      lVar14 = plVar25[6];
      bVar4 = *(int *)(lVar12 + 0xc4) != -1;
      piVar23 = (int *)(lVar12 + 0xe4);
      if (bVar4) {
        piVar23 = (int *)(lVar12 + 0xc4);
      }
      lVar19 = 0xe4;
      if (bVar4) {
        lVar19 = 0xc4;
      }
      iVar5 = (**(code **)(*plVar25 + 0x20))(plVar25);
      iVar6 = (**(code **)(*plVar25 + 0x20))(plVar25);
      uVar13 = *(uint *)(lVar12 + lVar19);
      if (uVar13 != 0xffffffff) {
        lVar10 = lVar10 + (ulong)uVar8 * (ulong)bVar2 * (ulong)(((int)lVar14 + iVar5) - 1U & -iVar6)
        ;
        uVar1 = (undefined4)plVar25[6];
        uVar24 = *(undefined8 *)(lVar22 + 0xb8);
        if (((uVar13 ^ 0xffffffff) & 0xff) == 0) {
          cVar7 = (char)(uVar13 >> 8);
          if (((uVar13 >> 8 ^ 0xffffffff) & 0xff) != 0) goto LAB_039eb398;
        }
        else {
          (**(code **)(*plVar25 + 0x40))(plVar25,uVar24,0,(int)(char)uVar13,lVar10,uVar1);
          cVar7 = *(char *)((long)piVar23 + 1);
          if (cVar7 != -1) {
LAB_039eb398:
            (**(code **)(*plVar25 + 0x40))(plVar25,uVar24,1,(int)cVar7,lVar10,uVar1);
          }
        }
        if (*(char *)((long)piVar23 + 2) != -1) {
          (**(code **)(*plVar25 + 0x40))
                    (plVar25,uVar24,2,(long)*(char *)((long)piVar23 + 2),lVar10,uVar1);
        }
        if (*(char *)((long)piVar23 + 3) != -1) {
          (**(code **)(*plVar25 + 0x40))
                    (plVar25,uVar24,5,(long)*(char *)((long)piVar23 + 3),lVar10,uVar1);
        }
      }
    }
  }
  if (((*(char *)(param_2 + 0x259) != *(char *)(param_1 + 0x34)) &&
      (*(int *)(param_1 + 0x164) != -1)) && (*(long *)(*(long *)(param_1 + 0x10) + 0x310) != 0)) {
    plVar25 = (long *)FUN_039efde0(*(long *)(param_1 + 0x10),(int)*(char *)(param_2 + 0x259));
    lVar10 = *(long *)(param_1 + 0x18);
    lVar22 = plVar25[0xe];
    bVar2 = *(byte *)((long)plVar25 + 0x39);
    uVar8 = *(ushort *)((long)plVar25 + 0x3a);
    lVar14 = plVar25[6];
    iVar5 = (**(code **)(*plVar25 + 0x20))();
    iVar6 = (**(code **)(*plVar25 + 0x20))(plVar25);
    uVar13 = *(uint *)(param_1 + 0x164);
    if (uVar13 != 0xffffffff) {
      uVar24 = *(undefined8 *)(lVar10 + 0xb8);
      lVar22 = lVar22 + (ulong)uVar8 * (ulong)bVar2 * (ulong)(((int)lVar14 + iVar5) - 1U & -iVar6);
      uVar1 = (undefined4)plVar25[6];
      if (((uVar13 ^ 0xffffffff) & 0xff) == 0) {
        uVar13 = uVar13 >> 8;
      }
      else {
        (**(code **)(*plVar25 + 0x40))(plVar25,uVar24,0,(int)(char)uVar13,lVar22,uVar1);
        uVar13 = (uint)*(byte *)(param_1 + 0x165);
      }
      if (((uVar13 ^ 0xffffffff) & 0xff) != 0) {
        (**(code **)(*plVar25 + 0x40))(plVar25,uVar24,1,(int)(char)uVar13,lVar22,uVar1);
      }
      if (*(char *)(param_1 + 0x166) != -1) {
        (**(code **)(*plVar25 + 0x40))
                  (plVar25,uVar24,2,(long)*(char *)(param_1 + 0x166),lVar22,uVar1);
      }
      if (*(char *)(param_1 + 0x167) != -1) {
        (**(code **)(*plVar25 + 0x40))
                  (plVar25,uVar24,5,(long)*(char *)(param_1 + 0x167),lVar22,uVar1);
      }
    }
    *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x259);
  }
  if ((*(byte *)(param_1 + 2) >> 5 & 1) != 0) {
    uVar20 = (ulong)*(byte *)(*(long *)(param_2 + 8) + 0x2e3);
    lVar14 = *(long *)(*(long *)(param_2 + 8) + 0x110);
    uVar16 = *(ulong *)(lVar14 + 0x48);
    if (uVar16 != 0) {
      lVar22 = *(long *)(lVar14 + 0x40);
      lVar10 = *(long *)(param_1 + 0x18);
      lVar14 = 0;
      if (lVar22 != 0) {
        lVar14 = lVar22 + uVar20 * 0x48;
      }
      uVar24 = (*DAT_04c620e0)(*(undefined8 *)(lVar14 + 8));
      uVar16 = uVar16 & 0xffffffff;
      uVar17 = *(undefined8 *)(lVar10 + 0xb8);
      if (*(char *)(param_1 + 0x158) != -1) {
        (**(code **)PTR_DAT_04bcf2e8)(uVar17,0,(long)*(char *)(param_1 + 0x158),uVar24,uVar16);
      }
      if (*(char *)(param_1 + 0x159) != -1) {
        (**(code **)PTR_DAT_04bcf2e8)(uVar17,1,(long)*(char *)(param_1 + 0x159),uVar24,uVar16);
      }
      if (*(char *)(param_1 + 0x15a) != -1) {
        (**(code **)PTR_DAT_04bcf2e8)(uVar17,2,(long)*(char *)(param_1 + 0x15a),uVar24,uVar16);
      }
      if (*(char *)(param_1 + 0x15b) != -1) {
        (**(code **)PTR_DAT_04bcf2e8)(uVar17,5,(long)*(char *)(param_1 + 0x15b),uVar24,uVar16);
      }
    }
    lVar12 = *(long *)(param_1 + 0x18);
    lVar10 = *(long *)(*(long *)(param_2 + 8) + 0x118);
    lVar14 = lVar10 + (ulong)*(ushort *)(param_2 + 0x14) * 0x70;
    lVar22 = *(long *)(lVar14 + 0x20);
    if (*(char *)(lVar14 + 0xd) != '\0') {
      uVar20 = uVar20 + (ulong)*(byte *)(lVar10 + (ulong)*(ushort *)(param_2 + 0x14) * 0x70 + 0xf) *
                        (ulong)*(byte *)(param_1 + 0x20);
    }
    lVar14 = 0;
    if (lVar22 != 0) {
      lVar14 = lVar22 + uVar20 * 0x48;
    }
    uVar24 = (*DAT_04c620e0)(*(undefined8 *)(lVar14 + 8));
    uVar17 = *(undefined8 *)(lVar12 + 0xb8);
    if (*(char *)(param_1 + 0x160) != -1) {
      (**(code **)PTR_DAT_04bcf2e8)(uVar17,0,(long)*(char *)(param_1 + 0x160),uVar24,0x100);
    }
    if (*(char *)(param_1 + 0x161) != -1) {
      (**(code **)PTR_DAT_04bcf2e8)(uVar17,1,(long)*(char *)(param_1 + 0x161),uVar24,0x100);
    }
    if (*(char *)(param_1 + 0x162) != -1) {
      (**(code **)PTR_DAT_04bcf2e8)(uVar17,2,(long)*(char *)(param_1 + 0x162),uVar24,0x100);
    }
    if (*(char *)(param_1 + 0x163) != -1) {
      (**(code **)PTR_DAT_04bcf2e8)(uVar17,5,(long)*(char *)(param_1 + 0x163),uVar24,0x100);
    }
  }
  uVar8 = *(ushort *)(param_1 + 0x36);
  if ((uVar8 >> 7 & 1) != 0) {
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      FUN_038e4d90(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x18));
      uVar8 = *(ushort *)(param_1 + 0x36);
    }
    *(ushort *)(param_1 + 0x36) = uVar8 & 0xff7f;
  }
LAB_039eb85c:
  return lVar21 != 0;
}

