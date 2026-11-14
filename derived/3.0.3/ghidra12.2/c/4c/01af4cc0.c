
void FUN_01af4cc0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  int iVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  uint *puVar10;
  int *piVar11;
  
  uVar3 = FUN_01af43a0();
  puVar2 = PTR_DAT_04bbfed8;
  puVar5 = PTR_DAT_04bbfed0;
  if ((int)*(uint *)(DAT_0532a798 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a798 + 0xb0) != 0) &&
         (puVar4 = *(uint **)(*(long *)(DAT_0532a798 + 0xb0) + 8), puVar4 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a798 + 200) <= uVar3 ||
         (*(char *)(*(long *)(DAT_0532a798 + 0xd0) + (long)(int)uVar3) != '\0')))) &&
       (((uVar3 < *puVar4 && (puVar4[1] != 0)) && ((ushort)puVar4[2] != 0)))) {
      iVar6 = 0xc;
      if (*(char *)((long)puVar4 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar4 = (uint *)((ulong)(puVar4[1] * uVar3 + (uint)(ushort)puVar4[2] * 8 + iVar6) +
                       (long)puVar4);
      goto joined_r0x01af4e58;
    }
  }
  else if (uVar3 < *(uint *)(DAT_0532a798 + 0x1c0)) {
    if (*(uint *)(DAT_0532a798 + 0x1b0) <= uVar3) {
      uVar3 = 0;
    }
    puVar4 = *(uint **)(*(long *)(DAT_0532a798 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x01af4e58:
    if (puVar4 != (uint *)0x0) {
      if (*puVar4 != 0) {
        cVar7 = *PTR_DAT_04bbfed0;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar2 = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
          }
          else {
            uVar3 = *(uint *)(puVar2 + 0xc);
            if (-1 < (int)uVar3) {
              puVar9 = (undefined *)((ulong)uVar3 + (long)puVar4);
              goto LAB_01af4ddc;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar4;
          puVar9 = (undefined *)0x0;
          if ((*puVar4 == 0) || (puVar4 == puVar10)) goto LAB_01af4ddc;
          lVar1 = 0xc;
          if (*(char *)((long)puVar4 + (10 - (long)puVar10)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar4 + (lVar1 - (long)puVar10);
          if (lVar1 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar10));
          *(undefined4 *)(puVar2 + 0xc) = 0xfffffffe;
          puVar9 = (undefined *)0x0;
          if (uVar8 == 0) goto LAB_01af4ddc;
          piVar11 = (int *)(lVar1 + 4);
          while (piVar11[-1] != -0x2304ad18) {
            piVar11 = piVar11 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              puVar9 = (undefined *)0x0;
              goto LAB_01af4ddc;
            }
          }
          iVar6 = 0;
          if (*piVar11 != -1) {
            iVar6 = *piVar11;
          }
          *(int *)(puVar2 + 0xc) = iVar6;
        } while (*puVar4 != 0);
      }
      puVar9 = (undefined *)0x0;
LAB_01af4ddc:
      puVar5 = PTR_DAT_04c48540;
      if (puVar9 != (undefined *)0x0) {
        puVar5 = puVar9;
      }
      goto LAB_01af4e68;
    }
  }
  puVar5 = *(undefined **)(PTR_PTR_04bb2238 + 8);
LAB_01af4e68:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = (long)puVar5;
  return;
}

