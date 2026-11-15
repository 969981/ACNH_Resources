
void FUN_01f73008(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined4 uVar9;
  
  FUN_01ec7d58();
  if ((*(ushort *)(param_1 + 0xaf64) & 0x401) != 1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x77b0);
  puVar4 = (undefined4 *)FUN_0252d9bc(0);
  lVar5 = FUN_0252dec4(0);
  if (iVar3 != 0x3c) {
    return;
  }
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (DAT_053e0208 == 0) {
    return;
  }
  lVar8 = *(long *)(DAT_053e0208 + 0x175a0);
  if (lVar8 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(lVar5 + 4);
  if (*(int *)(lVar8 + 0x1604) == 1) {
    if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      if ((iVar3 == 0x758f7eaf) && ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0))))
      {
        uVar2 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        puVar7 = (undefined1 *)(lVar8 + 0x10);
        if (uVar2 < 8) {
          puVar7 = puVar7 + (ulong)uVar2 * 0x1c;
        }
        goto LAB_01f73124;
      }
    }
    puVar7 = (undefined1 *)(lVar8 + 0x10);
  }
  else {
    puVar7 = (undefined1 *)(lVar8 + 0xd4);
  }
LAB_01f73124:
  *puVar7 = 1;
  *(undefined4 *)(puVar7 + 4) = *puVar4;
  *(undefined4 *)(puVar7 + 8) = puVar4[1];
  uVar9 = puVar4[2];
  *(undefined4 *)(puVar7 + 0x10) = uVar1;
  *(undefined4 *)(puVar7 + 0x14) = 0;
  *(undefined4 *)(puVar7 + 0xc) = uVar9;
  return;
}

