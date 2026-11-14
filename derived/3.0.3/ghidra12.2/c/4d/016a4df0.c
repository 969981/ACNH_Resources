
uint * FUN_016a4df0(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  char cVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  ulong uVar13;
  undefined *local_70;
  long local_68;
  
  puVar4 = PTR_DAT_04bbc450;
  uVar13 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      lVar7 = *(long *)(param_1 + 0xb0);
      if (lVar7 == 0) {
        return (uint *)0x0;
      }
      uVar9 = 0;
      if (*(uint **)(lVar7 + 8) != (uint *)0x0) {
        uVar9 = (ulong)**(uint **)(lVar7 + 8);
      }
      if (uVar9 <= uVar13) {
        return (uint *)0x0;
      }
      if ((((lVar7 != 0) && (puVar12 = *(uint **)(lVar7 + 8), puVar12 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 200) <= uVar13 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + uVar13) != '\0')))) &&
         (((uVar13 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar12 = (uint *)((ulong)(puVar12[1] * (int)uVar13 + (uint)(ushort)puVar12[2] * 8 + iVar8)
                          + (long)puVar12);
        goto joined_r0x016a4e80;
      }
    }
    else {
      if (*(uint *)(param_1 + 0x1c0) <= uVar13) {
        return (uint *)0x0;
      }
      uVar9 = uVar13 & 0xffffffff;
      if (*(uint *)(param_1 + 0x1b0) <= uVar13) {
        uVar9 = 0;
      }
      puVar12 = *(uint **)(*(long *)(param_1 + 0x1b8) + uVar9 * 8);
joined_r0x016a4e80:
      if (puVar12 != (uint *)0x0) {
        if (*puVar12 != 0) {
          cVar6 = *PTR_DAT_04bbc448;
          do {
            if (cVar6 == '\0') {
              cVar6 = '\x01';
              *PTR_DAT_04bbc448 = 1;
              *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            }
            else {
              uVar3 = *(uint *)(puVar4 + 0x18);
              if (-1 < (int)uVar3) {
                lVar7 = (ulong)uVar3 + (long)puVar12;
                goto LAB_016a4f5c;
              }
              if (uVar3 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)*puVar12;
            lVar7 = 0;
            if ((*puVar12 == 0) || (puVar12 == puVar10)) goto LAB_016a4f5c;
            lVar7 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar10)) != '\0') {
              lVar7 = 0x1c;
            }
            lVar2 = (long)puVar12 + (lVar7 - (long)puVar10);
            if (lVar2 == 0) break;
            uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar10));
            *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
            lVar7 = 0;
            if (uVar9 == 0) goto LAB_016a4f5c;
            piVar11 = (int *)(lVar2 + 4);
            while (piVar11[-1] != -0x590492a1) {
              piVar11 = piVar11 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) {
                lVar7 = 0;
                goto LAB_016a4f5c;
              }
            }
            iVar8 = 0;
            if (*piVar11 != -1) {
              iVar8 = *piVar11;
            }
            *(int *)(puVar4 + 0x18) = iVar8;
          } while (*puVar12 != 0);
        }
        lVar7 = 0;
LAB_016a4f5c:
        local_68 = *(long *)PTR_PTR_04bbdd60;
        if (lVar7 != 0) {
          local_68 = lVar7;
        }
        local_70 = puVar1;
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar7 = param_2[1];
        (**(code **)(local_70 + 0x18))(&local_70);
        if (lVar7 == local_68) {
          return puVar12;
        }
        uVar9 = 0;
        bVar5 = true;
        do {
          lVar7 = param_2[1] + 2 + uVar9;
          cVar6 = *(char *)(lVar7 + -2);
          if (cVar6 != *(char *)(local_68 + uVar9)) break;
          if (cVar6 == '\0') {
            if (bVar5) {
              return puVar12;
            }
            break;
          }
          cVar6 = *(char *)(lVar7 + -1);
          if (cVar6 != *(char *)(local_68 + uVar9 + 1)) break;
          if (cVar6 == '\0') {
            return puVar12;
          }
          cVar6 = *(char *)(param_2[1] + 2 + uVar9);
          if (cVar6 != *(char *)(local_68 + uVar9 + 2)) break;
          if (cVar6 == '\0') {
            return puVar12;
          }
          bVar5 = uVar9 < 0x7fffe;
          uVar9 = uVar9 + 3;
        } while (uVar9 != 0x80001);
      }
    }
    uVar13 = uVar13 + 1;
  } while( true );
}

