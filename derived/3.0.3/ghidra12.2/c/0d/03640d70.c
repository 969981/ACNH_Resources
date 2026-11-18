
void FUN_03640d70(undefined8 *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_03642440(param_1 + 0x16);
  if (*(char *)((long)param_1 + 0x99) != '\0') {
    uVar3 = *(uint *)(param_1 + 0x14);
    uVar2 = param_2;
    if (uVar3 < param_2) {
      if (*(char *)(param_1 + 0x13) == '\0') {
        *(uint *)*param_1 = *(uint *)*param_1 | 0x20;
        *(undefined1 *)((long)param_1 + 0x99) = 0;
        cVar1 = *(char *)((long)param_1 + 0xb);
        goto joined_r0x03640de4;
      }
      do {
        uVar2 = uVar2 - uVar3;
        *(uint *)*param_1 = *(uint *)*param_1 | 0x20;
        uVar3 = *(uint *)((long)param_1 + 0x9c);
      } while (uVar3 < uVar2);
    }
    *(uint *)(param_1 + 0x14) = uVar3 - uVar2;
  }
  cVar1 = *(char *)((long)param_1 + 0xb);
joined_r0x03640de4:
  if (cVar1 != '\0') {
    uVar3 = *(uint *)((long)param_1 + 0x3c);
    do {
      uVar2 = uVar3;
      if (param_2 < uVar3) break;
      uVar2 = FUN_03640e48(param_1);
      param_2 = param_2 - uVar3;
      uVar3 = uVar2;
    } while (*(char *)((long)param_1 + 0xb) != '\0');
    *(uint *)((long)param_1 + 0x3c) = uVar2 - param_2;
  }
  return;
}

