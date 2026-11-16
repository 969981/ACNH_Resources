
void FUN_025af9f0(long param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *local_70;
  char *local_68;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    puVar7 = PTR_DAT_04bb2020;
    if (0 < *(int *)(param_2 + 0x78)) {
      lVar5 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        local_68 = "NoWindow";
        pcVar2 = (char *)(*(long *)(*(long *)(param_1 + 0x38) + lVar5 * 8) + 8);
        local_70 = puVar1;
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          puVar7 = &DAT_048f9760;
          nn::prepo::Struct::Add(pcVar2,SUB81(local_68,0));
        }
        puVar3 = puVar7 + 0x10;
        local_68 = "NoDefaultLanding";
        local_70 = puVar3;
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          puVar7 = &DAT_048f9760;
          nn::prepo::Struct::Add(pcVar2,SUB81(local_68,0));
        }
        local_68 = "LandingUID";
        local_70 = puVar3;
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          nn::prepo::Struct::Add(pcVar2,(long)local_68);
        }
        local_68 = "UseDimming";
        local_70 = puVar7 + 0x10;
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          nn::prepo::Struct::Add(pcVar2,SUB81(local_68,0));
        }
        local_68 = "UseAccentWall";
        local_70 = puVar7 + 0x10;
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          nn::prepo::Struct::Add(pcVar2,SUB81(local_68,0));
        }
        local_68 = "IsEnableAmbient";
        local_70 = puVar7 + 0x10;
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          nn::prepo::Struct::Add(pcVar2,SUB81(local_68,0));
        }
        local_68 = "AmbientUID";
        local_70 = puVar7 + 0x10;
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          nn::prepo::Struct::Add(pcVar2,(long)local_68);
        }
        local_68 = "HasFtrWall";
        local_70 = puVar7 + 0x10;
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          nn::prepo::Struct::Add(pcVar2,SUB81(local_68,0));
        }
        local_68 = "HasCounter";
        local_70 = puVar7 + 0x10;
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          nn::prepo::Struct::Add(pcVar2,SUB81(local_68,0));
        }
        local_68 = "HasPillar";
        local_70 = puVar7 + 0x10;
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          nn::prepo::Struct::Add(pcVar2,SUB81(local_68,0));
        }
        local_68 = "HasFtrCeiling";
        local_70 = puVar7 + 0x10;
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          nn::prepo::Struct::Add(pcVar2,SUB81(local_68,0));
        }
        local_70 = puVar7 + 0x10;
        local_68 = "ExtraEffectCnt";
        lVar4 = nn::prepo::Struct::GetBuffer();
        if (lVar4 != 0) {
          (**(code **)(local_70 + 0x18))(&local_70);
          nn::prepo::Struct::Add(pcVar2,(long)local_68);
        }
        lVar6 = *(long *)(param_1 + 0x28);
        lVar4 = nn::prepo::Array::GetBuffer();
        if (lVar4 != 0) {
          nn::prepo::Array::Add((Struct *)(lVar6 + 8));
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_2 + 0x78));
      lVar5 = *(long *)(param_1 + 0x28);
    }
    local_70 = puVar7 + 0x10;
    local_68 = "RoomArray";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_70,lVar5);
    }
  }
  return;
}

