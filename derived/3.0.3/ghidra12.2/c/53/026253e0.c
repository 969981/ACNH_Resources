
undefined1  [16] FUN_026253e0(long param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  long lVar7;
  ushort *puVar8;
  ushort uVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  int iVar17;
  float fVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined8 local_88;
  short local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  long local_78;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar15 = 0xbf800000;
  uVar19 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0xea6e0);
  if ((uVar19 < *(uint *)(param_1 + 0xea6c0)) &&
     (puVar16 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar19 * 8),
     puVar16 != (uint *)0x0)) {
    bVar4 = false;
    fVar21 = 0.0;
    iVar17 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
LAB_026254a0:
    local_68 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_64 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    switch(iVar17) {
    case 0:
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_05557734) {
              puVar8 = (ushort *)((DAT_05557734 & 0xffffffff) + (long)puVar16);
              if (puVar8 != (ushort *)0x0) {
                uVar9 = *puVar8;
                goto LAB_026259c0;
              }
              break;
            }
            if ((int)DAT_05557734 != -1) break;
          }
          puVar14 = (uint *)(ulong)*puVar16;
          uVar9 = 0xfffe;
          if ((*puVar16 == 0) || (puVar16 == puVar14)) goto LAB_026259c0;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_05557734 = CONCAT44(DAT_05557734._4_4_,0xfffffffe);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != 0x1bbfa75e) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_026259bc;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_05557734 = CONCAT44(DAT_05557734._4_4_,iVar2);
          if (*puVar16 == 0) break;
        } while( true );
      }
LAB_026259bc:
      uVar9 = 0xfffe;
LAB_026259c0:
      local_88 = (undefined *)(ulong)uVar9;
      uVar15 = FUN_0277d4ac(uVar15,&local_88);
      local_68 = SUB84(local_88,0);
      local_64 = local_88._4_4_;
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
            uVar19 = *puVar16;
          }
          else {
            uVar13 = (ulong)DAT_05557714._4_4_;
            if (-1 < DAT_05557714) goto LAB_02625fb4;
            if (DAT_05557714._4_4_ != 0xffffffff) break;
            uVar19 = *puVar16;
          }
          if ((uVar19 == 0) || (puVar14 = (uint *)(ulong)uVar19, puVar16 == puVar14)) break;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_05557714 = CONCAT44(0xfffffffe,(undefined4)DAT_05557714);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != 0x13a65775) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto switchD_026254d4_default;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_05557714 = CONCAT44(iVar2,(undefined4)DAT_05557714);
          if (*puVar16 == 0) break;
        } while( true );
      }
      break;
    case 1:
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (long)DAT_05557734) {
              if ((ushort *)((ulong)DAT_05557734._4_4_ + (long)puVar16) != (ushort *)0x0) {
                uVar9 = *(ushort *)((ulong)DAT_05557734._4_4_ + (long)puVar16);
                goto LAB_02625aec;
              }
              break;
            }
            if (DAT_05557734._4_4_ != 0xffffffff) break;
          }
          puVar14 = (uint *)(ulong)*puVar16;
          uVar9 = 0xfffe;
          if ((*puVar16 == 0) || (puVar16 == puVar14)) goto LAB_02625aec;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_05557734 = CONCAT44(0xfffffffe,(int)DAT_05557734);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != 0x5c1fdd8e) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_02625ae8;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_05557734 = CONCAT44(iVar2,(int)DAT_05557734);
          if (*puVar16 == 0) break;
        } while( true );
      }
LAB_02625ae8:
      uVar9 = 0xfffe;
LAB_02625aec:
      local_88 = (undefined *)(ulong)uVar9;
      uVar15 = FUN_0277d4ac(uVar15,&local_88);
      local_68 = SUB84(local_88,0);
      local_64 = local_88._4_4_;
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
            uVar19 = *puVar16;
          }
          else {
            uVar13 = DAT_0555771c & 0xffffffff;
            if (-1 < (int)DAT_0555771c) goto LAB_02625fb4;
            if ((int)DAT_0555771c != -1) break;
            uVar19 = *puVar16;
          }
          if ((uVar19 == 0) || (puVar14 = (uint *)(ulong)uVar19, puVar16 == puVar14)) break;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_0555771c._4_4_ = (uint)(DAT_0555771c >> 0x20);
          DAT_0555771c = CONCAT44(DAT_0555771c._4_4_,0xfffffffe);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != 0x54062da5) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto switchD_026254d4_default;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_0555771c = CONCAT44(DAT_0555771c._4_4_,iVar2);
          if (*puVar16 == 0) break;
        } while( true );
      }
      break;
    case 2:
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_0555773c) {
              puVar8 = (ushort *)((DAT_0555773c & 0xffffffff) + (long)puVar16);
              if (puVar8 != (ushort *)0x0) {
                uVar9 = *puVar8;
                goto LAB_02625c18;
              }
              break;
            }
            if ((int)DAT_0555773c != -1) break;
          }
          puVar14 = (uint *)(ulong)*puVar16;
          uVar9 = 0xfffe;
          if ((*puVar16 == 0) || (puVar16 == puVar14)) goto LAB_02625c18;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,0xfffffffe);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != 0x617ff43e) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_02625c14;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_0555773c = CONCAT44(DAT_0555773c._4_4_,iVar2);
          if (*puVar16 == 0) break;
        } while( true );
      }
LAB_02625c14:
      uVar9 = 0xfffe;
LAB_02625c18:
      local_88 = (undefined *)(ulong)uVar9;
      uVar15 = FUN_0277d4ac(uVar15,&local_88);
      local_68 = SUB84(local_88,0);
      local_64 = local_88._4_4_;
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
            uVar19 = *puVar16;
          }
          else {
            uVar13 = (ulong)DAT_0555771c._4_4_;
            if (-1 < (long)DAT_0555771c) goto LAB_02625fb4;
            if (DAT_0555771c._4_4_ != 0xffffffff) break;
            uVar19 = *puVar16;
          }
          if ((uVar19 == 0) || (puVar14 = (uint *)(ulong)uVar19, puVar16 == puVar14)) break;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_0555771c = CONCAT44(0xfffffffe,(int)DAT_0555771c);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != 0x69660415) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto switchD_026254d4_default;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_0555771c = CONCAT44(iVar2,(int)DAT_0555771c);
          if (*puVar16 == 0) break;
        } while( true );
      }
      break;
    case 3:
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (long)DAT_0555773c) {
              if ((ushort *)((ulong)DAT_0555773c._4_4_ + (long)puVar16) != (ushort *)0x0) {
                uVar9 = *(ushort *)((ulong)DAT_0555773c._4_4_ + (long)puVar16);
                goto LAB_02625d48;
              }
              break;
            }
            if (DAT_0555773c._4_4_ != 0xffffffff) break;
          }
          puVar14 = (uint *)(ulong)*puVar16;
          uVar9 = 0xfffe;
          if ((*puVar16 == 0) || (puVar16 == puVar14)) goto LAB_02625d48;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_0555773c = CONCAT44(0xfffffffe,(int)DAT_0555773c);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != -0x2ca0d7d2) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_02625d44;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_0555773c = CONCAT44(iVar2,(int)DAT_0555773c);
          if (*puVar16 == 0) break;
        } while( true );
      }
LAB_02625d44:
      uVar9 = 0xfffe;
LAB_02625d48:
      local_88 = (undefined *)(ulong)uVar9;
      uVar15 = FUN_0277d4ac(uVar15,&local_88);
      local_68 = SUB84(local_88,0);
      local_64 = local_88._4_4_;
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
            uVar19 = *puVar16;
          }
          else {
            uVar13 = DAT_05557724 & 0xffffffff;
            if (-1 < (int)DAT_05557724) goto LAB_02625fb4;
            if ((int)DAT_05557724 != -1) break;
            uVar19 = *puVar16;
          }
          if ((uVar19 == 0) || (puVar14 = (uint *)(ulong)uVar19, puVar16 == puVar14)) break;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_05557724._4_4_ = (uint)(DAT_05557724 >> 0x20);
          DAT_05557724 = CONCAT44(DAT_05557724._4_4_,0xfffffffe);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != -0x24b927fb) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto switchD_026254d4_default;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_05557724 = CONCAT44(DAT_05557724._4_4_,iVar2);
          if (*puVar16 == 0) break;
        } while( true );
      }
      break;
    case 4:
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_05557744) {
              puVar8 = (ushort *)((DAT_05557744 & 0xffffffff) + (long)puVar16);
              if (puVar8 != (ushort *)0x0) {
                uVar9 = *puVar8;
                goto LAB_02625e78;
              }
              break;
            }
            if ((int)DAT_05557744 != -1) break;
          }
          puVar14 = (uint *)(ulong)*puVar16;
          uVar9 = 0xfffe;
          if ((*puVar16 == 0) || (puVar16 == puVar14)) goto LAB_02625e78;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_05557744 = CONCAT44(DAT_05557744._4_4_,0xfffffffe);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != -0x11c0fe62) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_02625e74;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_05557744 = CONCAT44(DAT_05557744._4_4_,iVar2);
          if (*puVar16 == 0) break;
        } while( true );
      }
LAB_02625e74:
      uVar9 = 0xfffe;
LAB_02625e78:
      local_88 = (undefined *)(ulong)uVar9;
      uVar15 = FUN_0277d4ac(uVar15,&local_88);
      local_68 = SUB84(local_88,0);
      local_64 = local_88._4_4_;
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
            uVar19 = *puVar16;
          }
          else {
            uVar13 = (ulong)DAT_05557724._4_4_;
            if (-1 < (long)DAT_05557724) goto LAB_02625fb4;
            if (DAT_05557724._4_4_ != 0xffffffff) break;
            uVar19 = *puVar16;
          }
          if ((uVar19 == 0) || (puVar14 = (uint *)(ulong)uVar19, puVar16 == puVar14)) break;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_05557724 = CONCAT44(0xfffffffe,(int)DAT_05557724);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != -0x19d90e4b) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto switchD_026254d4_default;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_05557724 = CONCAT44(iVar2,(int)DAT_05557724);
          if (*puVar16 == 0) break;
        } while( true );
      }
      break;
    case 5:
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (long)DAT_05557744) {
              if ((ushort *)((ulong)DAT_05557744._4_4_ + (long)puVar16) != (ushort *)0x0) {
                uVar9 = *(ushort *)((ulong)DAT_05557744._4_4_ + (long)puVar16);
                goto LAB_02625fd4;
              }
              break;
            }
            if (DAT_05557744._4_4_ != 0xffffffff) break;
          }
          puVar14 = (uint *)(ulong)*puVar16;
          uVar9 = 0xfffe;
          if ((*puVar16 == 0) || (puVar16 == puVar14)) goto LAB_02625fd4;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_05557744 = CONCAT44(0xfffffffe,(int)DAT_05557744);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != -0x566084b2) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_02625fd0;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_05557744 = CONCAT44(iVar2,(int)DAT_05557744);
          if (*puVar16 == 0) break;
        } while( true );
      }
LAB_02625fd0:
      uVar9 = 0xfffe;
LAB_02625fd4:
      local_88 = (undefined *)(ulong)uVar9;
      uVar15 = FUN_0277d4ac(uVar15,&local_88);
      local_68 = SUB84(local_88,0);
      local_64 = local_88._4_4_;
      if (*puVar16 != 0) {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = -1;
            DAT_05557714 = -1;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
            uVar19 = *puVar16;
          }
          else {
            if (-1 < (int)DAT_0555772c) goto LAB_026260f0;
            if ((int)DAT_0555772c != -1) break;
            uVar19 = *puVar16;
          }
          if ((uVar19 == 0) || (puVar14 = (uint *)(ulong)uVar19, puVar16 == puVar14)) break;
          lVar7 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
          if (lVar7 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
          DAT_0555772c._4_4_ = (undefined4)(DAT_0555772c >> 0x20);
          DAT_0555772c = CONCAT44(DAT_0555772c._4_4_,0xfffffffe);
          if (uVar13 == 0) break;
          piVar11 = (int *)(lVar7 + 4);
          while (piVar11[-1] != -0x5e79749b) {
            piVar11 = piVar11 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_0262634c;
          }
          iVar2 = 0;
          if (*piVar11 != -1) {
            iVar2 = *piVar11;
          }
          DAT_0555772c = CONCAT44(DAT_0555772c._4_4_,iVar2);
          if (*puVar16 == 0) break;
        } while( true );
      }
      goto LAB_0262634c;
    }
    goto switchD_026254d4_default;
  }
  goto LAB_02626438;
LAB_026260f0:
  puVar8 = (ushort *)((DAT_0555772c & 0xffffffff) + (long)puVar16);
  sVar6 = (short)local_88;
  if (puVar8 == (ushort *)0x0) goto LAB_0262634c;
LAB_026260f8:
  uVar9 = *puVar8;
  if (!(uVar9 != 0 && sVar6 != -2)) goto switchD_026254d4_default;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  local_78 = 0;
  local_7d = local_88._3_1_;
  local_7e = local_88._2_1_;
  local_88 = puVar1;
  local_80 = sVar6;
  local_7c = local_64;
  uVar19 = FUN_0277d6c4(&local_80);
  if (DAT_053274a0 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar19 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar19 = FUN_0277d6c4(&local_68);
      uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (uVar19 < *(uint *)(lVar7 + 0x1d8)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar19 * 8);
        if (lVar7 != 0) {
          local_78 = lVar7;
        }
      }
    }
  }
  uVar15 = FUN_01b04458(&local_88);
  if ((uVar15 & 1) == 0) {
    uVar19 = FUN_0277d6c4(&local_68);
    uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(param_1 + 0xea8e0);
    if ((uVar19 < *(uint *)(param_1 + 0xea8c0)) &&
       (puVar14 = *(uint **)(*(long *)(param_1 + 0xea8c8) + (long)(int)uVar19 * 8),
       puVar14 != (uint *)0x0)) {
      puVar10 = (uint *)(ulong)*puVar14;
      if (*puVar14 == 0) {
        uVar19 = 0;
      }
      else {
        if ((DAT_05557764 & 1) == 0) {
          DAT_05557764 = 1;
          DAT_0555776c = 0xffffffff;
          DAT_05557768 = 0xffffffff;
          uVar15 = 0xffffffff;
LAB_026262ac:
          if (puVar14 != puVar10) {
            do {
              if (uVar15 != 0xffffffff) {
LAB_02626344:
                uVar19 = 0;
                goto LAB_02626274;
              }
              lVar7 = 0xc;
              if (*(char *)((long)puVar14 + (10 - (long)puVar10)) != '\0') {
                lVar7 = 0x1c;
              }
              lVar7 = (long)puVar14 + (lVar7 - (long)puVar10);
              if (lVar7 == 0) goto LAB_02626344;
              uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar10));
              DAT_0555776c = 0xfffffffe;
              if (uVar15 == 0) goto LAB_02626344;
              puVar12 = (uint *)(lVar7 + 4);
              while (puVar12[-1] != 0x877c84de) {
                puVar12 = puVar12 + 2;
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) goto LAB_02626344;
              }
              uVar15 = (ulong)*puVar12;
              uVar13 = 0;
              if (*puVar12 != 0xffffffff) {
                uVar13 = uVar15;
              }
              DAT_0555776c = (uint)uVar13;
            } while ((int)DAT_0555776c < 0);
            puVar8 = (ushort *)(uVar13 + (long)puVar14);
            if (puVar8 != (ushort *)0x0) goto LAB_0262624c;
          }
        }
        else {
          uVar15 = (ulong)DAT_0555776c;
          if ((int)DAT_0555776c < 0) goto LAB_026262ac;
          puVar8 = (ushort *)(uVar15 + (long)puVar14);
          if (puVar8 != (ushort *)0x0) {
LAB_0262624c:
            uVar19 = (uint)*puVar8;
            goto LAB_02626274;
          }
        }
        uVar19 = 0;
      }
    }
    else {
      uVar19 = FUN_01aed730(&local_88);
    }
  }
  else {
    uVar19 = 400;
    bVar4 = true;
  }
LAB_02626274:
  fVar18 = (float)(int)(uVar19 * uVar9);
  uVar15 = (ulong)(uint)fVar18;
  fVar21 = fVar21 + fVar18;
switchD_026254d4_default:
  iVar17 = iVar17 + 1;
  if (iVar17 == 6) goto LAB_0262634c;
  goto LAB_026254a0;
LAB_02625fb4:
  puVar8 = (ushort *)(uVar13 + (long)puVar16);
  sVar6 = (short)local_88;
  if (puVar8 == (ushort *)0x0) goto switchD_026254d4_default;
  goto LAB_026260f8;
LAB_0262634c:
  uVar19 = 0;
  if (*puVar16 != 0) {
    cVar5 = DAT_055576f0;
    do {
      if (cVar5 == '\0') {
        cVar5 = '\x01';
        DAT_055576f4 = 0xffffffffffffffff;
        DAT_055576fc = 0xffffffffffffffff;
        DAT_055576f0 = '\x01';
        DAT_05557704 = 0xffffffffffffffff;
        DAT_0555770c = -1;
        DAT_05557714 = -1;
        DAT_0555771c = 0xffffffffffffffff;
        DAT_05557724 = 0xffffffffffffffff;
        DAT_0555772c = 0xffffffffffffffff;
        DAT_05557734 = 0xffffffffffffffff;
        DAT_0555773c = 0xffffffffffffffff;
        DAT_05557744 = 0xffffffffffffffff;
        DAT_0555774c = 0xffffffffffffffff;
        DAT_05557754 = 0xffffffffffffffff;
        DAT_0555775c = 0xffffffffffffffff;
        uVar3 = *puVar16;
      }
      else {
        if (-1 < DAT_0555770c) {
          if ((undefined4 *)((ulong)DAT_0555770c._4_4_ + (long)puVar16) != (undefined4 *)0x0) {
            uVar19 = NEON_ucvtf(*(undefined4 *)((ulong)DAT_0555770c._4_4_ + (long)puVar16));
          }
          break;
        }
        if (DAT_0555770c._4_4_ != 0xffffffff) break;
        uVar3 = *puVar16;
      }
      if ((uVar3 == 0) || (puVar14 = (uint *)(ulong)uVar3, puVar16 == puVar14)) break;
      lVar7 = 0xc;
      if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar16 + (lVar7 - (long)puVar14);
      if (lVar7 == 0) break;
      uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
      DAT_0555770c = CONCAT44(0xfffffffe,(undefined4)DAT_0555770c);
      if (uVar15 == 0) break;
      piVar11 = (int *)(lVar7 + 4);
      while (piVar11[-1] != -0x63b105bb) {
        piVar11 = piVar11 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_02626430;
      }
      iVar17 = 0;
      if (*piVar11 != -1) {
        iVar17 = *piVar11;
      }
      DAT_0555770c = CONCAT44(iVar17,(undefined4)DAT_0555770c);
      if (*puVar16 == 0) break;
    } while( true );
  }
LAB_02626430:
  uVar15 = (ulong)(uint)fVar21;
  if (!bVar4) {
    uVar15 = (ulong)uVar19;
  }
LAB_02626438:
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar15;
  return auVar20;
}

