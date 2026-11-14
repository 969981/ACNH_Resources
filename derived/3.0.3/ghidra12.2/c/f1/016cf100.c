
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016cf100(undefined2 *param_1,char *param_2)

{
  int iVar1;
  void *__src;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *__dest;
  undefined1 *puVar7;
  undefined2 local_88;
  char local_86;
  long local_80;
  void *local_78;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  
  if (param_1 == (undefined2 *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if ((*(int *)(param_2 + 4) == -1) || (DAT_05574040 == 0)) {
LAB_016cf1bc:
    puVar7 = (undefined1 *)0x0;
    plVar6 = _DAT_00000028;
  }
  else {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) goto LAB_016cf1bc;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) goto LAB_016cf1bc;
    if (*param_2 == '\0') {
      lVar4 = lVar4 + (long)*(int *)(param_2 + 4) * 0xc40;
      puVar7 = &LAB_002057b0 + lVar4;
      plVar6 = *(long **)(&LAB_002057d8 + lVar4);
    }
    else {
      lVar4 = lVar4 + (long)*(int *)(param_2 + 4) * 0xc40;
      puVar7 = (undefined1 *)(lVar4 + 0x20b9e8);
      plVar6 = *(long **)(lVar4 + 0x20ba10);
    }
  }
  if ((plVar6 == (long *)0x0) || ((undefined8 *)*plVar6 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(code *)**(undefined8 **)*plVar6)();
    uVar2 = uVar2 ^ 1;
  }
  if ((*(byte *)(*(long *)(puVar7 + 0x10) + *(long *)(puVar7 + 8)) & 1) != 0) {
    if ((*(long **)(puVar7 + 0x60) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(puVar7 + 0x60), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    FUN_016ce250(&local_88,*(undefined2 *)(*(long *)(puVar7 + 0x48) + *(long *)(puVar7 + 0x40)));
    if (local_86 == '\0') {
      if (*(char *)(param_1 + 1) != '\0') {
        *(undefined1 *)(param_1 + 1) = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 1) == '\0') {
        *(undefined1 *)(param_1 + 1) = 1;
      }
      *param_1 = local_88;
    }
    __dest = *(void **)(param_1 + 8);
    (**(code **)(local_80 + 0x18))(&local_80);
    __src = local_78;
    if (__dest != local_78) {
      (**(code **)(local_80 + 0x18))(&local_80);
      lVar4 = 0;
      do {
        if (*(char *)((long)local_78 + lVar4) == '\0') goto LAB_016cf2fc;
        if (*(char *)((long)local_78 + lVar4 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_016cf2fc;
        }
        if (*(char *)((long)local_78 + lVar4 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_016cf2fc;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_016cf2fc:
      iVar1 = (int)lVar4;
      if (*(int *)(param_1 + 0xc) <= (int)lVar4) {
        iVar1 = *(int *)(param_1 + 0xc) + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = local_60;
    *(undefined4 *)(param_1 + 0x16) = uStack_5c;
    *(undefined1 *)(param_1 + 0x18) = local_58;
    if ((((uVar3 & 1) == 0) && (*(long *)(puVar7 + 0x60) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(puVar7 + 0x60) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  if ((((uVar2 & 1) == 0) && (*(long *)(puVar7 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(puVar7 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

