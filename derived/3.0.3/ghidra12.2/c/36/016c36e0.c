
void FUN_016c36e0(int *param_1,undefined2 *param_2)

{
  undefined2 *__dest;
  long lVar1;
  int iVar2;
  long lVar3;
  undefined2 *__src;
  long *plVar4;
  undefined8 *puVar5;
  
  if (*param_1 < param_1[1]) {
    puVar5 = *(undefined8 **)(param_1 + 4);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 4) = *puVar5;
    }
    *(undefined2 *)puVar5 = 0;
    *(undefined1 *)((long)puVar5 + 2) = 0;
    if (*(char *)(param_2 + 1) != '\0') {
      *(undefined2 *)puVar5 = *param_2;
      *(undefined1 *)((long)puVar5 + 2) = 1;
    }
    *(undefined1 *)((long)puVar5 + 0x23) = 0;
    __dest = (undefined2 *)((long)puVar5 + 0x1c);
    *(undefined4 *)(puVar5 + 3) = 8;
    puVar5[1] = PTR_DAT_04bb6a30 + 0x10;
    puVar5[2] = __dest;
    plVar4 = (long *)(param_2 + 4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    __src = *(undefined2 **)(param_2 + 8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_2 + 4) + 0x18))(plVar4);
      lVar3 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 8) + lVar3) == '\0') goto LAB_016c37dc;
        lVar1 = *(long *)(param_2 + 8) + lVar3;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_016c37dc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_016c37dc;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_016c37dc:
      iVar2 = (int)lVar3;
      if (*(int *)(puVar5 + 3) <= (int)lVar3) {
        iVar2 = *(int *)(puVar5 + 3) + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    puVar5[1] = &PTR_LAB_04908da0;
    *(undefined2 *)(puVar5 + 5) = param_2[0x14];
    *(undefined1 *)((long)puVar5 + 0x2a) = *(undefined1 *)(param_2 + 0x15);
    *(undefined1 *)((long)puVar5 + 0x2b) = *(undefined1 *)((long)param_2 + 0x2b);
    *(undefined4 *)((long)puVar5 + 0x2c) = *(undefined4 *)(param_2 + 0x16);
    *(undefined1 *)(puVar5 + 6) = *(undefined1 *)(param_2 + 0x18);
    if (*param_1 < param_1[1]) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar5;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

