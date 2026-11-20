
void FUN_03f58640(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  
  lVar6 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  lVar7 = *(long *)(param_1 + 0x20);
  iVar1 = *(int *)(lVar7 + 0x10);
  iVar2 = *(int *)(lVar7 + 0x14);
  iVar4 = *(int *)(lVar7 + 0xc) * (uint)*(ushort *)(*(long *)(param_1 + 0x10) + 0x7a0cc);
  if (iVar2 - iVar4 != 0 && iVar4 <= iVar2) {
    uVar5 = (iVar2 - iVar4) * iVar1;
    if (0 < (int)uVar5) {
      uVar8 = (ulong)uVar5 & 3;
      if (uVar5 < 4) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        puVar10 = (undefined8 *)(lVar6 + (long)(iVar4 * iVar1) * 4 + 8);
        do {
          lVar7 = lVar7 + -4;
          puVar10[-1] = 0xff000000ff000000;
          *puVar10 = 0xff000000ff000000;
          puVar10 = puVar10 + 2;
        } while (-lVar7 != ((ulong)uVar5 & 0xfffffffc));
        lVar7 = -lVar7;
      }
      if ((uVar5 & 3) != 0) {
        puVar9 = (undefined4 *)(lVar6 + lVar7 * 4 + (long)(iVar4 * iVar1) * 4);
        do {
          uVar8 = uVar8 - 1;
          *puVar9 = 0xff000000;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
      }
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar5 = iVar2 * iVar1;
    if (0 < (int)uVar5) {
      uVar8 = (ulong)uVar5 & 3;
      if (uVar5 < 4) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        puVar10 = (undefined8 *)(lVar6 + 8);
        do {
          lVar7 = lVar7 + -4;
          puVar10[-1] = 0xff000000ff000000;
          *puVar10 = 0xff000000ff000000;
          puVar10 = puVar10 + 2;
        } while (-lVar7 != ((ulong)uVar5 & 0xfffffffc));
        lVar7 = -lVar7;
      }
      if ((uVar5 & 3) != 0) {
        puVar9 = (undefined4 *)(lVar6 + lVar7 * 4);
        do {
          uVar8 = uVar8 - 1;
          *puVar9 = 0xff000000;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
      }
    }
  }
  cVar3 = *(char *)(*(long *)(param_1 + 8) + 0x20);
  if (cVar3 == '\x03') {
    FUN_03f89240(*(undefined8 *)(param_1 + 0x10));
  }
  else if (cVar3 == '\x02') {
    FUN_03f88c70(*(undefined8 *)(param_1 + 0x10));
  }
  else if (cVar3 == '\x01') {
    FUN_03f88670(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    FUN_03f88070(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x03f587e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),param_2);
  return;
}

