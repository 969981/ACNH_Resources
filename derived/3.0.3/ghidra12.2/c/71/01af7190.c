
bool FUN_01af7190(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *__s;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  uint *puVar13;
  char cVar14;
  undefined *local_70;
  char *pcStack_68;
  
  if (((DAT_0532ac38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0532ac38), iVar6 != 0)) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "GardeningIcon";
    FUN_00772610(&DAT_0532ac00,&local_70);
    __cxa_guard_release(&DAT_0532ac38);
  }
  puVar9 = *(uint **)(param_1 + 0x10);
  if (puVar9 == (uint *)0x0) {
    uVar8 = 0xbc;
  }
  else {
    uVar8 = *puVar9;
    if (uVar8 != 0 && puVar9 != (uint *)(ulong)uVar8) {
      puVar13 = (uint *)((long)puVar9 - (long)(ulong)uVar8);
      if (((*puVar13 != 0) && (uVar8 = puVar13[1], uVar8 != 0)) && ((ulong)(ushort)puVar13[2] != 0))
      {
        lVar7 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar13 + lVar7 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar8 != 0) {
            uVar1 = (uint)((ulong)((long)puVar9 - lVar7) / (ulong)uVar8);
          }
          if (*puVar13 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
             uVar8 = (uint)uVar2, uVar2 < 0xbd)) goto LAB_01af7260;
        }
      }
    }
    uVar8 = 0;
  }
LAB_01af7260:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar9 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar8 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
       (((uVar8 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
      iVar6 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] * uVar8 + (uint)(ushort)puVar9[2] * 8 + iVar6) +
                       (long)puVar9);
      if (puVar9 == (uint *)0x0) {
        uVar8 = 0;
        goto LAB_01af7398;
      }
      goto LAB_01af729c;
    }
  }
  else if (uVar8 < *(uint *)(DAT_0532a778 + 0x1c0)) {
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar8) {
      uVar8 = 0;
    }
    puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar8 * 8);
    uVar8 = 0;
    if (puVar9 == (uint *)0x0) goto LAB_01af7398;
LAB_01af729c:
    uVar8 = *puVar9;
    if (uVar8 != 0 && puVar9 != (uint *)(ulong)uVar8) {
      puVar13 = (uint *)((long)puVar9 - (long)(ulong)uVar8);
      if (((*puVar13 != 0) && (uVar8 = puVar13[1], uVar8 != 0)) && ((ulong)(ushort)puVar13[2] != 0))
      {
        lVar7 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar13 + lVar7 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar8 != 0) {
            uVar1 = (uint)((ulong)((long)puVar9 - lVar7) / (ulong)uVar8);
          }
          if (*puVar13 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc0278) &&
             (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc0278 + 8) + (long)(int)uVar1 * 2),
             uVar8 = (uint)uVar2, uVar2 < 2)) goto LAB_01af7398;
        }
      }
    }
  }
  uVar8 = 0;
LAB_01af7398:
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar8);
  if (uVar8 == 0) {
    **(undefined1 **)(param_2 + 8) = 0;
  }
  else {
    (**(code **)(DAT_0532a990 + 0x18))(&DAT_0532a990);
    uVar4 = DAT_0532a998;
    (**(code **)(DAT_0532ac00 + 0x18))(&DAT_0532ac00);
    uVar5 = DAT_0532ac08;
    __s = PTR_DAT_04bbfe90;
    puVar3 = PTR_DAT_04bbfe88;
    puVar9 = *(uint **)(param_1 + 0x10);
    if (puVar9 == (uint *)0x0) {
      lVar7 = *(long *)(PTR_PTR_04bb2238 + 8);
    }
    else {
      if (*puVar9 != 0) {
        cVar14 = *PTR_DAT_04bbfe88;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *puVar3 = 1;
            memset(__s,0xff,0x1ac);
          }
          else {
            uVar1 = *(uint *)(__s + 0x18c);
            if (-1 < (int)uVar1) {
              lVar11 = (ulong)uVar1 + (long)puVar9;
              goto LAB_01af74c8;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)*puVar9;
          lVar11 = 0;
          if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_01af74c8;
          lVar7 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar9 + (lVar7 - (long)puVar13);
          if (lVar7 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
          *(undefined4 *)(__s + 0x18c) = 0xfffffffe;
          lVar11 = 0;
          if (uVar10 == 0) goto LAB_01af74c8;
          piVar12 = (int *)(lVar7 + 4);
          while (piVar12[-1] != 0x3febc642) {
            piVar12 = piVar12 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              lVar11 = 0;
              goto LAB_01af74c8;
            }
          }
          iVar6 = 0;
          if (*piVar12 != -1) {
            iVar6 = *piVar12;
          }
          *(int *)(__s + 0x18c) = iVar6;
        } while (*puVar9 != 0);
      }
      lVar11 = 0;
LAB_01af74c8:
      lVar7 = *(long *)PTR_PTR_04bc0008;
      if (lVar11 != 0) {
        lVar7 = lVar11;
      }
    }
    FUN_038d1270(param_2,uVar4,uVar5,lVar7);
  }
  return uVar8 != 0;
}

