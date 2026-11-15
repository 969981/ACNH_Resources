
void FUN_0221bd54(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 local_18;
  
  if ((param_2 != 0xffffffff) && ((int)param_2 < 0x10)) {
    puVar11 = &DAT_0545b240 + (ulong)param_2 * 0x118;
    if (0xf < param_2) {
      puVar11 = &DAT_0545b240;
    }
    if (puVar11[0x8c] != '\0') {
      if (puVar11[0xc9] == '\0') {
        if (puVar11[0xca] != '\0') {
          FUN_0221c230(param_1);
        }
      }
      else {
        FUN_0221bf70(param_1);
      }
      *(undefined8 *)(puVar11 + 0x38) = 0;
      *(undefined4 *)(puVar11 + 8) = 0x10;
      *(undefined8 *)(puVar11 + 0x48) = 0;
      *(undefined8 *)(puVar11 + 0xc) = 0;
      *(undefined8 *)(puVar11 + 0x14) = 0;
      *(undefined8 *)(puVar11 + 0x1c) = 0;
      local_18 = 0xfffe;
      FUN_0277d4ac(&local_18);
      *(undefined8 *)(puVar11 + 0x68) = 0;
      *(undefined8 *)(puVar11 + 0x78) = 0;
      puVar11[0x80] = 0;
      puVar11[0x90] = 0;
      *(undefined4 *)(puVar11 + 0xa8) = 0;
      puVar10 = PTR_DAT_04bb37e0;
      *(undefined8 *)(puVar11 + 0xa0) = 0xffffffff00000000;
      uVar6 = puVar10[3];
      *(undefined4 *)(puVar11 + 0x50) = (undefined4)local_18;
      *(undefined4 *)(puVar11 + 0x54) = local_18._4_4_;
      uVar8 = *(undefined2 *)puVar10;
      uVar7 = puVar10[2];
      uVar5 = *(undefined4 *)(puVar10 + 4);
      *(undefined2 *)(puVar11 + 0xac) = uVar8;
      puVar11[0xae] = uVar7;
      puVar11[0xaf] = uVar6;
      *(undefined4 *)(puVar11 + 0xb0) = uVar5;
      uVar3 = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
      uVar4 = *(undefined4 *)(PTR_DAT_04bb5d40 + 0xc);
      *(undefined2 *)(puVar11 + 0xcc) = uVar8;
      *(undefined2 *)(puVar11 + 0xd4) = uVar8;
      *(undefined2 *)(puVar11 + 0xdc) = uVar8;
      *(undefined2 *)(puVar11 + 0xe4) = uVar8;
      *(undefined2 *)(puVar11 + 0xec) = uVar8;
      *(undefined2 *)(puVar11 + 0xf4) = uVar8;
      *(undefined2 *)(puVar11 + 0xfc) = uVar8;
      *(undefined2 *)(puVar11 + 0x104) = uVar8;
      *(undefined2 *)(puVar11 + 0x10c) = uVar8;
      puVar11[0xca] = 0;
      puVar11[0xce] = uVar7;
      puVar11[0xcf] = uVar6;
      *(undefined4 *)(puVar11 + 0xd0) = uVar5;
      puVar11[0xd6] = uVar7;
      puVar11[0xd7] = uVar6;
      *(undefined4 *)(puVar11 + 0xd8) = uVar5;
      puVar11[0xde] = uVar7;
      puVar11[0xdf] = uVar6;
      *(undefined4 *)(puVar11 + 0xe0) = uVar5;
      puVar11[0xe6] = uVar7;
      puVar11[0xe7] = uVar6;
      *(undefined4 *)(puVar11 + 0xe8) = uVar5;
      puVar11[0xee] = uVar7;
      puVar11[0xef] = uVar6;
      *(undefined4 *)(puVar11 + 0xf0) = uVar5;
      puVar11[0xf6] = uVar7;
      puVar11[0xf7] = uVar6;
      *(undefined4 *)(puVar11 + 0xf8) = uVar5;
      puVar11[0xfe] = uVar7;
      *(undefined4 *)(puVar11 + 0xc0) = uVar3;
      *(undefined4 *)(puVar11 + 0xc4) = uVar4;
      puVar11[0xff] = uVar6;
      *(undefined2 *)(puVar11 + 200) = 1;
      *(undefined4 *)(puVar11 + 0x100) = uVar5;
      puVar11[0x106] = uVar7;
      puVar11[0x107] = uVar6;
      *(undefined4 *)(puVar11 + 0x108) = uVar5;
      puVar11[0x10e] = uVar7;
      puVar11[0x10f] = uVar6;
      *(undefined4 *)(puVar11 + 0x110) = uVar5;
      *(undefined4 *)(puVar11 + 0x114) = 0xffffffff;
    }
  }
  uVar9 = param_2 - 6;
  if ((uVar9 < 10) && ((&DAT_0545b2cc)[(ulong)param_2 * 0x118] != '\0')) {
    puVar2 = (undefined8 *)(&DAT_0545c3c0 + (ulong)uVar9 * 2);
    if (8 < uVar9) {
      puVar2 = (undefined8 *)&DAT_0545c3c0;
    }
    *puVar2 = 0xffffffffffffffff;
  }
  iVar12 = -1;
  if (*(uint *)(param_1 + 0x121c) == param_2) {
    iVar12 = 1;
  }
  iVar1 = 0;
  if (*(uint *)(param_1 + 0x1218) != param_2) {
    iVar1 = iVar12;
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

