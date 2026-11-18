
void FUN_032c7160(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  byte *__s;
  long lVar11;
  undefined *local_58;
  byte *pbStack_50;
  undefined *local_48;
  undefined8 uStack_40;
  undefined1 local_38 [4];
  int local_34;
  
  __s = *(byte **)(param_3 + 8);
  sVar5 = strlen((char *)__s);
  uVar4 = (uint)sVar5;
  if (uVar4 == 0) {
    uVar8 = 0;
    lVar11 = *(long *)(param_1 + 0x20);
  }
  else {
    uVar6 = uVar4 & 3;
    pbVar9 = __s;
    if (uVar4 < 4) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar4 = uVar4 & 0xfffffffc;
      uVar8 = 0xffffffff;
      do {
        uVar4 = uVar4 - 4;
        uVar3 = crc32b(uVar8,(uint)*pbVar9,0x4c11db7);
        uVar3 = crc32b(uVar3,(uint)pbVar9[1],0x4c11db7);
        uVar3 = crc32b(uVar3,(uint)pbVar9[2],0x4c11db7);
        pbVar1 = pbVar9 + 3;
        pbVar9 = pbVar9 + 4;
        uVar8 = crc32b(uVar3,(uint)*pbVar1,0x4c11db7);
      } while (uVar4 != 0);
    }
    if ((sVar5 & 3) != 0) {
      do {
        uVar6 = uVar6 - 1;
        uVar8 = crc32b(uVar8,(uint)*pbVar9,0x4c11db7);
        pbVar9 = pbVar9 + 1;
      } while (uVar6 != 0);
    }
    uVar8 = ~uVar8;
    lVar11 = *(long *)(param_1 + 0x20);
  }
  for (; (lVar11 != 0 && (*(uint *)(lVar11 + 0x68) != uVar8)); lVar11 = *(long *)(lVar11 + 0x10)) {
  }
  lVar7 = lVar11;
  do {
    plVar2 = (long *)(lVar7 + 0x28);
    lVar7 = *(long *)(lVar7 + 0x18);
  } while (lVar7 != 0 && *plVar2 == 0);
  if (*plVar2 != 0) {
    return;
  }
  local_34 = 0;
  local_38[0] = 0;
  uStack_40 = *(undefined8 *)(param_2 + 8);
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pbStack_50 = __s;
  local_48 = local_58;
  FUN_032ca830(*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x580),&local_34,local_38,&local_48,
               &local_58);
  if (local_34 == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 == 0) {
    return;
  }
  lVar10 = lVar7;
  while (*(int *)(lVar10 + 0x68) != local_34) {
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      return;
    }
  }
  do {
    if (*(int *)(lVar7 + 0x68) == local_34) break;
    lVar7 = *(long *)(lVar7 + 0x10);
  } while (lVar7 != 0);
  lVar10 = lVar7;
  do {
    plVar2 = (long *)(lVar10 + 0x28);
    lVar10 = *(long *)(lVar10 + 0x18);
  } while (lVar10 != 0 && *plVar2 == 0);
  if (*plVar2 != 0) {
    *(long *)(lVar11 + 0x18) = lVar7;
    *(undefined1 *)(lVar11 + 0x20) = local_38[0];
  }
  return;
}

