
void FUN_010fad80(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  byte bVar14;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0 || lVar3 == 0) {
    return;
  }
  if ((((*(byte *)(lVar1 + 0x150) & 1) != 0) && (*(int *)(lVar1 + 8) == 0)) &&
     (uVar10 = FUN_010f9df0(lVar1), (uVar10 & 1) != 0)) {
    lVar13 = *(long *)(lVar1 + 0x10);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    if ((*(long *)(lVar13 + 0x2b0) != 0) || (*(long *)(lVar13 + 0x288) == 0)) {
      bVar5 = *(byte *)(lVar1 + 0x150);
      bVar14 = *(byte *)(*(long *)(lVar1 + 0x18) + 0xc0);
      *(undefined8 *)(lVar13 + 0x288) = uVar2;
      *(undefined8 *)(lVar13 + 0x2a0) = uVar4;
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      *(byte *)(lVar13 + 0x2a8) = bVar14;
      if ((bVar5 & 1) != 0) {
        *(undefined8 *)(lVar13 + 0x2b0) = uVar2;
        *(undefined8 *)(lVar13 + 0x2b8) = uVar4;
        *(byte *)(lVar13 + 0x2c0) = bVar14;
      }
      if (*(long *)(lVar13 + 0x290) != 0) {
        *(byte *)(*(long *)(lVar13 + 0x290) + 0xc) = bVar14;
      }
    }
  }
  if (DAT_04c93e08 == 0) goto LAB_010fafa8;
  uVar12 = *(uint *)(lVar1 + 8);
  if (((uVar12 == 0) ||
      (lVar13 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         ((ulong)(uVar12 >> 0x11) & 0x7ff8)), lVar13 == 0)) ||
     (((*(uint *)(lVar13 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar13 + 0x230) != uVar12)))) {
    lVar13 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar7 = DAT_04c93e08;
    iVar9 = (**(code **)(*plVar11 + 0x60))();
    if (iVar9 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_010faed8;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_010faed8:
    uVar12 = 0;
  }
  if (lVar13 != 0) {
    uVar12 = uVar12 ^ 1;
    if (*(int *)(lVar13 + 0x150) != 1) {
      uVar12 = 1;
    }
    if (uVar12 == 0) {
      if (((*(byte *)(lVar1 + 0x150) & 1) != 0) &&
         (*(char *)(*(long *)(*(long *)(lVar3 + 0x48) + 0x288) + 0x26) == '\0')) {
        plVar11 = (long *)(lVar3 + 8);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        lVar13 = *(long *)(lVar3 + 0x10);
        (**(code **)(DAT_050b4c08 + 0x18))(&DAT_050b4c08);
        if (lVar13 != DAT_050b4c10) {
          uVar10 = 0;
          bVar8 = true;
          do {
            cVar6 = *(char *)(*(long *)(lVar3 + 0x10) + uVar10);
            if (cVar6 != *(char *)(DAT_050b4c10 + uVar10)) break;
            if (cVar6 == '\0') {
              if (bVar8) goto LAB_010fb02c;
              break;
            }
            bVar8 = uVar10 < 0x80000;
            uVar10 = uVar10 + 1;
          } while (uVar10 != 0x80001);
          FUN_010fa228(lVar1);
        }
      }
LAB_010fb02c:
      uVar10 = FUN_010f62f0(lVar3,param_1,param_2);
      if ((uVar10 & 1) == 0) {
        return;
      }
      *(undefined8 *)(lVar1 + 0x148) = 0;
      return;
    }
  }
LAB_010fafa8:
  if (*(char *)(param_2 + 0x29) == '\0') {
    if ((*(long *)(param_2 + 0x20) != 0) && (*(char *)(param_2 + 0x28) == '\0')) {
      *(undefined1 *)(param_2 + 0x28) = 1;
      FUN_0068a870(param_2);
      return;
    }
  }
  else if ((((*(long *)(param_2 + 0x10) != 0) && (-1 < *(int *)(param_2 + 0x18))) &&
           (*(long *)(param_2 + 0x20) != 0)) && (*(char *)(param_2 + 0x28) == '\0')) {
    *(undefined1 *)(param_2 + 0x28) = 1;
    FUN_0068a838(param_2);
    return;
  }
  return;
}

