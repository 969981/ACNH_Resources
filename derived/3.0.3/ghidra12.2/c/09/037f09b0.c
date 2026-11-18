
undefined8
FUN_037f09b0(long param_1,long *param_2,undefined4 *param_3,byte param_4,undefined4 param_5,
            undefined8 param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 *__src;
  long lVar7;
  undefined1 *__dest;
  uint uVar8;
  long lVar9;
  long *plVar10;
  
  iVar3 = *(int *)(param_1 + 0x1c0);
  iVar4 = *(int *)(param_1 + 0x1b8);
  if (iVar4 <= iVar3) {
    return 0;
  }
  lVar9 = *(long *)(param_1 + 0x1b0);
  *(int *)(param_1 + 0x1c0) = iVar3 + 1;
  if (lVar9 == 0) {
    uVar6 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1bc) + iVar3;
    iVar2 = 0;
    if (iVar4 <= iVar3) {
      iVar2 = iVar4;
    }
    iVar3 = iVar3 - iVar2;
    plVar10 = (long *)(lVar9 + (long)iVar3 * 0xd0);
    *plVar10 = param_2[2];
    *(int *)(plVar10 + 1) = (int)param_2[3];
    *(undefined4 *)((long)plVar10 + 0xc) = *(undefined4 *)((long)param_2 + 0x1c);
    *(int *)(plVar10 + 2) = (int)param_2[4];
    (**(code **)(*param_2 + 0x18))(param_2);
    __dest = (undefined1 *)plVar10[3];
    __src = (undefined1 *)param_2[1];
    if (__dest != __src) {
      lVar7 = 0;
      do {
        pcVar1 = __src + lVar7;
        lVar7 = lVar7 + 1;
      } while (*pcVar1 != '\0');
      uVar8 = (int)lVar7 - 1;
      if (*(int *)((long)plVar10 + 0x24) <= (int)uVar8) {
        uVar8 = *(int *)((long)plVar10 + 0x24) - 1;
      }
      if ((int)uVar8 < 1) {
        uVar8 = 0;
      }
      else {
        memcpy(__dest,__src,(ulong)uVar8);
        __dest = __dest + uVar8;
      }
      *__dest = 0;
      *(uint *)(plVar10 + 4) = uVar8;
    }
    uVar6 = 1;
    lVar9 = lVar9 + (long)iVar3 * 0xd0;
    *(undefined1 *)(lVar9 + 0xa8) = 1;
    *(undefined4 *)(lVar9 + 0xac) = param_3[2];
    *(undefined1 *)(lVar9 + 0xb0) = *(undefined1 *)(param_3 + 3);
    *(undefined4 *)(lVar9 + 0xb4) = *param_3;
    *(undefined4 *)(lVar9 + 0xb8) = param_3[1];
    uVar5 = param_3[4];
    *(undefined8 *)(lVar9 + 0xc0) = param_6;
    *(byte *)(lVar9 + 0xa9) = param_4 & 1;
    *(undefined4 *)(lVar9 + 200) = param_5;
    *(undefined4 *)(lVar9 + 0xbc) = uVar5;
  }
  return uVar6;
}

