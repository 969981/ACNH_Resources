
void FUN_00bf2e38(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  lVar12 = *(long *)PTR_DAT_04bb26a8;
  cVar5 = *(char *)(lVar12 + 0xa628c);
  iVar1 = *(int *)(lVar12 + 0xa62ac);
  uVar2 = *(undefined4 *)(lVar12 + 0xa62b0);
  iVar3 = *(int *)(lVar12 + 0xa6390);
  iVar9 = *(int *)(param_1 + 0xf4);
  lVar14 = **(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20);
  cVar6 = *(char *)(lVar12 + 0xa6398);
  if ((iVar9 == 0) && (cVar5 != '\0')) {
    *(undefined4 *)(param_1 + 0xf4) = 1;
LAB_00bf2ebc:
    uVar13 = (ulong)*(uint *)(param_1 + 0xf0);
    if (3 < *(uint *)(param_1 + 0xf0)) {
      uVar13 = 0;
    }
    if ((int)(&DAT_041021d0)[uVar13] <= iVar3) {
      *(undefined4 *)(lVar14 + 0x2477) = 0;
      *(undefined1 *)(lVar14 + 0x2476) = 1;
      lVar12 = *(long *)(lVar14 + 0x28);
      *(bool *)(lVar14 + 0x247b) = *(int *)(lVar14 + 0x48) == 7;
      *(undefined4 *)(lVar12 + 0x2188) = 0;
      *(undefined8 *)(lVar12 + 0x2180) = 0xffffffffffffffff;
      *(undefined2 *)(lVar12 + 0x218c) = 0;
      goto LAB_00bf306c;
    }
    if (cVar6 != '\0') {
      lVar12 = FUN_02535188();
      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x8c) >> 1 & 1) != 0)) {
        uVar4 = *(uint *)(param_1 + 0x104);
        if ((int)uVar4 < 100) {
          iVar9 = uVar4 + 0x14;
          if (0x4f < (int)uVar4) {
            iVar9 = 100;
          }
          *(int *)(param_1 + 0x104) = iVar9;
          if ((int)uVar4 < 0x50) goto LAB_00bf2fb8;
        }
        else if (uVar4 != 100) {
          uVar11 = (ulong)uVar4 - 0x14;
          uVar13 = uVar11;
          if (uVar11 < 0x65) {
            uVar13 = 100;
          }
          *(int *)(param_1 + 0x104) = (int)uVar13;
          if (100 < uVar11) goto LAB_00bf2fb8;
        }
        *(undefined4 *)(lVar14 + 0x2477) = 0;
        lVar12 = *(long *)(lVar14 + 0x28);
        *(bool *)(lVar14 + 0x247b) = *(int *)(lVar14 + 0x48) == 7;
        *(undefined1 *)(lVar14 + 0x2476) = 1;
        *(undefined1 *)(lVar14 + 0x247c) = 1;
        *(undefined8 *)(lVar12 + 0x2180) = 0xffffffffffffffff;
        *(undefined4 *)(lVar12 + 0x2188) = 0;
        *(undefined2 *)(lVar12 + 0x218c) = 0;
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x2a0) + 0xd) = 1;
        *(undefined1 *)(param_1 + 0x100) = 1;
        goto LAB_00bf306c;
      }
      uVar4 = *(uint *)(param_1 + 0x104);
      if ((int)uVar4 < 0) {
        lVar12 = (ulong)uVar4 + 1;
        bVar7 = uVar4 == 0xffffffff;
      }
      else {
        if (uVar4 == 0) goto LAB_00bf2fb8;
        lVar12 = (ulong)uVar4 - 1;
        bVar7 = lVar12 == 0;
      }
      uVar10 = (undefined4)lVar12;
      if (bVar7) {
        uVar10 = 0;
      }
      *(undefined4 *)(param_1 + 0x104) = uVar10;
    }
LAB_00bf2fb8:
    if (*(int *)(param_1 + 0xfc) < iVar3) {
      *(undefined1 *)(lVar14 + 0x2476) = 1;
      *(int *)(param_1 + 0xfc) = iVar3;
    }
    if (iVar1 != *(int *)(param_1 + 0xf8)) {
      lVar12 = *(long *)(lVar14 + 0x28);
      *(int *)(lVar12 + 0x2184) = iVar1;
      *(undefined4 *)(lVar12 + 0x2188) = uVar2;
      *(int *)(param_1 + 0xf8) = iVar1;
    }
    iVar9 = *(int *)(param_1 + 0xf4);
LAB_00bf2ff0:
    if (iVar9 != 2) {
      if (iVar9 != 3) {
        return;
      }
      goto LAB_00bf30c4;
    }
  }
  else {
    if (iVar9 != 1) goto LAB_00bf2ff0;
    if (cVar5 != '\0') goto LAB_00bf2ebc;
    lVar12 = *(long *)(lVar14 + 0x28);
    *(undefined4 *)(lVar14 + 0x2477) = 0;
    *(undefined1 *)(lVar14 + 0x2476) = 1;
    *(undefined1 *)(lVar14 + 0x247c) = 1;
    *(bool *)(lVar14 + 0x247b) = *(int *)(lVar14 + 0x48) == 7;
    *(undefined8 *)(lVar12 + 0x2180) = 0xffffffffffffffff;
    *(undefined4 *)(lVar12 + 0x2188) = 0;
    *(undefined2 *)(lVar12 + 0x218c) = 0;
LAB_00bf306c:
    *(undefined4 *)(param_1 + 0xf4) = 2;
  }
  bVar8 = *(int *)(lVar14 + 0x2548) == 1;
  iVar1 = *(int *)(lVar14 + 0x48);
  bVar7 = *(int *)(lVar14 + 0x254c) - 1U < 0xfffffffe;
  if (iVar1 != 0 || bVar8 && bVar7) {
    if (iVar1 == 7) {
      *(undefined1 *)(lVar14 + 0x2475) = 1;
    }
    else {
      if (iVar1 != 8) {
        return;
      }
      if (bVar8 && bVar7) {
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xf4) = 3;
LAB_00bf30c4:
  if ((*(int *)(lVar14 + 0x48) == 8) && (cVar5 == '\0' || *(char *)(param_1 + 0x100) != '\0')) {
    *(undefined1 *)(*(long *)(lVar14 + 0x20) + 0x39) = 1;
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  return;
}

