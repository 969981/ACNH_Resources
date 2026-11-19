
void FUN_03be6580(long *param_1,void *param_2,uint param_3,long *param_4)

{
  void *__dest;
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  size_t __size;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar2 = PTR_DAT_04bcad48;
  __dest = (void *)((long)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 3) = 0x40;
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  param_1[2] = (long)__dest;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)puVar1;
  if (__dest != param_2) {
    lVar6 = 0;
    do {
      if (*(char *)((long)param_2 + lVar6) == '\0') goto LAB_03be6620;
      if (*(char *)((long)param_2 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03be6620;
      }
      if (*(char *)((long)param_2 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03be6620;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03be6620:
    iVar5 = (int)lVar6;
    if (0x3e < iVar5) {
      iVar5 = 0x3f;
    }
    memcpy(__dest,param_2,(long)iVar5);
    *(undefined1 *)((long)__dest + (long)iVar5) = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(uint *)((long)param_1 + 0x6c) = param_3;
  *param_1 = (long)&PTR_FUN_04b7bb20;
  param_1[1] = (long)(puVar1 + 0x10);
  __size = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4;
  if ((int)param_3 < 0) {
    __size = 0xffffffffffffffff;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(__size);
  }
  else {
    if (param_4 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar4 = (undefined8 *)(lVar6 + 8);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_4 = (long *)*puVar4;
      if (param_4 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto joined_r0x03be6768;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*param_4 + 0x30))(param_4,__size,8);
  }
joined_r0x03be6768:
  if (param_3 != 0) {
    uVar8 = (ulong)(int)param_3;
    uVar9 = uVar8 & 3;
    puVar7 = puVar4;
    if (uVar9 != 0) {
      do {
        *puVar7 = 0;
        uVar9 = uVar9 - 1;
        *(undefined4 *)(puVar7 + 1) = 0xffffffff;
        puVar7 = puVar7 + 2;
      } while (uVar9 != 0);
    }
    if (2 < (uVar8 - 1 & 0xfffffffffffffff)) {
      do {
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0xffffffff;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + 3) = 0xffffffff;
        puVar7[4] = 0;
        *(undefined4 *)(puVar7 + 5) = 0xffffffff;
        puVar7[6] = 0;
        *(undefined4 *)(puVar7 + 7) = 0xffffffff;
        puVar7 = puVar7 + 8;
      } while (puVar7 != puVar4 + uVar8 * 2);
    }
  }
  param_1[0xe] = (long)puVar4;
  return;
}

