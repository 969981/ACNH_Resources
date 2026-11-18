
/* WARNING: Removing unreachable block (ram,0x032f4794) */
/* WARNING: Removing unreachable block (ram,0x032f45f8) */
/* WARNING: Removing unreachable block (ram,0x032f4660) */
/* WARNING: Removing unreachable block (ram,0x032f4680) */
/* WARNING: Removing unreachable block (ram,0x032f4618) */
/* WARNING: Removing unreachable block (ram,0x032f47b4) */

undefined8 FUN_032f4398(undefined8 param_1,long param_2,undefined1 *param_3,byte *param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined1 auStack_164 [256];
  undefined4 local_64;
  
  FUN_032f9b60(auStack_164,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_040f115b,
               "njcon.a");
  iVar3 = FUN_032f8e14(auStack_164,param_3 + 0x1228);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  lVar7 = *(long *)(param_3 + 0x1228);
  if (lVar7 == 0) {
    return 0xffffffff;
  }
  *(long *)(param_3 + 0x1230) = lVar7;
  *(long *)(param_3 + 0x1238) = lVar7;
  FUN_032f9b60(auStack_164,"%s/%s_%s_%s_%s.a","content:/Iwnn/rewrite","njuserl",&DAT_0406955f,
               &DAT_040f115b,"cangjie");
  uVar4 = FUN_032f8738(param_1,param_2,param_3,5,auStack_164,0,0x1f5,1000,0x1f5,1000,10,0,*param_4);
  if ((uVar4 >> 0xf & 1) != 0) {
    return 0xffffffff;
  }
  *param_4 = *param_4 + 1;
  FUN_032f9b60(auStack_164,"%s/%s_%s_%s_%s.a","content:/Iwnn/rewrite","njuserw",&DAT_0406955f,
               &DAT_040f115b,"cangjie");
  bVar1 = *param_4;
  plVar10 = (long *)(param_3 + (ulong)bVar1 * 0x50 + 0xbe8);
  if (*plVar10 == 0) {
    if (*DAT_05730eb0 != 0) {
      local_64 = 0;
      pvVar5 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0xb338,8);
      if (pvVar5 != (void *)0x0) {
        uVar9 = 0xb338;
        memset(pvVar5,0,0xb338);
        *plVar10 = (long)pvVar5;
        uVar4 = FUN_00100860(pvVar5,param_2 + 8,0,0xb338);
        if ((uVar4 >> 0xf & 1) != 0) {
          return 0xffffffff;
        }
        goto LAB_032f4500;
      }
    }
    *plVar10 = 0;
    uVar6 = 0xffffffff;
  }
  else {
    uVar9 = 0;
LAB_032f4500:
    *(ushort *)(param_3 + 0x8b38) = (ushort)bVar1;
    *(undefined4 *)(param_3 + 0x8b40) = uVar9;
    lVar7 = (ulong)bVar1 * 0x50;
    *(undefined2 *)(param_3 + lVar7 + 0xc30) = 0;
    *(undefined8 *)(param_3 + lVar7 + 0xbf0) = 0;
    *(undefined8 *)(param_3 + lVar7 + 0xbf8) = 0;
    *(undefined4 *)(param_3 + lVar7 + 0xc20) = 10;
    *(undefined8 *)(param_3 + lVar7 + 0xc00) = 0;
    *(undefined8 *)(param_3 + lVar7 + 0xc08) = 0;
    *(undefined8 *)(param_3 + lVar7 + 0xc10) = 0;
    *(undefined8 *)(param_3 + lVar7 + 0xc18) = 0xc800c8019a019a;
    *(undefined8 *)(param_3 + lVar7 + 0xc28) = 0;
    *param_4 = *param_4 + 1;
    FUN_032f9b60(auStack_164,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_040f115b,
                 "cangjie","njcangjie.a");
    puVar2 = PTR_DAT_04bc1118;
    if (*(char *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x16408) == '\0') {
      bVar1 = *param_4;
      puVar8 = param_3 + (ulong)bVar1 * 0x50 + 0xbe8;
      FUN_032f8e14(auStack_164,puVar8);
      *(undefined2 *)(puVar8 + 0x48) = 0;
      *(undefined4 *)(puVar8 + 0x38) = 10;
      *(undefined8 *)(puVar8 + 8) = 0;
      *(undefined8 *)(puVar8 + 0x10) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      *(undefined8 *)(puVar8 + 0x20) = 0;
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + 0x30) = 0x230006401900064;
      local_64 = 0;
      if (*DAT_05730eb0 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        local_64 = 0;
        pvVar5 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))
                                   ((long *)*DAT_05730eb0,0x2058,8);
        if (pvVar5 != (void *)0x0) {
          memset(pvVar5,0,0x2058);
        }
      }
      *(void **)(param_3 + (ulong)bVar1 * 0x50 + 0xc28) = pvVar5;
    }
    *param_4 = *param_4 + 1;
    FUN_032f9b60(auStack_164,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_040f115b,
                 "cangjie","njexyomi.a");
    if (*(char *)(*(long *)(*(long *)puVar2 + 0x20) + 0x16408) == '\0') {
      bVar1 = *param_4;
      puVar8 = param_3 + (ulong)bVar1 * 0x50 + 0xbe8;
      FUN_032f8e14(auStack_164,puVar8);
      *(undefined2 *)(puVar8 + 0x48) = 0;
      *(undefined8 *)(puVar8 + 8) = 0;
      *(undefined8 *)(puVar8 + 0x10) = 0;
      *(undefined4 *)(puVar8 + 0x38) = 10;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      *(undefined8 *)(puVar8 + 0x20) = 0;
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + 0x30) = 0x6400000000000a;
      if (*DAT_05730eb0 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        local_64 = 0;
        pvVar5 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))
                                   ((long *)*DAT_05730eb0,0x2058,8);
        if (pvVar5 != (void *)0x0) {
          memset(pvVar5,0,0x2058);
        }
      }
      *(void **)(param_3 + (ulong)bVar1 * 0x50 + 0xc28) = pvVar5;
    }
    uVar6 = 0;
    *param_4 = *param_4 + 1;
    *param_3 = 0x31;
  }
  return uVar6;
}

