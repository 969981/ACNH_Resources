
void FUN_020804f0(undefined8 param_1,long param_2,float *param_3,long param_4,long param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  void *__dest;
  void *__src;
  long *plVar5;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_34;
  
  if (param_2 != 0) {
    FUN_0207da6c(param_1,&local_5c,&local_34,param_4 + 0x58,param_4 + 0x20);
    *param_3 = (float)*(int *)(param_5 + 4);
    plVar5 = (long *)(param_5 + 8);
    __dest = *(void **)(param_2 + 0x118);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    __src = *(void **)(param_5 + 0x10);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_5 + 8) + 0x18))(plVar5);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(param_5 + 0x10) + lVar4) == '\0') goto LAB_020805cc;
        lVar1 = *(long *)(param_5 + 0x10) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_020805cc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_020805cc;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_020805cc:
      iVar2 = (int)lVar4;
      if (*(int *)(param_2 + 0x120) <= (int)lVar4) {
        iVar2 = *(int *)(param_2 + 0x120) + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    uVar3 = FUN_0277d6c4(param_4 + 0x58);
    *(undefined4 *)(param_2 + 0xec) = uVar3;
    *(undefined4 *)(param_2 + 0xfc) = local_34;
    *(undefined2 *)(param_2 + 0xb0) = *(undefined2 *)(param_5 + 100);
    *(undefined1 *)(param_2 + 0xb2) = *(undefined1 *)(param_5 + 0x66);
    *(undefined1 *)(param_2 + 0xb3) = *(undefined1 *)(param_5 + 0x67);
    *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_5 + 0x68);
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_4 + 0x30);
    *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_4 + 0x34);
    *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_4 + 0x40);
    uVar3 = *(undefined4 *)(param_4 + 0x44);
    *(undefined4 *)(param_2 + 0x4c) = local_5c;
    *(undefined1 *)(param_2 + 0x58) = 1;
    *(undefined1 *)(param_2 + 0x48) = 1;
    *(undefined4 *)(param_2 + 0x50) = uStack_58;
    *(undefined4 *)(param_2 + 0x60) = 1;
    *(undefined4 *)(param_2 + 0x9c) = uVar3;
    *(undefined4 *)(param_2 + 0x54) = local_54;
  }
  return;
}

