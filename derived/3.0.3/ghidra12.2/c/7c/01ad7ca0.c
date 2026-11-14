
void FUN_01ad7ca0(long *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  
  puVar3 = PTR_DAT_04bbe220;
  puVar2 = PTR_DAT_04bbe218;
  if ((int)*(uint *)(DAT_0532a7a8 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7a8 + 0xb0) != 0) &&
         (puVar6 = *(uint **)(*(long *)(DAT_0532a7a8 + 0xb0) + 8), puVar6 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a7a8 + 200) <= param_2 ||
         (*(char *)(*(long *)(DAT_0532a7a8 + 0xd0) + (long)(int)param_2) != '\0')))) &&
       (((param_2 < *puVar6 && (puVar6[1] != 0)) && ((ushort)puVar6[2] != 0)))) {
      iVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar6 = (uint *)((ulong)(puVar6[1] * param_2 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                       (long)puVar6);
      goto joined_r0x01ad7e38;
    }
  }
  else if (param_2 < *(uint *)(DAT_0532a7a8 + 0x1c0)) {
    if (*(uint *)(DAT_0532a7a8 + 0x1b0) <= param_2) {
      param_2 = 0;
    }
    puVar6 = *(uint **)(*(long *)(DAT_0532a7a8 + 0x1b8) + (ulong)param_2 * 8);
joined_r0x01ad7e38:
    if (puVar6 != (uint *)0x0) {
      if (*puVar6 != 0) {
        cVar9 = *PTR_DAT_04bbe218;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar1 = *(uint *)(puVar3 + 0x14);
            if (-1 < (int)uVar1) {
              lVar11 = (ulong)uVar1 + (long)puVar6;
              goto LAB_01ad7db8;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar4 = (uint *)(ulong)*puVar6;
          lVar11 = 0;
          if ((*puVar6 == 0) || (puVar6 == puVar4)) goto LAB_01ad7db8;
          lVar11 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar4)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar7 = (long)puVar6 + (lVar11 - (long)puVar4);
          if (lVar7 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar4));
          *(undefined4 *)(puVar3 + 0x14) = 0xfffffffe;
          lVar11 = 0;
          if (uVar10 == 0) goto LAB_01ad7db8;
          piVar5 = (int *)(lVar7 + 4);
          while (piVar5[-1] != -0x7840ff18) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              lVar11 = 0;
              goto LAB_01ad7db8;
            }
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          *(int *)(puVar3 + 0x14) = iVar8;
        } while (*puVar6 != 0);
      }
      lVar11 = 0;
LAB_01ad7db8:
      lVar7 = *(long *)PTR_PTR_04bbff10;
      if (lVar11 != 0) {
        lVar7 = lVar11;
      }
      goto LAB_01ad7e48;
    }
  }
  lVar7 = *(long *)(PTR_PTR_04bb2238 + 8);
LAB_01ad7e48:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar7;
  return;
}

