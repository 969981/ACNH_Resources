
void FUN_01789c60(long param_1,byte param_2)

{
  undefined *puVar1;
  void *__src;
  short sVar3;
  short sVar2;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  char *pcVar13;
  byte bVar14;
  long lVar15;
  char cVar16;
  void *pvVar17;
  uint *puVar18;
  int *piVar19;
  int iVar20;
  ulong uVar21;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  undefined8 local_38;
  
  *(byte *)(param_1 + 0x6a0) = param_2;
  puVar5 = PTR_DAT_04bb5ce0;
  puVar4 = PTR_DAT_04bb3170;
  if ((param_2 & 1) == 0) {
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = FUN_017f1174(*(long *)PTR_DAT_04bb5ce0 + 0xda0);
    }
    *(undefined2 *)(param_1 + 0x290) = uVar6;
    uVar21 = FUN_0180c3b0();
    if (((uVar21 & 1) == 0) && (*(short *)(param_1 + 0x290) == -1)) {
      local_38 = 0x134b;
      FUN_0277d4ac(&local_38);
      puVar1 = PTR_DAT_04bb43c0;
      local_58 = 0;
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_60 = (undefined4)local_38;
      uStack_5c = local_38._4_4_;
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar1 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_38);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8), lVar10 != 0)) {
            local_58 = lVar10;
          }
        }
      }
      uVar6 = FUN_01b01f10(&local_68);
      *(undefined2 *)(param_1 + 0x290) = uVar6;
    }
    puVar1 = puVar4;
    if (*(long *)puVar5 != 0) {
      puVar1 = (undefined *)(*(long *)puVar5 + 0xe78);
    }
    FUN_007ef010(&local_68,puVar1);
    *(short *)(param_1 + 0x292) = (short)local_68;
    lVar10 = *(long *)puVar5;
    if (lVar10 == 0) {
      bVar14 = 0;
      *(undefined1 *)(param_1 + 0x5d1) = 0;
      *(undefined4 *)(param_1 + 0x294) = 0xffffffff;
    }
    else {
      uVar8 = *(undefined4 *)(lVar10 + 0xf90);
      *(undefined1 *)(param_1 + 0x5d1) = 0;
      bVar14 = 0;
      *(undefined4 *)(param_1 + 0x294) = uVar8;
      if (*(uint *)(lVar10 + 0xee0) < 4) {
        bVar14 = (byte)(0xb >> (ulong)(*(uint *)(lVar10 + 0xee0) & 0xf)) & 1;
      }
    }
    *(byte *)(param_1 + 0x5d0) = bVar14;
    sVar3 = (short)local_68;
  }
  else {
    *(undefined2 *)(param_1 + 0x290) = 0xffff;
    sVar3 = *(short *)(param_1 + 0x292);
  }
  sVar2 = *(short *)puVar4;
  if (sVar3 != sVar2) {
    *(short *)(param_1 + 0x2c8) = sVar3;
    *(short *)(param_1 + 0x2ca) = sVar3;
    lVar10 = *(long *)puVar5;
    *(long *)(param_1 + 0x2d0) = param_1 + 0x2e0;
    *(undefined1 *)(param_1 + 0x298) = 1;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(long *)(param_1 + 0x2d8) = param_1 + 0x310;
    *(short *)(param_1 + 0x2e0) = sVar2;
    *(short *)(param_1 + 0x310) = sVar2;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined2 *)(param_1 + 0x348) = 1;
    bVar14 = 0;
    if (lVar10 != 0) {
      bVar14 = *(byte *)(lVar10 + 0xedc) >> 4 & 1;
    }
    *(byte *)(param_1 + 0x351) = bVar14;
  }
  if (*(int *)(param_1 + 0x294) != -1) {
    *(undefined1 *)(param_1 + 0x488) = 1;
    bVar14 = 0;
    if (*(long *)puVar5 != 0) {
      bVar14 = *(byte *)(*(long *)puVar5 + 0xedc) >> 4 & 1;
    }
    *(byte *)(param_1 + 0x351) = bVar14;
  }
  puVar5 = PTR_DAT_04bbe400;
  puVar4 = PTR_DAT_04bbe3f8;
  lVar10 = *(long *)PTR_DAT_04bb46d0;
  uVar7 = (uint)*(ushort *)(param_1 + 0x290) - (uint)*(ushort *)(lVar10 + 0x400);
  if ((uVar7 < *(uint *)(lVar10 + 0x3e0)) &&
     (puVar11 = *(uint **)(*(long *)(lVar10 + 1000) + (long)(int)uVar7 * 8), puVar11 != (uint *)0x0)
     ) {
    if (*puVar11 != 0) {
      cVar16 = *PTR_DAT_04bbe3f8;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar5 + 0x30);
          if (-1 < (int)uVar7) {
            pvVar17 = (void *)((ulong)uVar7 + (long)puVar11);
            goto LAB_01789f98;
          }
          if (uVar7 != 0xffffffff) break;
        }
        puVar18 = (uint *)(ulong)*puVar11;
        pvVar17 = (void *)0x0;
        if ((*puVar11 == 0) || (puVar11 == puVar18)) goto LAB_01789f98;
        lVar10 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar18)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar11 + (lVar10 - (long)puVar18);
        if (lVar10 == 0) break;
        uVar21 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar18));
        *(undefined4 *)(puVar5 + 0x30) = 0xfffffffe;
        pvVar17 = (void *)0x0;
        if (uVar21 == 0) goto LAB_01789f98;
        piVar19 = (int *)(lVar10 + 4);
        while (piVar19[-1] != 0x4b9c4229) {
          piVar19 = piVar19 + 2;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) {
            pvVar17 = (void *)0x0;
            goto LAB_01789f98;
          }
        }
        iVar20 = 0;
        if (*piVar19 != -1) {
          iVar20 = *piVar19;
        }
        *(int *)(puVar5 + 0x30) = iVar20;
      } while (*puVar11 != 0);
    }
    pvVar17 = (void *)0x0;
LAB_01789f98:
    __src = *(void **)PTR_PTR_04bbe3f0;
    if (pvVar17 != (void *)0x0) {
      __src = pvVar17;
    }
    if (__src != (void *)0x0 && *(char *)(param_1 + 0x6a0) == '\0') {
      pvVar17 = *(void **)(param_1 + 0x5e0);
      if (pvVar17 != __src) {
        lVar10 = 0;
        do {
          if (*(char *)((long)__src + lVar10) == '\0') goto LAB_0178a010;
          if (*(char *)((long)__src + lVar10 + 1) == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_0178a010;
          }
          if (*(char *)((long)__src + lVar10 + 2) == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_0178a010;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_0178a010:
        iVar20 = (int)lVar10;
        if (*(int *)(param_1 + 0x5e8) <= (int)lVar10) {
          iVar20 = *(int *)(param_1 + 0x5e8) + -1;
        }
        memcpy(pvVar17,__src,(long)iVar20);
        *(undefined1 *)((long)pvVar17 + (long)iVar20) = 0;
      }
      if (*(char *)(param_1 + 0x298) == '\0') {
        (**(code **)(*(long *)(param_1 + 0x5d8) + 0x18))(param_1 + 0x5d8);
        puVar4 = PTR_DAT_04bbe3c0;
        lVar10 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x5e0) + lVar10) == '\0') goto LAB_0178a0d0;
          lVar12 = *(long *)(param_1 + 0x5e0) + lVar10;
          if (*(char *)(lVar12 + 1) == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_0178a0d0;
          }
          if (*(char *)(lVar12 + 2) == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_0178a0d0;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_0178a0d0:
        (**(code **)(*(long *)PTR_DAT_04bbe3c0 + 0x18))(PTR_DAT_04bbe3c0);
        lVar12 = 0;
        do {
          iVar20 = (int)lVar10;
          if (*(char *)(*(long *)(puVar4 + 8) + lVar12) == '\0') {
LAB_0178a12c:
            iVar9 = (int)lVar12;
            if (iVar20 < iVar9) goto LAB_0178a03c;
            if (iVar9 < 1) goto LAB_0178a1a8;
            uVar21 = 0;
            goto LAB_0178a148;
          }
          lVar15 = *(long *)(puVar4 + 8) + lVar12;
          if (*(char *)(lVar15 + 1) == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_0178a12c;
          }
          if (*(char *)(lVar15 + 2) == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_0178a12c;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        if (-1 < iVar20) {
LAB_0178a1a8:
          (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
LAB_0178a1c4:
          *(undefined1 *)(param_1 + 0x350) = 1;
        }
      }
    }
  }
  goto LAB_0178a03c;
  while( true ) {
    pcVar13 = *(char **)(puVar4 + 8);
    lVar15 = lVar12;
    while( true ) {
      lVar15 = lVar15 + -1;
      if (*(char *)(lVar10 + uVar21) != *pcVar13) break;
      if ((*(char *)(lVar10 + uVar21) == '\0') ||
         (lVar10 = lVar10 + 1, pcVar13 = pcVar13 + 1, lVar15 == 0)) goto LAB_0178a1bc;
    }
    uVar21 = uVar21 + 1;
    if (uVar21 == (iVar20 - iVar9) + 1) break;
LAB_0178a148:
    lVar10 = *(long *)(param_1 + 0x5e0);
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
    if ((char *)(lVar10 + uVar21) == *(char **)(puVar4 + 8)) {
LAB_0178a1bc:
      if ((int)uVar21 != -1) goto LAB_0178a1c4;
      break;
    }
  }
LAB_0178a03c:
  if (*(short *)(param_1 + 0x290) == 0xf9) {
    uVar8 = 1;
  }
  else {
    if (*(short *)(param_1 + 0x290) != 0xe5) {
      return;
    }
    uVar8 = 2;
  }
  *(undefined4 *)(param_1 + 0x670) = uVar8;
  return;
}

