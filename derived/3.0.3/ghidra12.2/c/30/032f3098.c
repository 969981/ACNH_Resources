
/* WARNING: Removing unreachable block (ram,0x032f36d8) */
/* WARNING: Removing unreachable block (ram,0x032f3740) */
/* WARNING: Removing unreachable block (ram,0x032f3760) */
/* WARNING: Removing unreachable block (ram,0x032f36f8) */

undefined8
FUN_032f3098(undefined8 param_1,long param_2,undefined1 *param_3,undefined1 param_4,byte *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined4 local_26c [64];
  undefined1 auStack_16c [256];
  undefined4 local_6c;
  
  FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409c33d,
               "njcon.a");
  iVar2 = FUN_032f8e14(auStack_16c,param_3 + 0x1228);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  lVar6 = *(long *)(param_3 + 0x1228);
  if (lVar6 == 0) {
    return 0xffffffff;
  }
  *(long *)(param_3 + 0x1230) = lVar6;
  *(long *)(param_3 + 0x1238) = lVar6;
  FUN_032f9b60(auStack_16c,"%s/%s_%s_%s_%s.a","content:/Iwnn/rewrite","njuserl",&DAT_0406955f,
               &DAT_0409c33d,"pinyin");
  uVar3 = FUN_032f8738(param_1,param_2,param_3,5,auStack_16c,0,0x1f5,1000,0x1f5,1000,10,0,*param_5);
  if ((uVar3 >> 0xf & 1) == 0) {
    *param_5 = *param_5 + 1;
    FUN_032f9b60(auStack_16c,"%s/%s_%s_%s_%s.a","content:/Iwnn/rewrite","njuserw",&DAT_0406955f,
                 &DAT_0409c33d,"pinyin");
    bVar1 = *param_5;
    plVar9 = (long *)(param_3 + (ulong)bVar1 * 0x50 + 0xbe8);
    if (*plVar9 == 0) {
      if (*DAT_05730eb0 == 0) {
LAB_032f37d0:
        *plVar9 = 0;
        return 0xffffffff;
      }
      local_26c[0] = 0;
      pvVar5 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0xb338,8);
      if (pvVar5 == (void *)0x0) goto LAB_032f37d0;
      uVar8 = 0xb338;
      memset(pvVar5,0,0xb338);
      *plVar9 = (long)pvVar5;
      uVar3 = FUN_00100860(pvVar5,param_2 + 8,0,0xb338);
      if ((uVar3 >> 0xf & 1) != 0) {
        return 0xffffffff;
      }
    }
    else {
      uVar8 = 0;
    }
    *(ushort *)(param_3 + 0x8b38) = (ushort)bVar1;
    *(undefined4 *)(param_3 + 0x8b40) = uVar8;
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
    *param_5 = *param_5 + 1;
    FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409c33d,
                 "pinyin","GB18030","njubase1.a");
    FUN_032f9b60(local_26c,"%s/%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409c33d,
                 "pinyin","GB18030","njubase1.ad1");
    uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,local_26c,100,400,100,0x230,10,0,
                         *param_5);
    if ((uVar3 >> 0xf & 1) == 0) {
      *param_5 = *param_5 + 1;
      FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,
                   &DAT_0409c33d,"pinyin","GB18030","njubase2.a");
      FUN_032f9b60(local_26c,"%s/%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,&DAT_0409c33d,
                   "pinyin","GB18030","njubase2.ad1");
      uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,local_26c,100,400,100,0x230,10,0,
                           *param_5);
      if ((uVar3 >> 0xf & 1) == 0) {
        *param_5 = *param_5 + 1;
        FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,
                     &DAT_0409c33d,"pinyin","GB18030","njubase3.a");
        FUN_032f9b60(local_26c,"%s/%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,
                     &DAT_0409c33d,"pinyin","GB18030","njubase3.ad1");
        uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,local_26c,100,400,100,0x230,10,0,
                             *param_5);
        if ((uVar3 >> 0xf & 1) == 0) {
          *param_5 = *param_5 + 1;
          FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,
                       &DAT_0409c33d,"pinyin","GB18030","njtan.a");
          FUN_032f9b60(local_26c,"%s/%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,
                       &DAT_0409c33d,"pinyin","GB18030","njtan.ad1");
          uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,local_26c,100,400,400,800,10,0,
                               *param_5);
          if ((uVar3 >> 0xf & 1) == 0) {
            *param_5 = *param_5 + 1;
            FUN_032f9b60(auStack_16c,"%s/%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,
                         &DAT_0409c33d,"pinyin","GB18030","njexyomi.a");
            FUN_032f9b60(local_26c,"%s/%s/%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_0406955f,
                         &DAT_0409c33d,"pinyin","GB18030","njexyomi.ad1");
            if (*(char *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x16408) == '\0') {
              bVar1 = *param_5;
              puVar7 = param_3 + (ulong)bVar1 * 0x50 + 0xbe8;
              FUN_032f8e14(auStack_16c,puVar7);
              *(undefined2 *)(puVar7 + 0x48) = 0;
              *(undefined8 *)(puVar7 + 8) = 0;
              *(undefined8 *)(puVar7 + 0x10) = 0;
              *(undefined8 *)(puVar7 + 0x18) = 0;
              iVar2 = FUN_032f8e14(local_26c,puVar7 + 0x20);
              if (iVar2 < 0) {
                *(undefined8 *)(puVar7 + 0x20) = 0;
              }
              lVar6 = (ulong)bVar1 * 0x50;
              *(undefined8 *)(param_3 + lVar6 + 0xc10) = 0;
              *(undefined8 *)(param_3 + lVar6 + 0xc18) = 0x6400000000000a;
              *(undefined4 *)(param_3 + lVar6 + 0xc20) = 10;
              uVar4 = FUN_032f9a60(0x2058);
              *(undefined8 *)(param_3 + lVar6 + 0xc28) = uVar4;
            }
            memset((void *)(param_2 + 0x874a0),0,0x6a0);
            *(undefined2 *)(param_2 + 0x87468) = 0;
            *(undefined **)(param_2 + 0x87470) = &DAT_04189a2e;
            *(undefined8 *)(param_2 + 0x87498) = 0;
            *(undefined8 *)(param_2 + 0x87478) = 0;
            *(undefined8 *)(param_2 + 0x87480) = 0;
            *(undefined8 *)(param_2 + 0x87488) = 0;
            *(undefined8 *)(param_2 + 0x87490) = 0;
            if (**(long **)PTR_DAT_04bc96a8 == 0) {
              pvVar5 = (void *)0x0;
            }
            else {
              local_6c = 0;
              plVar9 = (long *)**(long **)PTR_DAT_04bc96a8;
              pvVar5 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x2058,8);
              if (pvVar5 != (void *)0x0) {
                memset(pvVar5,0,0x2058);
              }
            }
            *(void **)(param_2 + 0x874b0) = pvVar5;
            *(undefined1 *)(param_2 + 0x874b9) = 0;
            *(undefined8 *)(param_2 + 0x874a0) = 0xc8006401900064;
            *(undefined4 *)(param_2 + 0x874a8) = 10;
            *(undefined8 *)(param_2 + 0x87ab0) = *(undefined8 *)(param_3 + 0x1228);
            *(undefined8 *)(param_2 + 0x87ab8) = *(undefined8 *)(param_3 + 0x1228);
            *(undefined8 *)(param_2 + 0x87ac0) = *(undefined8 *)(param_3 + 0x1228);
            *param_5 = *param_5 + 1;
            *param_3 = param_4;
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff;
}

