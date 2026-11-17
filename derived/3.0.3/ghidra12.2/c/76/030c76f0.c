
void FUN_030c76f0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  void *__dest;
  void *__src;
  long *plVar7;
  long lVar8;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar4 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar5 = *(byte *)(param_3 + 0xe);
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar5;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  *param_1 = (long)&PTR_LAB_04afd800;
  param_1[0x46] = (long)&LAB_030c78c8;
  param_1[0x3e] = -1;
  param_1[0x43] = 0;
  param_1[0x45] = (long)param_1;
  param_1[0x47] = 0;
  param_1[0x44] = (long)&PTR_LAB_04afda18;
  param_1[0x49] = -1;
  puVar1 = PTR_DAT_04bc8e10 + 0x10;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4d] = -1;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = -1;
  param_1[0x48] = (long)puVar1;
  param_1[0x4c] = (long)puVar1;
  if (param_3 != 0) {
    param_1[0x43] = *(long *)(param_3 + 0x18);
    lVar8 = *(long *)(param_3 + 0x20);
    param_1[0x42] = lVar8;
    if (lVar8 != 0) {
      __dest = *(void **)(lVar8 + 0x240);
      plVar7 = (long *)(param_3 + 0x28);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      __src = *(void **)(param_3 + 0x30);
      if (__dest != __src) {
        (**(code **)(*(long *)(param_3 + 0x28) + 0x18))(plVar7);
        lVar6 = 0;
        do {
          if (*(char *)(*(long *)(param_3 + 0x30) + lVar6) == '\0') goto LAB_030c788c;
          lVar2 = *(long *)(param_3 + 0x30) + lVar6;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_030c788c;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_030c788c;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_030c788c:
        iVar3 = (int)lVar6;
        if (*(int *)(lVar8 + 0x248) <= (int)lVar6) {
          iVar3 = *(int *)(lVar8 + 0x248) + -1;
        }
        memcpy(__dest,__src,(long)iVar3);
        *(undefined1 *)((long)__dest + (long)iVar3) = 0;
      }
    }
  }
  return;
}

