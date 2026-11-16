
void FUN_026942fc(undefined8 *param_1,long param_2,uint param_3)

{
  char cVar1;
  undefined8 local_18;
  
  *param_1 = 0xfffe;
  FUN_0277d4ac(param_1);
  if ((param_3 & 1) == 0) {
    cVar1 = *(char *)(param_2 + 0x1314d);
    if (cVar1 == '\x11') {
      local_18 = 0x16cd;
    }
    else if (cVar1 == '\x10') {
      local_18 = 0x16cc;
    }
    else {
      if (cVar1 != '\x0f') {
        return;
      }
      local_18 = 0x16be;
    }
  }
  else {
    switch(*(char *)(param_2 + 0x1314d)) {
    case '\x02':
      local_18 = 0x1c2a;
      break;
    case '\x03':
      local_18 = 0x10c0;
      break;
    case '\x04':
      local_18 = 0x2024;
      break;
    case '\x05':
      local_18 = 0x203b;
      break;
    case '\x06':
      local_18 = 0x203c;
      break;
    case '\a':
      local_18 = 0x203d;
      break;
    case '\b':
      local_18 = 0x203e;
      break;
    case '\t':
      local_18 = 0x10bf;
      break;
    case '\n':
      local_18 = 0x20af;
      break;
    case '\v':
      local_18 = 0x20b0;
      break;
    case '\f':
      local_18 = 0x20b1;
      break;
    case '\r':
      local_18 = 0x20b2;
      break;
    case '\x0e':
      local_18 = 0x20b4;
      break;
    default:
      goto switchD_02694360_default;
    }
  }
  FUN_0277d4ac(&local_18);
  *(undefined4 *)param_1 = (undefined4)local_18;
  *(undefined4 *)((long)param_1 + 4) = local_18._4_4_;
switchD_02694360_default:
  return;
}

