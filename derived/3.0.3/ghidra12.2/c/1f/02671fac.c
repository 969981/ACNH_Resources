
void FUN_02671fac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 == 0) {
LAB_0267201c:
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
      if (puVar6 == (undefined8 *)0x0) goto LAB_0267201c;
      lVar5 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
    }
  }
  lVar2 = *(long *)(&LAB_00205148 + lVar5);
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
      if (*(long *)(&LAB_00205148 + lVar5) == 0) goto LAB_02672094;
      plVar4 = *(long **)(*(long *)(&LAB_00205148 + lVar5) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(&LAB_00205128 + lVar5);
      local_40 = *(undefined8 *)(&LAB_00205130 + lVar5);
      uStack_38 = 8;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_02672094:
  puVar1 = (undefined4 *)(*(long *)(&LAB_00205130 + lVar5) + *(long *)(&LAB_00205128 + lVar5));
  uVar7 = *param_3;
  *puVar1 = (int)((ulong)uVar7 >> 0x20);
  *(char *)((long)puVar1 + 7) = (char)uVar7;
  *(short *)(puVar1 + 1) = (short)((ulong)uVar7 >> 0x10);
  *(char *)((long)puVar1 + 6) = (char)((ulong)uVar7 >> 8);
  if ((((uVar3 & 1) != 0) && (*(long *)(&LAB_00205148 + lVar5) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(&LAB_00205148 + lVar5) + 0x18),
     puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

