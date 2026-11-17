
bool FUN_02e9a060(long param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined4 local_84;
  undefined **local_80;
  undefined4 *puStack_78;
  undefined1 auStack_48 [8];
  
  local_7f8 = PTR_DAT_04bbfe60 + 0x10;
  local_84 = param_2;
  uVar3 = nn::os::GetSystemTick();
  local_9c = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  memcpy(auStack_7f0,(void *)(param_1 + 8),0x754);
  puStack_78 = &local_84;
  local_80 = &PTR_FUN_049ff8a8;
  uVar3 = 0;
  do {
    (**(code **)(local_7f8 + 0x10))(auStack_48,&local_7f8,uVar3);
    lVar5 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
    lVar8 = DAT_053274a0;
    uVar1 = 1 << (ulong)(uVar3 & 0x1f);
    if ((*(uint *)(lVar5 + (ulong)(uVar3 >> 5) * 4) & uVar1) != 0) {
      uVar4 = FUN_0277d6c4(auStack_48);
      if (DAT_053274a0 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
           (uVar6 = (*(code *)*local_80)(&local_80,auStack_48), (uVar6 & 1) != 0))
        goto LAB_02e9a150;
      }
      lVar8 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
      lVar5 = (ulong)(uVar3 >> 5) * 4;
      *(uint *)(lVar8 + lVar5) = *(uint *)(lVar8 + lVar5) & (uVar1 ^ 0xffffffff);
    }
LAB_02e9a150:
    uVar3 = uVar3 + 1;
  } while (uVar3 != 15000);
  piVar7 = (int *)(**(code **)(local_7f8 + 0x20))(&local_7f8);
  if (*piVar7 == 0) {
    uVar6 = 0;
    do {
      uVar9 = uVar6;
      if ((uVar9 == 0x1d4) || (piVar7[uVar9 + 1] != 0)) goto LAB_02e9a238;
      uVar6 = uVar9 + 2;
    } while (piVar7[uVar9 + 2] == 0);
    uVar9 = uVar9 + 1;
LAB_02e9a238:
    bVar2 = uVar9 < 0x1d4;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

