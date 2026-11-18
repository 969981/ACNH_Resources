
void FUN_032ed5c4(uint *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bc96d0;
  if (((param_3 & 1) != 0) || (*param_1 != param_2)) {
    lVar7 = *(long *)PTR_DAT_04bc96a8;
    cVar2 = (&DAT_041895f9)[param_2];
    if (*(char *)(lVar7 + 0xb52e8) != -1) {
      puVar5 = *(undefined4 **)PTR_DAT_04bc96d0;
      FUN_032ef500(puVar5,lVar7 + 0x10);
      *puVar5 = 0xffffffff;
      FUN_032ef434(puVar5,lVar7 + 0x10);
    }
    uVar6 = *(undefined8 *)puVar3;
    lVar1 = lVar7 + 0x10;
    uVar4 = FUN_032ef434(uVar6,lVar1);
    if (((uVar4 >> 0xf & 1) == 0) &&
       (uVar4 = FUN_032f25ec(uVar6,lVar1,cVar2), (uVar4 >> 0xf & 1) != 0)) {
      FUN_032ef500(uVar6,lVar1,*(undefined1 *)(lVar7 + 0x70390));
      memset((void *)(lVar7 + 0x87b50),0,0x2d630);
    }
    uVar6 = *(undefined8 *)puVar3;
    uVar4 = FUN_032f8f88(uVar6,lVar1,cVar2);
    if ((uVar4 >> 0xf & 1) == 0) {
      *(char *)(lVar7 + 0xb52e8) = cVar2;
    }
    else {
      FUN_032ef500(uVar6,lVar1,cVar2);
      FUN_032ef500(uVar6,lVar1,*(undefined1 *)(lVar7 + 0x70390));
      memset((void *)(lVar7 + 0x87b50),0,0x2d630);
    }
    FUN_032ed730();
    *param_1 = param_2;
  }
  return;
}

