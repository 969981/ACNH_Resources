
long FUN_011f06e8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 local_18;
  
  lVar2 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar2 != 0) && (*(long *)(lVar2 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar2 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar2 + 0x488) != 0 && (*(long *)(*(long *)(lVar2 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar2 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar2 + 0x2b0) + 8) != 0)))) {
    uVar1 = FUN_0277d6c4(param_2 + 0xc);
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
    if ((uVar1 < *(uint *)(lVar2 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      goto LAB_011f07a8;
    }
  }
  local_18 = 60000;
  FUN_0277d4ac(&local_18);
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_18;
  *(undefined4 *)(param_1 + 0x10) = local_18._4_4_;
LAB_011f07a8:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  return param_1;
}

