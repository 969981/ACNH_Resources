
void FUN_0211db50(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  void *__dest;
  void *__src;
  long *plVar5;
  undefined1 *puVar6;
  
  FUN_021264e4(param_1 + 0xe8);
  puVar6 = (undefined1 *)(param_1 + 8);
  *puVar6 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  __dest = *(void **)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = *param_2;
  *(undefined4 *)(param_1 + 0xf0) = param_2[0x10];
  *(undefined4 *)(param_1 + 0x130) = param_2[0x11];
  plVar5 = (long *)(param_2 + 2);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  __src = *(void **)(param_2 + 4);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(plVar5);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 4) + lVar4) == '\0') goto LAB_0211dc80;
      lVar1 = *(long *)(param_2 + 4) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0211dc80;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0211dc80;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0211dc80:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x108) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x108) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  puVar3 = puVar6 + (ulong)(uint)param_2[0x18] * 0x1c;
  if (7 < (uint)param_2[0x18]) {
    puVar3 = puVar6;
  }
  *puVar3 = 1;
  *(undefined4 *)(puVar3 + 4) = param_2[0x13];
  *(undefined4 *)(puVar3 + 8) = param_2[0x14];
  *(undefined4 *)(puVar3 + 0xc) = param_2[0x15];
  *(undefined4 *)(puVar3 + 0x10) = param_2[0x16];
  return;
}

