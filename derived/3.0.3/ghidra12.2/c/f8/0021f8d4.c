
void FUN_0021f8d4(long param_1,long *param_2)

{
  int iVar1;
  
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    iVar1 = memcmp((void *)(param_1 + 8),&DAT_0410d274,0x10);
    if (iVar1 == 0) {
      FUN_00228284(param_2,"IN_ANY_ADDR:%d",*(undefined2 *)(param_1 + 0x18));
      return;
    }
    iVar1 = memcmp((void *)(param_1 + 8),&DAT_0410d274,0x10);
    if ((iVar1 == 0) || (iVar1 = memcmp((void *)(param_1 + 0xc),&DAT_0410d274,0xc), iVar1 == 0)) {
      FUN_00228284(param_2,"%d.%d.%d.%d:%d",*(undefined1 *)(param_1 + 0xb),
                   *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 9),
                   *(undefined1 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x18));
      return;
    }
    FUN_00228284(param_2,"[%04X:%04X:%04X:%04X:%04X:%04X:%04X:%04X]:%d",
                 *(ushort *)(param_1 + 8) >> 8 | *(ushort *)(param_1 + 8) << 8,
                 *(ushort *)(param_1 + 10) >> 8 | *(ushort *)(param_1 + 10) << 8,
                 *(ushort *)(param_1 + 0xc) >> 8 | *(ushort *)(param_1 + 0xc) << 8,
                 *(ushort *)(param_1 + 0xe) >> 8 | *(ushort *)(param_1 + 0xe) << 8,
                 *(ushort *)(param_1 + 0x10) >> 8 | *(ushort *)(param_1 + 0x10) << 8,
                 *(ushort *)(param_1 + 0x12) >> 8 | *(ushort *)(param_1 + 0x12) << 8,
                 *(ushort *)(param_1 + 0x14) >> 8 | *(ushort *)(param_1 + 0x14) << 8,
                 *(ushort *)(param_1 + 0x16) >> 8 | *(ushort *)(param_1 + 0x16) << 8,
                 *(undefined2 *)(param_1 + 0x18));
  }
  return;
}

