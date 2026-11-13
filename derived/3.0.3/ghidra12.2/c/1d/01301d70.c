
void FUN_01301d70(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *local_68;
  int local_60;
  int local_5c;
  undefined4 local_54;
  
  puVar8 = PTR_DAT_04bbc288;
  local_68 = PTR_DAT_04bb2018 + 0x10;
  lVar3 = param_1 + 200 + (ulong)*(uint *)(param_1 + 8) * 0x930;
  if (1 < *(uint *)(param_1 + 8)) {
    lVar3 = param_1 + 200;
  }
  iVar1 = *(int *)(param_1 + 0x34) + 1;
  iVar5 = *(int *)(param_1 + 0x20);
  local_5c = *(int *)(param_1 + 0x24);
  if (iVar1 != local_5c) {
    lVar2 = param_1 + 0x1328;
    local_60 = iVar5;
    do {
      local_54 = 0;
      lVar4 = lVar2 + (ulong)*(uint *)(param_1 + 8) * 0x28;
      if (1 < *(uint *)(param_1 + 8)) {
        lVar4 = lVar2;
      }
      iVar6 = *(int *)(lVar4 + 0x20);
      if (local_60 < iVar6 || iVar6 + 3 < local_60) {
LAB_01301ed4:
        FUN_01302290(lVar3,puVar8,1,&local_68);
LAB_01301ee8:
        FUN_01302290(lVar3,puVar8,2,&local_68);
      }
      else {
        iVar7 = *(int *)(lVar4 + 0x24);
        if (((local_5c < iVar7 || iVar7 + 3 < local_5c) ||
            (2 < (uint)(local_60 - iVar6) || 2 < (uint)(local_5c - iVar7))) ||
           ((*(uint *)(lVar4 + 0x10) >> (ulong)((local_5c - iVar7) * 3 + (local_60 - iVar6) & 0x1f)
            & 1) == 0)) goto LAB_01301ed4;
        local_54 = 0;
        lVar4 = lVar2 + (ulong)*(uint *)(param_1 + 8) * 0x28;
        if (1 < *(uint *)(param_1 + 8)) {
          lVar4 = lVar2;
        }
        iVar6 = *(int *)(lVar4 + 0x20);
        if ((iVar6 <= local_60) && (local_60 <= iVar6 + 3)) {
          iVar7 = *(int *)(lVar4 + 0x24);
          if ((((local_5c < iVar7) || ((iVar7 + 3 < local_5c || (2 < (uint)(local_60 - iVar6))))) ||
              (2 < (uint)(local_5c - iVar7))) ||
             ((*(uint *)(lVar4 + 0x10) >>
               (ulong)((local_5c - iVar7) * 3 + (local_60 - iVar6) & 0x1f) & 1) == 0))
          goto LAB_01301f04;
          goto LAB_01301ee8;
        }
      }
LAB_01301f04:
      if (local_60 < *(int *)(param_1 + 0x30)) {
        local_60 = local_60 + 1;
      }
      else {
        local_5c = local_5c + 1;
        local_60 = *(int *)(param_1 + 0x20);
      }
    } while ((iVar5 != local_60) || (iVar1 != local_5c));
  }
  return;
}

