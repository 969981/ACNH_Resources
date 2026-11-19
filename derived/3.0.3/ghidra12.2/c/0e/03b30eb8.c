
void FUN_03b30eb8(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  FUN_0037bc10();
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *param_1 = &PTR_LAB_04b75440;
  *(undefined2 *)((long)param_1 + 0xdc) = 0x100;
  uVar3 = *(undefined1 *)(param_2 + 0x5c);
  *(undefined1 *)((long)param_1 + 0xdf) = 0;
  *(undefined1 *)((long)param_1 + 0xde) = uVar3;
  uVar5 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((long)param_1 + 0xe4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  if ((*(byte *)(param_2 + 0x5d) & 1) == 0) {
    uVar1 = *(uint *)(param_2 + 0x54);
    uVar4 = 2;
    uVar3 = 2;
  }
  else {
    *(undefined1 *)((long)param_1 + 0xdf) = 1;
    uVar4 = 3;
    uVar3 = 3;
    uVar1 = *(uint *)(param_2 + 0x54);
  }
  if (uVar1 < 3) {
    *(char *)((long)param_1 + 0xdc) = (char)(0x20001 >> (ulong)((uVar1 & 3) << 3));
    uVar3 = uVar4;
  }
  *(undefined1 *)((long)param_1 + 0xdf) = uVar3;
  lVar2 = FUN_0037e610(param_1,"AlignCapture");
  if (lVar2 != 0) {
    *(byte *)((long)param_1 + 0xdf) = *(byte *)((long)param_1 + 0xdf) | 4;
  }
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0x88);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0xe6) = *(byte *)(lVar2 + 0xe6) | 0x20;
  }
  return;
}

