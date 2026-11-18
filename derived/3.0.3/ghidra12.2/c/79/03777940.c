
/* WARNING: Removing unreachable block (ram,0x03777988) */

void FUN_03777940(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined **local_60;
  undefined8 *puStack_58;
  undefined8 local_40;
  undefined2 local_34 [2];
  
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    local_60 = (undefined **)CONCAT44(local_60._4_4_,1);
    if (((*(byte *)(lVar4 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar2 = (**(code **)(**(long **)(*(long *)(lVar4 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar2 = 0;
    }
    lVar4 = 0;
    if (lVar2 != 0) {
      lVar4 = lVar2 + 0xa8;
    }
  }
  puStack_58 = &local_40;
  local_60 = &PTR_FUN_04b46c78;
  local_40 = param_1;
  if ((*(long **)(lVar4 + 0x60) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(lVar4 + 0x60), puVar3 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)*puVar3)();
    uVar1 = uVar1 ^ 1;
  }
  if ((((*param_2 == 0) || (*param_2 == 1)) || (*param_2 == 2)) && (*param_2 < 3)) {
    lVar5 = (long)(int)*param_2 * 8;
    lVar2 = *(long *)(&DAT_04199060 + lVar5) - *(long *)(&DAT_04199048 + lVar5);
    puVar6 = (undefined2 *)
             (*(long *)(lVar4 + 0x48) + *(long *)(lVar4 + 0x40) +
             *(long *)(&DAT_04199048 + lVar5) * 2);
    do {
      local_34[0] = *puVar6;
      (*(code *)*local_60)(&local_60,local_34);
      lVar2 = lVar2 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar2 != 0);
  }
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar4 + 0x60) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}

