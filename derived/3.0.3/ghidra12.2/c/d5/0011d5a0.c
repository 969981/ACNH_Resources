
undefined8 FUN_0011d5a0(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  
  memset((void *)(param_1 +
                 ((ulong)*(byte *)(param_1 + 0x3c) << 0x18 |
                  (ulong)*(byte *)(param_1 + 0x3d) << 0x10 | (ulong)*(byte *)(param_1 + 0x3e) << 8 |
                 (ulong)*(byte *)(param_1 + 0x3f))),0,
         (ulong)CONCAT11(*(undefined1 *)(param_1 + 0x2a),*(undefined1 *)(param_1 + 0x2b)) * 2 + 2);
  bVar1 = *(byte *)(param_1 + 0x2b);
  uVar4 = CONCAT11(*(undefined1 *)(param_1 + 0x2a),bVar1);
  memset((void *)(param_1 +
                 ((ulong)*(byte *)(param_1 + 0x40) << 0x18 |
                  (ulong)*(byte *)(param_1 + 0x41) << 0x10 | (ulong)*(byte *)(param_1 + 0x42) << 8 |
                 (ulong)*(byte *)(param_1 + 0x43))),0,(ulong)uVar4 * 2 + 2);
  uVar7 = (uint)uVar4;
  if (uVar7 != 0) {
    puVar5 = (undefined1 *)
             (param_1 +
             ((ulong)*(byte *)(param_1 + 0x20) << 0x18 | (ulong)*(byte *)(param_1 + 0x21) << 0x10 |
              (ulong)*(byte *)(param_1 + 0x22) << 8 | (ulong)*(byte *)(param_1 + 0x23)));
    if (uVar7 != 1) {
      iVar6 = (bVar1 & 1) - uVar7;
      do {
        *puVar5 = 0;
        uVar2 = *(undefined1 *)(param_1 + 0x2e);
        uVar3 = *(undefined1 *)(param_1 + 0x2f);
        puVar5[CONCAT11(uVar2,uVar3)] = 0;
        puVar5 = puVar5 + CONCAT11(uVar2,uVar3) +
                 CONCAT11(*(undefined1 *)(param_1 + 0x2e),*(undefined1 *)(param_1 + 0x2f));
        iVar6 = iVar6 + 2;
      } while (iVar6 != 0);
    }
    if ((bVar1 & 1) != 0) {
      *puVar5 = 0;
    }
  }
  return 0;
}

