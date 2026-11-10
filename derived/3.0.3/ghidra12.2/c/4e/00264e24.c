
undefined8 FUN_00264e24(long param_1,long param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  bool bVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  char *pcVar21;
  undefined8 local_180;
  undefined4 local_178;
  int local_170 [4];
  undefined1 auStack_160 [128];
  undefined4 local_e0;
  undefined1 local_dc;
  ulong local_d8;
  
  if (param_3 < 5) {
    return 0;
  }
  bVar2 = *(byte *)(param_2 + 1);
  if (bVar2 != 0) {
    bVar3 = *(byte *)(param_2 + 2);
    if (bVar3 != 0xff) {
      bVar4 = *(byte *)(param_2 + 3);
      if (bVar4 != 0xff) {
        if (*(ushort *)(param_1 + 0x6e) < (ushort)bVar2) {
          uVar14 = 3;
          *(undefined2 *)(param_1 + 0x6c) = 0;
          goto LAB_00264e98;
        }
        if (bVar2 < bVar3) {
          return 0;
        }
        if (bVar2 < bVar4) {
          return 0;
        }
        if (bVar3 == bVar4) {
          return 0;
        }
        bVar5 = *(byte *)(param_2 + 4);
        uVar20 = (uint)bVar2;
        if (bVar5 == 1) {
          if ((((uVar20 * 0x44 + 0x14 != param_3) || (*(char *)(param_2 + 5) != '\0')) ||
              (*(byte *)(param_2 + 6) != uVar20)) || (*(char *)(param_2 + 7) != '\0')) {
            return 0;
          }
          plVar12 = *(long **)(DAT_04c603c8 + 0x110);
          if (plVar12 != (long *)0x0) {
            local_d8 = (ulong)((uint)(*(ushort *)(param_2 + 8) >> 8) |
                              (*(ushort *)(param_2 + 8) & 0xff00ff) << 8) |
                       (ulong)*(byte *)(param_2 + 10) << 0x10;
            local_e0 = 0x17;
            local_dc = 0xfd;
            (**(code **)(*plVar12 + 0x10))(plVar12,&local_e0);
          }
          uVar9 = FUN_00228490(param_2 + 0xc);
          *(undefined4 *)(DAT_04c603c8 + 0x11c) = uVar9;
          bVar5 = *(byte *)((ulong)bVar3 * 0x44 + param_2 + 0x50);
          iVar18 = (int)((ulong)bVar4 * 0x44);
          bVar4 = *(byte *)((ulong)bVar4 * 0x44 + param_2 + 0x50);
          uVar9 = FUN_002284b0(param_2 + (ulong)((int)((ulong)bVar3 * 0x44) + 0x51));
          uVar10 = FUN_002284b0(param_2 + (ulong)(iVar18 + 0x51));
          FUN_002b3fa8(&local_e0);
          FUN_002b3fa8(auStack_160);
          FUN_002b476c(local_170,&local_e0,param_2 + (ulong)(iVar18 + 0x10));
          FUN_002ba14c(local_170,*(undefined8 *)PTR_DAT_04bc1510,auStack_160);
          if ((bVar5 < 0x20) && (bVar4 < 0x20)) {
            if (local_170[0] != 0) goto LAB_00265270;
            uVar13 = FUN_002b41c0(&local_e0,auStack_160);
            if ((uVar13 & 1) == 0) goto LAB_0026525c;
            uVar13 = FUN_00265440(uVar13,uVar10,bVar4,uVar9,bVar5);
            if ((uVar13 & 1) != 0) {
              lVar16 = 0;
              lVar17 = 0;
              *(ushort *)(param_1 + 0x6c) = (ushort)bVar2;
              uVar13 = 0;
              do {
                uVar19 = (ulong)((int)lVar17 + 0x50);
                if (0x1f < *(byte *)(param_2 + uVar19)) goto LAB_00265438;
                plVar12 = (long *)(*(long *)(param_1 + 0x70) + lVar16);
                (**(code **)(*plVar12 + 0x18))(&local_180,plVar12,param_2 + lVar17 + 0x10);
                *(undefined1 *)(*(long *)(param_1 + 0x78) + uVar13) =
                     *(undefined1 *)(param_2 + uVar19);
                uVar8 = FUN_002284b0(param_2 + lVar17 + 0x51);
                lVar17 = lVar17 + 0x44;
                lVar16 = lVar16 + 0x80;
                *(undefined2 *)(*(long *)(param_1 + 0x80) + uVar13 * 2) = uVar8;
                uVar13 = uVar13 + 1;
              } while (uVar13 < *(ushort *)(param_1 + 0x6c));
              goto LAB_00265410;
            }
LAB_00265438:
            uVar11 = 0;
            goto LAB_00265424;
          }
LAB_0026525c:
          if (local_170[0] == 0) {
            FUN_002b4294(&local_e0,auStack_160);
          }
LAB_00265270:
          local_178 = 0;
          local_180 = 0x200000000000;
          FUN_002b493c(auStack_160,&local_180);
          local_180 = 0x200000000000;
          local_178 = 0;
          FUN_002b493c(&local_e0,&local_180);
          *(undefined2 *)(param_1 + 0x6c) = 0;
          *(undefined1 *)(param_1 + 0x8c) = 3;
        }
        else {
          if (param_3 < 0xc) {
            return 0;
          }
          if (bVar5 - 4 < 0xfffffffd) {
            return 0;
          }
          pcVar21 = (char *)(param_1 + (ulong)*(byte *)(param_2 + 5) + 0x89);
          if (*pcVar21 == '\0') {
            return 1;
          }
          if (*(byte *)(param_2 + 5) == 0) {
            if (param_3 < 0x14) {
              return 0;
            }
            plVar12 = *(long **)(DAT_04c603c8 + 0x110);
            if (plVar12 != (long *)0x0) {
              local_d8 = (ulong)((uint)(*(ushort *)(param_2 + 8) >> 8) |
                                (*(ushort *)(param_2 + 8) & 0xff00ff) << 8) |
                         (ulong)*(byte *)(param_2 + 10) << 0x10;
              local_e0 = 0x17;
              local_dc = 0xfd;
              (**(code **)(*plVar12 + 0x10))(plVar12,&local_e0);
            }
            uVar9 = FUN_00228490(param_2 + 0xc);
            *(undefined4 *)(DAT_04c603c8 + 0x11c) = uVar9;
            uVar15 = 0x10;
          }
          else {
            uVar15 = 8;
          }
          if (((*(char *)(param_1 + 0x89) == '\0') || (*(char *)(param_1 + 0x8a) == '\0')) ||
             (*(char *)(param_1 + 0x8b) == '\0')) {
            if (*(ushort *)(param_1 + 0x8e) != uVar20) {
              return 0;
            }
            if (*(byte *)(param_1 + 0x90) != bVar3) {
              return 0;
            }
            if (*(byte *)(param_1 + 0x91) != bVar4) {
              return 0;
            }
            if (*(byte *)(param_1 + 0x92) != bVar5) {
              return 0;
            }
          }
          else {
            *(ushort *)(param_1 + 0x8e) = (ushort)bVar2;
            *(byte *)(param_1 + 0x90) = bVar3;
            *(byte *)(param_1 + 0x91) = bVar4;
            *(byte *)(param_1 + 0x92) = bVar5;
          }
          bVar2 = *(byte *)(param_2 + 6);
          uVar13 = (ulong)*(byte *)(param_2 + 7);
          if (uVar20 < (uint)*(byte *)(param_2 + 7) + (uint)bVar2) {
            return 0;
          }
          if ((uVar15 | 4) + (uint)bVar2 * 0x44 != param_3) {
            return 0;
          }
          if (bVar2 == 0) {
            *pcVar21 = '\0';
LAB_002652b4:
            if (bVar5 == 1) {
              uVar13 = 0;
              bVar7 = false;
            }
            else {
              uVar13 = 0;
              bVar7 = false;
              do {
                lVar17 = param_1 + uVar13;
                uVar13 = uVar13 + 2;
                bVar7 = *(char *)(lVar17 + 0x8a) != '\0' ||
                        (*(char *)(lVar17 + 0x89) != '\0' || bVar7);
              } while (((ulong)bVar5 & 0xfe) != uVar13);
            }
            if ((bVar5 & 1) != 0) {
              bVar7 = *(char *)(param_1 + uVar13 + 0x89) != '\0' || bVar7;
            }
            if (bVar7) {
              return 1;
            }
          }
          else {
            lVar17 = 0;
            lVar16 = uVar13 << 7;
            do {
              lVar1 = param_2 + (ulong)uVar15 + lVar17;
              plVar12 = (long *)(*(long *)(param_1 + 0x70) + lVar16);
              (**(code **)(*plVar12 + 0x18))(&local_e0,plVar12,lVar1);
              *(undefined1 *)(*(long *)(param_1 + 0x78) + uVar13) = *(undefined1 *)(lVar1 + 0x40);
              uVar8 = FUN_002284b0(lVar1 + 0x41);
              lVar17 = lVar17 + 0x44;
              lVar16 = lVar16 + 0x80;
              *(undefined2 *)(*(long *)(param_1 + 0x80) + uVar13 * 2) = uVar8;
              uVar13 = uVar13 + 1;
            } while ((ulong)(uint)bVar2 * 0x44 != lVar17);
            bVar5 = *(byte *)(param_1 + 0x92);
            *pcVar21 = '\0';
            if (bVar5 != 0) goto LAB_002652b4;
          }
          uVar13 = (ulong)*(byte *)(param_1 + 0x91);
          bVar2 = *(byte *)(*(long *)(param_1 + 0x78) + (ulong)*(byte *)(param_1 + 0x90));
          bVar3 = *(byte *)(*(long *)(param_1 + 0x78) + uVar13);
          uVar8 = *(undefined2 *)(*(long *)(param_1 + 0x80) + (ulong)*(byte *)(param_1 + 0x90) * 2);
          uVar6 = *(undefined2 *)(*(long *)(param_1 + 0x80) + uVar13 * 2);
          FUN_002b4018(&local_e0,*(long *)(param_1 + 0x70) + uVar13 * 0x80);
          FUN_002b3fa8(auStack_160);
          FUN_002ba14c(local_170,*(undefined8 *)PTR_DAT_04bc1510,auStack_160);
          if ((bVar2 < 0x20) && (bVar3 < 0x20)) {
            if (local_170[0] == 0) {
              uVar13 = FUN_002b41c0(&local_e0,auStack_160);
              if ((uVar13 & 1) != 0) {
                uVar13 = FUN_00265440(uVar13,uVar6,bVar3,uVar8,bVar2);
                if ((uVar13 & 1) == 0) goto LAB_00265438;
                *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(param_1 + 0x8e);
                goto LAB_00265410;
              }
              goto LAB_002653b8;
            }
          }
          else {
LAB_002653b8:
            if (local_170[0] == 0) {
              FUN_002b4294(&local_e0,auStack_160);
            }
          }
          local_178 = 0;
          local_180 = 0x200000000000;
          FUN_002b493c(auStack_160,&local_180);
          local_180 = 0x200000000000;
          local_178 = 0;
          FUN_002b493c(&local_e0,&local_180);
          *(undefined2 *)(param_1 + 0x6c) = 0;
          *(undefined1 *)(param_1 + 0x8c) = 3;
        }
LAB_00265410:
        uVar11 = FUN_0026c420(DAT_04c603c8);
        FUN_00273a0c(uVar11,0);
        uVar11 = 1;
        *(undefined1 *)(param_1 + 0x88) = 0;
LAB_00265424:
        FUN_002b4104(auStack_160);
        FUN_002b4104(&local_e0);
        return uVar11;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x6c) = 0;
  uVar14 = *(undefined1 *)(param_2 + 4);
LAB_00264e98:
  *(undefined1 *)(param_1 + 0x8c) = uVar14;
  uVar11 = FUN_0026c420(DAT_04c603c8);
  FUN_00273a0c(uVar11,0);
  *(undefined1 *)(param_1 + 0x88) = 0;
  return 1;
}

