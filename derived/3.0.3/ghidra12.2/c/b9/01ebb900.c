
void FUN_01ebb900(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined **local_50;
  char *local_48;
  
  FUN_01e9dbb0();
  *param_1 = &PTR_LAB_04a60750;
  FUN_00904684(param_1 + 0x15e7,param_1[1]);
  *(undefined2 *)(param_1 + 0x15f0) = 0;
  *(undefined4 *)((long)param_1 + 0xaf82) = 0;
  param_1[0x15ab] = param_1[0x15ab] | 0x8000000000;
  lVar5 = param_1[1];
  *param_1 = &PTR_LAB_04a60b00;
  local_50 = &PTR_LAB_048f9770;
  local_48 = "kpp";
  (**(code **)(*(long *)(lVar5 + 0x3e0) + 0x18))(lVar5 + 0x3e0);
  lVar4 = 0;
  do {
    if (*(char *)(*(long *)(lVar5 + 1000) + lVar4) == '\0') {
LAB_01ebb9e0:
      iVar3 = (int)lVar4;
joined_r0x01ebb9e4:
      if (iVar3 < 3) {
        return;
      }
      uVar6 = 0;
      while( true ) {
        pcVar2 = (char *)(*(long *)(lVar5 + 1000) + uVar6);
        (*(code *)local_50[3])(&local_50);
        if ((pcVar2 == local_48) ||
           ((*pcVar2 == *local_48 &&
            ((*pcVar2 == '\0' ||
             ((pcVar2[1] == local_48[1] && ((pcVar2[1] == '\0' || (pcVar2[2] == local_48[2])))))))))
           ) break;
        uVar6 = uVar6 + 1;
        if (iVar3 - 2 == uVar6) {
          return;
        }
      }
      if ((int)uVar6 == -1) {
        return;
      }
      FUN_02231868(param_1[1] + 0x160,PTR_DAT_04bb2ce8);
      return;
    }
    lVar1 = *(long *)(lVar5 + 1000) + lVar4;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_01ebb9e0;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar3 = (int)lVar4 + 2;
      goto joined_r0x01ebb9e4;
    }
    lVar4 = lVar4 + 3;
    if (lVar4 == 0x80001) {
      return;
    }
  } while( true );
}

