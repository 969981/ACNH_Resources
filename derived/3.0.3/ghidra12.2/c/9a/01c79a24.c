
void FUN_01c79a24(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined4 local_14;
  
  lVar4 = DAT_053512e0;
  cVar3 = (char)param_1[10];
  if ((cVar3 != '\0' && (int)param_1[9] == 2) && (char)param_1[6] != '\0') {
    if (*(char *)(DAT_053512e0 + 0x3f0) != '\0') {
      FUN_01c79754(DAT_053512e0 + 0x288);
      *(undefined1 *)(lVar4 + 0x3f0) = 0;
    }
    if (*(char *)(lVar4 + 0x418) != '\0') {
      if (*(char *)(lVar4 + 0x411) != '\0') {
        *(undefined1 *)(lVar4 + 0x411) = 0;
      }
      *(undefined1 *)(lVar4 + 0x418) = 0;
    }
    if (*(char *)(lVar4 + 0x421) != '\0') {
      *(undefined1 *)(lVar4 + 0x421) = 0;
    }
    cVar3 = (char)param_1[10];
  }
  if (cVar3 != '\0') {
    if (*(uint *)(param_1 + 9) != 0xffffffff) {
      (*(code *)(&PTR_FUN_04a434e0)[*(uint *)(param_1 + 9)])(&uStack_15,param_1 + 1);
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)((long)param_1 + 0x5c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x5c) = 0;
  }
  if ((char)param_1[0x32] != '\0') {
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  if (*(char *)((long)param_1 + 0x19c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x19c) = 0;
  }
  if (*(char *)((long)param_1 + 0x1a4) != '\0') {
    *(undefined1 *)((long)param_1 + 0x1a4) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  if (*(uint *)(param_2 + 0x40) == 0xffffffff) {
    *(undefined1 *)(param_1 + 10) = 1;
  }
  else {
    (*(code *)(&PTR_LAB_04a433b8)[*(uint *)(param_2 + 0x40)])(&uStack_16,param_1 + 1,param_2);
    iVar2 = *(int *)(param_2 + 0x40);
    *(undefined1 *)(param_1 + 10) = 1;
    *(int *)(param_1 + 9) = iVar2;
    if (((iVar2 == 2) && ((char)param_1[6] != '\0')) && (DAT_04c487d4 != -1)) {
      local_14 = 0x20;
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        *(undefined1 *)(*(long *)PTR_DAT_04bb8470 + 0x280) = 1;
      }
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

