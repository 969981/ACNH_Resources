
void FUN_03a64998(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  
  lVar2 = *(long *)(param_1 + 0x288);
  if (((lVar2 != 0) && (*(char *)(*(long *)(param_1 + 8) + 0x850) != '\0')) &&
     (0 < *(int *)(lVar2 + 0xa0))) {
    FUN_03a681b4(lVar2,param_2,*(undefined1 *)(param_3 + 8));
    lVar2 = *(long *)(param_1 + 0x288);
    bVar1 = *(byte *)(param_3 + 8);
    uVar3 = (uint)bVar1;
    if (*(uint *)(lVar2 + 0x520) <= (uint)bVar1) {
      uVar3 = 0;
    }
    FUN_03a676f0(*(long *)(lVar2 + 0x528) + (ulong)uVar3 * 0x338,param_2,bVar1,lVar2 + 8,
                 *(undefined8 *)(param_3 + 0x318),param_4);
    uVar3 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x288) + 0x520) <= (uint)*(byte *)(param_3 + 8)) {
      uVar3 = 0;
    }
    plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x288) + 0x528) + (ulong)uVar3 * 0x338 + 0x30);
    if (*plVar4 != 0) {
      FUN_039499cc(DAT_05ae90c0);
      *plVar4 = 0;
    }
  }
  return;
}

