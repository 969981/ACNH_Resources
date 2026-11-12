
undefined8 FUN_0087d910(long param_1,ulong *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *__s;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  uint *puVar8;
  int *piVar9;
  ulong uVar10;
  uint *puVar11;
  char *pcVar12;
  int iVar13;
  uint *puVar14;
  char cVar15;
  uint uVar16;
  ulong uVar17;
  ulong local_80;
  undefined *local_78;
  long local_70;
  undefined8 local_68;
  
  __s = PTR_DAT_04bb3250;
  if (param_2 == (ulong *)0x0) {
    return 0;
  }
  local_68 = CONCAT17(local_68._7_1_,0x5010b07e5);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  while ((uVar3 = *(uint *)(param_1 + 1000), (int)uVar3 < 1 &&
         (((*(long *)(param_1 + 0x2d8) == 0 ||
           (puVar14 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar14 == (uint *)0x0)) ||
          (uVar3 = *puVar14, (int)uVar3 < 1))))) {
LAB_0087d9a0:
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_78 = (undefined *)(lVar7 + 0x15180);
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
    if (0x80c < (short)local_68) {
      return 0;
    }
  }
  uVar17 = 0;
  pcVar12 = PTR_DAT_04bb3248;
LAB_0087da2c:
  if ((int)*(uint *)(param_1 + 1000) < 1) {
    if (((((*(long *)(param_1 + 0x2d8) == 0) ||
          (puVar14 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar14 == (uint *)0x0)) ||
         ((uVar17 < *(uint *)(param_1 + 0x2f0) &&
          (*(char *)(*(long *)(param_1 + 0x2f8) + uVar17) == '\0')))) ||
        ((*puVar14 <= uVar17 || (puVar14[1] == 0)))) || ((ushort)puVar14[2] == 0))
    goto LAB_0087dad0;
    iVar13 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      iVar13 = 0x1c;
    }
    puVar14 = (uint *)((ulong)(puVar14[1] * (int)uVar17 + (uint)(ushort)puVar14[2] * 8 + iVar13) +
                      (long)puVar14);
    uVar16 = *puVar14;
  }
  else if (uVar17 < *(uint *)(param_1 + 1000)) {
    uVar10 = uVar17 & 0xffffffff;
    if (*(uint *)(param_1 + 0x3d8) <= uVar17) {
      uVar10 = 0;
    }
    puVar14 = *(uint **)(*(long *)(param_1 + 0x3e0) + uVar10 * 8);
    uVar16 = *puVar14;
  }
  else {
LAB_0087dad0:
    puVar14 = (uint *)0x0;
    uVar16 = uRam0000000000000000;
  }
  if (uVar16 != 0) {
    cVar15 = *pcVar12;
    do {
      puVar5 = PTR_DAT_04bb5810;
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *pcVar12 = '\x01';
        memset(__s,0xff,0x288);
        pcVar12 = PTR_DAT_04bb3248;
      }
      else {
        uVar16 = *(uint *)(__s + 8);
        if (-1 < (int)uVar16) {
          if (((uint *)((ulong)uVar16 + (long)puVar14) == (uint *)0x0) ||
             (uVar16 = *(uint *)((ulong)uVar16 + (long)puVar14), (int)uVar16 < 0))
          goto LAB_0087ddd4;
          lVar7 = *(long *)PTR_DAT_04bb2208;
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar7 + 0xc98);
          if ((*(uint *)(lVar7 + 0xc78) <= uVar16) ||
             (puVar8 = *(uint **)(*(long *)(lVar7 + 0xc80) + (long)(int)uVar16 * 8),
             puVar8 == (uint *)0x0)) goto LAB_0087ddd4;
          if (*puVar8 == 0) goto LAB_0087dcb4;
          cVar15 = *PTR_DAT_04bb5808;
          goto LAB_0087dbfc;
        }
        if (uVar16 != 0xffffffff) goto LAB_0087ddd4;
      }
      lVar7 = (long)puVar14 - (ulong)*puVar14;
      if ((*puVar14 == 0) || (lVar7 == 0)) goto LAB_0087ddd4;
      lVar2 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar7 == 0) goto LAB_0087ddd4;
      uVar10 = (ulong)*(ushort *)(lVar7 + 8);
      *(undefined4 *)(__s + 8) = 0xfffffffe;
      if (uVar10 == 0) goto LAB_0087ddd4;
      piVar9 = (int *)(lVar2 + lVar7 + 4);
      while (piVar9[-1] != -0x1f090cd1) {
        piVar9 = piVar9 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0087ddd4;
      }
      iVar13 = 0;
      if (*piVar9 != -1) {
        iVar13 = *piVar9;
      }
      *(int *)(__s + 8) = iVar13;
    } while (*puVar14 != 0);
  }
  goto LAB_0087da20;
  while( true ) {
    puVar11 = (uint *)(ulong)*puVar8;
    lVar7 = 0;
    if ((*puVar8 == 0) || (puVar8 == puVar11)) goto LAB_0087dcb8;
    lVar7 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar7 - (long)puVar11);
    if (lVar2 == 0) break;
    uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
    *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
    lVar7 = 0;
    if (uVar10 == 0) goto LAB_0087dcb8;
    piVar9 = (int *)(lVar2 + 4);
    while (piVar9[-1] != 0x45f320f2) {
      piVar9 = piVar9 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        lVar7 = 0;
        goto LAB_0087dcb8;
      }
    }
    iVar13 = 0;
    if (*piVar9 != -1) {
      iVar13 = *piVar9;
    }
    *(int *)(puVar5 + 0x18) = iVar13;
    if (*puVar8 == 0) break;
LAB_0087dbfc:
    if (cVar15 == '\0') {
      cVar15 = '\x01';
      *PTR_DAT_04bb5808 = 1;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar16 = *(uint *)(puVar5 + 0x18);
      if (-1 < (int)uVar16) {
        lVar7 = (ulong)uVar16 + (long)puVar8;
        goto LAB_0087dcb8;
      }
      if (uVar16 != 0xffffffff) break;
    }
  }
LAB_0087dcb4:
  lVar7 = 0;
LAB_0087dcb8:
  local_70 = *(long *)PTR_PTR_04bb5800;
  if (lVar7 != 0) {
    local_70 = lVar7;
  }
  local_78 = PTR_DAT_04bb2020 + 0x10;
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar7 = param_3[1];
  (**(code **)(local_78 + 0x18))(&local_78);
  if (lVar7 == local_70) {
LAB_0087ddac:
    uVar10 = FUN_00875530(param_1,puVar14,local_68 & 0xffff,local_68._2_1_,local_68._3_1_);
    pcVar12 = PTR_DAT_04bb3248;
    if ((uVar10 & 1) != 0) {
LAB_0087e218:
      *param_2 = local_68;
      return 1;
    }
  }
  else {
    uVar10 = 0;
    bVar6 = true;
    do {
      lVar7 = param_3[1] + 2 + uVar10;
      cVar15 = *(char *)(lVar7 + -2);
      pcVar12 = PTR_DAT_04bb3248;
      if (cVar15 != *(char *)(local_70 + uVar10)) break;
      if (cVar15 == '\0') {
        if (bVar6) goto LAB_0087ddac;
        break;
      }
      cVar15 = *(char *)(lVar7 + -1);
      if (cVar15 != *(char *)(local_70 + uVar10 + 1)) break;
      if (cVar15 == '\0') goto LAB_0087ddac;
      cVar15 = *(char *)(param_3[1] + 2 + uVar10);
      if (cVar15 != *(char *)(local_70 + uVar10 + 2)) break;
      if (cVar15 == '\0') goto LAB_0087ddac;
      bVar6 = uVar10 < 0x7fffe;
      uVar10 = uVar10 + 3;
    } while (uVar10 != 0x80001);
  }
LAB_0087ddd4:
  if (*puVar14 != 0) {
    cVar15 = *pcVar12;
    do {
      puVar5 = PTR_DAT_04bb5810;
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *pcVar12 = '\x01';
        memset(__s,0xff,0x288);
        pcVar12 = PTR_DAT_04bb3248;
      }
      else {
        uVar16 = *(uint *)(__s + 0xc);
        if (-1 < (int)uVar16) {
          if (((uint *)((ulong)uVar16 + (long)puVar14) != (uint *)0x0) &&
             (uVar16 = *(uint *)((ulong)uVar16 + (long)puVar14), -1 < (int)uVar16)) {
            lVar7 = *(long *)PTR_DAT_04bb2208;
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar7 + 0xc98);
            if ((uVar16 < *(uint *)(lVar7 + 0xc78)) &&
               (puVar8 = *(uint **)(*(long *)(lVar7 + 0xc80) + (long)(int)uVar16 * 8),
               puVar8 != (uint *)0x0)) {
              if (*puVar8 == 0) goto LAB_0087dfb4;
              cVar15 = *PTR_DAT_04bb5808;
              goto LAB_0087defc;
            }
          }
          break;
        }
        if (uVar16 != 0xffffffff) break;
      }
      lVar7 = (long)puVar14 - (ulong)*puVar14;
      if ((*puVar14 == 0) || (lVar7 == 0)) break;
      lVar2 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar7 == 0) break;
      uVar10 = (ulong)*(ushort *)(lVar7 + 8);
      *(undefined4 *)(__s + 0xc) = 0xfffffffe;
      if (uVar10 == 0) break;
      piVar9 = (int *)(lVar2 + lVar7 + 4);
      while (piVar9[-1] != -0x4a4a2a1c) {
        piVar9 = piVar9 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0087da20;
      }
      iVar13 = 0;
      if (*piVar9 != -1) {
        iVar13 = *piVar9;
      }
      *(int *)(__s + 0xc) = iVar13;
      if (*puVar14 == 0) break;
    } while( true );
  }
LAB_0087da20:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar3) goto LAB_0087d9a0;
  goto LAB_0087da2c;
  while( true ) {
    puVar11 = (uint *)(ulong)*puVar8;
    lVar7 = 0;
    if ((*puVar8 == 0) || (puVar8 == puVar11)) goto LAB_0087dfb8;
    lVar7 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar7 - (long)puVar11);
    if (lVar2 == 0) break;
    uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
    *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
    lVar7 = 0;
    if (uVar10 == 0) goto LAB_0087dfb8;
    piVar9 = (int *)(lVar2 + 4);
    while (piVar9[-1] != 0x45f320f2) {
      piVar9 = piVar9 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        lVar7 = 0;
        goto LAB_0087dfb8;
      }
    }
    iVar13 = 0;
    if (*piVar9 != -1) {
      iVar13 = *piVar9;
    }
    *(int *)(puVar5 + 0x18) = iVar13;
    if (*puVar8 == 0) break;
LAB_0087defc:
    if (cVar15 == '\0') {
      cVar15 = '\x01';
      *PTR_DAT_04bb5808 = 1;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar16 = *(uint *)(puVar5 + 0x18);
      if (-1 < (int)uVar16) {
        lVar7 = (ulong)uVar16 + (long)puVar8;
        goto LAB_0087dfb8;
      }
      if (uVar16 != 0xffffffff) break;
    }
  }
LAB_0087dfb4:
  lVar7 = 0;
LAB_0087dfb8:
  local_70 = *(long *)PTR_PTR_04bb5800;
  if (lVar7 != 0) {
    local_70 = lVar7;
  }
  local_78 = puVar1;
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar7 = param_3[1];
  (**(code **)(local_78 + 0x18))(&local_78);
  pcVar12 = PTR_DAT_04bb3248;
  if (lVar7 == local_70) {
LAB_0087e0b4:
    if (*puVar14 != 0) {
      cVar15 = *PTR_DAT_04bb3248;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *pcVar12 = '\x01';
          memset(__s,0xff,0x288);
          pcVar12 = PTR_DAT_04bb3248;
        }
        else {
          uVar16 = *(uint *)(__s + 0x26c);
          if (-1 < (int)uVar16) {
            if (((byte *)((ulong)uVar16 + (long)puVar14) != (byte *)0x0) &&
               (bVar4 = *(byte *)((ulong)uVar16 + (long)puVar14), uVar16 = (uint)bVar4, bVar4 != 0))
            {
              local_80 = local_68;
              goto LAB_0087e1a0;
            }
            break;
          }
          if (uVar16 != 0xffffffff) break;
        }
        lVar7 = (long)puVar14 - (ulong)*puVar14;
        if ((*puVar14 == 0) || (lVar7 == 0)) break;
        lVar2 = 0xc;
        if (*(char *)(lVar7 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar7 == 0) break;
        uVar10 = (ulong)*(ushort *)(lVar7 + 8);
        *(undefined4 *)(__s + 0x26c) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar9 = (int *)(lVar2 + lVar7 + 4);
        while (piVar9[-1] != -0x45ff81b1) {
          piVar9 = piVar9 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_0087da20;
        }
        iVar13 = 0;
        if (*piVar9 != -1) {
          iVar13 = *piVar9;
        }
        *(int *)(__s + 0x26c) = iVar13;
        if (*puVar14 == 0) break;
      } while( true );
    }
  }
  else {
    uVar10 = 0;
    bVar6 = true;
    do {
      lVar7 = param_3[1] + 2 + uVar10;
      cVar15 = *(char *)(lVar7 + -2);
      if (cVar15 != *(char *)(local_70 + uVar10)) break;
      if (cVar15 == '\0') {
        if (bVar6) goto LAB_0087e0b4;
        break;
      }
      cVar15 = *(char *)(lVar7 + -1);
      if (cVar15 != *(char *)(local_70 + uVar10 + 1)) break;
      if (cVar15 == '\0') goto LAB_0087e0b4;
      cVar15 = *(char *)(param_3[1] + 2 + uVar10);
      if (cVar15 != *(char *)(local_70 + uVar10 + 2)) break;
      if (cVar15 == '\0') goto LAB_0087e0b4;
      bVar6 = uVar10 < 0x7fffe;
      uVar10 = uVar10 + 3;
    } while (uVar10 != 0x80001);
  }
  goto LAB_0087da20;
  while (uVar16 = uVar16 - 1, uVar16 != 0) {
LAB_0087e1a0:
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
    local_78 = (undefined *)(lVar7 + 0x15180);
    local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
    uVar10 = FUN_00875530(param_1,puVar14,local_80,local_80 >> 0x10,local_80 >> 0x18);
    if ((uVar10 & 1) != 0) goto LAB_0087e218;
  }
  pcVar12 = PTR_DAT_04bb3248;
  goto LAB_0087da20;
}

