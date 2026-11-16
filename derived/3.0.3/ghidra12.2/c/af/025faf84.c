
void FUN_025faf84(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined2 uVar4;
  undefined *local_50;
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  undefined4 local_14;
  
  if ((*(long **)(param_2 + 0x60) == (long *)0x0) ||
     (puVar1 = (undefined8 *)**(long **)(param_2 + 0x60), puVar1 == (undefined8 *)0x0)) {
    uVar4 = *(undefined2 *)(*(long *)(param_2 + 0x48) + *(long *)(param_2 + 0x40) + 2);
  }
  else {
    uVar2 = (**(code **)*puVar1)();
    uVar4 = *(undefined2 *)(*(long *)(param_2 + 0x48) + *(long *)(param_2 + 0x40) + 2);
    if ((((uVar2 & 1) != 0) && (*(long *)(param_2 + 0x60) != 0)) &&
       (puVar1 = *(undefined8 **)(*(long *)(param_2 + 0x60) + 8), puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)();
    }
  }
  local_35 = 0;
  local_40 = 8;
  local_48 = local_3c;
  local_3c[0] = 0;
  local_50 = PTR_DAT_04bb3768 + 0x10;
  FUN_0376b510(&local_50,uVar4);
  lVar3 = DAT_053e67f0;
  if (DAT_053e67f0 != 0) {
    (**(code **)(local_50 + 0x18))(&local_50);
    local_14 = FUN_006bd550(local_48,0);
    lVar3 = FUN_0079e770(lVar3,&local_14);
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 8);
      goto LAB_025fb078;
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x10);
LAB_025fb078:
  *(int *)*puVar1 = *(int *)*puVar1 + 1;
  return;
}

