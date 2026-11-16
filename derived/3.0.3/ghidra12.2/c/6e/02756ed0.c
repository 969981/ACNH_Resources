
void FUN_02756ed0(byte *param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  char cVar12;
  uint *puVar13;
  int *piVar14;
  ulong uVar15;
  undefined4 local_34;
  
  lVar8 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar6 = (uint *)FUN_027573c0(lVar8 + 0x1fc0,&local_34);
  puVar5 = PTR_DAT_04bb6478;
  puVar4 = PTR_DAT_04bb6470;
  if (puVar6 != (uint *)0x0) {
    uVar10 = *puVar6;
    if (uVar10 != 0) {
      cVar12 = *PTR_DAT_04bb6470;
      do {
        puVar13 = (uint *)(ulong)uVar10;
        pbVar11 = param_1;
        if (cVar12 != '\0') {
          uVar10 = *(uint *)puVar5;
          if ((int)uVar10 < 0) {
            if ((uVar10 == 0xffffffff) && (puVar13 != (uint *)0x0)) goto LAB_02756fa0;
            goto LAB_02757014;
          }
          if ((ushort *)((ulong)uVar10 + (long)puVar6) == (ushort *)0x0) goto LAB_02757014;
          uVar3 = *(ushort *)((ulong)uVar10 + (long)puVar6);
          if (uVar3 < 0x10) {
            pbVar11 = param_1 + uVar3;
            goto LAB_02757014;
          }
          uVar10 = (uint)*param_1;
LAB_02757020:
          cVar12 = *puVar4;
          goto LAB_02757038;
        }
        cVar12 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        puVar13 = (uint *)(ulong)*puVar6;
        if (puVar13 == (uint *)0x0) {
LAB_02757014:
          uVar10 = (uint)*pbVar11;
          if (*puVar6 != 0) goto LAB_02757020;
          goto LAB_027570d8;
        }
LAB_02756fa0:
        if (puVar6 == puVar13) goto LAB_02757014;
        lVar8 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar13)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar6 + (lVar8 - (long)puVar13);
        if (lVar8 == 0) goto LAB_02757014;
        uVar15 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar13));
        *(undefined4 *)puVar5 = 0xfffffffe;
        if (uVar15 == 0) goto LAB_02757014;
        piVar14 = (int *)(lVar8 + 4);
        while (piVar14[-1] != 0x54706054) {
          piVar14 = piVar14 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02757014;
        }
        iVar1 = 0;
        if (*piVar14 != -1) {
          iVar1 = *piVar14;
        }
        *(int *)puVar5 = iVar1;
        uVar10 = *puVar6;
      } while (uVar10 != 0);
    }
    uVar10 = (uint)*param_1;
LAB_027570d8:
    uVar9 = 0;
LAB_027570dc:
    puVar5 = PTR_DAT_04bb6478;
    puVar4 = PTR_DAT_04bb6470;
    uVar2 = param_3;
    if ((int)uVar9 <= (int)param_3) {
      uVar2 = uVar9;
    }
    uVar9 = 0;
    if (-1 < (int)param_3) {
      uVar9 = uVar2;
    }
    if (uVar9 != uVar10) {
      uVar10 = *puVar6;
      if (uVar10 != 0) {
        cVar12 = *PTR_DAT_04bb6470;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar10 = *puVar6;
          }
          else {
            uVar2 = *(uint *)puVar5;
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) {
                uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6);
                if (0xfe < uVar9) {
                  uVar9 = 0xff;
                }
                bVar7 = (byte)uVar9;
                if (uVar3 < 0x10) {
                  param_1 = param_1 + uVar3;
                }
                goto LAB_02757234;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)uVar10;
          if ((puVar13 == (uint *)0x0) || (puVar6 == puVar13)) break;
          lVar8 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar13)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar6 + (lVar8 - (long)puVar13);
          if (lVar8 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar13));
          *(undefined4 *)puVar5 = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar14 = (int *)(lVar8 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_02757228;
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)puVar5 = iVar1;
          uVar10 = *puVar6;
          if (uVar10 == 0) break;
        } while( true );
      }
LAB_02757228:
      if (0xfe < uVar9) {
        uVar9 = 0xff;
      }
      bVar7 = (byte)uVar9;
LAB_02757234:
      *param_1 = bVar7;
    }
  }
  return;
LAB_02757038:
  if (cVar12 == '\0') {
    cVar12 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    uVar2 = *puVar6;
  }
  else {
    uVar2 = *(uint *)(puVar5 + 0x1c);
    if (-1 < (int)uVar2) {
      uVar9 = 0;
      if ((byte *)((ulong)uVar2 + (long)puVar6) != (byte *)0x0) {
        uVar9 = (uint)*(byte *)((ulong)uVar2 + (long)puVar6);
      }
      goto LAB_027570dc;
    }
    if (uVar2 != 0xffffffff) goto LAB_027570d8;
    uVar2 = *puVar6;
  }
  if ((uVar2 == 0) || (puVar13 = (uint *)(ulong)uVar2, puVar6 == puVar13)) goto LAB_027570d8;
  lVar8 = 0xc;
  if (*(char *)((long)puVar6 + (10 - (long)puVar13)) != '\0') {
    lVar8 = 0x1c;
  }
  lVar8 = (long)puVar6 + (lVar8 - (long)puVar13);
  if (lVar8 == 0) goto LAB_027570d8;
  uVar15 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar13));
  *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
  if (uVar15 == 0) goto LAB_027570d8;
  piVar14 = (int *)(lVar8 + 4);
  while (piVar14[-1] != -0x42897d0b) {
    piVar14 = piVar14 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_027570d8;
  }
  iVar1 = 0;
  if (*piVar14 != -1) {
    iVar1 = *piVar14;
  }
  *(int *)(puVar5 + 0x1c) = iVar1;
  if (*puVar6 == 0) goto LAB_027570d8;
  goto LAB_02757038;
}

