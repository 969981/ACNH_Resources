
void FUN_01af59b0(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  undefined *puVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  undefined *puVar11;
  
  puVar3 = PTR_DAT_04bbff80;
  puVar7 = PTR_DAT_04bbff78;
  if ((int)*(uint *)(DAT_0532a7e0 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7e0 + 0xb0) != 0) &&
         (puVar6 = *(uint **)(*(long *)(DAT_0532a7e0 + 0xb0) + 8), puVar6 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a7e0 + 200) <= param_2 ||
         (*(char *)(*(long *)(DAT_0532a7e0 + 0xd0) + (long)(int)param_2) != '\0')))) &&
       (((param_2 < *puVar6 && (puVar6[1] != 0)) && ((ushort)puVar6[2] != 0)))) {
      iVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar6 = (uint *)((ulong)(puVar6[1] * param_2 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                       (long)puVar6);
      goto joined_r0x01af5b44;
    }
  }
  else if (param_2 < *(uint *)(DAT_0532a7e0 + 0x1c0)) {
    if (*(uint *)(DAT_0532a7e0 + 0x1b0) <= param_2) {
      param_2 = 0;
    }
    puVar6 = *(uint **)(*(long *)(DAT_0532a7e0 + 0x1b8) + (ulong)param_2 * 8);
joined_r0x01af5b44:
    if (puVar6 != (uint *)0x0) {
      if (*puVar6 != 0) {
        cVar9 = *PTR_DAT_04bbff78;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          }
          else {
            uVar2 = *(uint *)(puVar3 + 0x10);
            if (-1 < (int)uVar2) {
              puVar11 = (undefined *)((ulong)uVar2 + (long)puVar6);
              goto LAB_01af5ac8;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar4 = (uint *)(ulong)*puVar6;
          puVar11 = (undefined *)0x0;
          if ((*puVar6 == 0) || (puVar6 == puVar4)) goto LAB_01af5ac8;
          lVar1 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar4)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar6 + (lVar1 - (long)puVar4);
          if (lVar1 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar4));
          *(undefined4 *)(puVar3 + 0x10) = 0xfffffffe;
          puVar11 = (undefined *)0x0;
          if (uVar10 == 0) goto LAB_01af5ac8;
          piVar5 = (int *)(lVar1 + 4);
          while (piVar5[-1] != 0x26f0892) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              puVar11 = (undefined *)0x0;
              goto LAB_01af5ac8;
            }
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          *(int *)(puVar3 + 0x10) = iVar8;
        } while (*puVar6 != 0);
      }
      puVar11 = (undefined *)0x0;
LAB_01af5ac8:
      puVar7 = PTR_DAT_04c48548;
      if (puVar11 != (undefined *)0x0) {
        puVar7 = puVar11;
      }
      goto LAB_01af5b54;
    }
  }
  puVar7 = *(undefined **)(PTR_PTR_04bb2238 + 8);
LAB_01af5b54:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = (long)puVar7;
  return;
}

