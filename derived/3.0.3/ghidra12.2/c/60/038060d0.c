
undefined8 FUN_038060d0(long param_1,long *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *__src;
  long lVar5;
  undefined1 *__dest;
  uint uVar6;
  undefined1 *puVar7;
  
  iVar3 = *(int *)(param_1 + 0x1c0);
  iVar4 = *(int *)(param_1 + 0x1b8);
  if (iVar3 < iVar4) {
    *(int *)(param_1 + 0x1c0) = iVar3 + 1;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      iVar3 = *(int *)(param_1 + 0x1bc) + iVar3;
      iVar2 = 0;
      if (iVar4 <= iVar3) {
        iVar2 = iVar4;
      }
      puVar7 = (undefined1 *)(*(long *)(param_1 + 0x1b0) + (long)(iVar3 - iVar2) * 0xb0);
      *puVar7 = *(undefined1 *)((long)param_2 + 0x24);
      *(long *)(puVar7 + 8) = param_2[2];
      *(int *)(puVar7 + 0x10) = (int)param_2[3];
      *(undefined4 *)(puVar7 + 0x14) = *(undefined4 *)((long)param_2 + 0x1c);
      *(int *)(puVar7 + 0x18) = (int)param_2[4];
      (**(code **)(*param_2 + 0x18))(param_2);
      __dest = *(undefined1 **)(puVar7 + 0x20);
      __src = (undefined1 *)param_2[1];
      if (__dest != __src) {
        lVar5 = 0;
        do {
          pcVar1 = __src + lVar5;
          lVar5 = lVar5 + 1;
        } while (*pcVar1 != '\0');
        uVar6 = (int)lVar5 - 1;
        if (*(int *)(puVar7 + 0x2c) <= (int)uVar6) {
          uVar6 = *(int *)(puVar7 + 0x2c) - 1;
        }
        if ((int)uVar6 < 1) {
          uVar6 = 0;
        }
        else {
          memcpy(__dest,__src,(ulong)uVar6);
          __dest = __dest + uVar6;
        }
        *__dest = 0;
        *(uint *)(puVar7 + 0x28) = uVar6;
      }
      return 1;
    }
  }
  return 0;
}

