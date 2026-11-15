
void FUN_0221c530(long param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  
  if ((param_2 != 0xffffffff) && ((int)param_2 < 0x10)) {
    puVar10 = &DAT_0545b240 + (ulong)param_2 * 0x118;
    if (0xf < param_2) {
      puVar10 = &DAT_0545b240;
    }
    if (puVar10[0x8c] != '\0') {
      if (puVar10[0xc9] == '\0') {
        if (puVar10[0xca] != '\0') {
          FUN_0221c230(param_1);
        }
      }
      else {
        FUN_0221bf70(param_1);
      }
      puVar10[0x90] = 0;
      puVar8 = PTR_DAT_04bb37e0;
      *(undefined4 *)(puVar10 + 0xa8) = 0;
      puVar9 = PTR_DAT_04bb5d40;
      *(undefined8 *)(puVar10 + 0xa0) = 0xffffffff00000000;
      *(undefined2 *)(puVar10 + 200) = 1;
      uVar7 = *(undefined2 *)puVar8;
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      uVar4 = *(undefined4 *)(puVar8 + 4);
      puVar10[0xca] = 0;
      *(undefined2 *)(puVar10 + 0xac) = uVar7;
      uVar2 = *(undefined4 *)(puVar9 + 8);
      uVar3 = *(undefined4 *)(puVar9 + 0xc);
      *(undefined2 *)(puVar10 + 0xcc) = uVar7;
      *(undefined2 *)(puVar10 + 0xd4) = uVar7;
      *(undefined2 *)(puVar10 + 0xdc) = uVar7;
      *(undefined2 *)(puVar10 + 0xe4) = uVar7;
      *(undefined2 *)(puVar10 + 0xec) = uVar7;
      *(undefined2 *)(puVar10 + 0xf4) = uVar7;
      *(undefined2 *)(puVar10 + 0xfc) = uVar7;
      *(undefined2 *)(puVar10 + 0x104) = uVar7;
      *(undefined2 *)(puVar10 + 0x10c) = uVar7;
      puVar10[0xae] = uVar5;
      puVar10[0xaf] = uVar6;
      *(undefined4 *)(puVar10 + 0xb0) = uVar4;
      *(undefined4 *)(puVar10 + 0xc0) = uVar2;
      *(undefined4 *)(puVar10 + 0xc4) = uVar3;
      puVar10[0xce] = uVar5;
      puVar10[0xcf] = uVar6;
      *(undefined4 *)(puVar10 + 0xd0) = uVar4;
      puVar10[0xd6] = uVar5;
      puVar10[0xd7] = uVar6;
      *(undefined4 *)(puVar10 + 0xd8) = uVar4;
      puVar10[0xde] = uVar5;
      puVar10[0xdf] = uVar6;
      *(undefined4 *)(puVar10 + 0xe0) = uVar4;
      puVar10[0xe6] = uVar5;
      puVar10[0xe7] = uVar6;
      *(undefined4 *)(puVar10 + 0xe8) = uVar4;
      puVar10[0xee] = uVar5;
      puVar10[0xef] = uVar6;
      *(undefined4 *)(puVar10 + 0xf0) = uVar4;
      puVar10[0xf6] = uVar5;
      puVar10[0xf7] = uVar6;
      *(undefined4 *)(puVar10 + 0xf8) = uVar4;
      puVar10[0xfe] = uVar5;
      puVar10[0xff] = uVar6;
      *(undefined4 *)(puVar10 + 0x100) = uVar4;
      puVar10[0x106] = uVar5;
      puVar10[0x107] = uVar6;
      *(undefined4 *)(puVar10 + 0x108) = uVar4;
      puVar10[0x10e] = uVar5;
      puVar10[0x10f] = uVar6;
      *(undefined4 *)(puVar10 + 0x110) = uVar4;
      *(undefined4 *)(puVar10 + 0x114) = 0xffffffff;
    }
  }
  iVar11 = -1;
  if (*(uint *)(param_1 + 0x121c) == param_2) {
    iVar11 = 1;
  }
  iVar1 = 0;
  if (*(uint *)(param_1 + 0x1218) != param_2) {
    iVar1 = iVar11;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return;
    }
    *(uint *)(param_1 + 0x1218) = *(uint *)(param_1 + 0x121c);
  }
  *(undefined4 *)(param_1 + 0x121c) = 0xffffffff;
  return;
}

