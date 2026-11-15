
void FUN_0236ce2c(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined4 local_2c;
  undefined8 local_28;
  
  if (*(char *)(param_2 + 0x2a) == '\0') {
    return;
  }
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  local_28 = *(undefined8 *)(param_2 + 0x20);
  bVar1 = *(byte *)(param_2 + 0x2b);
  if (4 < bVar1) {
    bVar1 = 0;
  }
  switch(bVar1) {
  case 0:
    local_2c = 1;
    break;
  default:
    local_2c = 0;
    break;
  case 2:
    local_2c = 2;
    break;
  case 3:
  case 4:
    local_2c = 3;
  }
  FUN_02326c70(param_1,&local_28,&local_2c);
  return;
}

