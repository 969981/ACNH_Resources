
void FUN_01492bc0(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  puVar6 = PTR_DAT_04bb37e0;
  iVar4 = *param_2;
  uVar3 = -(uint)(*(int *)(param_1 + 0x208) != iVar4);
  if (*(int *)(param_1 + 0x20c) == iVar4) {
    uVar3 = 1;
  }
  uVar2 = 2;
  if (*(int *)(param_1 + 0x210) != iVar4) {
    uVar2 = uVar3;
  }
  uVar3 = 3;
  if (*(int *)(param_1 + 0x214) != iVar4) {
    uVar3 = uVar2;
  }
  uVar2 = 4;
  if (*(int *)(param_1 + 0x218) != iVar4) {
    uVar2 = uVar3;
  }
  uVar3 = 5;
  if (*(int *)(param_1 + 0x21c) != iVar4) {
    uVar3 = uVar2;
  }
  uVar2 = 6;
  if (*(int *)(param_1 + 0x220) != iVar4) {
    uVar2 = uVar3;
  }
  uVar3 = 7;
  if (*(int *)(param_1 + 0x224) != iVar4) {
    uVar3 = uVar2;
  }
  if (uVar3 < 8) {
    lVar1 = param_1 + (ulong)uVar3 * 0x40;
    uVar7 = 0;
    *(undefined2 *)(lVar1 + 8) = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)(lVar1 + 10) = puVar6[2];
    *(undefined *)(lVar1 + 0xb) = puVar6[3];
    uVar5 = *(undefined4 *)(puVar6 + 4);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined4 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined4 *)(lVar1 + 0xc) = uVar5;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined1 *)(lVar1 + 0x44) = 0xff;
    uVar5 = DAT_04c9a0c8;
    *(undefined4 *)(param_1 + 0x208 + (ulong)uVar3 * 4) = DAT_04c9a0c8;
    do {
      if (*(int *)(param_1 + 0x228 + (-(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2)) ==
          *param_2) {
        *(undefined4 *)(param_1 + 0x228 + (long)(int)uVar7 * 4) = uVar5;
      }
      uVar3 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar3;
    } while (uVar3 != 0x18);
  }
  return;
}

