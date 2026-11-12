
byte FUN_00b38c10(long param_1,uint param_2,byte param_3,byte param_4,undefined4 param_5)

{
  byte bVar1;
  
  bVar1 = 1;
  switch(param_5) {
  case 0:
    goto switchD_00b38c3c_caseD_0;
  case 1:
    bVar1 = param_2 == 0;
    break;
  case 2:
    bVar1 = param_2 == 1;
    break;
  case 3:
    bVar1 = param_2 == 2;
    break;
  case 4:
    bVar1 = param_2 == 3;
    break;
  case 5:
    bVar1 = param_2 == 4;
    break;
  case 6:
    bVar1 = param_2 == 5;
    break;
  case 7:
    bVar1 = param_2 < 2;
    goto switchD_00b38c3c_caseD_0;
  case 8:
    param_2 = param_2 & 0xfffffffe;
    goto LAB_00b38cd0;
  case 9:
    param_2 = param_2 & 0xfffffffe;
    goto LAB_00b38ce8;
  case 10:
    bVar1 = param_2 - 1 < 2;
    goto switchD_00b38c3c_caseD_0;
  case 0xb:
    bVar1 = param_3;
    goto switchD_00b38c3c_caseD_0;
  case 0xc:
    bVar1 = param_4;
    goto switchD_00b38c3c_caseD_0;
  case 0xd:
    bVar1 = *(char *)(param_1 + 4) == '\0';
    break;
  case 0xe:
    bVar1 = *(char *)(param_1 + 4) == '\x01';
    break;
  case 0xf:
    param_2 = (uint)*(byte *)(param_1 + 4);
LAB_00b38cd0:
    bVar1 = param_2 == 2;
    break;
  case 0x10:
    bVar1 = *(char *)(param_1 + 4) == '\x03';
    break;
  case 0x11:
    param_2 = (uint)*(byte *)(param_1 + 4);
LAB_00b38ce8:
    bVar1 = param_2 == 4;
    break;
  case 0x12:
    bVar1 = *(char *)(param_1 + 4) == '\x05';
    break;
  case 0x13:
    bVar1 = *(char *)(param_1 + 4) == '\x06';
    break;
  case 0x14:
    bVar1 = *(char *)(param_1 + 4) == '\a';
    break;
  case 0x15:
    bVar1 = *(char *)(param_1 + 4) == '\b';
    break;
  case 0x16:
    bVar1 = *(char *)(param_1 + 4) == '\t';
    break;
  case 0x17:
    bVar1 = *(char *)(param_1 + 4) == '\n';
    break;
  case 0x18:
    bVar1 = *(char *)(param_1 + 4) == '\v';
    break;
  case 0x19:
    bVar1 = *(char *)(param_1 + 4) == '\f';
    break;
  case 0x1a:
    bVar1 = *(char *)(param_1 + 4) == '\r';
    break;
  case 0x1b:
    bVar1 = *(char *)(param_1 + 4) == '\x0e';
    break;
  case 0x1c:
    bVar1 = *(char *)(param_1 + 4) == '\x0f';
    break;
  case 0x1d:
    bVar1 = *(char *)(param_1 + 4) == '\x10';
    break;
  case 0x1e:
    bVar1 = *(char *)(param_1 + 4) == '\x11';
    break;
  case 0x1f:
    bVar1 = *(char *)(param_1 + 4) == '\x12';
    break;
  case 0x20:
    bVar1 = *(char *)(param_1 + 4) == '\x13';
    break;
  case 0x21:
    bVar1 = *(char *)(param_1 + 4) == '\x14';
    break;
  case 0x22:
    bVar1 = *(char *)(param_1 + 4) == '\x15';
    break;
  case 0x23:
    bVar1 = *(char *)(param_1 + 4) == '\x16';
    break;
  case 0x24:
    bVar1 = *(char *)(param_1 + 4) == '\x17';
    break;
  default:
    bVar1 = 0;
    goto switchD_00b38c3c_caseD_0;
  }
switchD_00b38c3c_caseD_0:
  return bVar1 & 1;
}

