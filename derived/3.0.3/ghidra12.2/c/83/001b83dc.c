
void FUN_001b83dc(long param_1,long param_2)

{
  size_t sVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char *__s;
  
  if (*(char *)(param_2 + 0x69) == '\0') {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_001b8490;
    FUN_00187e4c(*(long *)(param_1 + 0x60) + -4);
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    __s = *(char **)(param_2 + 0x60);
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_00187e4c(*(long *)(param_1 + 0x60) + -4);
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 0x69) = 0;
    }
    if (__s == (char *)0x0) {
      uVar3 = 1;
    }
    else {
      sVar1 = strlen(__s);
      if (sVar1 < 0x201) {
        sVar1 = strlen(__s);
        puVar2 = (undefined4 *)FUN_00187df4(sVar1 + 5);
        *puVar2 = (int)(sVar1 + 1);
        *(undefined4 **)(param_1 + 0x60) = puVar2 + 1;
        strncpy((char *)(puVar2 + 1),__s,sVar1 + 1);
        *(undefined1 *)(*(long *)(param_1 + 0x60) + sVar1) = 0;
      }
      *(undefined1 *)(param_1 + 0x68) = 0;
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x6a) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x69) = uVar3;
LAB_001b8490:
  if (*(char *)(param_2 + 0x68) != '\0') {
    FUN_001e15a8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    if (param_2 != param_1) {
      FUN_001db8f0(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),param_2 + 0x20);
      FUN_001dbd00(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),param_2 + 0x38);
      FUN_001dbd00(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),param_2 + 0x50);
    }
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  *(undefined1 *)(param_1 + 0x6a) = *(undefined1 *)(param_2 + 0x6a);
  return;
}

