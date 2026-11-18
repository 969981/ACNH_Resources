
/* WARNING: Removing unreachable block (ram,0x032f3bb0) */
/* WARNING: Removing unreachable block (ram,0x032f3c18) */
/* WARNING: Removing unreachable block (ram,0x032f3c38) */
/* WARNING: Removing unreachable block (ram,0x032f3bd0) */

undefined8
FUN_032f3838(undefined8 param_1,long param_2,undefined1 *param_3,undefined1 param_4,byte *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  long *plVar8;
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
               &DAT_0409871b,"pinyin");
  uVar3 = FUN_032f8738(param_1,param_2,param_3,2,auStack_16c,0,0x1f5,1000,0x1f5,1000,10,0,*param_5);
  if ((uVar3 >> 0xf & 1) != 0) {
    return 0xffffffff;
  }
  *param_5 = *param_5 + 1;
  FUN_032f9b60(auStack_16c,"%s/%s_%s_%s_%s.a","content:/Iwnn/rewrite","njuserw",&DAT_0406955f,
               &DAT_0409871b,"pinyin");
  bVar1 = *param_5;
  plVar8 = (long *)(param_3 + (ulong)bVar1 * 0x50 + 0xbe8);
  if (*plVar8 == 0) {
    if (*DAT_05730eb0 != 0) {
      local_6c = 0;
      pvVar4 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0xb338,8);
      if (pvVar4 != (void *)0x0) {
        uVar6 = 0xb338;
        memset(pvVar4,0,0xb338);
        *plVar8 = (long)pvVar4;
        uVar3 = FUN_00100860(pvVar4,param_2 + 8,0,0xb338);
        if ((uVar3 >> 0xf & 1) != 0) {
          return 0xffffffff;
        }
        goto LAB_032f39a4;
      }
    }
    *plVar8 = 0;
  }
  else {
    uVar6 = 0;
LAB_032f39a4:
    *(ushort *)(param_3 + 0x8b38) = (ushort)bVar1;
    *(undefined4 *)(param_3 + 0x8b40) = uVar6;
    lVar5 = (ulong)bVar1 * 0x50;
    *(undefined2 *)(param_3 + lVar5 + 0xc30) = 0;
    *(undefined8 *)(param_3 + lVar5 + 0xbf0) = 0;
    *(undefined8 *)(param_3 + lVar5 + 0xbf8) = 0;
    *(undefined4 *)(param_3 + lVar5 + 0xc20) = 10;
    *(undefined8 *)(param_3 + lVar5 + 0xc00) = 0;
    *(undefined8 *)(param_3 + lVar5 + 0xc08) = 0;
    *(undefined8 *)(param_3 + lVar5 + 0xc10) = 0;
    *(undefined8 *)(param_3 + lVar5 + 0xc18) = 0xc800c8019a019a;
    *(undefined8 *)(param_3 + lVar5 + 0xc28) = 0;
    *param_5 = *param_5 + 1;
    FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b,
                 "pinyin","njubase1.a");
    uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,100,400,100,0x230,10,0,*param_5);
    if ((uVar3 >> 0xf & 1) == 0) {
      *param_5 = *param_5 + 1;
      FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b,
                   "pinyin","njubase2.a");
      uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,100,400,100,0x230,10,0,*param_5);
      if ((uVar3 >> 0xf & 1) == 0) {
        *param_5 = *param_5 + 1;
        FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b
                     ,"pinyin","njexyomi.a");
        if (*(char *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x16408) == '\0') {
          bVar1 = *param_5;
          puVar7 = param_3 + (ulong)bVar1 * 0x50 + 0xbe8;
          FUN_032f8e14(auStack_16c,puVar7);
          *(undefined2 *)(puVar7 + 0x48) = 0;
          *(undefined8 *)(puVar7 + 8) = 0;
          *(undefined8 *)(puVar7 + 0x10) = 0;
          *(undefined4 *)(puVar7 + 0x38) = 10;
          *(undefined8 *)(puVar7 + 0x18) = 0;
          *(undefined8 *)(puVar7 + 0x20) = 0;
          *(undefined8 *)(puVar7 + 0x28) = 0;
          *(undefined8 *)(puVar7 + 0x30) = 0x6400000000000a;
          local_6c = 0;
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
          *(void **)(param_3 + (ulong)bVar1 * 0x50 + 0xc28) = pvVar4;
        }
        *param_5 = *param_5 + 1;
        FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409871b
                     ,"pinyin","njtan.a");
        uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,100,400,400,800,10,0,*param_5);
        if ((uVar3 >> 0xf & 1) == 0) {
          *param_5 = *param_5 + 1;
          *param_3 = param_4;
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

