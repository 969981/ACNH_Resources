
undefined8 *
FUN_03c0ceb0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,undefined4 param_5,
            long *param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *__dest;
  void *__dest_00;
  void *__src;
  undefined1 *__src_00;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar3 = (**(code **)(*param_6 + 0x30))(param_6,param_4,param_5);
  uVar4 = FUN_03c0c9c0(uVar3,uVar3,&local_60,param_2,param_3,param_4);
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    if (DAT_05ae7600 == 0) {
      puVar5 = malloc(0x98);
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*param_6 + 0x30))(param_6,0x98,8);
    }
    *(undefined4 *)(puVar5 + 6) = 0x20;
    __dest = (undefined1 *)((long)puVar5 + 0x34);
    *__dest = 0;
    *(undefined1 *)((long)puVar5 + 0x6c) = 0;
    *puVar5 = uVar3;
    puVar5[1] = param_4;
    *(undefined4 *)(puVar5 + 0xd) = 0x20;
    *(undefined1 *)((long)puVar5 + 0x53) = 0;
    *(undefined1 *)((long)puVar5 + 0x8b) = 0;
    *(undefined1 *)(puVar5 + 0x12) = 0;
    puVar5[4] = &PTR_LAB_048f9700;
    puVar5[5] = __dest;
    puVar5[0xb] = &PTR_LAB_048f9700;
    puVar5[0xc] = (undefined1 *)((long)puVar5 + 0x6c);
    puVar5[2] = local_60;
    puVar5[3] = uStack_58;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src_00 = (undefined1 *)param_2[1];
    if (__dest != __src_00) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_03c0d01c;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_03c0d01c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_03c0d01c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_03c0d01c:
      iVar2 = (int)lVar6;
      if (*(int *)(puVar5 + 6) <= (int)lVar6) {
        iVar2 = *(int *)(puVar5 + 6) + -1;
      }
      memcpy(__dest,__src_00,(long)iVar2);
      __dest[iVar2] = 0;
    }
    __dest_00 = (void *)puVar5[0xc];
    (**(code **)(*param_3 + 0x18))(param_3);
    __src = (void *)param_3[1];
    if (__dest_00 != __src) {
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar6 = 0;
      do {
        if (*(char *)(param_3[1] + lVar6) == '\0') goto LAB_03c0d0bc;
        lVar1 = param_3[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_03c0d0bc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_03c0d0bc;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_03c0d0bc:
      iVar2 = (int)lVar6;
      if (*(int *)(puVar5 + 0xd) <= (int)lVar6) {
        iVar2 = *(int *)(puVar5 + 0xd) + -1;
      }
      memcpy(__dest_00,__src,(long)iVar2);
      *(undefined1 *)((long)__dest_00 + (long)iVar2) = 0;
    }
    *(undefined1 *)(puVar5 + 0x12) = 0;
  }
  return puVar5;
}

