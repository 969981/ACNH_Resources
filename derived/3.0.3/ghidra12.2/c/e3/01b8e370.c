
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffee8 : 0x01b8e81c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01b8e370(long *param_1,uint *param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  void *__s;
  uint uVar10;
  ulong uVar11;
  char cVar12;
  int iVar13;
  undefined8 *puVar14;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ulong local_118;
  undefined2 local_110;
  undefined **local_108;
  ulong *local_100;
  uint local_70 [4];
  
  __s = (void *)(**(code **)(*param_1 + 0x18))();
  memset(__s,0,0x754);
  *param_2 = 0;
  lVar19 = *(long *)PTR_DAT_04bb4788;
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar18 = param_3[1];
  (**(code **)(*param_4 + 0x18))(param_4);
  FUN_0074fda4(&local_108,"%s-%s",lVar18,param_4[1]);
  (*(code *)local_108[3])(&local_108);
  uVar8 = FUN_006bd550(local_100,0);
  FUN_006bd550("invalid_name",0);
  puVar6 = PTR_DAT_04bc0688;
  puVar5 = PTR_DAT_04bc0680;
  uVar10 = *(uint *)(lVar19 + 0xe48);
  uVar11 = (ulong)uVar10;
  if (*(char *)(lVar19 + 0xe59) == '\0') {
    if (0 < (int)uVar10) {
      puVar14 = *(undefined8 **)(lVar19 + 0xe50);
      uVar10 = 0xffffffff;
      do {
        puVar17 = (uint *)*puVar14;
        if (uVar8 == puVar17[8]) goto LAB_01b8e4fc;
        uVar11 = uVar11 - 1;
        puVar14 = puVar14 + 1;
      } while (uVar11 != 0);
      goto LAB_01b8e500;
    }
  }
  else if (uVar10 != 0) {
    if ((int)uVar10 < 2) {
      lVar18 = *(long *)(lVar19 + 0xe50);
      uVar9 = 0;
    }
    else {
      iVar13 = uVar10 - 1;
      lVar18 = *(long *)(lVar19 + 0xe50);
      uVar9 = 0;
      do {
        iVar1 = iVar13 + uVar9;
        if (iVar1 < 0 != SCARRY4(iVar13,uVar9)) {
          iVar1 = iVar1 + 1;
        }
        uVar10 = iVar1 >> 1;
        uVar2 = *(uint *)(*(long *)(lVar18 + (long)(int)uVar10 * 8) + 0x20);
        if (uVar8 == uVar2) goto LAB_01b8e4f4;
        if (uVar2 < uVar8) {
          uVar9 = uVar10 + 1;
        }
        else {
          iVar13 = uVar10 - 1;
        }
      } while ((int)uVar9 < iVar13);
    }
    uVar10 = uVar9;
    if (uVar8 == *(uint *)(*(long *)(lVar18 + (long)(int)uVar9 * 8) + 0x20)) {
LAB_01b8e4f4:
      if (-1 < (int)uVar10) {
        puVar17 = *(uint **)(lVar18 + (ulong)uVar10 * 8);
LAB_01b8e4fc:
        uVar10 = *puVar17;
      }
      goto LAB_01b8e500;
    }
  }
  uVar10 = 0xffffffff;
LAB_01b8e500:
  if ((int)*(uint *)(lVar19 + 0xe20) < 1) {
    if (*(long *)(lVar19 + 0xd10) == 0) {
      return;
    }
    puVar17 = *(uint **)(*(long *)(lVar19 + 0xd10) + 8);
    if (puVar17 == (uint *)0x0) {
      return;
    }
    if ((uVar10 < *(uint *)(lVar19 + 0xd28)) &&
       (*(char *)(*(long *)(lVar19 + 0xd30) + (long)(int)uVar10) == '\0')) {
      return;
    }
    if (*puVar17 <= uVar10) {
      return;
    }
    if (puVar17[1] == 0) {
      return;
    }
    if ((ushort)puVar17[2] == 0) {
      return;
    }
    iVar13 = 0xc;
    if (*(char *)((long)puVar17 + 10) != '\0') {
      iVar13 = 0x1c;
    }
    puVar17 = (uint *)((ulong)(puVar17[1] * uVar10 + (uint)(ushort)puVar17[2] * 8 + iVar13) +
                      (long)puVar17);
  }
  else {
    if (*(uint *)(lVar19 + 0xe20) <= uVar10) {
      return;
    }
    if (*(uint *)(lVar19 + 0xe10) <= uVar10) {
      uVar10 = 0;
    }
    puVar17 = *(uint **)(*(long *)(lVar19 + 0xe18) + (ulong)uVar10 * 8);
  }
  if (puVar17 != (uint *)0x0) {
    local_110 = 0;
    local_118 = 0;
    if (*puVar17 == 0) {
LAB_01b8e68c:
      uVar10 = 0;
    }
    else {
      cVar12 = *PTR_DAT_04bc0680;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
        }
        else {
          uVar10 = *(uint *)(puVar6 + 4);
          if (-1 < (int)uVar10) {
            if (((uint *)((ulong)uVar10 + (long)puVar17) == (uint *)0x0) ||
               (uVar10 = *(uint *)((ulong)uVar10 + (long)puVar17), 2 < uVar10)) goto LAB_01b8e68c;
            goto LAB_01b8e690;
          }
          if (uVar10 != 0xffffffff) goto LAB_01b8e68c;
        }
        puVar15 = (uint *)(ulong)*puVar17;
        uVar10 = 0;
        if ((*puVar17 == 0) || (puVar17 == puVar15)) goto LAB_01b8e690;
        lVar18 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar15)) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar17 + (lVar18 - (long)puVar15);
        if (lVar18 == 0) goto LAB_01b8e68c;
        uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar15));
        *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
        uVar10 = 0;
        if (uVar11 == 0) goto LAB_01b8e690;
        piVar16 = (int *)(lVar18 + 4);
        while (piVar16[-1] != 0x128a3d9b) {
          piVar16 = piVar16 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            uVar10 = 0;
            goto LAB_01b8e690;
          }
        }
        iVar13 = 0;
        if (*piVar16 != -1) {
          iVar13 = *piVar16;
        }
        *(int *)(puVar6 + 4) = iVar13;
      } while (*puVar17 != 0);
      uVar10 = 0;
    }
LAB_01b8e690:
    FUN_01b0d390(&local_118,uVar10);
    uVar10 = *puVar17;
    if (uVar10 != 0) {
      cVar12 = *puVar5;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
          uVar10 = *puVar17;
        }
        else {
          uVar8 = *(uint *)puVar6;
          if (-1 < (int)uVar8) {
            if (((uint *)((ulong)uVar8 + (long)puVar17) != (uint *)0x0) &&
               (local_70[0] = *(uint *)((ulong)uVar8 + (long)puVar17), local_70[0] < 0x4f))
            goto LAB_01b8e780;
            break;
          }
          if (uVar8 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)uVar10;
        local_70[0] = 0;
        if ((puVar15 == (uint *)0x0) || (local_70[0] = 0, puVar17 == puVar15)) goto LAB_01b8e780;
        lVar18 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar15)) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar17 + (lVar18 - (long)puVar15);
        local_70[0] = 0;
        if (lVar18 == 0) goto LAB_01b8e780;
        uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar15));
        *(undefined4 *)puVar6 = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar16 = (int *)(lVar18 + 4);
        while (piVar16[-1] != 0x368210c4) {
          piVar16 = piVar16 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01b8e77c;
        }
        iVar13 = 0;
        if (*piVar16 != -1) {
          iVar13 = *piVar16;
        }
        *(int *)puVar6 = iVar13;
        uVar10 = *puVar17;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_01b8e77c:
    local_70[0] = 0;
LAB_01b8e780:
    if (local_70[0] < 0x4f) {
      local_108 = (undefined **)CONCAT44(local_108._4_4_,local_70[0]);
      uVar10 = local_70[0] + 7;
      if (-1 < (int)local_70[0]) {
        uVar10 = local_70[0];
      }
      uVar10 = (int)uVar10 >> 3;
      if (uVar10 < 10) {
        local_108 = (undefined **)CONCAT44(local_108._4_4_,local_70[0]);
        *(byte *)((long)&local_118 + (ulong)uVar10) =
             *(byte *)((long)&local_118 + (ulong)uVar10) | (byte)(1 << (ulong)(local_70[0] & 7));
      }
    }
    local_70[0] = 0;
    local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
    local_118 = local_118 & 0xfffffffffffffffe;
    local_70[0] = 0;
    local_100 = &local_118;
    local_108 = &PTR_FUN_04a39618;
    FUN_008a1ba0(param_1,&local_108);
    if (*puVar17 == 0) {
LAB_01b8e920:
      uVar10 = 0;
    }
    else {
      cVar12 = *puVar5;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
        }
        else {
          uVar10 = *(uint *)(puVar6 + 0xc);
          if (-1 < (int)uVar10) {
            if (((ushort *)((ulong)uVar10 + (long)puVar17) == (ushort *)0x0) ||
               (uVar4 = *(ushort *)((ulong)uVar10 + (long)puVar17), uVar10 = (uint)uVar4,
               0x12 < uVar4)) goto LAB_01b8e920;
            goto LAB_01b8e924;
          }
          if (uVar10 != 0xffffffff) goto LAB_01b8e920;
        }
        puVar15 = (uint *)(ulong)*puVar17;
        uVar10 = 0;
        if ((*puVar17 == 0) || (puVar17 == puVar15)) goto LAB_01b8e924;
        lVar18 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar15)) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar17 + (lVar18 - (long)puVar15);
        if (lVar18 == 0) goto LAB_01b8e920;
        uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar15));
        *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
        uVar10 = 0;
        if (uVar11 == 0) goto LAB_01b8e924;
        piVar16 = (int *)(lVar18 + 4);
        while (piVar16[-1] != -0x1f9f2c33) {
          piVar16 = piVar16 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            uVar10 = 0;
            goto LAB_01b8e924;
          }
        }
        iVar13 = 0;
        if (*piVar16 != -1) {
          iVar13 = *piVar16;
        }
        *(int *)(puVar6 + 0xc) = iVar13;
      } while (*puVar17 != 0);
      uVar10 = 0;
    }
LAB_01b8e924:
    local_108 = (undefined **)CONCAT44(local_108._4_4_,uVar10);
    if (uVar10 - 1 < 0x12) {
      (*(code *)(&PTR_LAB_04a39630)[(int)(uVar10 - 1)])(param_1,param_5,param_6,0);
    }
    puVar5 = PTR_DAT_04bb43c0;
    local_108 = &PTR_FUN_049ff948;
    uVar10 = 0;
    do {
      (**(code **)(*param_1 + 0x10))(local_70,param_1,uVar10);
      lVar18 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar18 + (ulong)(uVar10 >> 5) * 4) & uVar8) != 0) {
        lVar18 = *(long *)puVar5;
        uVar9 = FUN_0277d6c4(local_70);
        if (*(long *)puVar5 != 0) {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if (((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
             (uVar11 = (*(code *)*local_108)(&local_108,local_70), (uVar11 & 1) != 0))
          goto LAB_01b8e9b0;
        }
        lVar18 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar19 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar18 + lVar19) = *(uint *)(lVar18 + lVar19) & (uVar8 ^ 0xffffffff);
      }
LAB_01b8e9b0:
      puVar7 = PTR_DAT_04bc0688;
      puVar6 = PTR_DAT_04bc0680;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    if (*puVar17 == 0) {
LAB_01b8eb2c:
      uVar10 = 0;
    }
    else {
      cVar12 = *PTR_DAT_04bc0680;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x10) = 0xffffffff;
        }
        else {
          uVar10 = *(uint *)(puVar7 + 0x10);
          if (-1 < (int)uVar10) {
            if (((byte *)((ulong)uVar10 + (long)puVar17) == (byte *)0x0) ||
               (bVar3 = *(byte *)((ulong)uVar10 + (long)puVar17), uVar10 = (uint)bVar3, 1 < bVar3))
            goto LAB_01b8eb2c;
            goto LAB_01b8eb30;
          }
          if (uVar10 != 0xffffffff) goto LAB_01b8eb2c;
        }
        puVar15 = (uint *)(ulong)*puVar17;
        uVar10 = 0;
        if ((*puVar17 == 0) || (puVar17 == puVar15)) goto LAB_01b8eb30;
        lVar18 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar15)) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar17 + (lVar18 - (long)puVar15);
        if (lVar18 == 0) goto LAB_01b8eb2c;
        uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar15));
        *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
        uVar10 = 0;
        if (uVar11 == 0) goto LAB_01b8eb30;
        piVar16 = (int *)(lVar18 + 4);
        while (piVar16[-1] != -0x3dcc8d85) {
          piVar16 = piVar16 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            uVar10 = 0;
            goto LAB_01b8eb30;
          }
        }
        iVar13 = 0;
        if (*piVar16 != -1) {
          iVar13 = *piVar16;
        }
        *(int *)(puVar7 + 0x10) = iVar13;
      } while (*puVar17 != 0);
      uVar10 = 0;
    }
LAB_01b8eb30:
    *param_2 = uVar10;
  }
  return;
}

