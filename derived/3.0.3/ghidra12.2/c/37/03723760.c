
undefined8 FUN_03723760(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined *local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_7c [7];
  undefined1 local_75;
  undefined *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  
  local_55 = 0;
  local_60 = 8;
  local_5c[0] = 0;
  local_68 = local_5c;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  local_70 = puVar1;
  FUN_021d7aa0(&local_70);
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar6 = *(long **)(param_1 + 0xe8);
    plVar2 = plVar6 + *(int *)(param_1 + 0xe0);
    do {
      if (*(uint *)(*plVar6 + 0x3c) < 2) {
        local_80 = 8;
        local_75 = 0;
        local_7c[0] = 0;
        local_90 = puVar1;
        local_88 = local_7c;
        FUN_021d7aa0(&local_90,*plVar6 + 0x10);
        (**(code **)(local_70 + 0x18))(&local_70);
        (**(code **)(local_70 + 0x18))(&local_70);
        puVar3 = local_68;
        (**(code **)(local_90 + 0x18))(&local_90);
        if (puVar3 == local_88) {
          return 1;
        }
        uVar5 = 0;
        bVar4 = true;
        do {
          if (local_68[uVar5] != local_88[uVar5]) break;
          if (local_68[uVar5] == '\0') {
            if (bVar4) {
              return 1;
            }
            break;
          }
          if (local_68[uVar5 + 1] != local_88[uVar5 + 1]) break;
          if (local_68[uVar5 + 1] == '\0') {
            return 1;
          }
          if (local_68[uVar5 + 2] != local_88[uVar5 + 2]) break;
          if (local_68[uVar5 + 2] == '\0') {
            return 1;
          }
          bVar4 = uVar5 < 0x7fffe;
          uVar5 = uVar5 + 3;
        } while (uVar5 != 0x80001);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2);
  }
  return 0;
}

