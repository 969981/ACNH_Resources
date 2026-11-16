
void FUN_026b1034(long param_1,undefined1 param_2,undefined1 param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined *local_50;
  char *pcStack_48;
  
  uVar3 = *(ushort *)(DAT_04da6480 + 0x4060);
  bVar1 = *(byte *)(DAT_04da6480 + 0x4062);
  bVar2 = *(byte *)(DAT_04da6480 + 0x4063);
  uVar5 = nn::time::IsValidDate((uint)uVar3,(uint)bVar1,(uint)bVar2);
  if ((uVar5 & 1) != 0) {
    *(ushort *)(param_1 + 0x12674) = uVar3;
    *(byte *)(param_1 + 0x12676) = bVar1;
    *(byte *)(param_1 + 0x12677) = bVar2;
  }
  *(undefined1 *)(param_1 + 0x12678) = param_2;
  *(undefined1 *)(param_1 + 0x12679) = param_3;
  uVar4 = FUN_021d7d60(param_1);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "MoveInCompletion";
  FUN_02749650(param_1 + 0x1267c,uVar4,&local_50,0,0);
  return;
}

