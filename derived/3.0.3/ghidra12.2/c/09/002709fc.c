
void FUN_002709fc(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_40 [16];
  
  puVar2 = PTR_DAT_04bcd350;
  if ((int)param_2[1] == 2) {
    bVar1 = *(byte *)(*param_2 + 1);
    if ((bVar1 != 0xfd) && (bVar3 = FUN_0026bfe0(*(undefined8 *)PTR_DAT_04bcd350), bVar1 != bVar3))
    {
      plVar4 = (long *)FUN_002ba790(DAT_04c61168);
      lVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,bVar1);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x40) == param_2[2])) {
        FUN_00271b04(param_1,lVar5);
        uVar6 = FUN_00269a70(*(undefined8 *)puVar2,bVar1);
        if ((uVar6 & 1) != 0) {
          FUN_00269b00(*(undefined8 *)puVar2,bVar1);
        }
        lVar7 = FUN_0026c88c(*(undefined8 *)puVar2);
        if ((bVar1 < 0x20) && (lVar7 != 0)) {
          uVar8 = FUN_0026c88c(*(undefined8 *)puVar2);
          FUN_00282f30(auStack_40,uVar8,bVar1);
        }
        *(undefined4 *)(lVar5 + 0x4c) = 7;
        FUN_002b3cf8(lVar5,0xfd);
        FUN_002b3dac(lVar5,0);
        FUN_002700b0(param_1,1,1);
      }
    }
  }
  return;
}

