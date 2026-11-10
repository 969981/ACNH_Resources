
void FUN_0014d430(long param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_8f8 [128];
  char acStack_851 [2044];
  undefined1 uStack_55;
  undefined1 auStack_54 [4];
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0xf63) >> 2 & 1) != 0)) {
    memset(acStack_851,0,0x801);
    uVar1 = FUN_00144ed0(acStack_851,0x801,param_2,auStack_8f8 + 0x80);
    if (0x800 < uVar1) {
      sVar2 = strlen(param_2);
      if (param_2[sVar2 - 1] == '\n') {
        puVar5 = &DAT_040c7b8b;
        puVar3 = &uStack_55;
        uVar4 = 5;
      }
      else {
        puVar5 = &DAT_0408f210;
        puVar3 = auStack_54;
        uVar4 = 4;
      }
      FUN_001460b8(puVar3,uVar4,puVar5);
    }
    sVar2 = strlen(acStack_851);
    FUN_0014d550(param_1,0,acStack_851,sVar2);
  }
  return;
}

