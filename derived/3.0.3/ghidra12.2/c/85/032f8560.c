
/* WARNING: Removing unreachable block (ram,0x032f86a4) */
/* WARNING: Removing unreachable block (ram,0x032f86c4) */

undefined8 FUN_032f8560(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *__s;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined1 auStack_160 [256];
  
  FUN_032f9b60(auStack_160,"%s/%s/%s","content://Swkbd/Iwnn",&DAT_04100868,"njcon.a");
  iVar2 = FUN_032f8e14(auStack_160,param_2 + 0x1228);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  lVar5 = *(long *)(param_2 + 0x1228);
  if (lVar5 == 0) {
    return 0xffffffff;
  }
  *(long *)(param_2 + 0x1230) = lVar5;
  *(long *)(param_2 + 0x1238) = lVar5;
  FUN_032f9b60(auStack_160,"%s/%s_%s_%s.a","content:/Iwnn/rewrite","njuserw",&DAT_04100868,
               &DAT_040bb6d7);
  bVar1 = *param_3;
  plVar7 = (long *)(param_2 + (ulong)bVar1 * 0x50 + 0xbe8);
  if (*plVar7 == 0) {
    if ((*DAT_05730eb0 == 0) ||
       (__s = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,0xb338,8),
       __s == (void *)0x0)) {
      *plVar7 = 0;
    }
    else {
      uVar6 = 0xb338;
      memset(__s,0,0xb338);
      *plVar7 = (long)__s;
      uVar3 = FUN_00100860(__s,param_1 + 8,0,0xb338);
      if ((uVar3 >> 0xf & 1) == 0) goto LAB_032f862c;
    }
    uVar4 = 0xffffffff;
  }
  else {
    uVar6 = 0;
LAB_032f862c:
    *(undefined4 *)(param_2 + 0x8b40) = uVar6;
    *(ushort *)(param_2 + 0x8b38) = (ushort)bVar1;
    lVar5 = (ulong)bVar1 * 0x50;
    uVar4 = 0;
    *(undefined2 *)(param_2 + lVar5 + 0xc30) = 0;
    *(undefined8 *)(param_2 + lVar5 + 0xc10) = 0;
    *(undefined8 *)(param_2 + lVar5 + 0xc18) = 0xc800c8019a019a;
    *(undefined8 *)(param_2 + lVar5 + 0xbf0) = 0;
    *(undefined8 *)(param_2 + lVar5 + 0xbf8) = 0;
    *(undefined8 *)(param_2 + lVar5 + 0xc28) = 0;
    *(undefined4 *)(param_2 + lVar5 + 0xc20) = 10;
    *(undefined8 *)(param_2 + lVar5 + 0xc00) = 0;
    *(undefined8 *)(param_2 + lVar5 + 0xc08) = 0;
    *param_3 = *param_3 + 1;
    *param_2 = 0xfe;
  }
  return uVar4;
}

