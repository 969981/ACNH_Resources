
void FUN_01ea9200(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_50;
  char *pcStack_48;
  
  lVar6 = *(long *)(param_2 + 8);
  (**(code **)(*(long *)(lVar6 + 0x3e0) + 0x18))(lVar6 + 0x3e0);
  (**(code **)(*(long *)(lVar6 + 0x3e0) + 0x18))(lVar6 + 0x3e0);
  if (*(undefined1 **)(lVar6 + 1000) == &DAT_040d4701) {
LAB_01ea92a0:
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "KotonoQuestCount";
    iVar3 = FUN_0274bce0(param_4,&local_50);
    bVar2 = iVar3 < 0x14;
  }
  else {
    uVar5 = 0;
    bVar2 = true;
    do {
      cVar1 = (*(undefined1 **)(lVar6 + 1000))[uVar5];
      if (cVar1 != (&DAT_040d4701)[uVar5]) break;
      if (cVar1 == '\0') {
        if (bVar2) goto LAB_01ea92a0;
        break;
      }
      bVar2 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    iVar3 = FUN_021d68a0(*(long *)(param_2 + 8) + 0x3e0);
    bVar2 = iVar3 == 1;
  }
  uVar4 = 0xf;
  if (!bVar2) {
    uVar4 = 0x12;
  }
  *param_1 = uVar4;
  return;
}

