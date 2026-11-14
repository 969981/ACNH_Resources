
void FUN_016a01f0(long param_1,undefined1 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar7 = DAT_05582b78;
  uVar6 = DAT_05582b74;
  lVar5 = *(long *)(param_1 + 0xb20);
  uVar3 = *(uint *)(lVar5 + 0x161c) - (*(uint *)(lVar5 + 0x161c) >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar3 = uVar3 + (uVar3 >> 0x10) & 0x3f;
  if (uVar3 < 3) {
    return;
  }
  if ((int)*(uint *)(lVar5 + 0x160c) < (int)uVar3) {
    uVar6 = DAT_05582b70;
    uVar7 = DAT_05582b74;
    uVar9 = DAT_05582b7c;
  }
  else {
    if (uVar3 != *(uint *)(lVar5 + 0x160c)) goto LAB_016a03b4;
    uVar9 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar9 = uVar9 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar9 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar9;
    if (0x31 < (uint)((ulong)uVar9 * 100 >> 0x20)) goto LAB_016a03b4;
  }
  *(uint *)(lVar5 + 0x160c) = uVar3;
  uVar6 = uVar6 ^ uVar6 << 0xb;
  DAT_05582b7c = uVar6 >> 8 ^ uVar9 >> 0x13 ^ uVar6 ^ uVar9;
  uVar8 = *(uint *)(*(long *)(param_1 + 0xb20) + 0x161c);
  uVar6 = 0xffffffff;
  if ((uVar8 != 0) &&
     (uVar4 = uVar8 - (uVar8 >> 1 & 0x55555555),
     uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
     uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f, uVar4 = uVar4 + (uVar4 >> 8),
     uVar10 = (uint)((ulong)DAT_05582b7c * (ulong)uVar3 >> 0x20),
     uVar10 < (uVar4 + (uVar4 >> 0x10) & 0x3f))) {
    iVar11 = uVar10 + 2;
    do {
      iVar11 = iVar11 + -1;
      if (iVar11 < 2) {
        uVar6 = uVar8 - 1 & (uVar8 ^ 0xffffffff);
        uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
        uVar6 = uVar6 + (uVar6 >> 8);
        uVar6 = uVar6 + (uVar6 >> 0x10) & 0x3f;
        break;
      }
      uVar8 = uVar8 - 1 & uVar8;
    } while (uVar8 != 0);
  }
  DAT_05582b70 = uVar7;
  DAT_05582b74 = DAT_05582b78;
  DAT_05582b78 = uVar9;
  *(uint *)(*(long *)(param_1 + 0xb18) + 0x1c) = uVar6;
  puVar1 = (undefined2 *)(*(long *)(param_1 + 0xb20) + 0x1400);
  lVar5 = *(long *)(param_1 + 0xb18);
  puVar2 = puVar1 + (ulong)*(uint *)(lVar5 + 0x1c) * 4;
  if (0xf < *(uint *)(lVar5 + 0x1c)) {
    puVar2 = puVar1;
  }
  *(undefined2 *)(lVar5 + 0x84) = *puVar2;
  *(undefined1 *)(lVar5 + 0x86) = *(undefined1 *)(puVar2 + 1);
  *(undefined1 *)(lVar5 + 0x87) = *(undefined1 *)((long)puVar2 + 3);
  *(undefined4 *)(lVar5 + 0x88) = *(undefined4 *)(puVar2 + 2);
  *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0xd2) = param_2;
LAB_016a03b4:
  *(uint *)(*(long *)(param_1 + 0xb18) + 0x3c) =
       *(int *)(*(long *)(param_1 + 0xb18) + 0x3c) + uVar3 * 500;
  return;
}

