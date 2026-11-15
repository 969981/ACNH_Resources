
undefined8 FUN_0214f66c(long param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  undefined8 local_50;
  undefined8 local_48;
  
  if (((*(long *)(param_1 + 0x1f0) == 0) ||
      (iVar12 = *(int *)(*(long *)(param_1 + 0x1f0) + 4), iVar12 == 0)) || (iVar12 == 0x22)) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "MuseumCafeExitTime";
    uVar8 = FUN_027490f0(param_2,&local_50);
    if ((uVar8 & 0xfffe) != 0) {
      uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
      cVar5 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
      cVar1 = cVar5 + '\x18';
      if ('\x04' < cVar5) {
        cVar1 = cVar5;
      }
      uVar7 = uVar8 + uVar6 * -100;
      uVar2 = uVar6 + 0x18;
      if (499 < (uVar8 & 0xffff)) {
        uVar2 = uVar6;
      }
      if (0x3b < (uVar7 & 0xff)) {
        return 0;
      }
      if ((uVar2 & 0xff) - 0x1e < 0xffffffe7) {
        return 0;
      }
      uVar4 = *(undefined1 *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
      lVar10 = *(long *)PTR_DAT_04bb3968;
      if ((int)*(uint *)(lVar10 + 0x16718) < 1) {
        if (*(long *)(lVar10 + 0x16608) == 0) {
          return 0;
        }
        puVar11 = *(uint **)(*(long *)(lVar10 + 0x16608) + 8);
        if (puVar11 == (uint *)0x0) {
          return 0;
        }
        if ((0x21 < *(uint *)(lVar10 + 0x16620)) &&
           (*(char *)(*(long *)(lVar10 + 0x16628) + 0x21) == '\0')) {
          return 0;
        }
        if (*puVar11 < 0x22) {
          return 0;
        }
        if (puVar11[1] == 0) {
          return 0;
        }
        if ((ushort)puVar11[2] == 0) {
          return 0;
        }
        iVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        lVar10 = (ulong)(puVar11[1] * 0x21 + (uint)(ushort)puVar11[2] * 8 + iVar12) + (long)puVar11;
      }
      else {
        if (*(uint *)(lVar10 + 0x16718) < 0x22) {
          return 0;
        }
        lVar3 = 0x108;
        if (*(uint *)(lVar10 + 0x16708) < 0x22) {
          lVar3 = 0;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0x16710) + lVar3);
      }
      if (lVar10 != 0) {
        FUN_0214ca00(&local_50);
        if ((*(int *)(param_1 + 0x1e4) == 0) || (*(int *)(param_1 + 0x1e4) == 0x22)) {
          *(char *)(param_1 + 0x1e0) = cVar1;
          *(undefined1 *)(param_1 + 0x1e1) = uVar4;
          *(char *)(param_1 + 0x1e2) = (char)uVar2;
          *(char *)(param_1 + 0x1e3) = (char)uVar7;
          *(undefined4 *)(param_1 + 0x1e4) = local_50._4_4_;
          *(undefined1 *)(param_1 + 0x1e8) = (undefined1)local_48;
          *(undefined2 *)(param_1 + 0x1e9) = local_48._1_2_;
          if (*(long *)(param_1 + 0x1f0) == 0) {
            uVar9 = 0x22;
          }
          else {
            uVar9 = *(undefined4 *)(*(long *)(param_1 + 0x1f0) + 4);
          }
          *(undefined4 *)(param_1 + 0x1fc) = uVar9;
          *(undefined8 *)(param_1 + 0x1f0) = 0;
          FUN_0214d220(param_1);
          *(undefined1 *)(param_1 + 0x236) = 1;
        }
        *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x244) = 0;
        return 1;
      }
    }
  }
  return 0;
}

