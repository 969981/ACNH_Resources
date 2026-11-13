
void FUN_01332320(long *param_1,ushort *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  char cVar10;
  ulong uVar11;
  undefined *puVar12;
  uint *puVar13;
  int *piVar14;
  
  *(undefined1 *)param_1[1] = 0;
  puVar6 = PTR_DAT_04bbc450;
  puVar4 = PTR_DAT_04bbc448;
  lVar7 = *(long *)PTR_DAT_04bb4930;
  uVar9 = 0xffff;
  if ((char)param_2[1] != '\0') {
    uVar9 = (uint)*param_2;
  }
  uVar9 = uVar9 - *(ushort *)(lVar7 + 0x1f8);
  if ((uVar9 < *(uint *)(lVar7 + 0x1d8)) &&
     (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar9 * 8), puVar8 != (uint *)0x0))
  {
    if (*puVar8 != 0) {
      cVar10 = *PTR_DAT_04bbc448;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(uint *)(puVar6 + 0x10);
          if (-1 < (int)uVar9) {
            puVar12 = (undefined *)((ulong)uVar9 + (long)puVar8);
            goto LAB_01332458;
          }
          if (uVar9 != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)*puVar8;
        puVar12 = (undefined *)0x0;
        if ((*puVar8 == 0) || (puVar8 == puVar13)) goto LAB_01332458;
        lVar7 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar8 + (lVar7 - (long)puVar13);
        if (lVar7 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
        puVar12 = (undefined *)0x0;
        if (uVar11 == 0) goto LAB_01332458;
        piVar14 = (int *)(lVar7 + 4);
        while (piVar14[-1] != 0x65a40722) {
          piVar14 = piVar14 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            puVar12 = (undefined *)0x0;
            goto LAB_01332458;
          }
        }
        iVar2 = 0;
        if (*piVar14 != -1) {
          iVar2 = *piVar14;
        }
        *(int *)(puVar6 + 0x10) = iVar2;
      } while (*puVar8 != 0);
    }
    puVar12 = (undefined *)0x0;
LAB_01332458:
    puVar4 = PTR_DAT_04c48290;
    if (puVar12 != (undefined *)0x0) {
      puVar4 = puVar12;
    }
    lVar5 = param_1[1];
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar7 = 0;
    do {
      if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_013324cc;
      lVar1 = param_1[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_013324cc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_013324cc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_013324cc:
    uVar9 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
    lVar7 = 0;
    do {
      if (puVar4[lVar7] == '\0') goto LAB_01332510;
      if (puVar4[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01332510;
      }
      if (puVar4[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01332510;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01332510:
    uVar3 = (uint)lVar7;
    if ((int)((int)param_1[2] - uVar9) <= (int)(uint)lVar7) {
      uVar3 = (int)param_1[2] + ~uVar9;
    }
    if (0 < (int)uVar3) {
      memcpy((void *)(lVar5 + (ulong)uVar9),puVar4,(ulong)uVar3);
      *(undefined1 *)(lVar5 + (int)(uVar3 + uVar9)) = 0;
    }
  }
  return;
}

