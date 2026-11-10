
void FUN_001b9520(undefined8 param_1,long param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  ulong __n;
  char *pcVar3;
  void *__src;
  ulong uVar4;
  undefined4 local_24;
  
  if (*(char **)(param_2 + 0x60) == (char *)0x0) {
    local_24 = 0x8001000c;
  }
  else if (param_3 == (void *)0x0) {
    local_24 = 0x8001000a;
  }
  else {
    pcVar3 = strstr(*(char **)(param_2 + 0x60),":/");
    if (pcVar3 != (char *)0x0) {
      __src = *(void **)(param_2 + 0x60);
      __n = (long)pcVar3 - (long)__src;
      if (__n != 0) {
        uVar4 = 0;
        uVar1 = __n;
        if (__n < 2) {
          uVar1 = 1;
        }
        do {
          bVar2 = *(byte *)((long)__src + uVar4);
          if (((9 < bVar2 - 0x30 && 0x19 < (bVar2 & 0xffffffdf) - 0x41) && (bVar2 != 0x2d)) &&
             (bVar2 != 0x5f)) goto LAB_001b95ac;
          uVar4 = uVar4 + 1;
        } while (uVar1 != uVar4);
        if (param_4 < __n + 1) {
          local_24 = 0x8001000f;
        }
        else {
          memcpy(param_3,__src,__n);
          local_24 = 0x10001;
          *(undefined1 *)((long)param_3 + __n) = 0;
        }
        goto LAB_001b9608;
      }
    }
LAB_001b95ac:
    local_24 = 0x80050003;
  }
LAB_001b9608:
  FUN_0018aa70(param_1,&local_24);
  return;
}

