
void FUN_03a9a9f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (((*(char *)(*(long *)(param_1 + 8) + 0x870) != '\0') &&
      (lVar2 = *(long *)(param_1 + 0x298), lVar2 != 0)) && (*(char *)(lVar2 + 0x12d0) != '\0')) {
    bVar1 = *(byte *)(param_3 + 8);
    if ((*(uint *)(lVar2 + 8) >> (ulong)(bVar1 & 0x1f) & 1) != 0) {
      lVar3 = *(long *)(param_3 + 0x318);
      if (param_4 != 0) {
        lVar4 = *(long *)(param_3 + 0x18);
        FUN_039348e4(*(undefined4 *)(lVar4 + 0x140),*(undefined4 *)(lVar4 + 0x144),lVar2,param_2,
                     bVar1,lVar3,param_4,1,*(undefined1 *)(lVar4 + 0x294));
        return;
      }
      if (*(long *)(lVar3 + 0x60) != 0) {
        lVar4 = *(long *)(param_3 + 0x18);
        FUN_039348e4(*(undefined4 *)(lVar4 + 0x140),*(undefined4 *)(lVar4 + 0x144),lVar2,param_2,
                     (uint)bVar1,lVar3,*(long *)(lVar3 + 0x60) + 8,0,*(undefined1 *)(lVar4 + 0x294))
        ;
        return;
      }
    }
  }
  return;
}

