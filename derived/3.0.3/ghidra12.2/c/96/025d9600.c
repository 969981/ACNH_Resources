
void FUN_025d9600(long param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_70;
  char *local_68;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    iVar4 = *(int *)(param_2 + 8);
    if (0 < iVar4) {
      uVar7 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      lVar3 = param_2 + 0xc;
      do {
        if ((uVar7 < *(uint *)(param_1 + 0x30)) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + uVar7 * 8), lVar6 != 0)) {
          lVar5 = lVar3;
          if (0x27 < uVar7) {
            lVar5 = param_2 + 0xc;
          }
          local_68 = "Item";
          local_70 = puVar1;
          FUN_0277d6c4(lVar5);
          pcVar2 = (char *)(lVar6 + 8);
          lVar6 = nn::prepo::Struct::GetBuffer();
          if (lVar6 != 0) {
            (**(code **)(local_70 + 0x18))(&local_70);
            nn::prepo::Struct::Add(pcVar2,(long)local_68);
          }
          local_70 = PTR_DAT_04bb2020 + 0x10;
          local_68 = "Num";
          lVar6 = nn::prepo::Struct::GetBuffer();
          if (lVar6 != 0) {
            (**(code **)(local_70 + 0x18))(&local_70);
            nn::prepo::Struct::Add(pcVar2,(long)local_68);
          }
          lVar5 = *(long *)(param_1 + 0x28);
          lVar6 = nn::prepo::Array::GetBuffer();
          if (lVar6 != 0) {
            nn::prepo::Array::Add((Struct *)(lVar5 + 8));
          }
          iVar4 = *(int *)(param_2 + 8);
        }
        uVar7 = uVar7 + 1;
        lVar3 = lVar3 + 8;
      } while ((long)uVar7 < (long)iVar4);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "SellInfo";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_70,lVar3);
    }
  }
  return;
}

