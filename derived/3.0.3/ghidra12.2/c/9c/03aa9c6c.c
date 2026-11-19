
void FUN_03aa9c6c(long param_1,undefined8 param_2,uint param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *local_70;
  undefined1 *puStack_68;
  
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    if (param_3 == 0xffffffff) {
      uVar2 = *(uint *)(param_1 + 8);
    }
    else {
      uVar2 = *(uint *)(param_1 + 8) >> (ulong)(param_3 & 0x1f) & 1;
    }
    if (uVar2 != 0) {
      uVar2 = param_3;
      if (*(uint *)(param_1 + 0x1e0) <= param_3) {
        uVar2 = 0;
      }
      lVar7 = *(long *)(param_1 + 0x1e8) + (long)(int)uVar2 * 0x15e8;
      puVar1 = (undefined8 *)(lVar7 + 0x238);
      FUN_03aa84b0(puVar1,param_2,*(long *)(param_4 + 0x20) + 8);
      FUN_03aa9de0(param_1,param_2,param_3,param_6,param_7,param_8);
      uVar4 = FUN_038e4d90(param_1 + 0x48c,param_2);
      local_70 = &DAT_3f8000003f800000;
      puStack_68 = &DAT_3f8000003f800000;
      FUN_03aaafb0(0x3f000000,0x3f800000,uVar4,param_2,puVar1,lVar7 + 0xc10,0,0,0,&local_70);
      puVar3 = PTR_DAT_04bbd510;
      lVar6 = *(long *)(param_1 + 0x1e8);
      if (*(uint *)(param_1 + 0x1e0) <= param_3) {
        param_3 = 0;
      }
      lVar5 = lVar6 + (long)(int)param_3 * 0x15e8;
      if (*(char *)(lVar5 + 0xf50) != '\0') {
        FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,*(undefined8 *)(lVar5 + 0xc10));
      }
      *(undefined8 *)(lVar5 + 0xc10) = 0;
      *(undefined1 *)(lVar5 + 0xf50) = 0;
      *(undefined1 *)(lVar6 + (long)(int)param_3 * 0x15e8 + 0xf52) = 0;
      if (*(char *)(lVar7 + 0x578) != '\0') {
        FUN_039499cc(*(undefined8 *)puVar3,*puVar1);
      }
      *(undefined8 *)(lVar7 + 0x238) = 0;
      *(undefined1 *)(lVar7 + 0x578) = 0;
      *(undefined1 *)(lVar7 + 0x57a) = 0;
    }
  }
  return;
}

