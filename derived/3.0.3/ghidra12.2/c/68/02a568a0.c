
void FUN_02a568a0(long *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  char cVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  undefined *local_70;
  undefined *local_68;
  
  puVar1 = PTR_DAT_04bc43c8;
  lVar14 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f7f8);
  if (lVar14 == 0) {
LAB_02a56ba0:
    lVar14 = param_2[1];
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = lVar14;
    return;
  }
  uVar15 = 0;
  puVar11 = PTR_DAT_04bb2020 + 0x10;
  do {
    if ((int)*(uint *)(lVar14 + 0x1c0) < 1) {
      lVar7 = *(long *)(lVar14 + 0xb0);
      if (lVar7 == 0) goto LAB_02a56ba0;
      uVar9 = 0;
      if (*(uint **)(lVar7 + 8) != (uint *)0x0) {
        uVar9 = (ulong)**(uint **)(lVar7 + 8);
      }
      if (uVar9 <= uVar15) goto LAB_02a56ba0;
      if ((((lVar7 != 0) && (puVar13 = *(uint **)(lVar7 + 8), puVar13 != (uint *)0x0)) &&
          ((*(uint *)(lVar14 + 200) <= uVar15 ||
           (*(char *)(*(long *)(lVar14 + 0xd0) + uVar15) != '\0')))) &&
         (((uVar15 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * (int)uVar15 + (uint)(ushort)puVar13[2] * 8 + iVar8)
                          + (long)puVar13);
        goto joined_r0x02a56b90;
      }
    }
    else {
      if (*(uint *)(lVar14 + 0x1c0) <= uVar15) goto LAB_02a56ba0;
      uVar9 = uVar15 & 0xffffffff;
      if (*(uint *)(lVar14 + 0x1b0) <= uVar15) {
        uVar9 = 0;
      }
      puVar13 = *(uint **)(*(long *)(lVar14 + 0x1b8) + uVar9 * 8);
joined_r0x02a56b90:
      if (puVar13 != (uint *)0x0) {
        uVar2 = *puVar13;
        if (uVar2 != 0) {
          cVar6 = *PTR_DAT_04bc43c0;
          do {
            if (cVar6 == '\0') {
              cVar6 = '\x01';
              *PTR_DAT_04bc43c0 = 1;
              *(undefined8 *)puVar1 = 0xffffffffffffffff;
              *(undefined4 *)(puVar1 + 8) = 0xffffffff;
              uVar2 = *puVar13;
            }
            else {
              uVar3 = *(uint *)(puVar1 + 8);
              if (-1 < (int)uVar3) {
                puVar12 = (undefined *)((ulong)uVar3 + (long)puVar13);
                goto LAB_02a56a44;
              }
              if (uVar3 != 0xffffffff) break;
            }
            puVar4 = (uint *)(ulong)uVar2;
            puVar12 = (undefined *)0x0;
            if ((puVar4 == (uint *)0x0) || (puVar12 = (undefined *)0x0, puVar13 == puVar4))
            goto LAB_02a56a44;
            lVar7 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar4)) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar13 + (lVar7 - (long)puVar4);
            puVar12 = (undefined *)0x0;
            if (lVar7 == 0) goto LAB_02a56a44;
            uVar9 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar4));
            *(undefined4 *)(puVar1 + 8) = 0xfffffffe;
            if (uVar9 == 0) break;
            piVar10 = (int *)(lVar7 + 4);
            while (piVar10[-1] != -0x39dcc021) {
              piVar10 = piVar10 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) goto LAB_02a56a40;
            }
            iVar8 = 0;
            if (*piVar10 != -1) {
              iVar8 = *piVar10;
            }
            *(int *)(puVar1 + 8) = iVar8;
            uVar2 = *puVar13;
            if (uVar2 == 0) break;
          } while( true );
        }
LAB_02a56a40:
        puVar12 = (undefined *)0x0;
LAB_02a56a44:
        local_68 = PTR_DAT_04c49de0;
        if (puVar12 != (undefined *)0x0) {
          local_68 = puVar12;
        }
        local_70 = puVar11;
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        puVar12 = (undefined *)param_2[1];
        (**(code **)(local_70 + 0x18))(&local_70);
        if (puVar12 == local_68) break;
        uVar9 = 0;
        bVar5 = true;
        do {
          lVar7 = param_2[1] + 2 + uVar9;
          cVar6 = *(char *)(lVar7 + -2);
          if (cVar6 != local_68[uVar9]) break;
          if (cVar6 == '\0') {
            if (bVar5) goto LAB_02a56bbc;
            break;
          }
          cVar6 = *(char *)(lVar7 + -1);
          if (cVar6 != local_68[uVar9 + 1]) break;
          if (cVar6 == '\0') goto LAB_02a56bbc;
          cVar6 = *(char *)(param_2[1] + 2 + uVar9);
          if (cVar6 != local_68[uVar9 + 2]) break;
          if (cVar6 == '\0') goto LAB_02a56bbc;
          bVar5 = uVar9 < 0x7fffe;
          uVar9 = uVar9 + 3;
        } while (uVar9 != 0x80001);
      }
    }
    uVar15 = uVar15 + 1;
  } while( true );
LAB_02a56bbc:
  uVar2 = *puVar13;
  if (uVar2 == 0) {
LAB_02a56c98:
    puVar11 = (undefined *)0x0;
LAB_02a56c9c:
    puVar1 = PTR_DAT_04c49de8;
    if (puVar11 != (undefined *)0x0) {
      puVar1 = puVar11;
    }
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = (long)puVar1;
    return;
  }
  cVar6 = *PTR_DAT_04bc43c0;
  do {
    if (cVar6 == '\0') {
      cVar6 = '\x01';
      *PTR_DAT_04bc43c0 = 1;
      *(undefined8 *)puVar1 = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 8) = 0xffffffff;
      uVar2 = *puVar13;
    }
    else {
      uVar3 = *(uint *)(puVar1 + 4);
      if (-1 < (int)uVar3) {
        puVar11 = (undefined *)((ulong)uVar3 + (long)puVar13);
        goto LAB_02a56c9c;
      }
      if (uVar3 != 0xffffffff) goto LAB_02a56c98;
    }
    puVar4 = (uint *)(ulong)uVar2;
    puVar11 = (undefined *)0x0;
    if ((puVar4 == (uint *)0x0) || (puVar11 = (undefined *)0x0, puVar13 == puVar4))
    goto LAB_02a56c9c;
    lVar14 = 0xc;
    if (*(char *)((long)puVar13 + (10 - (long)puVar4)) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar13 + (lVar14 - (long)puVar4);
    puVar11 = (undefined *)0x0;
    if (lVar14 == 0) goto LAB_02a56c9c;
    uVar15 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar4));
    *(undefined4 *)(puVar1 + 4) = 0xfffffffe;
    if (uVar15 == 0) goto LAB_02a56c98;
    piVar10 = (int *)(lVar14 + 4);
    while (piVar10[-1] != 0x6c244255) {
      piVar10 = piVar10 + 2;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02a56c98;
    }
    iVar8 = 0;
    if (*piVar10 != -1) {
      iVar8 = *piVar10;
    }
    *(int *)(puVar1 + 4) = iVar8;
    uVar2 = *puVar13;
    if (uVar2 == 0) goto LAB_02a56c98;
  } while( true );
}

