
void FUN_0250d6d0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 local_34 [2];
  
  FUN_007ef010(local_34,PTR_DAT_04bb3170);
  *(undefined2 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 0x90) = 1;
  puVar4 = PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined2 *)(param_1 + 0x94) = local_34[0];
  uVar3 = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)puVar4;
  *(undefined4 *)(param_1 + 0x194) = uVar3;
  FUN_033d2620(param_1 + 0x1b8);
  FUN_028036dc(param_1 + 0xb00);
  FUN_028036dc(param_1 + 0xba4);
  uVar7 = 0;
  uVar5 = 0;
  if (*(byte *)(param_1 + 0xdc0) < 3) {
    uVar5 = (uint)*(byte *)(param_1 + 0xdc0);
  }
  uVar6 = (ulong)uVar5;
  do {
    FUN_027fa2dc(uVar6,param_1 + 0xc48,uVar7,puVar4,0);
    uVar7 = uVar7 + 1;
    bVar1 = 0;
    if (*(byte *)(param_1 + 0xdc0) < 3) {
      bVar1 = *(byte *)(param_1 + 0xdc0);
    }
    uVar2 = 0x1e;
    if (bVar1 != 1) {
      uVar2 = 0x14;
    }
    uVar6 = 0x28;
    if (bVar1 != 2) {
      uVar6 = uVar2;
    }
  } while (uVar7 < uVar6);
  FUN_007ef010(local_34,PTR_DAT_04bb3170);
  *(undefined2 *)(param_1 + 0xeae) = 0;
  *(undefined4 *)(param_1 + 0xea8) = 1;
  *(undefined2 *)(param_1 + 0xeac) = local_34[0];
  uVar3 = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)(param_1 + 0xeb0) = *(undefined4 *)puVar4;
  *(undefined4 *)(param_1 + 0xeb4) = uVar3;
  return;
}

