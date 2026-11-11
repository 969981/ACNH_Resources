
void FUN_0053afd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  uVar8 = FUN_00438810(0x28);
  FUN_0053d2a0();
  puVar9 = (undefined8 *)FUN_00438810(0xa0);
  puVar9[2] = 1;
  *puVar9 = &DAT_048c9ed0;
  puVar9[1] = 0xffffffff;
  FUN_004385d0(puVar9 + 4);
  puVar9[0x12] = 0;
  puVar9[0x11] = uVar8;
  FUN_004435a0(uVar8);
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  uVar7 = DAT_0413f4f8;
  uVar6 = DAT_0413f4f0;
  uVar5 = DAT_0413f4e8;
  uVar4 = DAT_0413f4e0;
  uVar3 = DAT_0413f4d8;
  uVar2 = DAT_0413f4d0;
  uVar1 = DAT_0413f4c0;
  puVar9[5] = DAT_0413f4c8;
  puVar9[4] = uVar1;
  puVar9[7] = uVar3;
  puVar9[6] = uVar2;
  puVar9[9] = uVar5;
  puVar9[8] = uVar4;
  puVar9[0xb] = uVar7;
  puVar9[10] = uVar6;
  FUN_0043be70(puVar9 + 0x12,0);
  puVar9[0x10] = 0;
  puVar9[0x13] = 0x10000003c23d70a;
  *(undefined8 **)(param_1 + 0x198) = puVar9;
  FUN_004435c0(uVar8);
  lVar10 = *(long *)(param_1 + 0x18);
  if ((*(char *)(lVar10 + 0x180) != '\0') && (*(char *)(lVar10 + 0x14c) != '\0')) {
    lVar10 = lVar10 + 0x140;
    if (*(long *)(param_1 + 600) != 0) {
      lVar10 = *(long *)(param_1 + 600);
    }
    *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x9d) = *(undefined1 *)(lVar10 + 0xc);
    *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x9c) = *(undefined1 *)(lVar10 + 0xd);
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x98) = *(undefined4 *)(lVar10 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x1a0) = param_2;
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}

