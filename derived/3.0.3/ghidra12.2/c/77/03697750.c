
bool FUN_03697750(undefined2 *param_1,long param_2,uint *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  void *__src;
  long *plVar7;
  
  lVar3 = DAT_05abbc58;
  if (DAT_05abbc58 != 0) {
    *param_1 = *(undefined2 *)(param_2 + 0x38);
    uVar4 = FUN_03688ad0(*(undefined4 *)(param_2 + 0xd8));
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xd8);
    *(char *)(param_1 + 0x24) = (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) << 3;
    *(byte *)(param_1 + 0x24) =
         *(byte *)(param_2 + 0x114) >> 3 & 0x10 |
         (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) << 3;
    __dest = *(void **)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)PTR_DAT_04bb3238;
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x3c);
    plVar7 = (long *)(param_2 + 0x10);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    __src = *(void **)(param_2 + 0x18);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(plVar7);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 0x18) + lVar5) == '\0') goto LAB_0369786c;
        lVar1 = *(long *)(param_2 + 0x18) + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0369786c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0369786c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0369786c:
      iVar2 = (int)lVar5;
      if (*(int *)(param_1 + 0xc) <= (int)lVar5) {
        iVar2 = *(int *)(param_1 + 0xc) + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
    uVar4 = FUN_03722560(lVar3,param_1 + 4);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined4 *)(param_1 + 0x2a) = 0;
    *(undefined4 *)(param_1 + 0x1e) = 5;
    if (0 < (int)*param_3) {
      uVar6 = 0;
      do {
        if (**(int **)(*(long *)(param_3 + 2) + uVar6 * 8) == *(int *)(param_1 + 0x18)) {
          *(int *)(param_1 + 0x1e) = (int)uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (*param_3 != uVar6);
    }
  }
  return lVar3 != 0;
}

