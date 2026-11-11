
void FUN_003d20a0(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  void *__src;
  void *__dest;
  undefined8 uVar3;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [36];
  undefined4 local_3c;
  uint local_38;
  char local_34;
  
  local_3c = 0xffffffff;
  local_34 = '\0';
  uVar2 = FUN_003b8858(param_1[1],param_2,&local_3c);
  if (((uVar2 & 1) != 0) && (local_34 != '\0')) {
    __src = (void *)(**(code **)(*param_1 + 0x20))(param_1,local_3c);
    FUN_003c8dd4(auStack_60,__src,0);
    uVar2 = FUN_003c8f40(auStack_60);
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_003c9188(__src);
      __dest = (void *)(**(code **)(*param_3 + 0x10))(param_3,uVar1 + local_38 * 4 + 4);
      if (__dest != (void *)0x0) {
        memcpy(__dest,__src,(ulong)uVar1);
        *(undefined4 *)((long)__dest + (ulong)uVar1) = 0x54415746;
        FUN_003c8dd4(auStack_80,__dest,1);
        FUN_003c8fa0(auStack_80);
        if (local_38 != 0) {
          uVar1 = 0;
          do {
            uVar3 = FUN_003c8fec(auStack_60,uVar1);
            FUN_003c90c8(auStack_80,uVar1,uVar3);
            uVar1 = uVar1 + 1;
          } while (uVar1 < local_38);
        }
        (**(code **)(*param_1 + 0x10))(param_1,local_3c,__dest);
      }
    }
  }
  return;
}

