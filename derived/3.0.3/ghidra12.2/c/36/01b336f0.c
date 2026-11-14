
void FUN_01b336f0(undefined4 *param_1,long *param_2,undefined4 *param_3,long param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  char local_44 [4];
  
  lVar5 = param_2[0x1fe];
  if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar4 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar4)();
    uVar3 = uVar3 ^ 1;
  }
  uVar2 = *(short *)(*param_2 + 0x10) * 0x6667;
  local_44[0] = (char)*(undefined4 *)(param_4 + 0x24) +
                *(char *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 1) +
                (char)*(short *)(*param_2 + 0x10) +
                ((char)(uVar2 >> 0x12) - (char)((int)uVar2 >> 0x1f)) * -10;
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  FUN_01af193c(param_1,local_44,PTR_LAB_04bc0418);
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

