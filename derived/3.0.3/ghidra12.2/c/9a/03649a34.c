
void FUN_03649a34(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 0x90);
  if (*(int *)(lVar3 + 0x298) == 5) {
    if (*(int *)(lVar3 + 0x1d20) == 1) {
      uVar2 = *(uint *)(param_1 + 0x44);
      uVar4 = *(int *)(lVar3 + 0x1d88) << 0x12 |
              (*(byte *)(*(long *)(*(long *)(lVar3 + 0x1d08) + ((ulong)(uVar2 >> 4) & 0x30) + 0x11c0
                                  ) + ((ulong)uVar2 & 0xff)) & 0x3f) << 0xc;
      puVar1 = (undefined1 *)
               (*(long *)(lVar3 + 0x7c0) +
               (ulong)((uVar2 >> 0xc & 7 |
                        (uint)*(byte *)(*(long *)(lVar3 + (ulong)*(byte *)(param_1 + 0xf314) * 0x40
                                                 + 0xe00) + ((ulong)uVar2 & 0x3ff)) << 4 | uVar4) &
                      *(int *)(lVar3 + 0x2b0) - 1U));
      *(undefined1 *)(param_1 + 0xf316) = *puVar1;
      *(undefined1 *)(param_1 + 0xf317) = puVar1[8];
      goto LAB_03649b6c;
    }
    if (((*(byte *)(param_1 + 0x39) >> 5 & 1) == 0) && (*(uint *)(lVar3 + 0x1d8c) < 8)) {
      FUN_03650e08(lVar3 + 0x1d08);
    }
    else {
      FUN_03650ad4(lVar3 + 0x1d08);
    }
    lVar3 = *(long *)(param_1 + 0x90);
  }
  uVar5 = ((ulong)*(byte *)(param_1 + 0x39) & 0x10) << 8 |
          (ulong)(*(uint *)(param_1 + 0x44) >> 0xc) & 7 |
          (ulong)*(byte *)(*(long *)(lVar3 + (ulong)*(byte *)(param_1 + 0xf314) * 0x40 + 0xe00) +
                          ((ulong)*(uint *)(param_1 + 0x44) & 0x3ff)) << 4;
  uVar4 = (uint)uVar5;
  (**(code **)(lVar3 + 0x1c28))(lVar3,uVar5);
  *(undefined1 *)(param_1 + 0xf316) =
       *(undefined1 *)
        (*(long *)(*(long *)(param_1 + 0x90) + (uVar5 >> 4 & 0x1f0) + 0xc00) + (uVar5 & 0xff));
LAB_03649b6c:
  *(uint *)(param_1 + 0xf310) = uVar4;
  return;
}

