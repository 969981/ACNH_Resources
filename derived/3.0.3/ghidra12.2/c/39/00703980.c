
void FUN_00703980(long param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 0x60);
  if (lVar8 != 0) {
    psVar1 = (short *)(param_1 + 0x288);
    local_65 = 0;
    local_84[0] = 0;
    local_88 = 0x20;
    psVar4 = (short *)(param_1 + 0x280);
    if (*(short *)(param_1 + 0x288) != 0) {
      psVar4 = psVar1;
    }
    puStack_90 = local_84;
    bVar5 = *(byte *)(psVar4 + 2);
    puVar2 = PTR_DAT_04bb2028 + 0x10;
    local_98 = puVar2;
    (**(code **)(DAT_04c8aa38 + 0x18))(&DAT_04c8aa38);
    FUN_038d1270(&local_98,DAT_04c8aa40,bVar5 / 10);
    lVar6 = *(long *)(*(long *)(lVar8 + 0x48) + 0x78);
    if (lVar6 == 0 || **(char **)(lVar8 + 0x280) == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0074f690(lVar6,lVar8 + 0x278);
    }
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_a0 = s_Number_0_Clock_048fe000;
    local_a8 = puVar3;
    FUN_0161049c(param_1 + 0x290,0,uVar7,&local_98,&local_a8);
    local_65 = 0;
    local_88 = 0x20;
    local_84[0] = 0;
    psVar4 = (short *)(param_1 + 0x280);
    if (*psVar1 != 0) {
      psVar4 = psVar1;
    }
    bVar5 = *(byte *)(psVar4 + 2);
    puStack_90 = local_84;
    local_98 = puVar2;
    (**(code **)(DAT_04c8aa38 + 0x18))(&DAT_04c8aa38);
    FUN_038d1270(&local_98,DAT_04c8aa40,(uint)bVar5 % 10);
    uVar7 = 0;
    lVar6 = *(long *)(*(long *)(lVar8 + 0x48) + 0x78);
    if ((lVar6 != 0) && (**(char **)(lVar8 + 0x280) != '\0')) {
      uVar7 = FUN_0074f690(lVar6,lVar8 + 0x278,0);
    }
    pcStack_a0 = s_Number_1_Clock_048fe010;
    local_a8 = puVar3;
    FUN_0161049c(param_1 + 0x290,0,uVar7,&local_98,&local_a8);
  }
  return;
}

