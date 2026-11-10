
void FUN_00279030(long param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_04bcd350;
  *(undefined1 *)(*(long *)PTR_DAT_04bcd350 + 0x9b) = *(undefined1 *)(param_1 + 0x90);
  lVar4 = FUN_002ba790(DAT_04c61168);
  lVar7 = lVar4 + 0x18;
  *(undefined1 *)(lVar4 + 0xa0) = *(undefined1 *)(param_1 + 0x90);
  if (*(long *)(lVar4 + 0x20) == lVar7) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    lVar9 = *(long *)(lVar4 + 0x20);
    do {
      while (((lVar6 = *(long *)(lVar9 + 0x10), lVar6 != *(long *)(lVar4 + 0x98) &&
              (*(int *)(lVar6 + 0x4c) != 5)) || (0x1e < *(byte *)(lVar6 + 0x38)))) {
        *(undefined4 *)(lVar6 + 0x4c) = 7;
        lVar9 = *(long *)(lVar9 + 8);
        if (lVar9 == lVar7) goto LAB_00279108;
      }
      uVar5 = FUN_00269a70(*(undefined8 *)puVar3);
      if ((uVar5 & 1) == 0) {
        FUN_0026bcc0(*(undefined8 *)puVar3,*(undefined1 *)(*(long *)(lVar9 + 0x10) + 0x38));
      }
      plVar1 = (long *)(lVar9 + 8);
      uVar2 = *(ushort *)(*(long *)(lVar9 + 0x10) + 0xb2);
      if (uVar8 <= uVar2) {
        uVar8 = uVar2;
      }
      lVar9 = *plVar1;
    } while (*plVar1 != lVar7);
  }
LAB_00279108:
  lVar7 = *(long *)puVar3;
  *(undefined4 *)(lVar7 + 0xb4) = *(undefined4 *)(lVar7 + 0xb8);
  *(ushort *)(lVar7 + 0x370) = uVar8 + 1;
  if (*(long *)(lVar7 + 0x48) == 0) {
    return;
  }
  FUN_002804a8();
  return;
}

