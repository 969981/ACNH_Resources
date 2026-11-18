
/* WARNING: Removing unreachable block (ram,0x032f4270) */
/* WARNING: Removing unreachable block (ram,0x032f42d8) */
/* WARNING: Removing unreachable block (ram,0x032f42f8) */
/* WARNING: Removing unreachable block (ram,0x032f4290) */

undefined8
FUN_032f3d64(undefined8 param_1,long param_2,undefined1 *param_3,undefined1 param_4,byte *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined4 local_26c [64];
  undefined1 auStack_16c [256];
  undefined4 local_6c;
  
  FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b,
               "njcon.a");
  iVar2 = FUN_032f8e14(auStack_16c,param_3 + 0x1228);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  lVar5 = *(long *)(param_3 + 0x1228);
  if (lVar5 == 0) {
    return 0xffffffff;
  }
  *(long *)(param_3 + 0x1230) = lVar5;
  *(long *)(param_3 + 0x1238) = lVar5;
  FUN_032f9b60(auStack_16c,"%s/%s_%s_%s_%s.a","content:/Iwnn/rewrite","njuserl",&DAT_0406955f,
               &DAT_0409871b,"bopomofo");
  uVar3 = FUN_032f8738(param_1,param_2,param_3,2,auStack_16c,0,0x1f5,1000,0x1f5,1000,10,0,*param_5);
  if ((uVar3 >> 0xf & 1) == 0) {
    *param_5 = *param_5 + 1;
    FUN_032f9b60(auStack_16c,"%s/%s_%s_%s_%s.a","content:/Iwnn/rewrite","njuserw",&DAT_0406955f,
                 &DAT_0409871b,"bopomofo");
    bVar1 = *param_5;
    plVar9 = (long *)(param_3 + (ulong)bVar1 * 0x50 + 0xbe8);
    if (*plVar9 == 0) {
      if (*DAT_05730eb0 == 0) {
LAB_032f4364:
        *plVar9 = 0;
        return 0xffffffff;
      }
      local_26c[0] = 0;
      pvVar4 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0xb338,8);
      if (pvVar4 == (void *)0x0) goto LAB_032f4364;
      uVar8 = 0xb338;
      memset(pvVar4,0,0xb338);
      *plVar9 = (long)pvVar4;
      uVar3 = FUN_00100860(pvVar4,param_2 + 8,0,0xb338);
      if ((uVar3 >> 0xf & 1) != 0) {
        return 0xffffffff;
      }
    }
    else {
      uVar8 = 0;
    }
    *(ushort *)(param_3 + 0x8b38) = (ushort)bVar1;
    *(undefined4 *)(param_3 + 0x8b40) = uVar8;
    lVar5 = (ulong)bVar1 * 0x50;
    *(undefined2 *)(param_3 + lVar5 + 0xc30) = 0;
    *(undefined8 *)(param_3 + lVar5 + 0xbf0) = 0;
    *(undefined8 *)(param_3 + lVar5 + 0xbf8) = 0;
    *(undefined8 *)(param_3 + lVar5 + 0xc00) = 0;
    *(undefined8 *)(param_3 + lVar5 + 0xc08) = 0;
    *(undefined8 *)(param_3 + lVar5 + 0xc10) = 0;
    *(undefined8 *)(param_3 + lVar5 + 0xc18) = 0xc800c8019a019a;
    *(undefined4 *)(param_3 + lVar5 + 0xc20) = 10;
    *(undefined8 *)(param_3 + lVar5 + 0xc28) = 0;
    *param_5 = *param_5 + 1;
    FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b,
                 "bopomofo","njubase1.a");
    FUN_032f9b60(local_26c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b,
                 "bopomofo","keisei/njubase1.ad1");
    uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,local_26c,100,400,100,0x230,10,0,
                         *param_5);
    if ((uVar3 >> 0xf & 1) == 0) {
      *param_5 = *param_5 + 1;
      FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b,
                   "bopomofo","njubase2.a");
      FUN_032f9b60(local_26c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b,
                   "bopomofo","keisei/njubase2.ad1");
      uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,local_26c,100,400,100,0x230,10,0,
                           *param_5);
      if ((uVar3 >> 0xf & 1) == 0) {
        *param_5 = *param_5 + 1;
        FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b
                     ,"bopomofo","njtan.a");
        FUN_032f9b60(local_26c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b,
                     "bopomofo","keisei/njtan.ad1");
        uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,local_26c,100,400,0x23a,800,10,0,
                             *param_5);
        if ((uVar3 >> 0xf & 1) == 0) {
          *param_5 = *param_5 + 1;
          FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,
                       &DAT_0409871b,"bopomofo","njexyomi.a");
          FUN_032f9b60(local_26c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b
                       ,"bopomofo","keisei/njexyomi.ad1");
          if (*(char *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x16408) == '\0') {
            uVar7 = (ulong)*param_5;
            puVar6 = param_3 + uVar7 * 0x50 + 0xbe8;
            FUN_032f8e14(auStack_16c,puVar6);
            *(undefined2 *)(puVar6 + 0x48) = 0;
            *(undefined8 *)(puVar6 + 8) = 0;
            *(undefined8 *)(puVar6 + 0x10) = 0;
            *(undefined8 *)(puVar6 + 0x18) = 0;
            iVar2 = FUN_032f8e14(local_26c,puVar6 + 0x20);
            if (iVar2 < 0) {
              *(undefined8 *)(puVar6 + 0x20) = 0;
            }
            lVar5 = uVar7 * 0x50;
            *(undefined8 *)(param_3 + lVar5 + 0xc10) = 0;
            *(undefined8 *)(param_3 + lVar5 + 0xc18) = 0x6400000000000a;
            *(undefined4 *)(param_3 + lVar5 + 0xc20) = 10;
            if (*DAT_05730eb0 == 0) {
              pvVar4 = (void *)0x0;
            }
            else {
              local_6c = 0;
              pvVar4 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))
                                         ((long *)*DAT_05730eb0,0x2058,8);
              if (pvVar4 != (void *)0x0) {
                memset(pvVar4,0,0x2058);
              }
            }
            *(void **)(param_3 + uVar7 * 0x50 + 0xc28) = pvVar4;
          }
          *param_5 = *param_5 + 1;
          *param_3 = param_4;
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

