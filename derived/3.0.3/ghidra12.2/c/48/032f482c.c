
/* WARNING: Removing unreachable block (ram,0x032f4ba0) */
/* WARNING: Removing unreachable block (ram,0x032f4a04) */
/* WARNING: Removing unreachable block (ram,0x032f4a6c) */
/* WARNING: Removing unreachable block (ram,0x032f4a8c) */
/* WARNING: Removing unreachable block (ram,0x032f4a24) */
/* WARNING: Removing unreachable block (ram,0x032f4bc0) */

undefined8 FUN_032f482c(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined1 auStack_160 [256];
  
  FUN_032f9b60(auStack_160,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_040f115b,
               "njcon.a");
  iVar3 = FUN_032f8e14(auStack_160,param_2 + 0x1228);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  lVar6 = *(long *)(param_2 + 0x1228);
  if (lVar6 == 0) {
    return 0xffffffff;
  }
  *(long *)(param_2 + 0x1230) = lVar6;
  *(long *)(param_2 + 0x1238) = lVar6;
  FUN_032f9b60(auStack_160,"%s/%s_%s_%s_%s.a","content:/Iwnn/rewrite","njuserw",&DAT_0406955f,
               &DAT_040f115b,"cangjie");
  bVar1 = *param_3;
  plVar9 = (long *)(param_2 + (ulong)bVar1 * 0x50 + 0xbe8);
  if (*plVar9 == 0) {
    if ((*DAT_05730eb0 == 0) ||
       (pvVar5 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))
                                   ((long *)*DAT_05730eb0,0xb338,8), pvVar5 == (void *)0x0)) {
      *plVar9 = 0;
      return 0xffffffff;
    }
    uVar8 = 0xb338;
    memset(pvVar5,0,0xb338);
    *plVar9 = (long)pvVar5;
    uVar4 = FUN_00100860(pvVar5,param_1 + 8,0,0xb338);
    if ((uVar4 >> 0xf & 1) != 0) {
      return 0xffffffff;
    }
  }
  else {
    uVar8 = 0;
  }
  *(ushort *)(param_2 + 0x8b38) = (ushort)bVar1;
  *(undefined4 *)(param_2 + 0x8b40) = uVar8;
  lVar6 = (ulong)bVar1 * 0x50;
  *(undefined2 *)(param_2 + lVar6 + 0xc30) = 0;
  *(undefined8 *)(param_2 + lVar6 + 0xbf0) = 0;
  *(undefined8 *)(param_2 + lVar6 + 0xbf8) = 0;
  *(undefined4 *)(param_2 + lVar6 + 0xc20) = 10;
  *(undefined8 *)(param_2 + lVar6 + 0xc00) = 0;
  *(undefined8 *)(param_2 + lVar6 + 0xc08) = 0;
  *(undefined8 *)(param_2 + lVar6 + 0xc10) = 0;
  *(undefined8 *)(param_2 + lVar6 + 0xc18) = 0xc800c8019a019a;
  *(undefined8 *)(param_2 + lVar6 + 0xc28) = 0;
  *param_3 = *param_3 + 1;
  FUN_032f9b60(auStack_160,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_040f115b,
               "cangjie/quick","njcangjie.a");
  puVar2 = PTR_DAT_04bc1118;
  if (*(char *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x16408) == '\0') {
    bVar1 = *param_3;
    puVar7 = param_2 + (ulong)bVar1 * 0x50 + 0xbe8;
    FUN_032f8e14(auStack_160,puVar7);
    *(undefined2 *)(puVar7 + 0x48) = 0;
    *(undefined4 *)(puVar7 + 0x38) = 10;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined8 *)(puVar7 + 0x18) = 0;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x30) = 0x230006401900064;
    if (*DAT_05730eb0 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0x2058,8);
      if (pvVar5 != (void *)0x0) {
        memset(pvVar5,0,0x2058);
      }
    }
    *(void **)(param_2 + (ulong)bVar1 * 0x50 + 0xc28) = pvVar5;
  }
  *param_3 = *param_3 + 1;
  FUN_032f9b60(auStack_160,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_040f115b,
               "cangjie/quick","njexyomi.a");
  if (*(char *)(*(long *)(*(long *)puVar2 + 0x20) + 0x16408) == '\0') {
    bVar1 = *param_3;
    puVar7 = param_2 + (ulong)bVar1 * 0x50 + 0xbe8;
    FUN_032f8e14(auStack_160,puVar7);
    *(undefined2 *)(puVar7 + 0x48) = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined4 *)(puVar7 + 0x38) = 10;
    *(undefined8 *)(puVar7 + 0x18) = 0;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x30) = 0x6400000000000a;
    if (*DAT_05730eb0 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0x2058,8);
      if (pvVar5 != (void *)0x0) {
        memset(pvVar5,0,0x2058);
      }
    }
    *(void **)(param_2 + (ulong)bVar1 * 0x50 + 0xc28) = pvVar5;
  }
  *param_3 = *param_3 + 1;
  *param_2 = 0x32;
  return 0;
}

