
void FUN_00a90770(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  
  if (0 < *(int *)(param_1 + 0x653a0)) {
    uVar7 = 0;
    uVar8 = 0;
    do {
      local_78 = CONCAT44(local_78._4_4_,uVar7);
      if (uVar7 < *(uint *)(param_1 + 0x100)) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x108) + (long)(int)uVar7 * 8);
      }
      else {
        lVar3 = 0;
      }
      plVar4 = (long *)(**(code **)(*(long *)(lVar3 + 0x30) + 0xf0))();
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar9 = param_2[1];
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar3 = plVar4[1];
      if (lVar9 == lVar3) goto LAB_00a908c4;
      uVar6 = 0;
      bVar2 = true;
      do {
        lVar9 = param_2[1] + 2 + uVar6;
        cVar1 = *(char *)(lVar9 + -2);
        if (cVar1 != *(char *)(lVar3 + uVar6)) break;
        if (cVar1 == '\0') {
          if (bVar2) goto LAB_00a908c4;
          break;
        }
        cVar1 = *(char *)(lVar9 + -1);
        if (cVar1 != *(char *)(lVar3 + uVar6 + 1)) break;
        if (cVar1 == '\0') goto LAB_00a908c4;
        cVar1 = *(char *)(param_2[1] + 2 + uVar6);
        if (cVar1 != *(char *)(lVar3 + uVar6 + 2)) break;
        if (cVar1 == '\0') goto LAB_00a908c4;
        bVar2 = uVar6 < 0x7fffe;
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      uVar8 = uVar8 + 1;
      uVar7 = uVar8 & 0xff;
    } while ((int)uVar7 < *(int *)(param_1 + 0x653a0));
  }
  uVar7 = 0;
LAB_00a908c4:
  *(uint *)(param_1 + 0x65338) = uVar7;
  if (DAT_05574040 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return;
    }
    lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar3 == 0) {
      return;
    }
  }
  lVar9 = *(long *)(lVar3 + 0x28);
  if (lVar9 == 0) {
    *(uint *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1e3738) = uVar7;
    return;
  }
  if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
    uVar6 = 0;
    plVar4 = *(long **)(lVar9 + 0x20);
  }
  else {
    uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    uVar6 = uVar6 & 0xffffffff;
    if (*(long *)(lVar3 + 0x28) == 0) goto LAB_00a9097c;
    plVar4 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_78 = *(undefined8 *)(lVar3 + 8);
    uStack_70 = *(undefined8 *)(lVar3 + 0x10);
    local_68 = &LAB_005b3c40;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
  }
LAB_00a9097c:
  *(uint *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1e3738) = uVar7;
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

