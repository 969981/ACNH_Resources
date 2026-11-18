
undefined8 FUN_03817890(long param_1,uint *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *__src;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 *__dest;
  uint uVar11;
  void *__dest_00;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  uint local_44;
  
  if (param_2[1] == 0xffffffff || *param_2 == 0xffffffff) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x240);
  iVar6 = *(int *)(param_1 + 0x238);
  if (iVar6 <= iVar4) {
    return 0;
  }
  lVar14 = *(long *)(param_1 + 0x230);
  *(int *)(param_1 + 0x240) = iVar4 + 1;
  iVar4 = *(int *)(param_1 + 0x23c) + iVar4;
  iVar2 = 0;
  if (iVar6 <= iVar4) {
    iVar2 = iVar6;
  }
  if (lVar14 == 0) {
    return 0;
  }
  iVar4 = iVar4 - iVar2;
  local_44 = param_2[1];
  if ((((local_44 != 5) && (local_44 != 9)) && (local_44 != 2)) &&
     ((local_44 != 3 && (local_44 != 0xc)))) {
    local_44 = 0xb;
  }
  lVar9 = lVar14 + (long)iVar4 * 0x70;
  *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(param_2 + 2);
  *(uint *)(lVar9 + 0x10) = param_2[4];
  *(uint *)(lVar9 + 0x14) = param_2[5];
  *(uint *)(lVar9 + 0x18) = param_2[6];
  uVar11 = *param_2;
  if ((uVar11 - 5 < 2) || (uVar11 == 3)) {
    __src = (&PTR_DAT_04b5baf0)[uVar11];
    lVar9 = lVar14 + (long)iVar4 * 0x70;
    puVar13 = (undefined8 *)(lVar9 + 0x20);
    __dest = (undefined1 *)*puVar13;
    if (__dest == __src) goto LAB_03817a88;
    iVar6 = *(int *)(lVar9 + 0x2c);
    lVar9 = 0;
    do {
      pcVar1 = __src + lVar9;
      lVar9 = lVar9 + 1;
    } while (*pcVar1 != '\0');
    uVar11 = (int)lVar9 - 1;
    if (iVar6 <= (int)uVar11) {
      uVar11 = iVar6 - 1;
    }
    if (0 < (int)uVar11) goto LAB_03817a38;
LAB_03817a7c:
    uVar11 = 0;
  }
  else {
    if (uVar11 != 7) {
      lVar9 = lVar14 + (long)iVar4 * 0x70;
      plVar15 = (long *)(lVar9 + 0x20);
      *(undefined1 *)*plVar15 = 0;
      *(undefined4 *)(lVar9 + 0x28) = 0;
      if (*param_2 + 1 < 9) {
        puVar13 = (undefined8 *)(&PTR_DAT_04b5bae8)[*param_2 + 1];
      }
      else {
        puVar13 = &DAT_0407ebb1;
      }
      __dest_00 = (void *)*plVar15;
      lVar10 = 0;
      iVar6 = *(int *)(lVar9 + 0x2c);
      do {
        pcVar1 = (char *)((long)puVar13 + lVar10);
        lVar10 = lVar10 + 1;
      } while (*pcVar1 != '\0');
      uVar11 = (int)lVar10 - 1;
      if (iVar6 <= (int)uVar11) {
        uVar11 = iVar6 - 1;
      }
      if ((int)uVar11 < 1) {
        uVar11 = 0;
      }
      else {
        memcpy(__dest_00,puVar13,(ulong)uVar11);
        *(undefined1 *)((long)__dest_00 + (ulong)uVar11) = 0;
        __dest_00 = (void *)*plVar15;
        iVar6 = *(int *)(lVar9 + 0x2c);
        *(uint *)(lVar9 + 0x28) = uVar11;
      }
      uVar3 = 3;
      if (iVar6 <= (int)(uVar11 + 3)) {
        uVar3 = iVar6 + ~uVar11;
      }
      uVar8 = (ulong)uVar11;
      if (0 < (int)uVar3) {
        memcpy((void *)((long)__dest_00 + (ulong)uVar11),&DAT_04100637,(ulong)uVar3);
        uVar8 = (ulong)uVar3 + (ulong)uVar11;
        *(undefined1 *)((long)__dest_00 + uVar8) = 0;
        *(int *)(lVar9 + 0x28) = (int)uVar8;
      }
      if (local_44 + 1 < 0xe) {
        puVar13 = (undefined8 *)(&PTR_DAT_04b5bbe0)[local_44 + 1];
      }
      else {
        puVar13 = &DAT_0407ebb1;
      }
      lVar12 = *plVar15;
      lVar10 = 0;
      do {
        pcVar1 = (char *)((long)puVar13 + lVar10);
        lVar10 = lVar10 + 1;
      } while (*pcVar1 != '\0');
      uVar5 = (int)lVar10 - 1;
      uVar7 = (uint)uVar8;
      if (*(int *)(lVar9 + 0x2c) <=
          (int)(uVar5 + (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) + uVar11)) {
        uVar5 = *(int *)(lVar9 + 0x2c) + ~uVar7;
      }
      if (0 < (int)uVar5) {
        memcpy((void *)(lVar12 + (int)uVar7),puVar13,(ulong)uVar5);
        lVar10 = (long)(int)uVar7 + (long)(int)uVar5;
        *(undefined1 *)(lVar12 + lVar10) = 0;
        *(int *)(lVar9 + 0x28) = (int)lVar10;
      }
      goto LAB_03817a88;
    }
    lVar9 = lVar14 + (long)iVar4 * 0x70;
    puVar13 = (undefined8 *)(lVar9 + 0x20);
    __dest = (undefined1 *)*puVar13;
    if (__dest == &DAT_040a84fc) goto LAB_03817a88;
    iVar6 = *(int *)(lVar9 + 0x2c);
    uVar11 = 0xc;
    if (iVar6 < 0xd) {
      uVar11 = iVar6 - 1;
    }
    if ((int)uVar11 < 1) goto LAB_03817a7c;
    __src = &DAT_040a84fc;
LAB_03817a38:
    memcpy(__dest,__src,(ulong)uVar11);
    __dest = __dest + uVar11;
  }
  *__dest = 0;
  *(uint *)(puVar13 + 1) = uVar11;
LAB_03817a88:
  *(char *)(lVar14 + (long)iVar4 * 0x70) = (char)param_2[7];
  *(undefined1 *)(lVar14 + (long)iVar4 * 0x70 + 1) = *(undefined1 *)((long)param_2 + 0x1d);
  return 1;
}

