
uint FUN_0284cae0(long param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint local_4;
  
  switch(param_2) {
  case 0:
    cVar1 = *(char *)(param_1 + 0x79);
    goto LAB_0284cb84;
  case 1:
    cVar1 = *(char *)(param_1 + 0x78);
    goto LAB_0284cb84;
  case 2:
    cVar1 = *(char *)(param_1 + 0x130);
    goto LAB_0284cb84;
  case 3:
    cVar1 = *(char *)(param_1 + 0x168);
    goto LAB_0284cb84;
  case 4:
    local_4 = 0;
    break;
  case 5:
    local_4 = 1;
    break;
  case 6:
    local_4 = 2;
    break;
  case 7:
    local_4 = 3;
    break;
  case 8:
    local_4 = 4;
    break;
  case 9:
    local_4 = 5;
    break;
  case 10:
    local_4 = 6;
    break;
  case 0xb:
    local_4 = 7;
    break;
  case 0xc:
    local_4 = 8;
    break;
  case 0xd:
    cVar1 = *(char *)(param_1 + 0xf4);
LAB_0284cb84:
    return (uint)(cVar1 != '\0');
  case 0xe:
    local_4 = 9;
    break;
  case 0xf:
    local_4 = 1;
    goto LAB_0284cba8;
  case 0x10:
    local_4 = 2;
LAB_0284cba8:
    uVar2 = (uint)*(byte *)(param_1 + 0x16a);
    goto LAB_0284cbc0;
  case 0x11:
    local_4 = 10;
    break;
  default:
    return 0;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0xbe);
LAB_0284cbc0:
  return uVar2 >> (ulong)local_4 & 1;
}

