
void FUN_014e70e0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
  *(undefined1 *)(param_1 + 99) = *(undefined1 *)(param_2 + 99);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  FUN_014ba7d4(param_1 + 0x90,param_2 + 0x90);
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 0xec);
    if ((int)*(uint *)(param_2 + 0xe8) <= (int)*(uint *)(param_1 + 0xec)) {
      uVar1 = *(uint *)(param_2 + 0xe8);
    }
    if (0 < *(int *)(param_1 + 0xe8)) {
      lVar2 = 0;
      puVar4 = *(undefined8 **)(param_1 + 0xf8);
      do {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xf0) + lVar2 * 8);
        lVar2 = lVar2 + 1;
        *puVar5 = puVar4;
        *(undefined8 **)(param_1 + 0xf8) = puVar5;
        puVar4 = puVar5;
      } while (lVar2 < *(int *)(param_1 + 0xe8));
    }
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if ((0 < (int)uVar1) && (0 < *(int *)(param_1 + 0xec))) {
      lVar2 = 0;
      iVar3 = 0;
      do {
        if (iVar3 < *(int *)(param_1 + 0xec)) {
          puVar5 = *(undefined8 **)(param_1 + 0xf8);
          puVar4 = *(undefined8 **)(*(long *)(param_2 + 0xf0) + lVar2);
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0xf8) = *puVar5;
          }
          uVar6 = *puVar4;
          *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
          *puVar5 = uVar6;
          *(undefined4 *)((long)puVar5 + 0xc) = *(undefined4 *)((long)puVar4 + 0xc);
          *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar4 + 2);
          *(undefined4 *)((long)puVar5 + 0x14) = *(undefined4 *)((long)puVar4 + 0x14);
          iVar3 = *(int *)(param_1 + 0xe8);
          if (iVar3 < *(int *)(param_1 + 0xec)) {
            *(undefined8 **)(*(long *)(param_1 + 0xf0) + (long)iVar3 * 8) = puVar5;
            iVar3 = *(int *)(param_1 + 0xe8) + 1;
            *(int *)(param_1 + 0xe8) = iVar3;
          }
        }
        lVar2 = lVar2 + 8;
      } while ((ulong)uVar1 * 8 != lVar2);
    }
  }
  return;
}

