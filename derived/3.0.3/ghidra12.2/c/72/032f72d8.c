
/* WARNING: Removing unreachable block (ram,0x032f7730) */
/* WARNING: Removing unreachable block (ram,0x032f7750) */

undefined8
FUN_032f72d8(undefined8 param_1,long param_2,undefined1 *param_3,undefined1 param_4,byte *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *__s;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_16c [256];
  undefined4 local_6c;
  
  puVar7 = param_3 + 0xbe8;
  memset(puVar7,0,0x6d0);
  FUN_032f9b60(auStack_16c,"%s/%s/%s","content://Swkbd/Iwnn",&DAT_04088f81,"njcon.a");
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
  FUN_032f9b60(auStack_16c,"%s/%s_%s_%s.a","content:/Iwnn/rewrite","njuserl",&DAT_04088f81,
               &DAT_040eb73d);
  uVar3 = FUN_032f8738(param_1,param_2,param_3,2,auStack_16c,0,0x1f5,1000,0x1f5,1000,10,0,*param_5);
  if ((uVar3 >> 0xf & 1) != 0) {
    return 0xffffffff;
  }
  *param_5 = *param_5 + 1;
  FUN_032f9b60(auStack_16c,"%s/%s_%s_%s.a","content:/Iwnn/rewrite","njuserw",&DAT_04088f81,
               &DAT_040eb73d);
  bVar1 = *param_5;
  plVar6 = (long *)(puVar7 + (ulong)bVar1 * 0x50);
  if (*plVar6 == 0) {
    if (*DAT_05730eb0 != 0) {
      local_6c = 0;
      __s = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0xb338,8);
      if (__s != (void *)0x0) {
        uVar8 = 0xb338;
        memset(__s,0,0xb338);
        *plVar6 = (long)__s;
        uVar3 = FUN_00100860(__s,param_2 + 8,0,0xb338);
        if ((uVar3 >> 0xf & 1) != 0) {
          return 0xffffffff;
        }
        goto LAB_032f7440;
      }
    }
    *plVar6 = 0;
  }
  else {
    uVar8 = 0;
LAB_032f7440:
    *(ushort *)(param_3 + 0x8b38) = (ushort)bVar1;
    *(undefined4 *)(param_3 + 0x8b40) = uVar8;
    *(undefined2 *)(puVar7 + (ulong)bVar1 * 0x50 + 0x48) = 0;
    *(undefined8 *)(puVar7 + (ulong)bVar1 * 0x50 + 8) = 0;
    *(undefined8 *)(puVar7 + (ulong)bVar1 * 0x50 + 0x10) = 0;
    *(undefined4 *)(puVar7 + (ulong)bVar1 * 0x50 + 0x38) = 10;
    *(undefined8 *)(puVar7 + (ulong)bVar1 * 0x50 + 0x18) = 0;
    *(undefined8 *)(puVar7 + (ulong)bVar1 * 0x50 + 0x20) = 0;
    *(undefined8 *)(puVar7 + (ulong)bVar1 * 0x50 + 0x28) = 0;
    *(undefined8 *)(puVar7 + (ulong)bVar1 * 0x50 + 0x30) = 0xc800c8019a019a;
    *(undefined8 *)(puVar7 + (ulong)bVar1 * 0x50 + 0x40) = 0;
    *param_5 = *param_5 + 1;
    FUN_032f9b60(auStack_16c,"%s/%s/%s","content://Swkbd/Iwnn",&DAT_04088f81,"njubase1.a");
    uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,100,400,100,0x230,10,0,*param_5);
    if ((uVar3 >> 0xf & 1) == 0) {
      *param_5 = *param_5 + 1;
      FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_04088f81,&DAT_040eb73d,
                   "njubase1br.a");
      uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,100,400,100,0x230,10,0,*param_5);
      if ((uVar3 >> 0xf & 1) == 0) {
        *param_5 = *param_5 + 1;
        FUN_032f9b60(auStack_16c,"%s/%s/%s","content://Swkbd/Iwnn",&DAT_04088f81,"njubase2.a");
        uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,100,400,100,0x230,10,0,*param_5
                            );
        if ((uVar3 >> 0xf & 1) == 0) {
          *param_5 = *param_5 + 1;
          FUN_032f9b60(auStack_16c,"%s/%s/%s","content://Swkbd/Iwnn",&DAT_04088f81,"njubase3.a");
          uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,100,400,100,0x230,10,0,
                               *param_5);
          if ((uVar3 >> 0xf & 1) == 0) {
            *param_5 = *param_5 + 1;
            FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_04088f81,
                         &DAT_040eb73d,"njexyomi.a");
            if (*(char *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x16408) == '\0') {
              puVar7 = puVar7 + (ulong)*param_5 * 0x50;
              FUN_032f8e14(auStack_16c,puVar7);
              *(undefined2 *)(puVar7 + 0x48) = 0;
              *(undefined8 *)(puVar7 + 8) = 0;
              *(undefined8 *)(puVar7 + 0x10) = 0;
              *(undefined4 *)(puVar7 + 0x38) = 10;
              *(undefined8 *)(puVar7 + 0x18) = 0;
              *(undefined8 *)(puVar7 + 0x20) = 0;
              *(undefined8 *)(puVar7 + 0x28) = 0;
              *(undefined8 *)(puVar7 + 0x30) = 0x6400000000000a;
              uVar4 = FUN_032f9a60(0x2058);
              *(undefined8 *)(puVar7 + 0x40) = uVar4;
            }
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

