
undefined8 FUN_0092eb10(byte *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined2 local_14 [2];
  
  if ((((*param_1 < 8) && (uVar4 = FUN_02582d8c(param_1,1), puVar2 = PTR_DAT_04bb4fb8, uVar4 < 8))
      && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
     (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0' &&
       (uVar4 = FUN_02582d8c(param_1,1), puVar3 = PTR_DAT_04bb4e20, uVar4 < 8)) &&
      (*(char *)(*(long *)puVar2 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))) {
    lVar5 = *(long *)puVar2 + (ulong)uVar4 * 0x13f0;
    *(undefined4 *)(lVar5 + 0x13b8) = 0;
    puVar2 = PTR_DAT_04bb37e0;
    *(undefined4 *)(lVar5 + 0x13bc) = *(undefined4 *)puVar3;
    *(undefined2 *)(lVar5 + 0x13c0) = *(undefined2 *)puVar2;
    *(undefined *)(lVar5 + 0x13c2) = puVar2[2];
    *(undefined *)(lVar5 + 0x13c3) = puVar2[3];
    uVar1 = *(undefined4 *)(puVar2 + 4);
    *(undefined4 *)(lVar5 + 0x13c8) = 0;
    *(undefined4 *)(lVar5 + 0x13c4) = uVar1;
    FUN_007ef010(local_14,PTR_DAT_04bb3170);
    *(undefined2 *)(lVar5 + 0x58e) = 0;
    *(undefined4 *)(lVar5 + 0x588) = 1;
    *(undefined2 *)(lVar5 + 0x58c) = local_14[0];
    return 1;
  }
  return 0;
}

