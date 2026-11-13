
void FUN_014b4440(long param_1,ushort param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  
  if (param_2 == 0xffff) {
    return;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_2 & 0xffffffffU) * 8);
  if ((param_2 & 0xff00) != 0) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if (((puVar1[1] & 1) == 0) || ((*puVar1 >> 1 & 1) == 0)) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_2 & 0xffffffffU) * 8);
    if ((param_2 & 0xff00) != 0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((puVar1[1] & 1) == 0) {
      return;
    }
    if ((*puVar1 & 1) == 0) {
      return;
    }
    bVar5 = DAT_055c1b60 == &DAT_055c1b58;
    puVar11 = DAT_055c1b60 + -8;
    if ((param_2 != 0) && (puVar9 = DAT_055c1b60, puVar11 != &DAT_055c1b18)) {
      do {
        puVar9 = (undefined8 *)puVar9[1];
        param_2 = param_2 - 1;
        bVar5 = puVar9 == &DAT_055c1b58;
      } while (!bVar5 && param_2 != 0);
      puVar11 = puVar9 + -8;
    }
    puVar9 = &DAT_055c04a0;
    if (!bVar5) {
      puVar9 = puVar11;
    }
    iVar4 = *(int *)(puVar9 + 7);
    uVar7 = 0;
    if (iVar4 < 0x2922957e) {
      if (iVar4 == 0xb6a5301) {
        uVar7 = 4;
      }
      else if (iVar4 == 0x1490248c) {
        uVar7 = 3;
      }
    }
    else if (iVar4 == 0x2922957e) {
      uVar7 = 2;
    }
    else if (iVar4 == 0x7a616e2f) {
      uVar7 = 5;
    }
    else if (iVar4 == 0x51b9e069) {
      uVar7 = 1;
    }
    uVar6 = FUN_014b5714(param_1,uVar7,param_3);
    if ((uVar6 & 1) != 0) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x78) ^ *(uint *)(param_1 + 0x78) << 0xb;
    uVar3 = *(uint *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x80);
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    *(uint *)(param_1 + 0x80) = uVar3;
    *(uint *)(param_1 + 0x84) = uVar2;
    uVar8 = (ulong)uVar2 * 10;
    uVar6 = uVar8 >> 0x20;
    puVar1 = (uint *)(param_1 + 0x18) + (ulong)uVar7 * 4;
    if (5 < uVar7) {
      puVar1 = (uint *)(param_1 + 0x18);
    }
    if (*puVar1 <= (uint)(uVar8 >> 0x20)) {
      uVar6 = 0;
    }
    lVar10 = *(long *)(puVar1 + 2) + uVar6 * 0x10;
  }
  else {
    uVar6 = FUN_014b5418(param_1,param_3);
    if ((uVar6 & 1) != 0) {
      return;
    }
    uVar7 = *(uint *)(param_1 + 0x78) ^ *(uint *)(param_1 + 0x78) << 0xb;
    uVar2 = *(uint *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x80);
    uVar7 = uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2;
    *(uint *)(param_1 + 0x80) = uVar2;
    *(uint *)(param_1 + 0x84) = uVar7;
    uVar8 = (ulong)uVar7 * 0x1e;
    uVar6 = uVar8 >> 0x20;
    if (*(uint *)(param_1 + 8) <= (uint)(uVar8 >> 0x20)) {
      uVar6 = 0;
    }
    lVar10 = *(long *)(param_1 + 0x10) + uVar6 * 0x10;
  }
  *(undefined4 *)(lVar10 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(lVar10 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  return;
}

