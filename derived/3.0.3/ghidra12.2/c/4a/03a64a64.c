
void FUN_03a64a64(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  uint uVar1;
  long *plVar2;
  
  if ((*(long *)(param_1 + 0x288) != 0) && (*(char *)(*(long *)(param_1 + 8) + 0x850) != '\0')) {
    if ((*(uint *)(*(long *)(param_1 + 0x288) + 0x28) >> (ulong)(*(byte *)(param_3 + 8) & 0x1f) & 1)
        != 0) {
      FUN_03a681b4();
      FUN_03a67994(*(undefined8 *)(param_1 + 0x288),param_2,*(undefined1 *)(param_3 + 8),
                   *(undefined8 *)(param_3 + 0x318),param_4,param_5);
      uVar1 = (uint)*(byte *)(param_3 + 8);
      if (*(uint *)(*(long *)(param_1 + 0x288) + 0x520) <= (uint)*(byte *)(param_3 + 8)) {
        uVar1 = 0;
      }
      plVar2 = (long *)(*(long *)(*(long *)(param_1 + 0x288) + 0x528) + (ulong)uVar1 * 0x338 + 0x30)
      ;
      if (*plVar2 != 0) {
        FUN_039499cc(DAT_05ae90c0);
        *plVar2 = 0;
      }
    }
  }
  return;
}

