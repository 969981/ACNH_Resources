
void FUN_003b6380(long param_1,int param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  undefined1 uStack_11;
  
  piVar3 = (int *)(param_1 + (param_3 & 0xffffffff) * 4 + 0xe0);
  if (*piVar3 != param_2) {
    *piVar3 = param_2;
    uVar1 = FUN_003c5b84();
    lVar2 = FUN_003cbb70(uVar1,0x20,1);
    *(undefined4 *)(lVar2 + 8) = 0x4d;
    *(undefined4 *)(lVar2 + 0x18) = 8;
    FUN_003cc15c(uVar1,lVar2);
    if (*(char *)(param_1 + 0x950) != '\0') {
      FUN_003b4ea8(&uStack_11);
      for (lVar2 = *(long *)(param_1 + 0x898); lVar2 != param_1 + 0x890;
          lVar2 = *(long *)(lVar2 + 8)) {
        FUN_003c4b20(lVar2 + -0x40);
      }
      FUN_003b4ec0(&uStack_11);
      FUN_003c4b20(param_1 + 0x558);
    }
  }
  return;
}

