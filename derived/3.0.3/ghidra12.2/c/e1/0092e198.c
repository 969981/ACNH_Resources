
void FUN_0092e198(long *param_1)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 uStack_49;
  undefined1 local_48 [16];
  undefined1 *local_38;
  
  local_48 = FUN_02642bc0();
  uVar7 = local_48._8_8_ & 0xffffffff;
  if (uVar7 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_38 = &uStack_49;
  lVar4 = (*(code *)(&PTR_LAB_04a88310)[uVar7])(&local_38,local_48);
  if (lVar4 == 0) {
    *param_1 = (long)(PTR_DAT_04bb2010 + 0x10);
    param_1[1] = 0x4a0000004b;
  }
  else {
    plVar8 = (long *)(lVar4 + 0x38);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    if ((*(long **)(lVar4 + 0x60) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x60), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar6 = (**(code **)(*(long *)(lVar4 + 0x38) + 0x20))(plVar8,0);
    puVar2 = PTR_DAT_04bb2010;
    lVar6 = lVar6 + *(long *)(lVar4 + 0x40);
    sVar1 = *(short *)(lVar6 + 4);
    *(int *)(param_1 + 1) = (int)*(short *)(lVar6 + 2);
    *(int *)((long)param_1 + 0xc) = (int)sVar1;
    *param_1 = (long)(puVar2 + 0x10);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x60) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x60) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return;
}

