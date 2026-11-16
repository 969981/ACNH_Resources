
undefined8
FUN_029e0bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,uint *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *local_20;
  char *pcStack_18;
  
  pcVar4 = (char *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*param_5);
  local_20 = PTR_DAT_04bb2020 + 0x10;
  pcStack_18 = pcVar4 + 0x100000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*param_5) {
    pcStack_18 = pcVar4;
  }
  if (((*pcStack_18 == '\0') ||
      (puVar1 = *(undefined8 **)(param_4 + 0x110), puVar1 == (undefined8 *)0x0)) ||
     (uVar2 = (**(code **)*puVar1)(puVar1,param_2,&local_20), (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

