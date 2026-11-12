
bool FUN_006df0f0(long param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  long lVar9;
  undefined4 *__dest;
  undefined4 *__src;
  long *plVar10;
  undefined8 *puVar11;
  
  iVar4 = *(int *)(param_1 + 0xe8);
  iVar5 = *(int *)(param_1 + 0xec);
  if (iVar4 < iVar5) {
    puVar11 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xf8) = *puVar11;
    }
    *(undefined4 *)(puVar11 + 1) = 0;
    __dest = (undefined4 *)((long)puVar11 + 0x34);
    *(undefined1 *)__dest = 0;
    puVar11[5] = __dest;
    puVar11[2] = 0;
    *(undefined4 *)(puVar11 + 6) = 0x31;
    *(undefined1 *)((long)puVar11 + 100) = 0;
    puVar1 = PTR_DAT_04bb2a58 + 0x10;
    *(undefined1 *)((long)puVar11 + 0x6a) = 0;
    *(undefined2 *)(puVar11 + 0xd) = 0;
    *(undefined4 *)puVar11 = 0;
    *(undefined4 *)(puVar11 + 0xe) = 0;
    puVar11[3] = 0;
    puVar11[4] = puVar1;
    if (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0xec)) {
      *(undefined8 **)(*(long *)(param_1 + 0xf0) + (long)*(int *)(param_1 + 0xe8) * 8) = puVar11;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      __dest = (undefined4 *)puVar11[5];
    }
    *(undefined4 *)puVar11 = 2;
    *(undefined4 *)(puVar11 + 1) = *param_2;
    uVar6 = *(undefined8 *)(param_2 + 4);
    puVar11[2] = *(undefined8 *)(param_2 + 2);
    puVar11[3] = uVar6;
    plVar10 = (long *)(param_2 + 6);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    __src = *(undefined4 **)(param_2 + 8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_2 + 6) + 0x18))(plVar10);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 8) + lVar9) == '\0') goto LAB_006df23c;
        lVar2 = *(long *)(param_2 + 8) + lVar9;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_006df23c;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_006df23c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_006df23c:
      iVar3 = (int)lVar9;
      if (*(int *)(puVar11 + 6) <= (int)lVar9) {
        iVar3 = *(int *)(puVar11 + 6) + -1;
      }
      memcpy(__dest,__src,(long)iVar3);
      *(undefined1 *)((long)__dest + (long)iVar3) = 0;
    }
    uVar8 = *(undefined2 *)(param_2 + 0x18);
    uVar7 = *(undefined1 *)((long)param_2 + 0x62);
    *(undefined4 *)(puVar11 + 0xe) = param_3;
    *(undefined1 *)((long)puVar11 + 0x6a) = uVar7;
    *(undefined2 *)(puVar11 + 0xd) = uVar8;
  }
  return iVar4 < iVar5;
}

