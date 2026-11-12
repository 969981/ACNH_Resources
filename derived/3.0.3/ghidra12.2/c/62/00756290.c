
void FUN_00756290(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  void *__src;
  long lVar3;
  void *__dest;
  long local_148;
  void *local_140;
  
  *(undefined8 *)(param_2 + 0x48) = param_3;
  *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_1 + 0x288);
  lVar3 = *(long *)(param_1 + 0x278);
  plVar1 = (long *)(*(int *)(param_1 + 0x28c) + param_2);
  *(long **)(param_1 + 0x278) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = param_1 + 0x278;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar1;
  }
  *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + 1;
  (**(code **)(*(long *)(param_2 + 0x58) + 0x18))((long *)(param_2 + 0x58));
  FUN_006e9528(&local_148,"%s[%d]",*(undefined8 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x170))
  ;
  __dest = *(void **)(param_2 + 0x60);
  (**(code **)(local_148 + 0x18))(&local_148);
  __src = local_140;
  if (__dest != local_140) {
    (**(code **)(local_148 + 0x18))(&local_148);
    lVar3 = 0;
    do {
      if (*(char *)((long)local_140 + lVar3) == '\0') goto LAB_0075638c;
      if (*(char *)((long)local_140 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0075638c;
      }
      if (*(char *)((long)local_140 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0075638c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0075638c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_2 + 0x68) <= (int)lVar3) {
      iVar2 = *(int *)(param_2 + 0x68) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  return;
}

