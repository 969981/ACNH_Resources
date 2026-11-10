
void FUN_002bbb00(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,byte param_8)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_54;
  
  if (*(int *)(param_2 + 0xa8) != 4) {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x10c08);
    goto LAB_002bbd78;
  }
  if (param_6 == 0) {
    puVar8 = *(undefined8 **)(param_2 + 0xd0);
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(byte *)(param_2 + 0x4d0) = param_8 & 1;
    if (puVar8 != (undefined8 *)(param_2 + 200)) goto LAB_002bbbc8;
  }
  else {
    uVar4 = FUN_0021f454();
    lVar5 = FUN_00285d10(0xae8,uVar4);
    if (lVar5 != 0) {
      FUN_002b81f0(lVar5,param_6,param_7);
    }
    puVar8 = *(undefined8 **)(param_2 + 0xd0);
    *(long *)(param_2 + 0xc0) = lVar5;
    *(byte *)(param_2 + 0x4d0) = param_8 & 1;
    if (puVar8 != (undefined8 *)(param_2 + 200)) {
LAB_002bbbc8:
      do {
        puVar9 = (undefined8 *)puVar8[1];
        *puVar8 = 0;
        puVar8[1] = 0;
        FUN_002236e0(param_2 + 0xe0,param_2 + 0xe0,(long)*(int *)(param_2 + 0xf4) + (long)puVar8);
        puVar8 = puVar9;
      } while (puVar9 != (undefined8 *)(param_2 + 200));
    }
  }
  lVar5 = param_2 + 200;
  FUN_002236b0(lVar5);
  if (*(int *)(param_2 + 0xf0) != 0) {
    lVar6 = FUN_002237a8(param_2 + 0xe0);
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = lVar6 - *(int *)(param_2 + 0xf4);
    }
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    puVar8 = (undefined8 *)(lVar1 + 0x18);
    *puVar8 = 0;
    FUN_0021f4e0(puVar8);
    FUN_002236bc(lVar5,lVar5,lVar1);
    *(undefined4 *)(lVar1 + 0x10) = 0;
    FUN_0021f5a0(puVar8,0xffffffff);
    *(undefined2 *)(lVar1 + 0x30) = 0;
  }
  uVar4 = FUN_0021f454();
  uVar7 = FUN_0021f454();
  lVar5 = FUN_00285d10(0xf8,uVar7);
  if (lVar5 != 0) {
    local_68 = PTR_DAT_04bccec0 + 0x10;
    uStack_60 = param_3;
    FUN_00290e74(lVar5,&local_68,param_2 + 0x38,uVar4,param_4,1,0x7fffffff,0x4000,0x20);
  }
  *(long *)(param_2 + 0x58) = lVar5;
  iVar2 = FUN_0021f050();
  if (iVar2 == 0) {
    lVar5 = nn::os::GetTlsValue(DAT_04c60a0c);
    if (lVar5 == 0) {
      uVar3 = nn::os::GetCurrentCoreNumber();
    }
    else {
      uVar3 = (int)lVar5 - 1;
    }
    local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar3);
  }
  else {
    uVar3 = iVar2 - 1;
  }
  local_68._0_4_ = 1 << (ulong)(uVar3 & 0x1f);
  FUN_002909d8(*(undefined8 *)(param_2 + 0x58),&local_68);
  FUN_002a9030(&local_68,param_2 + 8,param_5);
  local_68 = (undefined *)((ulong)local_68._4_4_ << 0x20);
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_54);
  FUN_00229780(param_2 + 0xb0,&local_68);
  *(undefined4 *)(param_2 + 0xa8) = 1;
  (**(code **)(**(long **)(param_2 + 0x58) + 0x30))();
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
LAB_002bbd78:
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_54);
  FUN_002296c4(param_1,&local_68);
  return;
}

