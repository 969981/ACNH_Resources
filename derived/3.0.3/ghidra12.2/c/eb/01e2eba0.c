
bool FUN_01e2eba0(long param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  char *pcVar4;
  long lVar5;
  
  lVar5 = *DAT_0537d558;
  if (*(byte *)(lVar5 + 0x476) < 2) {
    return false;
  }
  bVar3 = *(byte *)(lVar5 + 0x473);
  pcVar4 = PTR_DAT_04bc1220;
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
    if (7 < bVar3) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pcVar4 = (char *)(lVar5 + 0x473);
    }
  }
  lVar5 = param_1 + 0x208 + (ulong)(uint)(int)*pcVar4 * 0x2c;
  if (0xb < (uint)(int)*pcVar4) {
    lVar5 = param_1 + 0x208;
  }
  piVar2 = (int *)(lVar5 + 4) + *param_2;
  if (9 < *param_2) {
    piVar2 = (int *)(lVar5 + 4);
  }
  return *piVar2 == 2;
}

