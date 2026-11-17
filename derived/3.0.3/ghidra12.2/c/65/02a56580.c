
undefined8 FUN_02a56580(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint *puVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *local_70;
  undefined *local_68;
  
  puVar5 = PTR_DAT_04bc43b8;
  lVar13 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f7f0);
  if (lVar13 == 0) {
    return 0;
  }
  uVar14 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    if ((int)*(uint *)(lVar13 + 0x1c0) < 1) {
      lVar8 = *(long *)(lVar13 + 0xb0);
      if (lVar8 == 0) {
        return 0;
      }
      uVar11 = 0;
      if (*(uint **)(lVar8 + 8) != (uint *)0x0) {
        uVar11 = (ulong)**(uint **)(lVar8 + 8);
      }
      if (uVar11 <= uVar14) {
        return 0;
      }
      if ((((lVar8 != 0) && (puVar7 = *(uint **)(lVar8 + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(lVar13 + 200) <= uVar14 ||
           (*(char *)(*(long *)(lVar13 + 0xd0) + uVar14) != '\0')))) &&
         (((uVar14 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar10 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * (int)uVar14 + (uint)(ushort)puVar7[2] * 8 + iVar10) +
                         (long)puVar7);
        goto joined_r0x02a5685c;
      }
    }
    else {
      if (*(uint *)(lVar13 + 0x1c0) <= uVar14) {
        return 0;
      }
      uVar11 = uVar14 & 0xffffffff;
      if (*(uint *)(lVar13 + 0x1b0) <= uVar14) {
        uVar11 = 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar13 + 0x1b8) + uVar11 * 8);
joined_r0x02a5685c:
      if (puVar7 != (uint *)0x0) {
        uVar2 = *puVar7;
        if (uVar2 != 0) {
          cVar9 = *PTR_DAT_04bc43b0;
          do {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *PTR_DAT_04bc43b0 = 1;
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              uVar2 = *puVar7;
            }
            else {
              uVar3 = *(uint *)(puVar5 + 4);
              if (-1 < (int)uVar3) {
                puVar15 = (undefined *)((ulong)uVar3 + (long)puVar7);
                goto LAB_02a56714;
              }
              if (uVar3 != 0xffffffff) break;
            }
            puVar4 = (uint *)(ulong)uVar2;
            puVar15 = (undefined *)0x0;
            if ((puVar4 == (uint *)0x0) || (puVar15 = (undefined *)0x0, puVar7 == puVar4))
            goto LAB_02a56714;
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar4)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + (lVar8 - (long)puVar4);
            puVar15 = (undefined *)0x0;
            if (lVar8 == 0) goto LAB_02a56714;
            uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar4));
            *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
            if (uVar11 == 0) break;
            piVar12 = (int *)(lVar8 + 4);
            while (piVar12[-1] != 0x91b46f5) {
              piVar12 = piVar12 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) goto LAB_02a56710;
            }
            iVar10 = 0;
            if (*piVar12 != -1) {
              iVar10 = *piVar12;
            }
            *(int *)(puVar5 + 4) = iVar10;
            uVar2 = *puVar7;
            if (uVar2 == 0) break;
          } while( true );
        }
LAB_02a56710:
        puVar15 = (undefined *)0x0;
LAB_02a56714:
        local_68 = PTR_DAT_04c49dd8;
        if (puVar15 != (undefined *)0x0) {
          local_68 = puVar15;
        }
        local_70 = puVar1;
        (**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*param_1 + 0x18))(param_1);
        puVar15 = (undefined *)param_1[1];
        (**(code **)(local_70 + 0x18))(&local_70);
        if (puVar15 == local_68) {
          return 1;
        }
        uVar11 = 0;
        bVar6 = true;
        do {
          lVar8 = param_1[1] + 2 + uVar11;
          cVar9 = *(char *)(lVar8 + -2);
          if (cVar9 != local_68[uVar11]) break;
          if (cVar9 == '\0') {
            if (bVar6) {
              return 1;
            }
            break;
          }
          cVar9 = *(char *)(lVar8 + -1);
          if (cVar9 != local_68[uVar11 + 1]) break;
          if (cVar9 == '\0') {
            return 1;
          }
          cVar9 = *(char *)(param_1[1] + 2 + uVar11);
          if (cVar9 != local_68[uVar11 + 2]) break;
          if (cVar9 == '\0') {
            return 1;
          }
          bVar6 = uVar11 < 0x7fffe;
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
      }
    }
    uVar14 = uVar14 + 1;
  } while( true );
}

