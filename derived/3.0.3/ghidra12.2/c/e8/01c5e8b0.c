
uint FUN_01c5e8b0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ushort uVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  undefined1 auStack_80 [8];
  uint local_78;
  undefined1 auStack_70 [8];
  uint local_68;
  
  param_1 = param_1 + 8;
  FUN_01c5ed0c(auStack_70,param_1);
  FUN_01c5eea0(auStack_80,param_1);
  uVar4 = local_78;
  uVar10 = DAT_0534e320;
  lVar9 = DAT_0534e308;
  uVar3 = DAT_0534e300;
  puVar8 = PTR_DAT_04bc0e48;
  if (local_78 == local_68) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    cVar17 = *PTR_DAT_04bc0e40;
    do {
      uVar5 = (local_68 & 0xffff) - (uint)uVar10;
      if (((uVar5 < uVar3) &&
          (puVar11 = *(uint **)(lVar9 + (long)(int)uVar5 * 8), puVar11 != (uint *)0x0)) &&
         (uVar5 = *puVar11, uVar5 != 0)) {
        do {
          puVar7 = PTR_DAT_04bc0e40;
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
            uVar5 = *puVar11;
          }
          else {
            uVar13 = *(uint *)(puVar8 + 0x2c);
            if (-1 < (int)uVar13) {
              if ((byte *)((ulong)uVar13 + (long)puVar11) == (byte *)0x0) goto LAB_01c5ea30;
              uVar13 = (uint)*(byte *)((ulong)uVar13 + (long)puVar11);
              break;
            }
            if (uVar13 != 0xffffffff) goto LAB_01c5ea30;
          }
          puVar6 = (uint *)(ulong)uVar5;
          if ((puVar6 == (uint *)0x0) || (puVar11 == puVar6)) goto LAB_01c5ea30;
          lVar2 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar11 + (lVar2 - (long)puVar6);
          uVar13 = 0;
          if (lVar2 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
          *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
          if (uVar12 == 0) goto LAB_01c5ea30;
          piVar14 = (int *)(lVar2 + 4);
          while (piVar14[-1] != -0x2765f250) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_01c5ea30;
          }
          uVar13 = 0;
          iVar16 = 0;
          if (*piVar14 != -1) {
            iVar16 = *piVar14;
          }
          *(int *)(puVar8 + 0x2c) = iVar16;
          uVar5 = *puVar11;
        } while (uVar5 != 0);
      }
      else {
LAB_01c5ea30:
        uVar13 = 0;
      }
      uVar15 = uVar15 + uVar13;
      FUN_01c5e470(auStack_70);
    } while (uVar4 != local_68);
  }
  puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar4 = puVar11[3];
  uVar3 = *puVar11 ^ *puVar11 << 0xb;
  *puVar11 = puVar11[1];
  puVar11[1] = puVar11[2];
  uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
  puVar11[2] = uVar4;
  puVar11[3] = uVar3;
  FUN_01c5ed0c(auStack_70,param_1);
  FUN_01c5eea0(auStack_80,param_1);
  uVar10 = DAT_0534e320;
  lVar9 = DAT_0534e308;
  uVar4 = DAT_0534e300;
  puVar8 = PTR_DAT_04bc0e48;
  if (local_78 != local_68) {
    iVar16 = 0;
    cVar17 = *PTR_DAT_04bc0e40;
    do {
      uVar5 = (local_68 & 0xffff) - (uint)uVar10;
      if (((uVar5 < uVar4) &&
          (puVar11 = *(uint **)(lVar9 + (long)(int)uVar5 * 8), puVar11 != (uint *)0x0)) &&
         (uVar5 = *puVar11, uVar5 != 0)) {
        do {
          puVar7 = PTR_DAT_04bc0e40;
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
            uVar5 = *puVar11;
          }
          else {
            uVar13 = *(uint *)(puVar8 + 0x2c);
            if (-1 < (int)uVar13) {
              if ((byte *)((ulong)uVar13 + (long)puVar11) == (byte *)0x0) goto LAB_01c5ebe0;
              uVar13 = (uint)*(byte *)((ulong)uVar13 + (long)puVar11);
              break;
            }
            if (uVar13 != 0xffffffff) goto LAB_01c5ebe0;
          }
          puVar6 = (uint *)(ulong)uVar5;
          if ((puVar6 == (uint *)0x0) || (puVar11 == puVar6)) goto LAB_01c5ebe0;
          lVar2 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar11 + (lVar2 - (long)puVar6);
          uVar13 = 0;
          if (lVar2 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
          *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
          if (uVar12 == 0) goto LAB_01c5ebe0;
          piVar14 = (int *)(lVar2 + 4);
          while (piVar14[-1] != -0x2765f250) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_01c5ebe0;
          }
          uVar13 = 0;
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar8 + 0x2c) = iVar1;
          uVar5 = *puVar11;
        } while (uVar5 != 0);
      }
      else {
LAB_01c5ebe0:
        uVar13 = 0;
      }
      iVar16 = iVar16 + uVar13;
      if ((int)((ulong)uVar15 * (ulong)uVar3 >> 0x20) + 1 <= iVar16) {
        return local_68;
      }
      FUN_01c5e470(auStack_70);
    } while (local_78 != local_68);
  }
  return 0;
}

