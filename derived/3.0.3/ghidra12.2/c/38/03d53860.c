
void FUN_03d53860(long param_1,long *param_2,undefined8 param_3,undefined4 param_4,long *param_5,
                 byte param_6)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  void *__dest;
  void *__src;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x108);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_03d538f8;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x108,8);
  }
LAB_03d538f8:
  FUN_03b0ceb4(puVar4,param_1,param_2);
  *(undefined1 *)((long)puVar4 + 0xeb) = 0;
  *(undefined4 *)(puVar4 + 0xd) = 0x80;
  *(undefined1 *)((long)puVar4 + 0x6c) = 0;
  *puVar4 = &PTR_FUN_04b8f4e8;
  puVar4[0x1e] = 0;
  puVar4[0x1f] = 0;
  puVar4[0xb] = &DAT_048fc708;
  puVar4[0xc] = (undefined1 *)((long)puVar4 + 0x6c);
  *(byte *)(puVar4 + 0x20) = param_6 & 1;
  FUN_03d545f0(puVar4,param_2,param_3,param_4);
  __dest = (void *)puVar4[0xc];
  (**(code **)(*param_5 + 0x18))(param_5);
  __src = (void *)param_5[1];
  if (__dest != __src) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar5 = 0;
    do {
      if (*(char *)(param_5[1] + lVar5) == '\0') goto LAB_03d539dc;
      lVar2 = param_5[1] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03d539dc;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03d539dc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03d539dc:
    iVar1 = (int)lVar5;
    if (*(int *)(puVar4 + 0xd) <= (int)lVar5) {
      iVar1 = *(int *)(puVar4 + 0xd) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  plVar3 = (long *)((long)*(int *)(param_1 + 0x1c) + (long)puVar4);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  *(long **)(param_1 + 0x10) = plVar3;
  *plVar3 = param_1 + 8;
  plVar3[1] = (long)puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = plVar3;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

