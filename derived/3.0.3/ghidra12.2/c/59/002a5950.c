
void FUN_002a5950(undefined8 param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  void *__s;
  ulong uVar4;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  if (*(long *)(param_2 + 8) == 0) {
    if ((param_3 < 2) || (0xfffe < param_3)) {
      local_54 = 0x10c07;
    }
    else {
      uVar2 = FUN_0021f454();
      lVar3 = FUN_00285d10((ulong)param_3 * 0x5d0,uVar2);
      if (lVar3 != 0) {
        uVar4 = (ulong)param_3;
        __s = (void *)(lVar3 + 0x2c);
        puVar1 = PTR_DAT_04bce080 + 0x10;
        do {
          *(undefined **)((long)__s + -0x14) = puVar1;
          memset(__s,0,4);
          *(undefined8 *)((long)__s + -0xc) = 0;
          *(undefined1 *)((long)__s + -4) = 0;
          memset(__s,0,4);
          *(undefined2 *)((long)__s + -0x2c) = 0;
          *(undefined8 *)((long)__s + -0x24) = 0;
          *(undefined8 *)((long)__s + -0x1c) = 0;
          *(undefined8 *)((long)__s + -0xc) = 0;
          *(undefined1 *)((long)__s + -4) = 0;
          memset(__s,0,4);
          uVar4 = uVar4 - 1;
          __s = (void *)((long)__s + 0x5d0);
        } while (uVar4 != 0);
      }
      *(long *)(param_2 + 8) = lVar3;
      *(uint *)(param_2 + 0x10) = param_3;
      local_54 = 0;
    }
  }
  else {
    local_54 = 0x10c02;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_44);
  FUN_002296c4(param_1,&local_54);
  return;
}

