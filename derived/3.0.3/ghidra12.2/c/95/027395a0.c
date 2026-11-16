
void FUN_027395a0(uint *param_1,long *param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  char cVar14;
  uint *puVar15;
  int *piVar16;
  uint uVar17;
  undefined4 local_64;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar5 = PTR_DAT_04bb2208;
  lVar11 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_64 = FUN_006bd550(param_2[1],0);
  puVar9 = (uint *)FUN_02739e80(lVar11 + 0xec0,&local_64);
  if (puVar9 == (uint *)0x0) {
    return;
  }
  lVar11 = *(long *)puVar5;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_48 = FUN_006bd550(param_2[1],0);
  puVar10 = (uint *)FUN_02739e80(lVar11 + 0xec0,&local_48);
  puVar7 = PTR_DAT_04bb63c0;
  puVar6 = PTR_DAT_04bb63b8;
  if (puVar10 == (uint *)0x0) {
    uVar8 = 0;
    uVar17 = *puVar9;
  }
  else {
    puVar13 = param_1;
    if (*puVar10 != 0) {
      cVar14 = *PTR_DAT_04bb63b8;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          uVar8 = *puVar10;
        }
        else {
          uVar8 = *(uint *)(puVar7 + 8);
          if (-1 < (int)uVar8) {
            if (((ushort *)((ulong)uVar8 + (long)puVar10) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar8 + (long)puVar10), uVar2 < 0x80)) {
              puVar13 = param_1 + (ulong)uVar2 * 2;
            }
            break;
          }
          if (uVar8 != 0xffffffff) break;
          uVar8 = *puVar10;
        }
        if ((uVar8 == 0) || (puVar15 = (uint *)(ulong)uVar8, puVar10 == puVar15)) break;
        lVar11 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar15)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar10 + (lVar11 - (long)puVar15);
        if (lVar11 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar15));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar16 = (int *)(lVar11 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_02739728;
        }
        iVar1 = 0;
        if (*piVar16 != -1) {
          iVar1 = *piVar16;
        }
        *(int *)(puVar7 + 8) = iVar1;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_02739728:
    uVar17 = *puVar13;
    uVar8 = 0;
    if ((*(byte *)((long)puVar13 + 7) != 0 ||
         (((ulong)uVar17 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0)) &&
       ((uint)*(byte *)((long)puVar13 + 7) ==
        ((uVar17 + (uVar17 >> 0x10) + (uVar17 >> 0x18) + (uVar17 >> 8)) - 0x2d & 0xff))) {
      lVar11 = (ulong)uVar17 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
      uVar8 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + (int)((ulong)lVar11 >> 0x20) + 0x80e32b11;
    }
    uVar17 = *puVar9;
  }
  if (uVar17 == 0) {
LAB_0273986c:
    uVar17 = 0;
  }
  else {
    cVar14 = *puVar6;
    do {
      if (cVar14 == '\0') {
        cVar14 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      }
      else {
        uVar17 = *(uint *)(puVar7 + 4);
        if (-1 < (int)uVar17) {
          if ((ushort *)((ulong)uVar17 + (long)puVar9) == (ushort *)0x0) goto LAB_0273986c;
          uVar17 = (uint)*(ushort *)((ulong)uVar17 + (long)puVar9);
          goto LAB_02739870;
        }
        if (uVar17 != 0xffffffff) goto LAB_0273986c;
      }
      puVar10 = (uint *)(ulong)*puVar9;
      uVar17 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar10)) goto LAB_02739870;
      lVar11 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar9 + (lVar11 - (long)puVar10);
      if (lVar11 == 0) goto LAB_0273986c;
      uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
      *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
      uVar17 = 0;
      if (uVar12 == 0) goto LAB_02739870;
      piVar16 = (int *)(lVar11 + 4);
      while (piVar16[-1] != 0x110b14c) {
        piVar16 = piVar16 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          uVar17 = 0;
          goto LAB_02739870;
        }
      }
      iVar1 = 0;
      if (*piVar16 != -1) {
        iVar1 = *piVar16;
      }
      *(int *)(puVar7 + 4) = iVar1;
    } while (*puVar9 != 0);
    uVar17 = 0;
  }
LAB_02739870:
  uVar3 = param_3;
  if ((int)uVar17 <= (int)param_3) {
    uVar3 = uVar17;
  }
  uVar17 = 0;
  if (-1 < (int)param_3) {
    uVar17 = uVar3;
  }
  if (uVar8 != uVar17) {
    if (*puVar9 != 0) {
      cVar14 = *puVar6;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          uVar8 = *puVar9;
        }
        else {
          uVar8 = *(uint *)(puVar7 + 8);
          if (-1 < (int)uVar8) {
            if (((ushort *)((ulong)uVar8 + (long)puVar9) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar8 + (long)puVar9), uVar2 < 0x80)) {
              param_1 = param_1 + (ulong)uVar2 * 2;
            }
            break;
          }
          if (uVar8 != 0xffffffff) break;
          uVar8 = *puVar9;
        }
        if ((uVar8 == 0) || (puVar10 = (uint *)(ulong)uVar8, puVar9 == puVar10)) break;
        lVar11 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar9 + (lVar11 - (long)puVar10);
        if (lVar11 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar16 = (int *)(lVar11 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_0273998c;
        }
        iVar1 = 0;
        if (*piVar16 != -1) {
          iVar1 = *piVar16;
        }
        *(int *)(puVar7 + 8) = iVar1;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_0273998c:
    uVar8 = nn::os::GetSystemTick();
    uVar3 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    uVar8 = uVar3 ^ uVar3 * 0x800;
    uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
    uVar3 = uVar4 ^ uVar4 * 0x800;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
    uVar8 = uVar8 >> 8 ^ uVar4 >> 0x13 ^ uVar8 ^ uVar4;
    *(short *)(param_1 + 1) = (short)(uVar8 >> 0x10);
    uVar12 = (ulong)(uVar3 >> 8 ^ uVar8 >> 0x13 ^ uVar3 ^ uVar8) * 0x1b;
    *(char *)((long)param_1 + 6) = (char)(uVar12 >> 0x20);
    lVar11 = (ulong)(uVar17 + 0x7f1cd4ef + (uVar8 >> 0x10)) << (uVar12 >> 0x20) + 3;
    uVar8 = (int)((ulong)lVar11 >> 0x20) + (int)lVar11;
    *param_1 = uVar8;
    *(char *)((long)param_1 + 7) =
         (char)uVar8 + (char)(uVar8 >> 0x10) + (char)(uVar8 >> 0x18) + (char)(uVar8 >> 8) + -0x2d;
    lVar11 = *(long *)puVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_44 = FUN_006bd550(param_2[1],0);
    puVar9 = (uint *)FUN_02739e80(lVar11 + 0xec0,&local_44);
    if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
      cVar14 = *puVar6;
      while( true ) {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          uVar8 = *puVar9;
        }
        else {
          if (*(int *)(puVar7 + 8) != -1) {
            return;
          }
          uVar8 = *puVar9;
        }
        if (uVar8 == 0) {
          return;
        }
        puVar10 = (uint *)(ulong)uVar8;
        if (puVar9 == puVar10) {
          return;
        }
        lVar11 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar9 + (lVar11 - (long)puVar10);
        if (lVar11 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar12 == 0) {
          return;
        }
        piVar16 = (int *)(lVar11 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            return;
          }
        }
        iVar1 = 0;
        if (*piVar16 != -1) {
          iVar1 = *piVar16;
        }
        *(int *)(puVar7 + 8) = iVar1;
        if (*puVar9 == 0) {
          return;
        }
      }
      return;
    }
  }
  return;
}

