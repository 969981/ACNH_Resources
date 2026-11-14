
void FUN_01c79be0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined1 uStack_21;
  
  lVar2 = DAT_053512e0;
  cVar1 = *(char *)(param_1 + 0x50);
  if ((cVar1 != '\0' && *(int *)(param_1 + 0x48) == 2) && *(char *)(param_1 + 0x30) != '\0') {
    if (*(char *)(DAT_053512e0 + 0x3f0) != '\0') {
      FUN_01c79754(DAT_053512e0 + 0x288);
      *(undefined1 *)(lVar2 + 0x3f0) = 0;
    }
    if (*(char *)(lVar2 + 0x418) != '\0') {
      if (*(char *)(lVar2 + 0x411) != '\0') {
        *(undefined1 *)(lVar2 + 0x411) = 0;
      }
      *(undefined1 *)(lVar2 + 0x418) = 0;
    }
    if (*(char *)(lVar2 + 0x421) != '\0') {
      *(undefined1 *)(lVar2 + 0x421) = 0;
    }
    cVar1 = *(char *)(param_1 + 0x50);
  }
  if (cVar1 != '\0') {
    if (*(uint *)(param_1 + 0x48) != 0xffffffff) {
      (*(code *)(&PTR_FUN_04a434e0)[*(uint *)(param_1 + 0x48)])(&uStack_21,param_1 + 8);
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  if (*(char *)(param_1 + 400) != '\0') {
    *(undefined1 *)(param_1 + 400) = 0;
  }
  if (*(char *)(param_1 + 0x19c) != '\0') {
    *(undefined1 *)(param_1 + 0x19c) = 0;
  }
  if (*(char *)(param_1 + 0x1a4) != '\0') {
    *(undefined1 *)(param_1 + 0x1a4) = 0;
  }
  return;
}

