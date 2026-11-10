
undefined4 FUN_0015e3d4(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char *__s;
  size_t sVar2;
  undefined8 *puVar3;
  undefined1 auStack_f0 [128];
  
  puVar3 = (undefined8 *)*param_1;
  __s = (char *)FUN_001462a8(param_2,auStack_f0 + 0x80);
  if (__s == (char *)0x0) {
    FUN_00143300(*puVar3);
    FUN_00143300(puVar3);
    *param_1 = 0;
    uVar1 = 0x1b;
  }
  else {
    sVar2 = strlen(__s);
    uVar1 = FUN_0015e4a4(param_1,__s,sVar2);
    FUN_00143300(__s);
  }
  return uVar1;
}

