
void FUN_01db0200(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  puVar2 = PTR_DAT_04bc14b0;
  uVar4 = *(uint *)PTR_DAT_04bc14b0;
  if (0 < (int)uVar4) {
    uVar10 = 0;
    do {
      if ((uVar10 < uVar4) &&
         (plVar3 = *(long **)(*(long *)(puVar2 + 8) + uVar10 * 8), plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x20))();
        uVar4 = *(uint *)puVar2;
      }
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)uVar4);
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    iVar6 = *(int *)(lVar5 + 0x30);
    *(undefined8 *)(lVar5 + 0x34) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    if (iVar6 < 1) {
      iVar7 = 0;
    }
    else {
      *(undefined4 *)(lVar5 + 0x38) = 1;
      **(long **)(lVar5 + 0x28) = lVar5 + 8;
      iVar7 = *(int *)(lVar5 + 0x38);
      iVar6 = *(int *)(lVar5 + 0x30);
    }
    *(undefined8 *)(lVar5 + 0x20) = 0;
    if (iVar7 < iVar6) {
      *(int *)(lVar5 + 0x38) = iVar7 + 1;
      iVar7 = *(int *)(lVar5 + 0x34) + iVar7;
      iVar1 = 0;
      if (iVar6 <= iVar7) {
        iVar1 = iVar6;
      }
      *(long *)(*(long *)(lVar5 + 0x28) + (long)(iVar7 - iVar1) * 8) = lVar5 + 0x18;
    }
    *(undefined8 *)(lVar5 + 0x5c) = 0;
    *(undefined8 *)(lVar5 + 0x90) = 0;
    *(undefined2 *)(lVar5 + 0x98) = 0xff00;
    *(undefined8 *)(lVar5 + 0x9c) = 0;
    *(undefined8 *)(lVar5 + 0xa4) = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    *(undefined8 *)(lVar5 + 0x80) = 0;
  }
  lVar5 = DAT_05372690;
  uVar4 = DAT_05372688;
  uVar10 = (ulong)DAT_05372688;
  if (0 < (int)DAT_05372688) {
    if (DAT_05372688 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        lVar9 = *(long *)(lVar5 + uVar8 * 8);
        if (lVar9 != 0) {
          *(undefined1 *)(lVar9 + 0x40) = 0;
        }
        lVar9 = *(long *)(lVar5 + uVar8 * 8 + 8);
        if (lVar9 != 0) {
          *(undefined1 *)(lVar9 + 0x40) = 0;
        }
        uVar8 = uVar8 + 2;
      } while ((uVar10 & 0xfffffffe) != uVar8);
    }
    if (((uVar4 & 1) != 0) && (lVar5 = *(long *)(lVar5 + uVar8 * 8), lVar5 != 0)) {
      *(undefined1 *)(lVar5 + 0x40) = 0;
    }
  }
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  FUN_01db0074(param_1);
  return;
}

