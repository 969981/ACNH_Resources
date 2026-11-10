
undefined8 FUN_002725e0(long param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int local_44 [4];
  undefined1 local_34;
  byte local_33;
  byte local_32;
  
  lVar2 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar2 = *(long *)(lVar2 + 0x98);
  if (((lVar2 == 0) ||
      (local_33 = FUN_0026bfe0(DAT_04c603c8), puVar1 = PTR_DAT_04bcd028, 0x1f < local_33)) ||
     (*(byte *)(lVar2 + 0x38) != local_33)) {
    return 0;
  }
  local_34 = 0x41;
  local_32 = param_2 & 1;
  if (*(short *)(param_1 + 0x8a) != 0) {
    lVar2 = 0;
    uVar5 = 0;
    do {
      uVar3 = FUN_002aed20(*(long *)(param_1 + 0x90) + lVar2);
      if ((uVar3 & 1) != 0) {
        FUN_002b0d5c(local_44,*(long *)(param_1 + 0x90) + lVar2,&local_34,3,0);
        if ((local_44[0] == 0) && (*(long *)puVar1 != 0)) {
          uVar4 = FUN_002290b0(*(long *)puVar1,9);
          FUN_0022910c(uVar4,*(undefined2 *)(*(long *)(param_1 + 0x90) + lVar2 + 0x32));
        }
      }
      uVar5 = uVar5 + 1;
      lVar2 = lVar2 + 0x6b0;
    } while (uVar5 < *(ushort *)(param_1 + 0x8a));
  }
  return 1;
}

