
void FUN_039aa240(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  bVar1 = *(byte *)(param_1 + 0x283);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 1 & 1) != 0) {
      plVar3 = *(long **)(param_1 + 0x58);
      if (plVar3 == (long *)0x0) {
        if (*(int *)(param_1 + 0x40) != 0) {
          lVar4 = (long)*(int *)(param_1 + 0x40) << 3;
          puVar2 = *(undefined8 **)(param_1 + 0x48);
          do {
            FUN_039a9a90(param_1,*puVar2);
            lVar4 = lVar4 + -8;
            puVar2 = puVar2 + 1;
          } while (lVar4 != 0);
        }
      }
      else {
        (**(code **)(*plVar3 + 8))(plVar3,param_1);
        if (*(int *)(param_1 + 0x40) != 0) {
          lVar4 = (long)*(int *)(param_1 + 0x40) << 3;
          puVar2 = *(undefined8 **)(param_1 + 0x48);
          do {
            FUN_039a9a90(param_1,*puVar2);
            lVar4 = lVar4 + -8;
            puVar2 = puVar2 + 1;
          } while (lVar4 != 0);
        }
        (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
      }
      *(byte *)(param_1 + 0x280) = *(byte *)(param_1 + 0x280) & 0xfe;
      bVar1 = *(byte *)(param_1 + 0x283);
      goto joined_r0x039aa324;
    }
  }
  else if ((bVar1 >> 1 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x58);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_1);
        lVar4 = *(long *)(param_1 + 0x50);
      }
      FUN_039af270(lVar4,param_1);
      FUN_039afb50(*(undefined8 *)(param_1 + 0x50),param_1);
      FUN_039af950(*(undefined8 *)(param_1 + 0x50),param_1);
      bVar1 = *(byte *)(param_1 + 0x283);
      goto joined_r0x039aa324;
    }
  }
  else {
    FUN_039a9c80(param_1,7);
  }
  bVar1 = *(byte *)(param_1 + 0x283);
joined_r0x039aa324:
  if (((bVar1 >> 2 & 1) != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    lVar4 = (long)*(int *)(param_1 + 0x40) << 3;
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    do {
      (**(code **)(**(long **)*puVar2 + 0x260))();
      lVar4 = lVar4 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar4 != 0);
  }
  return;
}

