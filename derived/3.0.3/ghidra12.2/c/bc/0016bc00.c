
void FUN_0016bc00(long param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0xc);
    switch(cVar1) {
    case '\0':
      FUN_00167784();
      return;
    case '\x01':
      FUN_001675f4();
      return;
    case '\x02':
      FUN_00167640();
      return;
    case '\x03':
      FUN_00167664();
      return;
    case '\x04':
      FUN_00167690();
      return;
    case '\x05':
      FUN_001676a0();
      return;
    case '\x06':
      FUN_001676e4();
      return;
    case '\a':
      FUN_00167710();
      return;
    case '\b':
      FUN_00167748();
      return;
    }
    if (*(char *)(param_1 + 0x60) == '\0') {
      FUN_00167788();
      return;
    }
    if (cVar1 == '\f') {
      FUN_001677a8();
      return;
    }
    if (cVar1 == '\n') {
      FUN_0016778c();
      return;
    }
  }
  return;
}

