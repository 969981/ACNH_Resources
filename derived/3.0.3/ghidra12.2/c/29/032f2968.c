
/* WARNING: Removing unreachable block (ram,0x032f2dd0) */
/* WARNING: Removing unreachable block (ram,0x032f2e38) */
/* WARNING: Removing unreachable block (ram,0x032f2e5c) */
/* WARNING: Removing unreachable block (ram,0x032f2df0) */

undefined8 FUN_032f2968(undefined8 param_1,long param_2,undefined1 *param_3,byte *param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_16c [256];
  undefined4 local_6c;
  
  FUN_032f9b60(auStack_16c,"%s/%s/%s","content://Swkbd/Iwnn",&DAT_040ad259,"njcon.a");
  iVar3 = FUN_032f8e14(auStack_16c,param_3 + 0x1228);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  lVar6 = *(long *)(param_3 + 0x1228);
  if (lVar6 == 0) {
    return 0xffffffff;
  }
  *(long *)(param_3 + 0x1230) = lVar6;
  *(long *)(param_3 + 0x1238) = lVar6;
  FUN_032f9b60(auStack_16c,"%s/%s_%s.a","content:/Iwnn/rewrite","njuserl",&DAT_040ad259);
  uVar4 = FUN_032f8738(param_1,param_2,param_3,2,auStack_16c,0,0x1f5,1000,0x1f5,1000,10,0,*param_4);
  if ((uVar4 >> 0xf & 1) != 0) {
    return 0xffffffff;
  }
  *param_4 = *param_4 + 1;
  FUN_032f9b60(auStack_16c,"%s/%s_%s.a","content:/Iwnn/rewrite","njuserw",&DAT_040ad259);
  bVar1 = *param_4;
  plVar7 = (long *)(param_3 + (ulong)bVar1 * 0x50 + 0xbe8);
  if (*plVar7 == 0) {
    if (*DAT_05730eb0 != 0) {
      local_6c = 0;
      pvVar5 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0xb338,8);
      if (pvVar5 != (void *)0x0) {
        uVar9 = 0xb338;
        memset(pvVar5,0,0xb338);
        *plVar7 = (long)pvVar5;
        uVar4 = FUN_00100860(pvVar5,param_2 + 8,0,0xb338);
        if ((uVar4 >> 0xf & 1) != 0) {
          return 0xffffffff;
        }
        goto LAB_032f2aa8;
      }
    }
    *plVar7 = 0;
  }
  else {
    uVar9 = 0;
LAB_032f2aa8:
    *(ushort *)(param_3 + 0x8b38) = (ushort)bVar1;
    *(undefined4 *)(param_3 + 0x8b40) = uVar9;
    lVar6 = (ulong)bVar1 * 0x50;
    *(undefined2 *)(param_3 + lVar6 + 0xc30) = 0;
    *(undefined8 *)(param_3 + lVar6 + 0xbf0) = 0;
    *(undefined8 *)(param_3 + lVar6 + 0xbf8) = 0;
    *(undefined4 *)(param_3 + lVar6 + 0xc20) = 10;
    *(undefined8 *)(param_3 + lVar6 + 0xc00) = 0;
    *(undefined8 *)(param_3 + lVar6 + 0xc08) = 0;
    *(undefined8 *)(param_3 + lVar6 + 0xc10) = 0;
    *(undefined8 *)(param_3 + lVar6 + 0xc18) = 0xc800c8019a019a;
    *(undefined8 *)(param_3 + lVar6 + 0xc28) = 0;
    *param_4 = *param_4 + 1;
    FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_040ad259,&DAT_04073be8,
                 "njubase1.a");
    uVar4 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,400,0x226,100,0x230,400,500,
                         *param_4);
    if ((uVar4 >> 0xf & 1) == 0) {
      *param_4 = *param_4 + 1;
      FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_040ad259,&DAT_04073be8,
                   "njubase2.a");
      uVar4 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,400,0x226,100,0x230,400,500,
                           *param_4);
      if ((uVar4 >> 0xf & 1) == 0) {
        *param_4 = *param_4 + 1;
        FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_040ad259,&DAT_04073be8,
                     "njfzk.a");
        puVar2 = PTR_DAT_04bc1118;
        if (*(char *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x16408) == '\0') {
          puVar8 = param_3 + (ulong)*param_4 * 0x50 + 0xbe8;
          FUN_032f8e14(auStack_16c,puVar8);
          *(undefined2 *)(puVar8 + 0x48) = 0;
          *(undefined8 *)(puVar8 + 8) = 0;
          *(undefined8 *)(puVar8 + 0x10) = 0;
          *(undefined8 *)(puVar8 + 0x40) = 0;
          *(undefined8 *)(puVar8 + 0x28) = 0;
          *(undefined8 *)(puVar8 + 0x30) = 0xa01f40190;
          *(undefined4 *)(puVar8 + 0x38) = 0x1f40190;
          *(undefined8 *)(puVar8 + 0x18) = 0;
          *(undefined8 *)(puVar8 + 0x20) = 0;
        }
        *param_4 = *param_4 + 1;
        FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_040ad259,&DAT_04073be8,
                     "njtan.a");
        if (*(char *)(*(long *)(*(long *)puVar2 + 0x20) + 0x16408) == '\0') {
          puVar8 = param_3 + (ulong)*param_4 * 0x50 + 0xbe8;
          FUN_032f8e14(auStack_16c,puVar8);
          *(undefined2 *)(puVar8 + 0x48) = 0;
          *(undefined8 *)(puVar8 + 8) = 0;
          *(undefined8 *)(puVar8 + 0x10) = 0;
          *(undefined8 *)(puVar8 + 0x28) = 0;
          *(undefined2 *)(puVar8 + 0x30) = 0;
          *(undefined8 *)(puVar8 + 0x32) = 0xa000a;
          *(undefined2 *)(puVar8 + 0x3a) = 10;
          *(undefined8 *)(puVar8 + 0x40) = 0;
          *(undefined8 *)(puVar8 + 0x18) = 0;
          *(undefined8 *)(puVar8 + 0x20) = 0;
        }
        *param_4 = *param_4 + 1;
        FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_040ad259,&DAT_04073be8,
                     "njexyomi.a");
        if (*(char *)(*(long *)(*(long *)puVar2 + 0x20) + 0x16408) == '\0') {
          bVar1 = *param_4;
          puVar8 = param_3 + (ulong)bVar1 * 0x50 + 0xbe8;
          FUN_032f8e14(auStack_16c,puVar8);
          *(undefined2 *)(puVar8 + 0x48) = 0;
          *(undefined8 *)(puVar8 + 8) = 0;
          *(undefined8 *)(puVar8 + 0x10) = 0;
          *(undefined4 *)(puVar8 + 0x38) = 10;
          *(undefined8 *)(puVar8 + 0x18) = 0;
          *(undefined8 *)(puVar8 + 0x20) = 0;
          *(undefined8 *)(puVar8 + 0x28) = 0;
          *(undefined8 *)(puVar8 + 0x30) = 0xf400640000000a;
          if (*DAT_05730eb0 == 0) {
            pvVar5 = (void *)0x0;
          }
          else {
            local_6c = 0;
            pvVar5 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))
                                       ((long *)*DAT_05730eb0,0x2058,8);
            if (pvVar5 != (void *)0x0) {
              memset(pvVar5,0,0x2058);
            }
          }
          *(void **)(param_3 + (ulong)bVar1 * 0x50 + 0xc28) = pvVar5;
        }
        bVar1 = *param_4;
        *param_4 = bVar1 + 1;
        param_3[(ulong)(byte)(bVar1 + 1) * 0x50 + 0xc30] = 1;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xbf0) = 0;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xbf8) = 0;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc00) = 0;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc08) = 0;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc10) = 0;
        *(undefined **)(param_3 + (ulong)*param_4 * 0x50 + 0xbe8) = PTR_LAB_04bc96e8;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc18) = 0;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc1a) = 0;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc1c) = 10;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc1e) = 0;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc20) = 10;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc22) = 0;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc28) = 0;
        param_3[(ulong)*param_4 * 0x50 + 0xc31] = 0;
        bVar1 = *param_4;
        *param_4 = bVar1 + 1;
        param_3[(ulong)(byte)(bVar1 + 1) * 0x50 + 0xc30] = 1;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xbf0) = 0;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xbf8) = 0;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc00) = 0;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc08) = 0;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc10) = 0;
        *(undefined **)(param_3 + (ulong)*param_4 * 0x50 + 0xbe8) = PTR_LAB_04bc96f0;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc18) = 10;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc1a) = 0;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc1c) = 0x3b6;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc1e) = 1000;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc20) = 10;
        *(undefined2 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc22) = 0;
        *(undefined8 *)(param_3 + (ulong)*param_4 * 0x50 + 0xc28) = 0;
        param_3[(ulong)*param_4 * 0x50 + 0xc31] = 0;
        *param_4 = *param_4 + 1;
        *param_3 = 1;
        return 0;
      }
    }
  }
  return 0xffffffff;
}

