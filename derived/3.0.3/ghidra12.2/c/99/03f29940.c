
bool FUN_03f29940(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined **local_78;
  byte *local_70;
  int local_68;
  byte local_64 [31];
  undefined1 local_45;
  
  if ((*(uint *)(param_1 + 0x38) & 1) == 0) {
    bVar3 = false;
  }
  else {
    local_68 = 0x20;
    local_45 = 0;
    local_78 = &PTR_LAB_048fa8f8;
    local_70 = local_64;
    (**(code **)(*param_2 + 0x18))(param_2);
    pbVar7 = (byte *)param_2[1];
    if (local_64 != pbVar7) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = 0;
      do {
        if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_03f29a18;
        lVar1 = param_2[1] + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_03f29a18;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_03f29a18;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_03f29a18:
      iVar4 = (int)lVar5;
      if (local_68 <= (int)lVar5) {
        iVar4 = local_68 + -1;
      }
      memcpy(local_64,pbVar7,(long)iVar4);
      local_64[iVar4] = 0;
    }
    puVar2 = PTR_DAT_04bb2028;
    lVar5 = 0;
    local_78 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
    local_70[(long)local_68 + -1] = 0;
    do {
      if (local_70[lVar5] == 0) {
LAB_03f29aa0:
        iVar4 = (int)lVar5;
joined_r0x03f29aa4:
        pbVar7 = local_70;
        if (0 < iVar4) {
          do {
            if (*pbVar7 - 0x41 < 0x1a) {
              *pbVar7 = "abcdefghijklmnopqrstuvwxyz"[(ulong)(*pbVar7 - 0x41) & 0xff];
            }
            lVar5 = lVar5 + -1;
            pbVar7 = pbVar7 + 1;
          } while (lVar5 != 0);
        }
        break;
      }
      if (local_70[lVar5 + 1] == 0) {
        lVar5 = lVar5 + 1;
        goto LAB_03f29aa0;
      }
      if (local_70[lVar5 + 2] == 0) {
        lVar5 = lVar5 + 2;
        iVar4 = (int)lVar5;
        goto joined_r0x03f29aa4;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    pcVar6 = *(char **)(param_1 + 0x30);
    (**(code **)(puVar2 + 0x28))(&local_78);
    iVar4 = nn::prepo::PlayReport::SetEventId(pcVar6);
    bVar3 = iVar4 == 0;
  }
  return bVar3;
}

