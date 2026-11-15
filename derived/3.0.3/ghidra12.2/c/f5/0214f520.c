
void FUN_0214f520(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *local_50;
  char *pcStack_48;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "GotoEventPlazaForCountdown";
  local_50 = puVar1;
  local_24 = param_2;
  FUN_021be8c0(&local_24,&local_50,0);
  pcStack_48 = "CountdownFieldNpc";
  local_50 = puVar1;
  FUN_021be8c0(&local_24,&local_50,0);
  pcStack_48 = "GotoCountdownBoard";
  local_50 = puVar1;
  FUN_021be8c0(&local_24,&local_50,0);
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 != param_1 + 0x70) {
    bVar2 = false;
    lVar3 = lVar5 + -0x10;
LAB_0214f5f4:
    do {
      if (*(int *)(lVar3 + 4) == 0xb) {
        uVar4 = 10;
LAB_0214f5d4:
        *(undefined4 *)(lVar3 + 4) = uVar4;
        if (*(long *)(param_1 + 0x1f0) == lVar3) {
          *(undefined4 *)(param_1 + 0x1fc) = uVar4;
          *(undefined8 *)(param_1 + 0x1f0) = 0;
          FUN_0214d220(param_1);
          bVar2 = true;
          *(undefined1 *)(param_1 + 0x236) = 1;
          lVar5 = *(long *)(lVar5 + 8);
          lVar3 = lVar5 + -0x10;
          if (lVar3 == param_1 + 0x60) goto LAB_0214f640;
          goto LAB_0214f5f4;
        }
      }
      else if (*(int *)(lVar3 + 4) == 0xd) {
        uVar4 = 0xc;
        goto LAB_0214f5d4;
      }
      lVar5 = *(long *)(lVar5 + 8);
      lVar3 = lVar5 + -0x10;
    } while (lVar3 != param_1 + 0x60);
    if (bVar2) {
LAB_0214f640:
      FUN_0214d690(param_1,param_2,1,0);
    }
  }
  return;
}

