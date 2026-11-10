
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_002c92a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_002b43fc(param_2);
  lVar4 = FUN_002ca2c0(param_1 + 0x180,uVar2);
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = FUN_002b4294(lVar4 + 8,param_2);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  FUN_002b415c(param_3,lVar4 + 8);
  FUN_002b4368(param_3);
  uVar5 = FUN_0021fea0();
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_002b4368(param_2);
    FUN_002b44e4(param_3,uVar6);
    FUN_002b4370(param_3);
    uVar5 = FUN_0021fea0();
  }
  else {
    FUN_002b4370(param_3);
    uVar5 = FUN_0021fea0();
  }
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_002b4370(param_2);
    FUN_002b44ec(param_3,uVar6);
    lVar4 = FUN_002b43ec(param_3);
  }
  else {
    lVar4 = FUN_002b43ec(param_3);
  }
  if (lVar4 == 0) {
    uVar6 = FUN_002b43ec(param_2);
    FUN_002b44fc(param_3,uVar6);
    iVar3 = FUN_002b43d4(param_3);
  }
  else {
    iVar3 = FUN_002b43d4(param_3);
  }
  if (iVar3 == 0) {
    uVar2 = FUN_002b43d4(param_2);
    FUN_002b452c(param_3,uVar2);
    iVar3 = FUN_002b43c8(param_3);
  }
  else {
    iVar3 = FUN_002b43c8(param_3);
  }
  if (iVar3 == 0) {
    uVar2 = FUN_002b43c8(param_2);
    FUN_002b4514(param_3,uVar2);
    iVar3 = FUN_002b43e0(param_3);
  }
  else {
    iVar3 = FUN_002b43e0(param_3);
  }
  if (iVar3 == 0) {
    uVar2 = FUN_002b43e0(param_2);
    FUN_002b453c(param_3,uVar2);
    cVar1 = FUN_002b4404(param_3);
  }
  else {
    cVar1 = FUN_002b4404(param_3);
  }
  if (cVar1 == '\0') {
    uVar2 = FUN_002b4404(param_2);
    FUN_002b454c(param_3,uVar2);
    iVar3 = FUN_002b43f4(param_3);
  }
  else {
    iVar3 = FUN_002b43f4(param_3);
  }
  if (iVar3 == 0) {
    uVar2 = FUN_002b43f4(param_2);
    FUN_002b4504(param_3,uVar2);
    FUN_002b4468(param_3);
    uVar5 = FUN_0021fea0();
  }
  else {
    FUN_002b4468(param_3);
    uVar5 = FUN_0021fea0();
  }
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_002b4460(param_2);
    FUN_002b44f4(param_3,uVar6);
  }
  return 1;
}

