
void FUN_01c8138c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  byte local_2c [12];
  
  if (*param_1 != 1) {
    *param_1 = 2;
    lVar3 = DAT_053719b8;
    FUN_0252d11c(local_2c);
    if (7 < local_2c[0]) {
      local_2c[0] = 0xff;
    }
    *(byte *)(lVar3 + 0xb1) = local_2c[0];
    puVar2 = PTR_DAT_04bb36f0;
    *(undefined1 *)(lVar3 + 0xb0) = 1;
    lVar3 = *(long *)puVar2;
    *(undefined1 *)(lVar3 + 0x14) = 1;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    iVar1 = 4;
    if (*(uint *)(lVar3 + 0x20) < 5) {
      iVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar3 + 0x28) + (long)iVar1 * 0x38 + 0x30) = 1;
    lVar3 = *(long *)puVar2;
    iVar1 = 4;
    if (*(uint *)(lVar3 + 0x20) < 5) {
      iVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar3 + 0x28) + (long)iVar1 * 0x38 + 0x2c) = 0;
    iVar1 = 4;
    if (*(uint *)(lVar3 + 0x20) < 5) {
      iVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar3 + 0x28) + (long)iVar1 * 0x38 + 0x2d) = 0;
    iVar1 = 4;
    if (*(uint *)(lVar3 + 0x20) < 5) {
      iVar1 = 0;
    }
    *(undefined4 *)(*(long *)(lVar3 + 0x28) + (long)iVar1 * 0x38) = 0x11;
    iVar1 = 4;
    if (*(uint *)(lVar3 + 0x20) < 5) {
      iVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar3 + 0x28) + (long)iVar1 * 0x38 + 0x2f) = 0;
    *param_1 = 1;
  }
  return;
}

