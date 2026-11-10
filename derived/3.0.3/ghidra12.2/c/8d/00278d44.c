
void FUN_00278d44(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04bcd350;
  uVar2 = FUN_00269a70(*(undefined8 *)PTR_DAT_04bcd350);
  if ((uVar2 & 1) != 0) {
    FUN_00269b00(*(undefined8 *)puVar1,param_2);
    plVar3 = (long *)FUN_002ba790(DAT_04c61168);
    lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,param_2);
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x4c) = 7;
      FUN_002b3cf8(lVar4,0xfd);
      FUN_002b3dac(lVar4,0);
      return;
    }
  }
  return;
}

