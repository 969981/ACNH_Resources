
void FUN_01b5dea0(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 local_24;
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar5 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_2), lVar5 != 0)) {
    if ((*(long **)(lVar5 + 0x17f68) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17f68), puVar6 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
    lVar2 = *(long *)(lVar5 + 0x17f48);
    lVar3 = *(long *)(lVar5 + 0x17f50);
    lVar1 = DAT_05335028 + 0x238;
    (**(code **)(*param_1 + 0x18))(param_1);
    local_24 = FUN_006bd550(param_1[1],0);
    uVar7 = FUN_01b5b650(lVar1,&local_24);
    FUN_01b5cf20(param_1,uVar7,0,lVar3 + lVar2,0);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x17f68) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17f68) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return;
}

