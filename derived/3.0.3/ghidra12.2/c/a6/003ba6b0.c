
void FUN_003ba6b0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x2f9) != '\0') {
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        FUN_003cdf50(*(long *)(param_1 + 0x48) + lVar4,0);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x88;
      } while (uVar5 < *(uint *)(param_1 + 0x40));
    }
    uVar3 = FUN_003c5b84();
    uVar2 = FUN_003cbf90(uVar3,1,1);
    FUN_003cc0c0(uVar3,uVar2);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_003bbbc0(param_1 + 8);
    FUN_003bc1c0(param_1 + 0x50);
    if (*(char *)(param_1 + 0x2fa) == '\0') {
      FUN_003e0890(param_1 + 0x138);
      FUN_003e2850(param_1 + 0x1f8);
      cVar1 = *(char *)(param_1 + 0x2d8);
    }
    else {
      FUN_003e1a20(param_1 + 0x1c0);
      FUN_003e2850(param_1 + 0x1f8);
      cVar1 = *(char *)(param_1 + 0x2d8);
    }
    if (cVar1 != '\0') {
      FUN_003cd648(param_1 + 0x2d0);
      *(undefined1 *)(param_1 + 0x2d8) = 0;
    }
    if (*(char *)(param_1 + 0x2e8) != '\0') {
      FUN_003cd648(param_1 + 0x2e0);
      *(undefined1 *)(param_1 + 0x2e8) = 0;
    }
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined1 *)(param_1 + 0x2f9) = 0;
  }
  return;
}

