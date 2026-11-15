
/* WARNING: Removing unreachable block (ram,0x0205b11c) */

void FUN_0205b034(long param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  char *pcVar3;
  long lVar4;
  
  if ((param_2 < 10) && ((*(byte *)(param_1 + 0x2cc) & 1) != 0)) {
    lVar4 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar4 + 0x473);
    pcVar3 = PTR_DAT_04bc1220;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar4 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pcVar3 = (char *)(lVar4 + 0x473);
      }
    }
    if ((*(char *)(param_1 + 0x90 + (ulong)param_2 * 0x38 + 7) == *pcVar3) &&
       (*(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) & 0xfe,
       *(int *)(param_1 + 0x90 + (ulong)param_2 * 0x38) == 3)) {
      if (*(char *)(DAT_05351250 + 0x198) != '\0') {
        *(int *)(DAT_05351250 + 0x14c) = *(int *)(DAT_05351250 + 0x14c) + 1;
      }
      *(undefined4 *)(param_1 + 0x2c4) = 0;
    }
  }
  return;
}

