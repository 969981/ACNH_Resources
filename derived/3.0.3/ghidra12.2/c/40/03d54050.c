
void FUN_03d54050(long param_1,long *param_2,long param_3,undefined4 param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  void *__dest;
  void *__src;
  
  if (param_3 == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 8);
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(0x108);
  }
  else {
    plVar3 = param_5;
    if (param_5 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar6 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_03d540e4;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x108,8);
  }
LAB_03d540e4:
  FUN_03b0ceb4(puVar4,lVar5,param_5);
  *(undefined1 *)((long)puVar4 + 0xeb) = 0;
  *(undefined4 *)(puVar4 + 0xd) = 0x80;
  *(undefined1 *)((long)puVar4 + 0x6c) = 0;
  *puVar4 = &PTR_FUN_04b8f4e8;
  puVar4[0x1e] = 0;
  puVar4[0x1f] = 0;
  *(undefined1 *)(puVar4 + 0x20) = 0;
  puVar4[0xb] = &DAT_048fc708;
  puVar4[0xc] = (undefined1 *)((long)puVar4 + 0x6c);
  FUN_03d545f0(puVar4,param_5,param_3,param_4);
  __dest = (void *)puVar4[0xc];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_03d541bc;
      lVar2 = param_2[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03d541bc;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03d541bc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03d541bc:
    iVar1 = (int)lVar6;
    if (*(int *)(puVar4 + 0xd) <= (int)lVar6) {
      iVar1 = *(int *)(puVar4 + 0xd) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  plVar3 = (long *)((long)*(int *)(lVar5 + 0x1c) + (long)puVar4);
  puVar4 = *(undefined8 **)(lVar5 + 0x10);
  *(long **)(lVar5 + 0x10) = plVar3;
  *plVar3 = lVar5 + 8;
  plVar3[1] = (long)puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = plVar3;
  }
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  return;
}

