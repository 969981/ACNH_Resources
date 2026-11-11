
ulong FUN_003dc30c(long param_1,char *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (param_3 - 2U < 5) {
    iVar3 = *(int *)(&DAT_04138e24 + (long)(int)(param_3 - 2U) * 4);
  }
  uVar2 = nn::fs::OpenFile((FileHandle *)(param_1 + 8),param_2,iVar3);
  uVar1 = (uint)uVar2;
  if (uVar1 != 0) {
    if ((uVar1 & 0x3fffff) == 0x202) {
      return 0x81000001;
    }
    if (((uVar1 & 0x1ff) == 2) && ((uVar1 >> 9 & 0x1ff8) - 4000 < 1000)) {
      return 0x81000002;
    }
    uVar4 = 0x81000003;
    if ((uVar1 & 0x3fffff) != 0xe02) {
      uVar4 = 0x81000000;
    }
    uVar2 = (ulong)uVar4;
  }
  return uVar2;
}

