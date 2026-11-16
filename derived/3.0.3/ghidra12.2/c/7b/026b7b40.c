
void FUN_026b7b40(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if ((int)param_2 < 0x3f) {
    puVar2 = (undefined2 *)(param_1 + 0x112ec);
    uVar7 = param_2;
    do {
      uVar1 = uVar7 + 1;
      puVar3 = puVar2 + (ulong)uVar7 * 0x26;
      if (0x3f < uVar7) {
        puVar3 = puVar2;
      }
      puVar4 = puVar2 + (ulong)uVar1 * 0x26;
      if (0x3f < uVar1) {
        puVar4 = puVar2;
      }
      *puVar3 = *puVar4;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
      *(undefined1 *)((long)puVar3 + 3) = *(undefined1 *)((long)puVar4 + 3);
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 2);
      if (*(int *)(puVar4 + 4) == 0) {
        *(undefined4 *)(puVar3 + 0x10) = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        *(undefined8 *)(puVar3 + 0xc) = 0;
      }
      else {
        uVar5 = *(undefined8 *)(puVar4 + 4);
        uVar6 = *(undefined8 *)(puVar4 + 8);
        uVar8 = *(undefined8 *)(puVar4 + 0xc);
        *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(puVar4 + 0x10);
        *(undefined8 *)(puVar3 + 4) = uVar5;
        *(undefined8 *)(puVar3 + 8) = uVar6;
        *(undefined8 *)(puVar3 + 0xc) = uVar8;
      }
      if (*(int *)(puVar4 + 0x12) == 0) {
        *(undefined4 *)(puVar3 + 0x1e) = 0;
        *(undefined8 *)(puVar3 + 0x12) = 0;
        *(undefined8 *)(puVar3 + 0x16) = 0;
        *(undefined8 *)(puVar3 + 0x1a) = 0;
      }
      else {
        uVar5 = *(undefined8 *)(puVar4 + 0x12);
        uVar6 = *(undefined8 *)(puVar4 + 0x16);
        uVar8 = *(undefined8 *)(puVar4 + 0x1a);
        *(undefined4 *)(puVar3 + 0x1e) = *(undefined4 *)(puVar4 + 0x1e);
        *(undefined8 *)(puVar3 + 0x12) = uVar5;
        *(undefined8 *)(puVar3 + 0x16) = uVar6;
        *(undefined8 *)(puVar3 + 0x1a) = uVar8;
      }
      *(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(puVar4 + 0x20);
      *(undefined4 *)(puVar3 + 0x22) = *(undefined4 *)(puVar4 + 0x22);
      *(undefined1 *)(puVar3 + 0x24) = *(undefined1 *)(puVar4 + 0x24);
      uVar7 = uVar1;
    } while (uVar1 != 0x3f);
  }
  *(undefined4 *)(param_1 + 0x125e8) = 0;
  *(undefined8 *)(param_1 + 0x125d8) = 0;
  *(undefined8 *)(param_1 + 0x125e0) = 0;
  *(undefined8 *)(param_1 + 0x125a0) = 0xfffe;
  *(undefined8 *)(param_1 + 0x125c8) = 0;
  *(undefined8 *)(param_1 + 0x125d0) = 0;
  *(undefined8 *)(param_1 + 0x125b8) = 0;
  *(undefined8 *)(param_1 + 0x125c0) = 0;
  *(undefined8 *)(param_1 + 0x125a8) = 0;
  *(undefined8 *)(param_1 + 0x125b0) = 0;
  FUN_0277d4ac();
  *(undefined1 *)(param_1 + 0x125e8) = 0;
  *(undefined8 *)(param_1 + 0x125d8) = 0;
  *(undefined8 *)(param_1 + 0x125e0) = 0;
  *(undefined8 *)(param_1 + 0x125c8) = 0;
  *(undefined8 *)(param_1 + 0x125d0) = 0;
  *(undefined8 *)(param_1 + 0x125b8) = 0;
  *(undefined8 *)(param_1 + 0x125c0) = 0;
  *(undefined8 *)(param_1 + 0x125a8) = 0;
  *(undefined8 *)(param_1 + 0x125b0) = 0;
  if ((param_3 & 1) != 0) {
    local_3c = FUN_021d7d60(param_1);
    local_3b = (undefined1)param_2;
    local_38 = 0;
    local_32 = 0;
    local_34 = 0xff00;
    if (-1 < DAT_053d0ce0) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0ce0,&local_38,&local_3c,2,0);
    }
  }
  return;
}

