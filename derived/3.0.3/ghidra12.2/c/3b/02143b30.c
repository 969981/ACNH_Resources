
void FUN_02143b30(int *param_1,undefined8 *param_2)

{
  void *__dest;
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  void *__src;
  long *plVar6;
  undefined8 *puVar7;
  
  if (*param_1 < param_1[1]) {
    puVar7 = *(undefined8 **)(param_1 + 4);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 4) = *puVar7;
    }
    uVar3 = param_2[1];
    __dest = (void *)((long)puVar7 + 0x44);
    uVar5 = param_2[2];
    *puVar7 = *param_2;
    puVar7[1] = uVar3;
    puVar7[2] = uVar5;
    *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(param_2 + 3);
    uVar3 = *(undefined8 *)((long)param_2 + 0x1c);
    uVar5 = *(undefined8 *)((long)param_2 + 0x24);
    *(undefined1 *)((long)puVar7 + 0xc3) = 0;
    *(undefined8 *)((long)puVar7 + 0x1c) = uVar3;
    *(undefined8 *)((long)puVar7 + 0x24) = uVar5;
    *(undefined4 *)(puVar7 + 8) = 0x80;
    puVar7[6] = &PTR_LAB_048fcff0;
    puVar7[7] = __dest;
    plVar6 = param_2 + 6;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    __src = (void *)param_2[7];
    if (__dest != __src) {
      (**(code **)(param_2[6] + 0x18))(plVar6);
      lVar4 = 0;
      do {
        if (*(char *)(param_2[7] + lVar4) == '\0') goto LAB_02143c2c;
        lVar1 = param_2[7] + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_02143c2c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_02143c2c;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_02143c2c:
      iVar2 = (int)lVar4;
      if (*(int *)(puVar7 + 8) <= (int)lVar4) {
        iVar2 = *(int *)(puVar7 + 8) + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    puVar7[6] = &DAT_048fc708;
    uVar3 = param_2[0x1a];
    puVar7[0x19] = param_2[0x19];
    puVar7[0x1a] = uVar3;
    if (*param_1 < param_1[1]) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar7;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

