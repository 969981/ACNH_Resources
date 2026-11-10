
bool FUN_00271c6c(long *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int local_5c [4];
  undefined1 local_4c;
  byte local_4b;
  undefined1 auStack_46 [6];
  undefined4 local_38;
  undefined1 local_34;
  
  puVar3 = PTR_DAT_04bc1510;
  plVar5 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  uVar4 = FUN_0026be6c(*(undefined8 *)PTR_DAT_04bcd350);
  lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar4);
  if (lVar6 != 0) {
    lVar7 = FUN_002ba790(*(undefined8 *)puVar3);
    if (*(long *)(lVar7 + 0x98) == 0) {
      return false;
    }
    bVar1 = *(byte *)(lVar6 + 0x38);
    bVar2 = *(byte *)(*(long *)(lVar7 + 0x98) + 0x38);
    if (((uint)bVar1 == (param_2 & 0xff) && bVar1 != bVar2) && (bVar2 | bVar1) < 0x20) {
      plVar5 = (long *)FUN_002aaa54(param_1);
      local_38 = 0;
      local_34 = 0;
      local_5c[0] = (**(code **)(*param_1 + 0x18))(param_1);
      lVar6 = (**(code **)(*plVar5 + 0x68))(plVar5,local_5c,param_2,10,&local_38);
      if (lVar6 != 0) {
        local_4c = 0x25;
        local_4b = bVar2;
        FUN_00228480((ulong)&local_4c | 2,param_3);
        FUN_00228480(auStack_46,param_4);
        FUN_002a9f34(local_5c,plVar5,&local_4c);
        return local_5c[0] == 0;
      }
    }
  }
  return false;
}

