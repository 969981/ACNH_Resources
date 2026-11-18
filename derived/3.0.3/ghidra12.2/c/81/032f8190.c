
/* WARNING: Removing unreachable block (ram,0x032f84c8) */
/* WARNING: Removing unreachable block (ram,0x032f84e8) */

undefined8
FUN_032f8190(undefined8 param_1,long param_2,undefined1 *param_3,undefined1 param_4,byte *param_5)

{
  undefined1 *__s;
  byte bVar1;
  int iVar2;
  uint uVar3;
  void *__s_00;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined1 auStack_16c [256];
  undefined4 local_6c;
  
  __s = param_3 + 0xbe8;
  memset(__s,0,0x6d0);
  FUN_032f9b60(auStack_16c,"%s/%s/%s","content://Swkbd/Iwnn",&DAT_040d6936,"njcon.a");
  iVar2 = FUN_032f8e14(auStack_16c,param_3 + 0x1228);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  lVar4 = *(long *)(param_3 + 0x1228);
  if (lVar4 == 0) {
    return 0xffffffff;
  }
  *(long *)(param_3 + 0x1230) = lVar4;
  *(long *)(param_3 + 0x1238) = lVar4;
  FUN_032f9b60(auStack_16c,"%s/%s_%s.a","content:/Iwnn/rewrite","njuserl",&DAT_040d6936);
  uVar3 = FUN_032f8738(param_1,param_2,param_3,2,auStack_16c,0,0x1f5,1000,0x1f5,1000,10,0,*param_5);
  if ((uVar3 >> 0xf & 1) != 0) {
    return 0xffffffff;
  }
  *param_5 = *param_5 + 1;
  FUN_032f9b60(auStack_16c,"%s/%s_%s.a","content:/Iwnn/rewrite","njuserw",&DAT_040d6936);
  bVar1 = *param_5;
  plVar5 = (long *)(__s + (ulong)bVar1 * 0x50);
  if (*plVar5 == 0) {
    if (*DAT_05730eb0 != 0) {
      local_6c = 0;
      __s_00 = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0xb338,8);
      if (__s_00 != (void *)0x0) {
        uVar6 = 0xb338;
        memset(__s_00,0,0xb338);
        *plVar5 = (long)__s_00;
        uVar3 = FUN_00100860(__s_00,param_2 + 8,0,0xb338);
        if ((uVar3 >> 0xf & 1) != 0) {
          return 0xffffffff;
        }
        goto LAB_032f82e4;
      }
    }
    *plVar5 = 0;
  }
  else {
    uVar6 = 0;
LAB_032f82e4:
    *(ushort *)(param_3 + 0x8b38) = (ushort)bVar1;
    *(undefined4 *)(param_3 + 0x8b40) = uVar6;
    *(undefined2 *)(__s + (ulong)bVar1 * 0x50 + 0x48) = 0;
    *(undefined8 *)(__s + (ulong)bVar1 * 0x50 + 8) = 0;
    *(undefined8 *)(__s + (ulong)bVar1 * 0x50 + 0x10) = 0;
    *(undefined4 *)(__s + (ulong)bVar1 * 0x50 + 0x38) = 10;
    *(undefined8 *)(__s + (ulong)bVar1 * 0x50 + 0x18) = 0;
    *(undefined8 *)(__s + (ulong)bVar1 * 0x50 + 0x20) = 0;
    *(undefined8 *)(__s + (ulong)bVar1 * 0x50 + 0x28) = 0;
    *(undefined8 *)(__s + (ulong)bVar1 * 0x50 + 0x30) = 0xc800c8019a019a;
    *(undefined8 *)(__s + (ulong)bVar1 * 0x50 + 0x40) = 0;
    *param_5 = *param_5 + 1;
    FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_040d6936,&DAT_040d6936,
                 "njubase1.a");
    uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,100,400,100,0x230,10,0,*param_5);
    if ((uVar3 >> 0xf & 1) == 0) {
      *param_5 = *param_5 + 1;
      FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_040d6936,&DAT_040d6936,
                   "njubase2.a");
      uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,100,400,100,0x230,10,0,*param_5);
      if ((uVar3 >> 0xf & 1) == 0) {
        *param_5 = *param_5 + 1;
        FUN_032f9b60(auStack_16c,"%s/%s/%s/%s","content://Swkbd/Iwnn",&DAT_040d6936,&DAT_040d6936,
                     "njubase3.a");
        uVar3 = FUN_032f8738(param_1,param_2,param_3,4,auStack_16c,0,100,400,100,0x230,10,0,*param_5
                            );
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

