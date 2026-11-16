
void FUN_02743a24(byte *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 == 0) {
LAB_02743aa0:
    lVar5 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar5 = 0;
      if (lVar2 != 0) {
        lVar5 = lVar2 + 0x70;
      }
    }
    else {
      if (puVar6 == (undefined8 *)0x0) goto LAB_02743aa0;
      lVar5 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
    }
  }
  lVar2 = *(long *)(lVar5 + 0x205228);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar2 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar5 + 0x205228) == 0) goto LAB_02743b18;
      plVar4 = *(long **)(*(long *)(lVar5 + 0x205228) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_58 = *(long *)(lVar5 + 0x205208);
      local_50 = *(undefined8 *)(lVar5 + 0x205210);
      uStack_48 = 0x100;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
LAB_02743b18:
  bVar1 = *param_1;
  if (7 < bVar1) {
    bVar1 = 0xff;
  }
  FUN_02743b80(*(long *)(lVar5 + 0x205210) + *(long *)(lVar5 + 0x205208),param_2,(int)(char)bVar1,
               param_3 & 1);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar5 + 0x205228) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x205228) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

