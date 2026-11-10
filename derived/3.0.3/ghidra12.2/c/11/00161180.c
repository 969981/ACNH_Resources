
undefined8 FUN_00161180(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  
  if (*(long *)(param_1 + 0xf68) == 0) {
    if (*(long *)(param_1 + 0xf48) != 0) {
      if ((*(byte *)(param_1 + 0xf88) & 1) != 0) goto LAB_001611b4;
      goto LAB_001611c8;
    }
LAB_001611e4:
    FUN_0014d5f8(param_1,"No URL set!");
    uVar2 = 3;
  }
  else {
    if ((*(byte *)(param_1 + 0xf88) & 1) != 0) {
LAB_001611b4:
      FUN_00143300();
      *(undefined8 *)(param_1 + 0xf68) = 0;
      *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) & 0xfe;
LAB_001611c8:
      if ((*(long *)(param_1 + 0xf48) != 0) &&
         (iVar1 = FUN_00162bec(*(long *)(param_1 + 0xf48),0,param_1 + 0xd68,0), iVar1 != 0))
      goto LAB_001611e4;
    }
    *(undefined8 *)(param_1 + 0xf68) = *(undefined8 *)(param_1 + 0xd68);
    uVar2 = FUN_00144358(param_1,*(undefined8 *)(param_1 + 0xc18));
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x6d0) = 0;
      *(undefined4 *)(param_1 + 0x1500) = 0;
      *(undefined8 *)(param_1 + 0x1268) = *(undefined8 *)(param_1 + 0x6b0);
      *(ushort *)(param_1 + 0x15c4) =
           (ushort)((ulong)*(undefined8 *)(param_1 + 0xf60) >> 0x24) & 0x80 |
           *(ushort *)(param_1 + 0x15c4) & 0xff55;
      *(undefined8 *)(param_1 + 0x1288) = *(undefined8 *)(param_1 + 0x6b8);
      FUN_00143300(*(undefined8 *)(param_1 + 0x1660));
      iVar1 = *(int *)(param_1 + 0xa38);
      *(undefined8 *)(param_1 + 0x1660) = 0;
      if ((iVar1 == 1) || (iVar1 == 6)) {
        *(undefined8 *)(param_1 + 0x1538) = 0;
      }
      else if (iVar1 == 5) {
        *(undefined8 *)(param_1 + 0x1538) = *(undefined8 *)(param_1 + 0x7d8);
      }
      else {
        *(long *)(param_1 + 0x1538) = *(long *)(param_1 + 0x6f8);
        if ((*(char **)(param_1 + 0x6e8) != (char *)0x0) && (*(long *)(param_1 + 0x6f8) == -1)) {
          sVar3 = strlen(*(char **)(param_1 + 0x6e8));
          *(size_t *)(param_1 + 0x1538) = sVar3;
        }
      }
      if (*(long *)(param_1 + 0xf78) != 0) {
        FUN_0014b854(param_1);
      }
      if ((*(long *)(param_1 + 0xf80) == 0) || (uVar2 = FUN_0014a9a0(param_1), (int)uVar2 == 0)) {
        *(ushort *)(param_1 + 0x15c4) = *(ushort *)(param_1 + 0x15c4) | 0x10;
        FUN_001642e0(param_1);
        FUN_00146c34(param_1);
        FUN_00146d90(param_1);
        *(ulong *)(param_1 + 0x1270) = *(ulong *)(param_1 + 0x1270) & *(ulong *)(param_1 + 0x1268);
        *(ulong *)(param_1 + 0x1290) = *(ulong *)(param_1 + 0x1290) & *(ulong *)(param_1 + 0x1288);
        if ((*(char *)(param_1 + 0x15c4) < '\0') &&
           ((*(int *)(param_1 + 0x15c8) == 0 && (iVar1 = FUN_00164aa8(param_1 + 0x15c8), iVar1 != 0)
            ))) {
          uVar2 = 0x1b;
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}

