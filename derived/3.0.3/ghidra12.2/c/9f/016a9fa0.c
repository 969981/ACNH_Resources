
void FUN_016a9fa0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined *local_90;
  char *pcStack_88;
  uint local_7c;
  int local_78;
  uint local_74;
  undefined *local_70;
  char *pcStack_68;
  
  puVar2 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "HotelIsCompletedEditTutorialAnyone";
  uVar5 = FUN_0273f0a0(&local_70);
  puVar3 = PTR_DAT_04bb46b0;
  if ((((uVar5 & 1) != 0) && (*(long *)PTR_DAT_04bb46b0 != 0)) &&
     (FUN_02705554(&local_78,0,1), local_74 != 8)) {
    uVar8 = local_74;
    do {
      if (uVar8 < 8) {
        lVar6 = *(long *)puVar3;
        if (lVar6 == 0) {
          return;
        }
        local_7c = uVar8;
        lVar6 = FUN_026eec4c(lVar6,uVar8);
        if (lVar6 != 0) {
          pcStack_68 = "SeqHotelIntroductionDone";
          local_70 = puVar2 + 0x10;
          iVar4 = FUN_0274ce10(&local_7c,&local_70);
          if (iVar4 != 0) {
            puVar1 = puVar2 + 0x10;
            pcStack_88 = "SeqHotelMannequinTutorialDone";
            local_90 = puVar1;
            iVar4 = FUN_0274ce10(&local_7c,&local_90);
            if (iVar4 == 0) {
              pcStack_68 = "ReserveHotelMannequinTutorial";
              local_70 = puVar1;
              FUN_0274d104(&local_7c,&local_70,1);
            }
          }
        }
        lVar6 = *(long *)puVar3;
        if (lVar6 == 0) {
          return;
        }
        (**(code **)(*(long *)**(undefined8 **)(lVar6 + 0x10) + 0x18))();
        if ((local_78 == 0) && ((*(byte *)(lVar6 + 0x453) & 1) != 0)) {
          lVar6 = (**(code **)(**(long **)(*(long *)(lVar6 + 0x10) + 0x130) + 0x18))();
        }
        else {
          lVar6 = (**(code **)(*(long *)**(undefined8 **)(lVar6 + 0x10) + 0x18))();
          lVar6 = lVar6 + 0x110;
        }
        if (uVar8 == 7) {
          return;
        }
        uVar5 = (ulong)uVar8;
        plVar7 = (long *)(lVar6 + (ulong)uVar8 * 0x48 + 0x1e3400);
        while ((6 < uVar5 || (plVar7[-1] == 0 && *plVar7 == 0))) {
          uVar5 = uVar5 + 1;
          plVar7 = plVar7 + 9;
          if (uVar5 == 7) {
            return;
          }
        }
        uVar8 = (int)uVar5 + 1;
      }
    } while (uVar8 != 8);
  }
  return;
}

