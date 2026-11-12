
bool FUN_006d7f90(long param_1,undefined4 *param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *__dest;
  undefined4 *__src;
  long *plVar7;
  undefined8 *puVar8;
  
  iVar3 = *(int *)(param_1 + 0xb0);
  iVar4 = *(int *)(param_1 + 0xb4);
  if (iVar3 < iVar4) {
    puVar8 = *(undefined8 **)(param_1 + 0xc0);
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xc0) = *puVar8;
    }
    *(undefined4 *)(puVar8 + 1) = 0;
    *(undefined1 *)(puVar8 + 3) = 0;
    puVar8[2] = 0;
    __dest = (undefined4 *)((long)puVar8 + 0x34);
    *(undefined1 *)__dest = 0;
    *(undefined4 *)(puVar8 + 6) = 0x31;
    *(undefined1 *)((long)puVar8 + 100) = 0;
    puVar8[4] = PTR_DAT_04bb2a58 + 0x10;
    puVar8[5] = __dest;
    memset(puVar8 + 0xe,0,0x1cb8);
    *(undefined4 *)puVar8 = 0;
    *(undefined4 *)(puVar8 + 0xd) = 0;
    if (*(int *)(param_1 + 0xb0) < *(int *)(param_1 + 0xb4)) {
      *(undefined8 **)(*(long *)(param_1 + 0xb8) + (long)*(int *)(param_1 + 0xb0) * 8) = puVar8;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      __dest = (undefined4 *)puVar8[5];
    }
    *(undefined4 *)puVar8 = 1;
    *(undefined4 *)(puVar8 + 1) = *param_2;
    uVar5 = *(undefined8 *)(param_2 + 2);
    *(undefined1 *)(puVar8 + 3) = *(undefined1 *)(param_2 + 4);
    puVar8[2] = uVar5;
    plVar7 = (long *)(param_2 + 6);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    __src = *(undefined4 **)(param_2 + 8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_2 + 6) + 0x18))(plVar7);
      lVar6 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 8) + lVar6) == '\0') goto LAB_006d80e0;
        lVar1 = *(long *)(param_2 + 8) + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_006d80e0;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_006d80e0;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_006d80e0:
      iVar2 = (int)lVar6;
      if (*(int *)(puVar8 + 6) <= (int)lVar6) {
        iVar2 = *(int *)(puVar8 + 6) + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    *(undefined4 *)(puVar8 + 0xd) = param_3;
  }
  return iVar3 < iVar4;
}

