
uint FUN_03258450(long *param_1)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  pcVar2 = (char *)param_1[1];
  if (pcVar2 == "ModifyIsland") {
    uVar1 = 1;
  }
  else if (*pcVar2 == 'M') {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3;
      if (uVar3 == 0x80000) goto LAB_032584e8;
      if (pcVar2[uVar3 + 1] != "ModifyIsland"[uVar3 + 1]) {
        uVar4 = 0;
        goto LAB_032584e8;
      }
      uVar4 = uVar3 + 1;
    } while (pcVar2[uVar3 + 1] != '\0');
    uVar4 = 1;
LAB_032584e8:
    uVar1 = (uint)(uVar3 < 0x80000) & (uint)uVar4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

