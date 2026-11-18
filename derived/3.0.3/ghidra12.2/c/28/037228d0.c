
void FUN_037228d0(long param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_03722560((int)param_1,param_4);
  if (iVar1 != -1) {
    lVar2 = *(long *)(*(long *)(param_1 + 0xe8) + (long)iVar1 * 8);
    *(ushort *)(lVar2 + 0x114) = *(ushort *)(lVar2 + 0x114) | 0x200;
    *(undefined4 *)(lVar2 + 0x104) = *param_2;
    *(undefined4 *)(lVar2 + 0x108) = param_2[1];
    *(undefined4 *)(lVar2 + 0x10c) = param_2[2];
    *(undefined4 *)(lVar2 + 0x110) = *param_3;
  }
  return;
}

